/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __COS_H__
#define __COS_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Cosine for different types .
*/

/*
** \brief Float Cosine function
** \param in : input value.
*/
float		scoss(float in);

/*
** \brief Double Cosine function
** \param in : input value.
*/
double		dcoss(double in);

/*
** \brief Float Complex Cosine function
** \param in : input value.
*/
floatComplex	ccoss(floatComplex in);

/*
** \brief Double Complex Cosine function
** \param in : input value.
*/
doubleComplex	zcoss(doubleComplex in);

/*
** \brief Float Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		scosa(float* in, int size, float* out);

/*
** \brief Double Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dcosa(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		ccosa(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zcosa(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__COS_H__ */