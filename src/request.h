#ifndef __nj_vi
#define __nj_vi

#include <node.h>
#include <v8.h>
#include "Types.h"
#include "Expr.h"
#include "JuliaExecEnv.h"

std::shared_ptr<nj::Value> createRequest(const v8::Local<v8::Value> &value) throw(nj::InvalidException);

#endif
