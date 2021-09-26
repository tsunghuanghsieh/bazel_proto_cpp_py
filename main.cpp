

#include <stdio.h>
#include <string.h>
#include <iostream>
#include "evaluator.pb.h"

using namespace std;

int main(int argc, char** argv) {
    zonghuan::evaluator::EvaluatorConfig evaluator;
    const google::protobuf::OneofDescriptor *oneofDescriptor = evaluator.GetDescriptor()->FindOneofByName("config");

    for (int i = 0; i < oneofDescriptor->field_count(); i++) {
        cout << oneofDescriptor->field(i)->message_type()->name() << endl;
    }

    return 0;
}