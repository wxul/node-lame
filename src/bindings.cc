/*
 * Copyright (c) 2011, Nathan Rajlich <nathan@tootallnate.net>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include <v8.h>
#include <node.h>
#include "nan.h"

using namespace v8;
using namespace node;

namespace nodelame {

  void InitLame(v8::Local<v8::Object> exports);
  void InitMPG123(v8::Local<v8::Object> exports);

  void Initialize(v8::Local<v8::Object> exports) {
    Nan::HandleScope scope;

    InitLame(exports);
    InitMPG123(exports);
  }

} // nodelame namespace

NODE_MODULE(bindings, nodelame::Initialize);
