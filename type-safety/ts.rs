fn main() {
    let arr = [1, 2, 3, 4, 5];
    let mut sum = 0;

    // Accessing out-of-bounds index
    for i in 0..=7 {  // Incorrectly using ..= instead of ..
        sum += arr[i];
    }

    println!("Sum: {}", sum);  // This will panic at runtime due to out-of-bounds access
}

