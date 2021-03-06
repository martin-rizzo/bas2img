/**
 * @file       rows.h
 * @date       Feb 22, 2020
 * @author     Martin Rizzo | <martinrizzo@gmail.com>
 * @copyright  Copyright (c) 2020 Martin Rizzo.
 *             This project is released under the MIT License.
 * -------------------------------------------------------------------------
 *  BAS2IMG - The "source code to image" converter for BASIC language
 * -------------------------------------------------------------------------
 *  Copyright (c) 2020 Martin Rizzo
 *
 *  Permission is hereby granted, free of charge, to any person obtaining
 *  a copy of this software and associated documentation files (the
 *  "Software"), to deal in the Software without restriction, including
 *  without limitation the rights to use, copy, modify, merge, publish,
 *  distribute, sublicense, and/or sell copies of the Software, and to
 *  permit persons to whom the Software is furnished to do so, subject to
 *  the following conditions:
 *
 *  The above copyright notice and this permission notice shall be
 *  included in all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 *  CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 *  TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 *  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * -------------------------------------------------------------------------
 */
#ifndef bas2img_rows_h
#define bas2img_rows_h
#include "globals.h"


typedef struct SingleRow {
    int     length;
    Bool    isEndOfLine;
    Char256 chars[1];
} SingleRow;

/** A pointer to a SingleRow structure */
typedef SingleRow    *SingleRowPtr;

typedef SingleRowPtr *Rows;



Rows allocRowsFromBasicBuffer(const Byte *basicBuffer,
                              long        basicBufferSize,
                              int         maximumRowLength,
                              DecodeFunc  decodeFunc);

void freeRows(Rows rows);

/**
 * Returns the length of the longest row
 */
int getMaxRowLength(const Rows rows);

/**
 * Returns the total number of rows
 */
int getNumberOfRows(const Rows rows);

/**
 * Returns the length of the longest line
 *
 * ATTENTION: a line can span several rows because wrapping can split long lines in multiple rows
 * @param rows  A previously allocated array of rows of text containing the lines to search
 */
int getMaxLineLength_(const Rows rows);

/**
 * Returns the total number of lines
 *
 * ATTENTION: a line can span several rows because wrapping can split long lines in multiple rows
 * @param rows  A previously allocated array of rows of text containing the lines to count
 */
int getNumberOfLines_(const Rows rows);


#endif /* bas2img_rows_h */
