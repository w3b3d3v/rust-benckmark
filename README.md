# Rust Benchmark

## Performance Benchmark

to run the performance benchmark:

```
cd sum
./bench.sh
```

Results on Mac M3:
```
Compiling C...
Compiling Rust...
Running C...
Average User Time: .206000 seconds
Running Rust...
Average User Time: .500000 seconds
Running Python...
Average User Time: 6.923000 seconds
```

## Type Safety comparison

```bash
cd type-safety
gcc ts.c
rustc ts.rs

./a.out
./ts

