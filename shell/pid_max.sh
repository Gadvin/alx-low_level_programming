#!/bin/bash

pid_maximum=$(cat /proc/sys/kernel/pid_max)

echo "Maximum PID Value: $pid_maximum"
