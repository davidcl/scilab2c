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

#ifndef __COSH_H__
#define __COSH_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Cosine for different types .
*/

/*
** \brief Float Cosine function
** \param in : input value.
*/
float		scoshs(float in);

/*
** \brief Double Cosine function
** \param in : input value.
*/
double		dcoshs(double in);

/*
** \brief Float Complex Cosine function
** \param in : input value.
*/
floatComplex	ccoshs(floatComplex in);

/*
** \brief Double Complex Cosine function
** \param in : input value.
*/
doubleComplex	zcoshs(doubleComplex in);

/*
** \brief Float Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		scosha(float* in, int size, float* out);

/*
** \brief Double Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dcosha(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		ccosha(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zcosha(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__COSH_H__ */
