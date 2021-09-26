workspace(name = "com_zonghuan_proto_library")

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# http_archive(
#     name = "rules_proto",
#     sha256 = "8e7d59a5b12b233be5652e3d29f42fba01c7cbab09f6b3a8d0a57ed6d1e9a0da",
#     strip_prefix = "rules_proto-7e4afce6fe62dbff0a4a03450143146f9f2d7488",
#     urls = [
#         "https://mirror.bazel.build/github.com/bazelbuild/rules_proto/archive/7e4afce6fe62dbff0a4a03450143146f9f2d7488.tar.gz",
#         "https://github.com/bazelbuild/rules_proto/archive/7e4afce6fe62dbff0a4a03450143146f9f2d7488.tar.gz",
#     ],
# )
# load("@rules_proto//proto:repositories.bzl", "rules_proto_dependencies", "rules_proto_toolchains")
# rules_proto_dependencies()
# rules_proto_toolchains()

#
# Protobuf
#
git_repository(
    name = "com_google_protobuf",
    remote = "https://github.com/protocolbuffers/protobuf",
    tag = "v3.10.0",
)
load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")
protobuf_deps()

#
# Python
#
http_archive(
    name = "rules_python",
    url = "https://github.com/bazelbuild/rules_python/releases/download/0.4.0/rules_python-0.4.0.tar.gz",
    sha256 = "954aa89b491be4a083304a2cb838019c8b8c3720a7abb9c4cb81ac7a24230cea",
)
