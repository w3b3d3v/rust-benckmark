def sum_large_array():
    arr = list(range(1, 500_000_001))
    return sum(arr)

if __name__ == "__main__":
    sum = sum_large_array()
    print(f"Sum: {sum}")

