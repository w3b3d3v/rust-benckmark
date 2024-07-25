fn sum_large_array() -> i64 {
    let arr: Vec<i64> = (1..=500_000_000).collect();
    arr.iter().sum()
}

fn main() {
    let sum = sum_large_array();
    println!("Sum: {}", sum);
}

