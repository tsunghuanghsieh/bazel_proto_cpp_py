#!/usr/bin/python3

import os

import evaluator_pb2

evaluator = evaluator_pb2.EvaluatorConfig()
for eval in evaluator.DESCRIPTOR.oneofs_by_name["config"].fields:
    print(evaluator.DESCRIPTOR.fields_by_name[eval.name].message_type.name)
