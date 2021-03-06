/************************************************************************************
**                                                                                 **
**                               mcHF QRP Transceiver                              **
**                             K Atanassov - M0NKA 2014                            **
**                                                                                 **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:                                                                     **
**  Description:                                                                   **
**  Last Modified:                                                                 **
**  Licence:		For radio amateurs experimentation, non-commercial use only!   **
************************************************************************************/

#ifndef __FIR_2_3K_H
#define __FIR_2_3K_H

/**************************************************************
WinFilter version 0.8
http://www.winfilter.20m.com
akundert@hotmail.com

Filter type: Low Pass
Filter model: Raised Cosine
Roll Off Factor: 0.500000
Sampling Frequency: 48 KHz
Cut Frequency: 2.600000 KHz
Coefficents Quantization: float
***************************************************************/
/*
const float Fir2p3k[] =
{
		 0.00188114078300528960,
		        0.00246915627560174680,
		        0.00275147999511975250,
		        0.00249922207395431550,
		        0.00151923424574379510,
		        -0.00029316909784470079,
		        -0.00290526201735795800,
		        -0.00611169810901346370,
		        -0.00952212365416487890,
		        -0.01257799847944318500,
		        -0.01460079028693520200,
		        -0.01486856826099707200,
		        -0.01271279469446456700,
		        -0.00762272449367136420,
		        0.00065787552536992382,
		        0.01205736496923631000,
		        0.02613973038629860400,
		        0.04211389715355937100,
		        0.05889147009522376100,
		        0.07518835922249293700,
		        0.08965889424818972200,
		        0.10104562295502811000,
		        0.10832496029788323000,
		        0.11082877504191631000,
		        0.10832496029788323000,
		        0.10104562295502811000,
		        0.08965889424818972200,
		        0.07518835922249293700,
		        0.05889147009522376100,
		        0.04211389715355937100,
		        0.02613973038629860400,
		        0.01205736496923631000,
		        0.00065787552536992382,
		        -0.00762272449367136420,
		        -0.01271279469446456700,
		        -0.01486856826099707200,
		        -0.01460079028693520200,
		        -0.01257799847944318500,
		        -0.00952212365416487890,
		        -0.00611169810901346370,
		        -0.00290526201735795800,
		        -0.00029316909784470079,
		        0.00151923424574379510,
		        0.00249922207395431550,
		        0.00275147999511975250,
		        0.00246915627560174680,
		        0.00188114078300528960,
		        0.00120466669245462150
};
*/

// 47th order Least Pth Norm. Lowpass, 2600 Fco, 4100 Fstop, Wpass=1, Wstop=75
// Approx. 2dB ripple, >54dB above Fstop
// (Yes, there are 48 elements in this filter!)
//
const float Fir2p3k[] = {
		  -0.002151819031089,-0.003026582242857,-0.004670456133221,-0.006361751514617,
		  -0.007776612477319, -0.00847778914574,-0.008056448574305,-0.006127779763896,
		  -0.002480958942201, 0.002903664238035, 0.009765802462767,  0.01752503964072,
		     0.0253758367525,  0.03230028876463,  0.03719723178101,  0.03914039909998,
		    0.03738029003183,  0.03162668206657,   0.0220952724121, 0.009495875158441,
		  -0.004925799513927, -0.01951967582792, -0.03250069176177, -0.04206058927699,
		   -0.04668551671741, -0.04533302957855,  -0.0375952579421, -0.02379502318588,
		   -0.00489570642854,  0.01750699223828,  0.04144798498049,  0.06483521362373,
		    0.08562131953678,   0.1020955404748,   0.1131019213291,   0.1180211406392,
		      0.116941203594,   0.1104871264428,   0.0997348569361,  0.08605199138683,
		    0.07088490333624,  0.05559314371502,  0.04134348229306,  0.02893641818411,
		    0.01886600372558,   0.0112381681662, 0.005920859328116, 0.002883769970012
};



#endif
