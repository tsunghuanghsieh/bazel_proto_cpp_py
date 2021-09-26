# Python/C++ read protobuf

This is a POC to set up bazel build for protobuf and python/C++, and also to get the evaluator type (class name) in protobuf.

## Requirement
Install bazel

## Build from root of repo
Build python

`bazel build :driver`

Build C++

`bazel build :main`

## Run from root of repo
Run python binary

`./bazel-bin/driver`

Run C++ binary

`./bazel-bin/main`

## Note
This is developed and tested on MBP. It _should_ work as is on Ubuntu.