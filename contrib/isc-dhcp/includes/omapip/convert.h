/* convert.h

   Safe copying of integers into and out of a non-aligned memory buffer. */

/*
 * Copyright (c) 1996-1999 Internet Software Consortium.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of The Internet Software Consortium nor the names
 *    of its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE INTERNET SOFTWARE CONSORTIUM AND
 * CONTRIBUTORS ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THE INTERNET SOFTWARE CONSORTIUM OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * This software has been written for the Internet Software Consortium
 * by Ted Lemon in cooperation with Vixie Enterprises and Nominum, Inc.
 * To learn more about the Internet Software Consortium, see
 * ``http://www.isc.org/''.  To learn more about Vixie Enterprises,
 * see ``http://www.vix.com''.   To learn more about Nominum, Inc., see
 * ``http://www.nominum.com''.
 */

#ifndef OMAPI_CONVERT_H
#define OMAPI_CONVERT_H

u_int32_t getULong (const unsigned char *);
int32_t getLong (const unsigned char *);
u_int32_t getUShort (const unsigned char *);
int32_t getShort (const unsigned char *);
u_int32_t getUChar (const unsigned char *);
void putULong (unsigned char *, u_int32_t);
void putLong (unsigned char *, int32_t);
void putUShort (unsigned char *, u_int32_t);
void putShort (unsigned char *, int32_t);
void putUChar (unsigned char *, u_int32_t);
int converted_length (const unsigned char *, unsigned int, unsigned int);
int binary_to_ascii (unsigned char *, const unsigned char *,
		     unsigned int, unsigned int);

#endif /* OMAPI_CONVERT_H */
