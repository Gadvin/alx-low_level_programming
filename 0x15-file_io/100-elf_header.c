#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <fcntl.h>
#include <string.h>

/* ELF header structure */
typedef struct {
    unsigned char e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} ElfHeader;

/* Function to display ELF header information*/
void displayElfHeaderInfo(const ElfHeader *header) {
    printf("Magic: ");
    for (int i = 0; i < 16; i++) {
        printf("%02x", header->e_ident[i]);
    }
    printf("\n");

    printf("Class:                              ");
    switch (header->e_ident[4]) {
        case 1: printf("ELF32\n"); break;
        case 2: printf("ELF64\n"); break;
        default: printf("Invalid ELF class\n"); break;
    }

    printf("Data:                               ");
    switch (header->e_ident[5]) {
        case 1: printf("2's complement, little endian\n"); break;
        case 2: printf("2's complement, big endian\n"); break;
        default: printf("Invalid data encoding\n"); break;
    }

    printf("Version:                            %u (current)\n", header->e_ident[6]);

    printf("OS/ABI:                             ");
    switch (header->e_ident[7]) {
        case 0: printf("UNIX - System V\n"); break;
        case 3: printf("UNIX - GNU\n"); break;
        default: printf("Other\n"); break;
    }

    printf("ABI Version:                        %u\n", header->e_ident[8]);

    printf("Type:                               ");
    switch (header->e_type) {
        case 0: printf("No file type\n"); break;
        case 1: printf("Relocatable file\n"); break;
        case 2: printf("Executable file\n"); break;
        case 3: printf("Shared object file\n"); break;
        case 4: printf("Core file\n"); break;
        default: printf("Unknown\n"); break;
    }

    printf("Entry point address:                0x%llx\n", (unsigned long long)header->e_entry);

    printf("There are no program headers in this file.\n");

    printf("There are %hu section headers, starting at offset 0x%llx:\n",
           header->e_shnum, (unsigned long long)header->e_shoff);

    printf("Section Headers:\n");
    printf("  [Nr] Name              Type            Address          Off    Size   ES Flg Lk Inf Al\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    /* Open the ELF file*/
    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 98;
    }

    /* Read the ELF header*/
    ElfHeader elfHeader;
    if (read(fd, &elfHeader, sizeof(ElfHeader)) != sizeof(ElfHeader)) {
        fprintf(stderr, "Error reading ELF header\n");
        close(fd);
        return 98;
    }

    /* Verify that it's an ELF file*/
    if (strncmp((char *)elfHeader.e_ident, "\x7f""ELF", 4) != 0) {
        fprintf(stderr, "Not an ELF file\n");
        close(fd);
        return 98;
    }

    /* Display ELF header information*/
    displayElfHeaderInfo(&elfHeader);

    /* Close the file*/
    close(fd);

    return 0;
}

