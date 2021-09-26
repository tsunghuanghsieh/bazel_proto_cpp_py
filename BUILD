load("@rules_proto//proto:defs.bzl", "proto_library")
load("@rules_python//python:defs.bzl", "py_binary")

load("@com_google_protobuf//:protobuf.bzl", "py_proto_library")

#
# C++
#
cc_binary(
    name = "main",
    srcs = [
        "main.cpp",
    ],
    deps = [
        ":evaluator_clib",
    ]
)

cc_proto_library(
    name = "evaluator_clib",
    deps = [
        ":evaluator_proto"
    ]
)

proto_library(
    name = "evaluator_proto",
    srcs = [
        "evaluator.proto",
    ]
)

#
# Python
#
py_binary(
    name = "driver",
    srcs = [
        "driver.py",
    ],
    deps = [
        "@com_google_protobuf//:protobuf_python",
        ":evaluator_py_proto",
    ]
)

py_proto_library(
    name = "evaluator_py_proto",
    srcs = [
        "evaluator.proto",
    ],
    deps = [
        "@com_google_protobuf//:protobuf_python"
    ],
    visibility = ["//visibility:public"],
)

