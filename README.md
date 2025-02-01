# std::vector<bool> Optimization Issues

This repository demonstrates the unexpected behavior and performance issues that can arise from using `std::vector<bool>` in C++.  `std::vector<bool>` is often optimized to use a bitset for space efficiency, but this optimization can lead to inconsistencies with the standard vector interface, affecting performance and iterator behavior.

## The Problem

The primary issue stems from the fact that `std::vector<bool>` does not store each boolean value as a single byte. This space optimization impacts access time and iterator functionality.

- **Slower element access:** Accessing elements using the `[]` operator is significantly slower than with other vector types.
- **Iterator limitations:** Iterators for `std::vector<bool>` do not fully adhere to random-access iterator requirements, potentially causing incompatibility with algorithms that expect random access.

## Solution

To avoid these problems, consider using `std::vector<char>` or `std::vector<uint8_t>` to represent boolean values. This provides the standard vector functionality without the performance trade-offs of bitset-based optimization.