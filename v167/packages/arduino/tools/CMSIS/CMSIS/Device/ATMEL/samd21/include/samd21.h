/* ----------------------------------------------------------------------------
 *         SAM Software Package License
 * ----------------------------------------------------------------------------
 * Copyright (c) 2014, Atmel Corporation
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following condition is met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 */
#ifndef _SAMD21_
#define _SAMD21_

#if defined (__SAMD21E14A__)
#include "samd21e14a.h"
#elif defined (__SAMD21E15A__)
#include "samd21e15a.h"
#elif defined (__SAMD21E15L__)
#include "samd21e15l.h"
#elif defined (__SAMD21E16A__)
#include "samd21e16a.h"
#elif defined (__SAMD21E16L__)
#include "samd21e16l.h"
#elif defined (__SAMD21E17A__)
#include "samd21e17a.h"
#elif defined (__SAMD21E18A__)
#include "samd21e18a.h"
#elif defined (__SAMD21G14A__)
#include "samd21g14a.h"
#elif defined (__SAMD21G15A__)
#include "samd21g15a.h"
#elif defined (__SAMD21G16A__)
#include "samd21g16a.h"
#elif defined (__SAMD21G17A__)
#include "samd21g17a.h"
#elif defined (__SAMD21G18A__)
#include "samd21g18a.h"
#elif defined (__SAMD21J14A__)
#include "samd21j14a.h"
#elif defined (__SAMD21J15A__)
#include "samd21j15a.h"
#elif defined (__SAMD21J16A__)
#include "samd21j16a.h"
#elif defined (__SAMD21J17A__)
#include "samd21j17a.h"
#elif defined (__SAMD21J18A__)
#include "samd21j18a.h"
#else
  #error Library does not support the specified device.
#endif

#endif /* _SAMD21_ */
