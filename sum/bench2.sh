#!/bin/bash

# Check if the program name is provided
if [ -z "$1" ]; then
  echo "Usage: $0 <program_name>"
  exit 1
fi

# The program to be benchmarked
program_name=$1

# Variable to store the total user time
total_user_time=0

# Number of iterations
iterations=10

# Loop to run the benchmark 10 times
for i in $(seq 1 $iterations); do
  # Run the command and capture the user time
  user_time=$(/usr/bin/time -p $program_name 2>&1 | grep 'user' | awk '{print $2}')
  # Add the user time to the total
  total_user_time=$(echo "$total_user_time + $user_time" | bc)
done

# Calculate the average user time
average_user_time=$(echo "scale=6; $total_user_time / $iterations" | bc)

# Print the average user time
echo "Average User Time: $average_user_time seconds"

