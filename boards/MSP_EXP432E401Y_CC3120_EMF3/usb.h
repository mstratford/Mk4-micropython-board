/*
 * This file is part of the Micro Python project, http://micropython.org/
 * And the Electromagnetic Field: TiLDA Mk4 Badge
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Electromagnetic Field Badge Team Authors
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef __USB_H
#define __USB_H


#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>


/*!
 *  ======== USB_Comp_init ========
 *  Function to initialize the USB.
 *
 *  Note: This function is not reentrant safe.
 */
extern void USB_Comp_init();

/*!
 *  ======== USB_waitForConnect ========
 *  This function blocks while the USB is not connected
 */
extern bool USB_waitForConnect(unsigned int timeout);

#ifdef __cplusplus
}
#endif

#endif /* __USB_H */