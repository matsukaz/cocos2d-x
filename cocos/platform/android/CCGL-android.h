/****************************************************************************
Copyright (c) 2010-2012 cocos2d-x.org
Copyright (c) 2013-2014 Chukong Technologies Inc.

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#ifndef __CCGL_H__
#define __CCGL_H__

#include "platform/CCPlatformConfig.h"
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID

#define glClearDepth                glClearDepthf
#define GL_WRITE_ONLY               GL_WRITE_ONLY_OES

#define glDeleteVertexArraysOES        glDeleteVertexArrays
#define glGenVertexArraysOES           glGenVertexArrays
#define glBindVertexArrayOES           glBindVertexArray
#define GL_DEPTH24_STENCIL8_OES        GL_DEPTH24_STENCIL8

#define GL_TEXTURE_COMPARE_FUNC_EXT    GL_TEXTURE_COMPARE_FUNC
#define GL_TEXTURE_COMPARE_MODE_EXT    GL_TEXTURE_COMPARE_MODE
#define GL_COMPARE_REF_TO_TEXTURE_EXT  GL_COMPARE_REF_TO_TEXTURE
#define glDrawElementsInstancedEXT     glDrawElementsInstanced
#define glVertexAttribDivisorEXT       glVertexAttribDivisor
#define GL_DEPTH_COMPONENT24_OES       GL_DEPTH_COMPONENT24


// GL_GLEXT_PROTOTYPES isn't defined in glplatform.h on android ndk r7 
// we manually define it here

// normal process
#include <GLES3/gl3.h>
// android defines GL_BGRA_EXT but not GL_BRGA
#ifndef GL_BGRA
#define GL_BGRA  0x80E1
#endif

#endif // CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID

#endif // __CCGL_H__
