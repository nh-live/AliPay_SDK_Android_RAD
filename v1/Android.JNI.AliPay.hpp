// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Android.JNI.AliPay.pas' rev: 31.00 (Android)

#ifndef Android_Jni_AlipayHPP
#define Android_Jni_AlipayHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Androidapi.JNIBridge.hpp>
#include <Androidapi.JNI.GraphicsContentViewText.hpp>
#include <Androidapi.JNI.Java.Net.hpp>
#include <Androidapi.JNI.Java.Security.hpp>
#include <Androidapi.JNI.JavaUtil.hpp>
#include <Androidapi.JNI.JavaTypes.hpp>
#include <Androidapi.JNI.Net.hpp>
#include <Androidapi.JNI.Os.hpp>
#include <Androidapi.Jni.hpp>
#include <System.Rtti.hpp>

//-- user supplied -----------------------------------------------------------

namespace Android
{
namespace Jni
{
namespace Alipay
{
//-- forward type declarations -----------------------------------------------
__interface JAccountClass;
typedef System::DelphiInterface<JAccountClass> _di_JAccountClass;
__interface JAccount;
typedef System::DelphiInterface<JAccount> _di_JAccount;
class DELPHICLASS TJAccount;
__interface Ja_iClass;
typedef System::DelphiInterface<Ja_iClass> _di_Ja_iClass;
__interface Ja_i;
typedef System::DelphiInterface<Ja_i> _di_Ja_i;
class DELPHICLASS TJa_i;
__interface Ja_a_aClass;
typedef System::DelphiInterface<Ja_a_aClass> _di_Ja_a_aClass;
__interface Ja_a_a;
typedef System::DelphiInterface<Ja_a_a> _di_Ja_a_a;
class DELPHICLASS TJa_a_a;
__interface Ja_bClass;
typedef System::DelphiInterface<Ja_bClass> _di_Ja_bClass;
__interface Ja_b;
typedef System::DelphiInterface<Ja_b> _di_Ja_b;
class DELPHICLASS TJa_b;
__interface Ja_cClass;
typedef System::DelphiInterface<Ja_cClass> _di_Ja_cClass;
__interface Ja_c;
typedef System::DelphiInterface<Ja_c> _di_Ja_c;
class DELPHICLASS TJa_c;
__interface Ja_dClass;
typedef System::DelphiInterface<Ja_dClass> _di_Ja_dClass;
__interface Ja_d;
typedef System::DelphiInterface<Ja_d> _di_Ja_d;
class DELPHICLASS TJa_d;
__interface Ja_eClass;
typedef System::DelphiInterface<Ja_eClass> _di_Ja_eClass;
__interface Ja_e;
typedef System::DelphiInterface<Ja_e> _di_Ja_e;
class DELPHICLASS TJa_e;
__interface Ja_fClass;
typedef System::DelphiInterface<Ja_fClass> _di_Ja_fClass;
__interface Ja_f;
typedef System::DelphiInterface<Ja_f> _di_Ja_f;
class DELPHICLASS TJa_f;
__interface Ja_gClass;
typedef System::DelphiInterface<Ja_gClass> _di_Ja_gClass;
__interface Ja_g;
typedef System::DelphiInterface<Ja_g> _di_Ja_g;
class DELPHICLASS TJa_g;
__interface Ja_hClass;
typedef System::DelphiInterface<Ja_hClass> _di_Ja_hClass;
__interface Ja_h;
typedef System::DelphiInterface<Ja_h> _di_Ja_h;
class DELPHICLASS TJa_h;
__interface Ja_jClass;
typedef System::DelphiInterface<Ja_jClass> _di_Ja_jClass;
__interface Ja_j;
typedef System::DelphiInterface<Ja_j> _di_Ja_j;
class DELPHICLASS TJa_j;
__interface Ja_kClass;
typedef System::DelphiInterface<Ja_kClass> _di_Ja_kClass;
__interface Ja_k;
typedef System::DelphiInterface<Ja_k> _di_Ja_k;
class DELPHICLASS TJa_k;
__interface Ja_lClass;
typedef System::DelphiInterface<Ja_lClass> _di_Ja_lClass;
__interface Ja_l;
typedef System::DelphiInterface<Ja_l> _di_Ja_l;
class DELPHICLASS TJa_l;
__interface Jb_aClass;
typedef System::DelphiInterface<Jb_aClass> _di_Jb_aClass;
__interface Jb_a;
typedef System::DelphiInterface<Jb_a> _di_Jb_a;
class DELPHICLASS TJb_a;
__interface Jcore_HttpExceptionClass;
typedef System::DelphiInterface<Jcore_HttpExceptionClass> _di_Jcore_HttpExceptionClass;
__interface Jcore_HttpException;
typedef System::DelphiInterface<Jcore_HttpException> _di_Jcore_HttpException;
class DELPHICLASS TJcore_HttpException;
__interface JHttpUrlHeaderClass;
typedef System::DelphiInterface<JHttpUrlHeaderClass> _di_JHttpUrlHeaderClass;
__interface JHttpUrlHeader;
typedef System::DelphiInterface<JHttpUrlHeader> _di_JHttpUrlHeader;
class DELPHICLASS TJHttpUrlHeader;
__interface JRpcExceptionClass;
typedef System::DelphiInterface<JRpcExceptionClass> _di_JRpcExceptionClass;
__interface JRpcException;
typedef System::DelphiInterface<JRpcException> _di_JRpcException;
class DELPHICLASS TJRpcException;
__interface JvClass;
typedef System::DelphiInterface<JvClass> _di_JvClass;
__interface Jv;
typedef System::DelphiInterface<Jv> _di_Jv;
class DELPHICLASS TJv;
__interface Jcore_aClass;
typedef System::DelphiInterface<Jcore_aClass> _di_Jcore_aClass;
__interface Jcore_a;
typedef System::DelphiInterface<Jcore_a> _di_Jcore_a;
class DELPHICLASS TJcore_a;
__interface Jcore_a_cClass;
typedef System::DelphiInterface<Jcore_a_cClass> _di_Jcore_a_cClass;
__interface Jcore_a_c;
typedef System::DelphiInterface<Jcore_a_c> _di_Jcore_a_c;
class DELPHICLASS TJcore_a_c;
__interface Jcore_a_aClass;
typedef System::DelphiInterface<Jcore_a_aClass> _di_Jcore_a_aClass;
__interface Jcore_a_a;
typedef System::DelphiInterface<Jcore_a_a> _di_Jcore_a_a;
class DELPHICLASS TJcore_a_a;
__interface Jcore_a_fClass;
typedef System::DelphiInterface<Jcore_a_fClass> _di_Jcore_a_fClass;
__interface Jcore_a_f;
typedef System::DelphiInterface<Jcore_a_f> _di_Jcore_a_f;
class DELPHICLASS TJcore_a_f;
__interface Jcore_a_bClass;
typedef System::DelphiInterface<Jcore_a_bClass> _di_Jcore_a_bClass;
__interface Jcore_a_b;
typedef System::DelphiInterface<Jcore_a_b> _di_Jcore_a_b;
class DELPHICLASS TJcore_a_b;
__interface Jcore_a_dClass;
typedef System::DelphiInterface<Jcore_a_dClass> _di_Jcore_a_dClass;
__interface Jcore_a_d;
typedef System::DelphiInterface<Jcore_a_d> _di_Jcore_a_d;
class DELPHICLASS TJcore_a_d;
__interface Jcore_a_eClass;
typedef System::DelphiInterface<Jcore_a_eClass> _di_Jcore_a_eClass;
__interface Jcore_a_e;
typedef System::DelphiInterface<Jcore_a_e> _di_Jcore_a_e;
class DELPHICLASS TJcore_a_e;
__interface JaaClass;
typedef System::DelphiInterface<JaaClass> _di_JaaClass;
__interface Jaa;
typedef System::DelphiInterface<Jaa> _di_Jaa;
class DELPHICLASS TJaa;
__interface JabClass;
typedef System::DelphiInterface<JabClass> _di_JabClass;
__interface Jab;
typedef System::DelphiInterface<Jab> _di_Jab;
class DELPHICLASS TJab;
__interface JacClass;
typedef System::DelphiInterface<JacClass> _di_JacClass;
__interface Jac;
typedef System::DelphiInterface<Jac> _di_Jac;
class DELPHICLASS TJac;
__interface JHttpRequestRetryHandlerClass;
typedef System::DelphiInterface<JHttpRequestRetryHandlerClass> _di_JHttpRequestRetryHandlerClass;
__interface JHttpRequestRetryHandler;
typedef System::DelphiInterface<JHttpRequestRetryHandler> _di_JHttpRequestRetryHandler;
class DELPHICLASS TJHttpRequestRetryHandler;
__interface Jcore_adClass;
typedef System::DelphiInterface<Jcore_adClass> _di_Jcore_adClass;
__interface Jcore_ad;
typedef System::DelphiInterface<Jcore_ad> _di_Jcore_ad;
class DELPHICLASS TJcore_ad;
__interface JHttpClientClass;
typedef System::DelphiInterface<JHttpClientClass> _di_JHttpClientClass;
__interface JHttpClient;
typedef System::DelphiInterface<JHttpClient> _di_JHttpClient;
class DELPHICLASS TJHttpClient;
__interface Jcore_bClass;
typedef System::DelphiInterface<Jcore_bClass> _di_Jcore_bClass;
__interface Jcore_b;
typedef System::DelphiInterface<Jcore_b> _di_Jcore_b;
class DELPHICLASS TJcore_b;
__interface JHttpRequestInterceptorClass;
typedef System::DelphiInterface<JHttpRequestInterceptorClass> _di_JHttpRequestInterceptorClass;
__interface JHttpRequestInterceptor;
typedef System::DelphiInterface<JHttpRequestInterceptor> _di_JHttpRequestInterceptor;
class DELPHICLASS TJHttpRequestInterceptor;
__interface Jcore_b_aClass;
typedef System::DelphiInterface<Jcore_b_aClass> _di_Jcore_b_aClass;
__interface Jcore_b_a;
typedef System::DelphiInterface<Jcore_b_a> _di_Jcore_b_a;
class DELPHICLASS TJcore_b_a;
__interface Jb_bClass;
typedef System::DelphiInterface<Jb_bClass> _di_Jb_bClass;
__interface Jb_b;
typedef System::DelphiInterface<Jb_b> _di_Jb_b;
class DELPHICLASS TJb_b;
__interface Jcore_cClass;
typedef System::DelphiInterface<Jcore_cClass> _di_Jcore_cClass;
__interface Jcore_c;
typedef System::DelphiInterface<Jcore_c> _di_Jcore_c;
class DELPHICLASS TJcore_c;
__interface JAbstractHttpClientClass;
typedef System::DelphiInterface<JAbstractHttpClientClass> _di_JAbstractHttpClientClass;
__interface JAbstractHttpClient;
typedef System::DelphiInterface<JAbstractHttpClient> _di_JAbstractHttpClient;
class DELPHICLASS TJAbstractHttpClient;
__interface JDefaultHttpClientClass;
typedef System::DelphiInterface<JDefaultHttpClientClass> _di_JDefaultHttpClientClass;
__interface JDefaultHttpClient;
typedef System::DelphiInterface<JDefaultHttpClient> _di_JDefaultHttpClient;
class DELPHICLASS TJDefaultHttpClient;
__interface Jcore_dClass;
typedef System::DelphiInterface<Jcore_dClass> _di_Jcore_dClass;
__interface Jcore_d;
typedef System::DelphiInterface<Jcore_d> _di_Jcore_d;
class DELPHICLASS TJcore_d;
__interface JDefaultRedirectHandlerClass;
typedef System::DelphiInterface<JDefaultRedirectHandlerClass> _di_JDefaultRedirectHandlerClass;
__interface JDefaultRedirectHandler;
typedef System::DelphiInterface<JDefaultRedirectHandler> _di_JDefaultRedirectHandler;
class DELPHICLASS TJDefaultRedirectHandler;
__interface Jcore_eClass;
typedef System::DelphiInterface<Jcore_eClass> _di_Jcore_eClass;
__interface Jcore_e;
typedef System::DelphiInterface<Jcore_e> _di_Jcore_e;
class DELPHICLASS TJcore_e;
__interface JConnectionKeepAliveStrategyClass;
typedef System::DelphiInterface<JConnectionKeepAliveStrategyClass> _di_JConnectionKeepAliveStrategyClass;
__interface JConnectionKeepAliveStrategy;
typedef System::DelphiInterface<JConnectionKeepAliveStrategy> _di_JConnectionKeepAliveStrategy;
class DELPHICLASS TJConnectionKeepAliveStrategy;
__interface Jcore_fClass;
typedef System::DelphiInterface<Jcore_fClass> _di_Jcore_fClass;
__interface Jcore_f;
typedef System::DelphiInterface<Jcore_f> _di_Jcore_f;
class DELPHICLASS TJcore_f;
__interface Jcore_gClass;
typedef System::DelphiInterface<Jcore_gClass> _di_Jcore_gClass;
__interface Jcore_g;
typedef System::DelphiInterface<Jcore_g> _di_Jcore_g;
class DELPHICLASS TJcore_g;
__interface Jcore_wClass;
typedef System::DelphiInterface<Jcore_wClass> _di_Jcore_wClass;
__interface Jcore_w;
typedef System::DelphiInterface<Jcore_w> _di_Jcore_w;
class DELPHICLASS TJcore_w;
__interface Jcore_hClass;
typedef System::DelphiInterface<Jcore_hClass> _di_Jcore_hClass;
__interface Jcore_h;
typedef System::DelphiInterface<Jcore_h> _di_Jcore_h;
class DELPHICLASS TJcore_h;
__interface Jcore_iClass;
typedef System::DelphiInterface<Jcore_iClass> _di_Jcore_iClass;
__interface Jcore_i;
typedef System::DelphiInterface<Jcore_i> _di_Jcore_i;
class DELPHICLASS TJcore_i;
__interface Jcore_jClass;
typedef System::DelphiInterface<Jcore_jClass> _di_Jcore_jClass;
__interface Jcore_j;
typedef System::DelphiInterface<Jcore_j> _di_Jcore_j;
class DELPHICLASS TJcore_j;
__interface Jcore_kClass;
typedef System::DelphiInterface<Jcore_kClass> _di_Jcore_kClass;
__interface Jcore_k;
typedef System::DelphiInterface<Jcore_k> _di_Jcore_k;
class DELPHICLASS TJcore_k;
__interface Jk_aClass;
typedef System::DelphiInterface<Jk_aClass> _di_Jk_aClass;
__interface Jk_a;
typedef System::DelphiInterface<Jk_a> _di_Jk_a;
class DELPHICLASS TJk_a;
__interface Jcore_lClass;
typedef System::DelphiInterface<Jcore_lClass> _di_Jcore_lClass;
__interface Jcore_l;
typedef System::DelphiInterface<Jcore_l> _di_Jcore_l;
class DELPHICLASS TJcore_l;
__interface JFutureTaskClass;
typedef System::DelphiInterface<JFutureTaskClass> _di_JFutureTaskClass;
__interface JFutureTask;
typedef System::DelphiInterface<JFutureTask> _di_JFutureTask;
class DELPHICLASS TJFutureTask;
__interface Jcore_mClass;
typedef System::DelphiInterface<Jcore_mClass> _di_Jcore_mClass;
__interface Jcore_m;
typedef System::DelphiInterface<Jcore_m> _di_Jcore_m;
class DELPHICLASS TJcore_m;
__interface Jcore_nClass;
typedef System::DelphiInterface<Jcore_nClass> _di_Jcore_nClass;
__interface Jcore_n;
typedef System::DelphiInterface<Jcore_n> _di_Jcore_n;
class DELPHICLASS TJcore_n;
__interface JtClass;
typedef System::DelphiInterface<JtClass> _di_JtClass;
__interface Jt;
typedef System::DelphiInterface<Jt> _di_Jt;
class DELPHICLASS TJt;
__interface Jcore_oClass;
typedef System::DelphiInterface<Jcore_oClass> _di_Jcore_oClass;
__interface Jcore_o;
typedef System::DelphiInterface<Jcore_o> _di_Jcore_o;
class DELPHICLASS TJcore_o;
__interface JuClass;
typedef System::DelphiInterface<JuClass> _di_JuClass;
__interface Ju;
typedef System::DelphiInterface<Ju> _di_Ju;
class DELPHICLASS TJu;
__interface JpClass;
typedef System::DelphiInterface<JpClass> _di_JpClass;
__interface Jp;
typedef System::DelphiInterface<Jp> _di_Jp;
class DELPHICLASS TJp;
__interface JqClass;
typedef System::DelphiInterface<JqClass> _di_JqClass;
__interface Jq;
typedef System::DelphiInterface<Jq> _di_Jq;
class DELPHICLASS TJq;
__interface Jcore_rClass;
typedef System::DelphiInterface<Jcore_rClass> _di_Jcore_rClass;
__interface Jcore_r;
typedef System::DelphiInterface<Jcore_r> _di_Jcore_r;
class DELPHICLASS TJcore_r;
__interface JsClass;
typedef System::DelphiInterface<JsClass> _di_JsClass;
__interface Js;
typedef System::DelphiInterface<Js> _di_Js;
class DELPHICLASS TJs;
__interface JxClass;
typedef System::DelphiInterface<JxClass> _di_JxClass;
__interface Jx;
typedef System::DelphiInterface<Jx> _di_Jx;
class DELPHICLASS TJx;
__interface JInvocationHandlerClass;
typedef System::DelphiInterface<JInvocationHandlerClass> _di_JInvocationHandlerClass;
__interface JInvocationHandler;
typedef System::DelphiInterface<JInvocationHandler> _di_JInvocationHandler;
class DELPHICLASS TJInvocationHandler;
__interface JyClass;
typedef System::DelphiInterface<JyClass> _di_JyClass;
__interface Jy;
typedef System::DelphiInterface<Jy> _di_Jy;
class DELPHICLASS TJy;
__interface JzClass;
typedef System::DelphiInterface<JzClass> _di_JzClass;
__interface Jz;
typedef System::DelphiInterface<Jz> _di_Jz;
class DELPHICLASS TJz;
__interface Japmobilesecuritysdk_a_aClass;
typedef System::DelphiInterface<Japmobilesecuritysdk_a_aClass> _di_Japmobilesecuritysdk_a_aClass;
__interface Japmobilesecuritysdk_a_a;
typedef System::DelphiInterface<Japmobilesecuritysdk_a_a> _di_Japmobilesecuritysdk_a_a;
class DELPHICLASS TJapmobilesecuritysdk_a_a;
__interface Japmobilesecuritysdk_b_aClass;
typedef System::DelphiInterface<Japmobilesecuritysdk_b_aClass> _di_Japmobilesecuritysdk_b_aClass;
__interface Japmobilesecuritysdk_b_a;
typedef System::DelphiInterface<Japmobilesecuritysdk_b_a> _di_Japmobilesecuritysdk_b_a;
class DELPHICLASS TJapmobilesecuritysdk_b_a;
__interface Jc_aClass;
typedef System::DelphiInterface<Jc_aClass> _di_Jc_aClass;
__interface Jc_a;
typedef System::DelphiInterface<Jc_a> _di_Jc_a;
class DELPHICLASS TJc_a;
__interface Jd_aClass;
typedef System::DelphiInterface<Jd_aClass> _di_Jd_aClass;
__interface Jd_a;
typedef System::DelphiInterface<Jd_a> _di_Jd_a;
class DELPHICLASS TJd_a;
__interface Jd_bClass;
typedef System::DelphiInterface<Jd_bClass> _di_Jd_bClass;
__interface Jd_b;
typedef System::DelphiInterface<Jd_b> _di_Jd_b;
class DELPHICLASS TJd_b;
__interface Jd_cClass;
typedef System::DelphiInterface<Jd_cClass> _di_Jd_cClass;
__interface Jd_c;
typedef System::DelphiInterface<Jd_c> _di_Jd_c;
class DELPHICLASS TJd_c;
__interface Jd_dClass;
typedef System::DelphiInterface<Jd_dClass> _di_Jd_dClass;
__interface Jd_d;
typedef System::DelphiInterface<Jd_d> _di_Jd_d;
class DELPHICLASS TJd_d;
__interface Jd_eClass;
typedef System::DelphiInterface<Jd_eClass> _di_Jd_eClass;
__interface Jd_e;
typedef System::DelphiInterface<Jd_e> _di_Jd_e;
class DELPHICLASS TJd_e;
__interface Je_aClass;
typedef System::DelphiInterface<Je_aClass> _di_Je_aClass;
__interface Je_a;
typedef System::DelphiInterface<Je_a> _di_Je_a;
class DELPHICLASS TJe_a;
__interface Jf_aClass;
typedef System::DelphiInterface<Jf_aClass> _di_Jf_aClass;
__interface Jf_a;
typedef System::DelphiInterface<Jf_a> _di_Jf_a;
class DELPHICLASS TJf_a;
__interface Jf_bClass;
typedef System::DelphiInterface<Jf_bClass> _di_Jf_bClass;
__interface Jf_b;
typedef System::DelphiInterface<Jf_b> _di_Jf_b;
class DELPHICLASS TJf_b;
__interface Jf_cClass;
typedef System::DelphiInterface<Jf_cClass> _di_Jf_cClass;
__interface Jf_c;
typedef System::DelphiInterface<Jf_c> _di_Jf_c;
class DELPHICLASS TJf_c;
__interface Jf_dClass;
typedef System::DelphiInterface<Jf_dClass> _di_Jf_dClass;
__interface Jf_d;
typedef System::DelphiInterface<Jf_d> _di_Jf_d;
class DELPHICLASS TJf_d;
__interface Jf_eClass;
typedef System::DelphiInterface<Jf_eClass> _di_Jf_eClass;
__interface Jf_e;
typedef System::DelphiInterface<Jf_e> _di_Jf_e;
class DELPHICLASS TJf_e;
__interface Jf_fClass;
typedef System::DelphiInterface<Jf_fClass> _di_Jf_fClass;
__interface Jf_f;
typedef System::DelphiInterface<Jf_f> _di_Jf_f;
class DELPHICLASS TJf_f;
__interface Jf_gClass;
typedef System::DelphiInterface<Jf_gClass> _di_Jf_gClass;
__interface Jf_g;
typedef System::DelphiInterface<Jf_g> _di_Jf_g;
class DELPHICLASS TJf_g;
__interface Jf_hClass;
typedef System::DelphiInterface<Jf_hClass> _di_Jf_hClass;
__interface Jf_h;
typedef System::DelphiInterface<Jf_h> _di_Jf_h;
class DELPHICLASS TJf_h;
__interface Jf_iClass;
typedef System::DelphiInterface<Jf_iClass> _di_Jf_iClass;
__interface Jf_i;
typedef System::DelphiInterface<Jf_i> _di_Jf_i;
class DELPHICLASS TJf_i;
__interface JAPSecuritySdkClass;
typedef System::DelphiInterface<JAPSecuritySdkClass> _di_JAPSecuritySdkClass;
__interface JAPSecuritySdk;
typedef System::DelphiInterface<JAPSecuritySdk> _di_JAPSecuritySdk;
class DELPHICLASS TJAPSecuritySdk;
__interface JAPSecuritySdk_1Class;
typedef System::DelphiInterface<JAPSecuritySdk_1Class> _di_JAPSecuritySdk_1Class;
__interface JAPSecuritySdk_1;
typedef System::DelphiInterface<JAPSecuritySdk_1> _di_JAPSecuritySdk_1;
class DELPHICLASS TJAPSecuritySdk_1;
__interface JAPSecuritySdk_InitResultListenerClass;
typedef System::DelphiInterface<JAPSecuritySdk_InitResultListenerClass> _di_JAPSecuritySdk_InitResultListenerClass;
__interface JAPSecuritySdk_InitResultListener;
typedef System::DelphiInterface<JAPSecuritySdk_InitResultListener> _di_JAPSecuritySdk_InitResultListener;
class DELPHICLASS TJAPSecuritySdk_InitResultListener;
__interface JAPSecuritySdk_TokenResultClass;
typedef System::DelphiInterface<JAPSecuritySdk_TokenResultClass> _di_JAPSecuritySdk_TokenResultClass;
__interface JAPSecuritySdk_TokenResult;
typedef System::DelphiInterface<JAPSecuritySdk_TokenResult> _di_JAPSecuritySdk_TokenResult;
class DELPHICLASS TJAPSecuritySdk_TokenResult;
__interface JEnvModeConfigClass;
typedef System::DelphiInterface<JEnvModeConfigClass> _di_JEnvModeConfigClass;
__interface JEnvModeConfig;
typedef System::DelphiInterface<JEnvModeConfig> _di_JEnvModeConfig;
class DELPHICLASS TJEnvModeConfig;
__interface Jg_aClass;
typedef System::DelphiInterface<Jg_aClass> _di_Jg_aClass;
__interface Jg_a;
typedef System::DelphiInterface<Jg_a> _di_Jg_a;
class DELPHICLASS TJg_a;
__interface Jg_bClass;
typedef System::DelphiInterface<Jg_bClass> _di_Jg_bClass;
__interface Jg_b;
typedef System::DelphiInterface<Jg_b> _di_Jg_b;
class DELPHICLASS TJg_b;
__interface Jg_cClass;
typedef System::DelphiInterface<Jg_cClass> _di_Jg_cClass;
__interface Jg_c;
typedef System::DelphiInterface<Jg_c> _di_Jg_c;
class DELPHICLASS TJg_c;
__interface Ja_a_a_aClass;
typedef System::DelphiInterface<Ja_a_a_aClass> _di_Ja_a_a_aClass;
__interface Ja_a_a_a;
typedef System::DelphiInterface<Ja_a_a_a> _di_Ja_a_a_a;
class DELPHICLASS TJa_a_a_a;
__interface Ja_a_a_a_aClass;
typedef System::DelphiInterface<Ja_a_a_a_aClass> _di_Ja_a_a_a_aClass;
__interface Ja_a_a_a_a;
typedef System::DelphiInterface<Ja_a_a_a_a> _di_Ja_a_a_a_a;
class DELPHICLASS TJa_a_a_a_a;
__interface Ja_a_bClass;
typedef System::DelphiInterface<Ja_a_bClass> _di_Ja_a_bClass;
__interface Ja_a_b;
typedef System::DelphiInterface<Ja_a_b> _di_Ja_a_b;
class DELPHICLASS TJa_a_b;
__interface Ja_a_cClass;
typedef System::DelphiInterface<Ja_a_cClass> _di_Ja_a_cClass;
__interface Ja_a_c;
typedef System::DelphiInterface<Ja_a_c> _di_Ja_a_c;
class DELPHICLASS TJa_a_c;
__interface Ja_a_a_bClass;
typedef System::DelphiInterface<Ja_a_a_bClass> _di_Ja_a_a_bClass;
__interface Ja_a_a_b;
typedef System::DelphiInterface<Ja_a_a_b> _di_Ja_a_a_b;
class DELPHICLASS TJa_a_a_b;
__interface Ja_b_aClass;
typedef System::DelphiInterface<Ja_b_aClass> _di_Ja_b_aClass;
__interface Ja_b_a;
typedef System::DelphiInterface<Ja_b_a> _di_Ja_b_a;
class DELPHICLASS TJa_b_a;
__interface Ja_b_bClass;
typedef System::DelphiInterface<Ja_b_bClass> _di_Ja_b_bClass;
__interface Ja_b_b;
typedef System::DelphiInterface<Ja_b_b> _di_Ja_b_b;
class DELPHICLASS TJa_b_b;
__interface Jb_cClass;
typedef System::DelphiInterface<Jb_cClass> _di_Jb_cClass;
__interface Jb_c;
typedef System::DelphiInterface<Jb_c> _di_Jb_c;
class DELPHICLASS TJb_c;
__interface Jb_dClass;
typedef System::DelphiInterface<Jb_dClass> _di_Jb_dClass;
__interface Jb_d;
typedef System::DelphiInterface<Jb_d> _di_Jb_d;
class DELPHICLASS TJb_d;
__interface Ja_c_aClass;
typedef System::DelphiInterface<Ja_c_aClass> _di_Ja_c_aClass;
__interface Ja_c_a;
typedef System::DelphiInterface<Ja_c_a> _di_Ja_c_a;
class DELPHICLASS TJa_c_a;
__interface Jc_a_aClass;
typedef System::DelphiInterface<Jc_a_aClass> _di_Jc_a_aClass;
__interface Jc_a_a;
typedef System::DelphiInterface<Jc_a_a> _di_Jc_a_a;
class DELPHICLASS TJc_a_a;
__interface Jc_a_bClass;
typedef System::DelphiInterface<Jc_a_bClass> _di_Jc_a_bClass;
__interface Jc_a_b;
typedef System::DelphiInterface<Jc_a_b> _di_Jc_a_b;
class DELPHICLASS TJc_a_b;
__interface Jc_a_cClass;
typedef System::DelphiInterface<Jc_a_cClass> _di_Jc_a_cClass;
__interface Jc_a_c;
typedef System::DelphiInterface<Jc_a_c> _di_Jc_a_c;
class DELPHICLASS TJc_a_c;
__interface Jc_bClass;
typedef System::DelphiInterface<Jc_bClass> _di_Jc_bClass;
__interface Jc_b;
typedef System::DelphiInterface<Jc_b> _di_Jc_b;
class DELPHICLASS TJc_b;
__interface Jc_b_aClass;
typedef System::DelphiInterface<Jc_b_aClass> _di_Jc_b_aClass;
__interface Jc_b_a;
typedef System::DelphiInterface<Jc_b_a> _di_Jc_b_a;
class DELPHICLASS TJc_b_a;
__interface Jc_b_bClass;
typedef System::DelphiInterface<Jc_b_bClass> _di_Jc_b_bClass;
__interface Jc_b_b;
typedef System::DelphiInterface<Jc_b_b> _di_Jc_b_b;
class DELPHICLASS TJc_b_b;
__interface Jc_cClass;
typedef System::DelphiInterface<Jc_cClass> _di_Jc_cClass;
__interface Jc_c;
typedef System::DelphiInterface<Jc_c> _di_Jc_c;
class DELPHICLASS TJc_c;
__interface Jc_dClass;
typedef System::DelphiInterface<Jc_dClass> _di_Jc_dClass;
__interface Jc_d;
typedef System::DelphiInterface<Jc_d> _di_Jc_d;
class DELPHICLASS TJc_d;
__interface Ja_d_aClass;
typedef System::DelphiInterface<Ja_d_aClass> _di_Ja_d_aClass;
__interface Ja_d_a;
typedef System::DelphiInterface<Ja_d_a> _di_Ja_d_a;
class DELPHICLASS TJa_d_a;
__interface Ja_d_bClass;
typedef System::DelphiInterface<Ja_d_bClass> _di_Ja_d_bClass;
__interface Ja_d_b;
typedef System::DelphiInterface<Ja_d_b> _di_Ja_d_b;
class DELPHICLASS TJa_d_b;
__interface Ja_d_cClass;
typedef System::DelphiInterface<Ja_d_cClass> _di_Ja_d_cClass;
__interface Ja_d_c;
typedef System::DelphiInterface<Ja_d_c> _di_Ja_d_c;
class DELPHICLASS TJa_d_c;
__interface Ja_e_aClass;
typedef System::DelphiInterface<Ja_e_aClass> _di_Ja_e_aClass;
__interface Ja_e_a;
typedef System::DelphiInterface<Ja_e_a> _di_Ja_e_a;
class DELPHICLASS TJa_e_a;
__interface Je_bClass;
typedef System::DelphiInterface<Je_bClass> _di_Je_bClass;
__interface Je_b;
typedef System::DelphiInterface<Je_b> _di_Je_b;
class DELPHICLASS TJe_b;
__interface Je_cClass;
typedef System::DelphiInterface<Je_cClass> _di_Je_cClass;
__interface Je_c;
typedef System::DelphiInterface<Je_c> _di_Je_c;
class DELPHICLASS TJe_c;
__interface Je_dClass;
typedef System::DelphiInterface<Je_dClass> _di_Je_dClass;
__interface Je_d;
typedef System::DelphiInterface<Je_d> _di_Je_d;
class DELPHICLASS TJe_d;
__interface JOperationTypeClass;
typedef System::DelphiInterface<JOperationTypeClass> _di_JOperationTypeClass;
__interface JOperationType;
typedef System::DelphiInterface<JOperationType> _di_JOperationType;
class DELPHICLASS TJOperationType;
__interface JResetCookieClass;
typedef System::DelphiInterface<JResetCookieClass> _di_JResetCookieClass;
__interface JResetCookie;
typedef System::DelphiInterface<JResetCookie> _di_JResetCookie;
class DELPHICLASS TJResetCookie;
__interface JUpdateDeviceInfoClass;
typedef System::DelphiInterface<JUpdateDeviceInfoClass> _di_JUpdateDeviceInfoClass;
__interface JUpdateDeviceInfo;
typedef System::DelphiInterface<JUpdateDeviceInfo> _di_JUpdateDeviceInfo;
class DELPHICLASS TJUpdateDeviceInfo;
__interface JSecurityClientMobileClass;
typedef System::DelphiInterface<JSecurityClientMobileClass> _di_JSecurityClientMobileClass;
__interface JSecurityClientMobile;
typedef System::DelphiInterface<JSecurityClientMobile> _di_JSecurityClientMobile;
class DELPHICLASS TJSecurityClientMobile;
__interface JBugTrackMessageServiceClass;
typedef System::DelphiInterface<JBugTrackMessageServiceClass> _di_JBugTrackMessageServiceClass;
__interface JBugTrackMessageService;
typedef System::DelphiInterface<JBugTrackMessageService> _di_JBugTrackMessageService;
class DELPHICLASS TJBugTrackMessageService;
__interface JAppListCmdServiceClass;
typedef System::DelphiInterface<JAppListCmdServiceClass> _di_JAppListCmdServiceClass;
__interface JAppListCmdService;
typedef System::DelphiInterface<JAppListCmdService> _di_JAppListCmdService;
class DELPHICLASS TJAppListCmdService;
__interface JDeviceDataReportServiceClass;
typedef System::DelphiInterface<JDeviceDataReportServiceClass> _di_JDeviceDataReportServiceClass;
__interface JDeviceDataReportService;
typedef System::DelphiInterface<JDeviceDataReportService> _di_JDeviceDataReportService;
class DELPHICLASS TJDeviceDataReportService;
__interface JAppListCmdRequestClass;
typedef System::DelphiInterface<JAppListCmdRequestClass> _di_JAppListCmdRequestClass;
__interface JAppListCmdRequest;
typedef System::DelphiInterface<JAppListCmdRequest> _di_JAppListCmdRequest;
class DELPHICLASS TJAppListCmdRequest;
__interface JDeviceDataReportRequestClass;
typedef System::DelphiInterface<JDeviceDataReportRequestClass> _di_JDeviceDataReportRequestClass;
__interface JDeviceDataReportRequest;
typedef System::DelphiInterface<JDeviceDataReportRequest> _di_JDeviceDataReportRequest;
class DELPHICLASS TJDeviceDataReportRequest;
__interface JBaseResultClass;
typedef System::DelphiInterface<JBaseResultClass> _di_JBaseResultClass;
__interface JBaseResult;
typedef System::DelphiInterface<JBaseResult> _di_JBaseResult;
class DELPHICLASS TJBaseResult;
__interface JAppListResultClass;
typedef System::DelphiInterface<JAppListResultClass> _di_JAppListResultClass;
__interface JAppListResult;
typedef System::DelphiInterface<JAppListResult> _di_JAppListResult;
class DELPHICLASS TJAppListResult;
__interface JAppListCmdResultClass;
typedef System::DelphiInterface<JAppListCmdResultClass> _di_JAppListCmdResultClass;
__interface JAppListCmdResult;
typedef System::DelphiInterface<JAppListCmdResult> _di_JAppListCmdResult;
class DELPHICLASS TJAppListCmdResult;
__interface JDeviceDataReportResultClass;
typedef System::DelphiInterface<JDeviceDataReportResultClass> _di_JDeviceDataReportResultClass;
__interface JDeviceDataReportResult;
typedef System::DelphiInterface<JDeviceDataReportResult> _di_JDeviceDataReportResult;
class DELPHICLASS TJDeviceDataReportResult;
__interface JAidManagerClass;
typedef System::DelphiInterface<JAidManagerClass> _di_JAidManagerClass;
__interface JAidManager;
typedef System::DelphiInterface<JAidManager> _di_JAidManager;
class DELPHICLASS TJAidManager;
__interface JAidRequesterClass;
typedef System::DelphiInterface<JAidRequesterClass> _di_JAidRequesterClass;
__interface JAidRequester;
typedef System::DelphiInterface<JAidRequester> _di_JAidRequester;
class DELPHICLASS TJAidRequester;
__interface JAidRequester_PostRestThreadClass;
typedef System::DelphiInterface<JAidRequester_PostRestThreadClass> _di_JAidRequester_PostRestThreadClass;
__interface JAidRequester_PostRestThread;
typedef System::DelphiInterface<JAidRequester_PostRestThread> _di_JAidRequester_PostRestThread;
class DELPHICLASS TJAidRequester_PostRestThread;
__interface JAidStorageControllerClass;
typedef System::DelphiInterface<JAidStorageControllerClass> _di_JAidStorageControllerClass;
__interface JAidStorageController;
typedef System::DelphiInterface<JAidStorageController> _di_JAidStorageController;
class DELPHICLASS TJAidStorageController;
__interface JAESUtilsClass;
typedef System::DelphiInterface<JAESUtilsClass> _di_JAESUtilsClass;
__interface JAESUtils;
typedef System::DelphiInterface<JAESUtils> _di_JAESUtils;
class DELPHICLASS TJAESUtils;
__interface Jutils_Base64Class;
typedef System::DelphiInterface<Jutils_Base64Class> _di_Jutils_Base64Class;
__interface Jutils_Base64;
typedef System::DelphiInterface<Jutils_Base64> _di_Jutils_Base64;
class DELPHICLASS TJutils_Base64;
__interface JBase64_CoderClass;
typedef System::DelphiInterface<JBase64_CoderClass> _di_JBase64_CoderClass;
__interface JBase64_Coder;
typedef System::DelphiInterface<JBase64_Coder> _di_JBase64_Coder;
class DELPHICLASS TJBase64_Coder;
__interface JBase64_DecoderClass;
typedef System::DelphiInterface<JBase64_DecoderClass> _di_JBase64_DecoderClass;
__interface JBase64_Decoder;
typedef System::DelphiInterface<JBase64_Decoder> _di_JBase64_Decoder;
class DELPHICLASS TJBase64_Decoder;
__interface JBase64_EncoderClass;
typedef System::DelphiInterface<JBase64_EncoderClass> _di_JBase64_EncoderClass;
__interface JBase64_Encoder;
typedef System::DelphiInterface<JBase64_Encoder> _di_JBase64_Encoder;
class DELPHICLASS TJBase64_Encoder;
__interface JBase64HelperClass;
typedef System::DelphiInterface<JBase64HelperClass> _di_JBase64HelperClass;
__interface JBase64Helper;
typedef System::DelphiInterface<JBase64Helper> _di_JBase64Helper;
class DELPHICLASS TJBase64Helper;
__interface Jutils_DebugUtilsClass;
typedef System::DelphiInterface<Jutils_DebugUtilsClass> _di_Jutils_DebugUtilsClass;
__interface Jutils_DebugUtils;
typedef System::DelphiInterface<Jutils_DebugUtils> _di_Jutils_DebugUtils;
class DELPHICLASS TJutils_DebugUtils;
__interface JIntUtilsClass;
typedef System::DelphiInterface<JIntUtilsClass> _di_JIntUtilsClass;
__interface JIntUtils;
typedef System::DelphiInterface<JIntUtils> _di_JIntUtils;
class DELPHICLASS TJIntUtils;
__interface JNetworkUtilsClass;
typedef System::DelphiInterface<JNetworkUtilsClass> _di_JNetworkUtilsClass;
__interface JNetworkUtils;
typedef System::DelphiInterface<JNetworkUtils> _di_JNetworkUtils;
class DELPHICLASS TJNetworkUtils;
__interface JPhoneInfoUtilsClass;
typedef System::DelphiInterface<JPhoneInfoUtilsClass> _di_JPhoneInfoUtilsClass;
__interface JPhoneInfoUtils;
typedef System::DelphiInterface<JPhoneInfoUtils> _di_JPhoneInfoUtils;
class DELPHICLASS TJPhoneInfoUtils;
__interface JSharedPreferenceHelperClass;
typedef System::DelphiInterface<JSharedPreferenceHelperClass> _di_JSharedPreferenceHelperClass;
__interface JSharedPreferenceHelper;
typedef System::DelphiInterface<JSharedPreferenceHelper> _di_JSharedPreferenceHelper;
class DELPHICLASS TJSharedPreferenceHelper;
__interface JStringUtilsClass;
typedef System::DelphiInterface<JStringUtilsClass> _di_JStringUtilsClass;
__interface JStringUtils;
typedef System::DelphiInterface<JStringUtils> _di_JStringUtils;
class DELPHICLASS TJStringUtils;
__interface JSystemUtilsClass;
typedef System::DelphiInterface<JSystemUtilsClass> _di_JSystemUtilsClass;
__interface JSystemUtils;
typedef System::DelphiInterface<JSystemUtils> _di_JSystemUtils;
class DELPHICLASS TJSystemUtils;
__interface Jutils_TimeUtilsClass;
typedef System::DelphiInterface<Jutils_TimeUtilsClass> _di_Jutils_TimeUtilsClass;
__interface Jutils_TimeUtils;
typedef System::DelphiInterface<Jutils_TimeUtils> _di_Jutils_TimeUtils;
class DELPHICLASS TJutils_TimeUtils;
__interface JFastXmlSerializerClass;
typedef System::DelphiInterface<JFastXmlSerializerClass> _di_JFastXmlSerializerClass;
__interface JFastXmlSerializer;
typedef System::DelphiInterface<JFastXmlSerializer> _di_JFastXmlSerializer;
class DELPHICLASS TJFastXmlSerializer;
__interface JMySharedPreferencesClass;
typedef System::DelphiInterface<JMySharedPreferencesClass> _di_JMySharedPreferencesClass;
__interface JMySharedPreferences;
typedef System::DelphiInterface<JMySharedPreferences> _di_JMySharedPreferences;
class DELPHICLASS TJMySharedPreferences;
__interface JMySharedPreferences_MyEditorClass;
typedef System::DelphiInterface<JMySharedPreferences_MyEditorClass> _di_JMySharedPreferences_MyEditorClass;
__interface JMySharedPreferences_MyEditor;
typedef System::DelphiInterface<JMySharedPreferences_MyEditor> _di_JMySharedPreferences_MyEditor;
class DELPHICLASS TJMySharedPreferences_MyEditor;
__interface JMySharedPreferences_OnSharedPreferenceChangeListenerClass;
typedef System::DelphiInterface<JMySharedPreferences_OnSharedPreferenceChangeListenerClass> _di_JMySharedPreferences_OnSharedPreferenceChangeListenerClass;
__interface JMySharedPreferences_OnSharedPreferenceChangeListener;
typedef System::DelphiInterface<JMySharedPreferences_OnSharedPreferenceChangeListener> _di_JMySharedPreferences_OnSharedPreferenceChangeListener;
class DELPHICLASS TJMySharedPreferences_OnSharedPreferenceChangeListener;
__interface JPersistentConfigurationClass;
typedef System::DelphiInterface<JPersistentConfigurationClass> _di_JPersistentConfigurationClass;
__interface JPersistentConfiguration;
typedef System::DelphiInterface<JPersistentConfiguration> _di_JPersistentConfiguration;
class DELPHICLASS TJPersistentConfiguration;
__interface JTransactionXMLFileClass;
typedef System::DelphiInterface<JTransactionXMLFileClass> _di_JTransactionXMLFileClass;
__interface JTransactionXMLFile;
typedef System::DelphiInterface<JTransactionXMLFile> _di_JTransactionXMLFile;
class DELPHICLASS TJTransactionXMLFile;
__interface JTransactionXMLFile_MySharedPreferencesImplClass;
typedef System::DelphiInterface<JTransactionXMLFile_MySharedPreferencesImplClass> _di_JTransactionXMLFile_MySharedPreferencesImplClass;
__interface JTransactionXMLFile_MySharedPreferencesImpl;
typedef System::DelphiInterface<JTransactionXMLFile_MySharedPreferencesImpl> _di_JTransactionXMLFile_MySharedPreferencesImpl;
class DELPHICLASS TJTransactionXMLFile_MySharedPreferencesImpl;
__interface JMySharedPreferencesImpl_EditorImplClass;
typedef System::DelphiInterface<JMySharedPreferencesImpl_EditorImplClass> _di_JMySharedPreferencesImpl_EditorImplClass;
__interface JMySharedPreferencesImpl_EditorImpl;
typedef System::DelphiInterface<JMySharedPreferencesImpl_EditorImpl> _di_JMySharedPreferencesImpl_EditorImpl;
class DELPHICLASS TJMySharedPreferencesImpl_EditorImpl;
__interface JXmlUtilsClass;
typedef System::DelphiInterface<JXmlUtilsClass> _di_JXmlUtilsClass;
__interface JXmlUtils;
typedef System::DelphiInterface<JXmlUtils> _di_JXmlUtils;
class DELPHICLASS TJXmlUtils;
__interface JDeviceClass;
typedef System::DelphiInterface<JDeviceClass> _di_JDeviceClass;
__interface JDevice;
typedef System::DelphiInterface<JDevice> _di_JDevice;
class DELPHICLASS TJDevice;
__interface JDeviceInfoClass;
typedef System::DelphiInterface<JDeviceInfoClass> _di_JDeviceInfoClass;
__interface JDeviceInfo;
typedef System::DelphiInterface<JDeviceInfo> _di_JDeviceInfo;
class DELPHICLASS TJDeviceInfo;
__interface JUTDeviceClass;
typedef System::DelphiInterface<JUTDeviceClass> _di_JUTDeviceClass;
__interface JUTDevice;
typedef System::DelphiInterface<JUTDevice> _di_JUTDevice;
class DELPHICLASS TJUTDevice;
__interface JUTUtdidClass;
typedef System::DelphiInterface<JUTUtdidClass> _di_JUTUtdidClass;
__interface JUTUtdid;
typedef System::DelphiInterface<JUTUtdid> _di_JUTUtdid;
class DELPHICLASS TJUTUtdid;
__interface JUTUtdidHelperClass;
typedef System::DelphiInterface<JUTUtdidHelperClass> _di_JUTUtdidHelperClass;
__interface JUTUtdidHelper;
typedef System::DelphiInterface<JUTUtdidHelper> _di_JUTUtdidHelper;
class DELPHICLASS TJUTUtdidHelper;
__interface JUTUtdidHelper2Class;
typedef System::DelphiInterface<JUTUtdidHelper2Class> _di_JUTUtdidHelper2Class;
__interface JUTUtdidHelper2;
typedef System::DelphiInterface<JUTUtdidHelper2> _di_JUTUtdidHelper2;
class DELPHICLASS TJUTUtdidHelper2;
__interface JAidCallbackClass;
typedef System::DelphiInterface<JAidCallbackClass> _di_JAidCallbackClass;
__interface JAidCallback;
typedef System::DelphiInterface<JAidCallback> _di_JAidCallback;
class DELPHICLASS TJAidCallback;
__interface JAidConstantsClass;
typedef System::DelphiInterface<JAidConstantsClass> _di_JAidConstantsClass;
__interface JAidConstants;
typedef System::DelphiInterface<JAidConstants> _di_JAidConstants;
class DELPHICLASS TJAidConstants;
__interface Jdevice_UTDeviceClass;
typedef System::DelphiInterface<Jdevice_UTDeviceClass> _di_Jdevice_UTDeviceClass;
__interface Jdevice_UTDevice;
typedef System::DelphiInterface<Jdevice_UTDevice> _di_Jdevice_UTDevice;
class DELPHICLASS TJdevice_UTDevice;
__interface JAbstractSequentialListClass;
typedef System::DelphiInterface<JAbstractSequentialListClass> _di_JAbstractSequentialListClass;
__interface JAbstractSequentialList;
typedef System::DelphiInterface<JAbstractSequentialList> _di_JAbstractSequentialList;
class DELPHICLASS TJAbstractSequentialList;
__interface JLinkedListClass;
typedef System::DelphiInterface<JLinkedListClass> _di_JLinkedListClass;
__interface JLinkedList;
typedef System::DelphiInterface<JLinkedList> _di_JLinkedList;
class DELPHICLASS TJLinkedList;
__interface JConnectionReuseStrategyClass;
typedef System::DelphiInterface<JConnectionReuseStrategyClass> _di_JConnectionReuseStrategyClass;
__interface JConnectionReuseStrategy;
typedef System::DelphiInterface<JConnectionReuseStrategy> _di_JConnectionReuseStrategy;
class DELPHICLASS TJConnectionReuseStrategy;
__interface JHeaderClass;
typedef System::DelphiInterface<JHeaderClass> _di_JHeaderClass;
__interface JHeader;
typedef System::DelphiInterface<JHeader> _di_JHeader;
class DELPHICLASS TJHeader;
__interface JHeaderElementClass;
typedef System::DelphiInterface<JHeaderElementClass> _di_JHeaderElementClass;
__interface JHeaderElement;
typedef System::DelphiInterface<JHeaderElement> _di_JHeaderElement;
class DELPHICLASS TJHeaderElement;
__interface JHeaderIteratorClass;
typedef System::DelphiInterface<JHeaderIteratorClass> _di_JHeaderIteratorClass;
__interface JHeaderIterator;
typedef System::DelphiInterface<JHeaderIterator> _di_JHeaderIterator;
class DELPHICLASS TJHeaderIterator;
__interface JHttpConnectionClass;
typedef System::DelphiInterface<JHttpConnectionClass> _di_JHttpConnectionClass;
__interface JHttpConnection;
typedef System::DelphiInterface<JHttpConnection> _di_JHttpConnection;
class DELPHICLASS TJHttpConnection;
__interface JHttpClientConnectionClass;
typedef System::DelphiInterface<JHttpClientConnectionClass> _di_JHttpClientConnectionClass;
__interface JHttpClientConnection;
typedef System::DelphiInterface<JHttpClientConnection> _di_JHttpClientConnection;
class DELPHICLASS TJHttpClientConnection;
__interface JHttpConnectionMetricsClass;
typedef System::DelphiInterface<JHttpConnectionMetricsClass> _di_JHttpConnectionMetricsClass;
__interface JHttpConnectionMetrics;
typedef System::DelphiInterface<JHttpConnectionMetrics> _di_JHttpConnectionMetrics;
class DELPHICLASS TJHttpConnectionMetrics;
__interface JHttpEntityClass;
typedef System::DelphiInterface<JHttpEntityClass> _di_JHttpEntityClass;
__interface JHttpEntity;
typedef System::DelphiInterface<JHttpEntity> _di_JHttpEntity;
class DELPHICLASS TJHttpEntity;
__interface JHttpMessageClass;
typedef System::DelphiInterface<JHttpMessageClass> _di_JHttpMessageClass;
__interface JHttpMessage;
typedef System::DelphiInterface<JHttpMessage> _di_JHttpMessage;
class DELPHICLASS TJHttpMessage;
__interface JHttpRequestClass;
typedef System::DelphiInterface<JHttpRequestClass> _di_JHttpRequestClass;
__interface JHttpRequest;
typedef System::DelphiInterface<JHttpRequest> _di_JHttpRequest;
class DELPHICLASS TJHttpRequest;
__interface JHttpEntityEnclosingRequestClass;
typedef System::DelphiInterface<JHttpEntityEnclosingRequestClass> _di_JHttpEntityEnclosingRequestClass;
__interface JHttpEntityEnclosingRequest;
typedef System::DelphiInterface<JHttpEntityEnclosingRequest> _di_JHttpEntityEnclosingRequest;
class DELPHICLASS TJHttpEntityEnclosingRequest;
__interface JHttpHostClass;
typedef System::DelphiInterface<JHttpHostClass> _di_JHttpHostClass;
__interface JHttpHost;
typedef System::DelphiInterface<JHttpHost> _di_JHttpHost;
class DELPHICLASS TJHttpHost;
__interface JHttpResponseClass;
typedef System::DelphiInterface<JHttpResponseClass> _di_JHttpResponseClass;
__interface JHttpResponse;
typedef System::DelphiInterface<JHttpResponse> _di_JHttpResponse;
class DELPHICLASS TJHttpResponse;
__interface JHttpResponseInterceptorClass;
typedef System::DelphiInterface<JHttpResponseInterceptorClass> _di_JHttpResponseInterceptorClass;
__interface JHttpResponseInterceptor;
typedef System::DelphiInterface<JHttpResponseInterceptor> _di_JHttpResponseInterceptor;
class DELPHICLASS TJHttpResponseInterceptor;
__interface JNameValuePairClass;
typedef System::DelphiInterface<JNameValuePairClass> _di_JNameValuePairClass;
__interface JNameValuePair;
typedef System::DelphiInterface<JNameValuePair> _di_JNameValuePair;
class DELPHICLASS TJNameValuePair;
__interface JProtocolVersionClass;
typedef System::DelphiInterface<JProtocolVersionClass> _di_JProtocolVersionClass;
__interface JProtocolVersion;
typedef System::DelphiInterface<JProtocolVersion> _di_JProtocolVersion;
class DELPHICLASS TJProtocolVersion;
__interface JRequestLineClass;
typedef System::DelphiInterface<JRequestLineClass> _di_JRequestLineClass;
__interface JRequestLine;
typedef System::DelphiInterface<JRequestLine> _di_JRequestLine;
class DELPHICLASS TJRequestLine;
__interface JStatusLineClass;
typedef System::DelphiInterface<JStatusLineClass> _di_JStatusLineClass;
__interface JStatusLine;
typedef System::DelphiInterface<JStatusLine> _di_JStatusLine;
class DELPHICLASS TJStatusLine;
__interface JAuthSchemeClass;
typedef System::DelphiInterface<JAuthSchemeClass> _di_JAuthSchemeClass;
__interface JAuthScheme;
typedef System::DelphiInterface<JAuthScheme> _di_JAuthScheme;
class DELPHICLASS TJAuthScheme;
__interface JAuthSchemeFactoryClass;
typedef System::DelphiInterface<JAuthSchemeFactoryClass> _di_JAuthSchemeFactoryClass;
__interface JAuthSchemeFactory;
typedef System::DelphiInterface<JAuthSchemeFactory> _di_JAuthSchemeFactory;
class DELPHICLASS TJAuthSchemeFactory;
__interface JAuthSchemeRegistryClass;
typedef System::DelphiInterface<JAuthSchemeRegistryClass> _di_JAuthSchemeRegistryClass;
__interface JAuthSchemeRegistry;
typedef System::DelphiInterface<JAuthSchemeRegistry> _di_JAuthSchemeRegistry;
class DELPHICLASS TJAuthSchemeRegistry;
__interface JAuthScopeClass;
typedef System::DelphiInterface<JAuthScopeClass> _di_JAuthScopeClass;
__interface JAuthScope;
typedef System::DelphiInterface<JAuthScope> _di_JAuthScope;
class DELPHICLASS TJAuthScope;
__interface JCredentialsClass;
typedef System::DelphiInterface<JCredentialsClass> _di_JCredentialsClass;
__interface JCredentials;
typedef System::DelphiInterface<JCredentials> _di_JCredentials;
class DELPHICLASS TJCredentials;
__interface JAuthenticationHandlerClass;
typedef System::DelphiInterface<JAuthenticationHandlerClass> _di_JAuthenticationHandlerClass;
__interface JAuthenticationHandler;
typedef System::DelphiInterface<JAuthenticationHandler> _di_JAuthenticationHandler;
class DELPHICLASS TJAuthenticationHandler;
__interface JCookieStoreClass;
typedef System::DelphiInterface<JCookieStoreClass> _di_JCookieStoreClass;
__interface JCookieStore;
typedef System::DelphiInterface<JCookieStore> _di_JCookieStore;
class DELPHICLASS TJCookieStore;
__interface JCredentialsProviderClass;
typedef System::DelphiInterface<JCredentialsProviderClass> _di_JCredentialsProviderClass;
__interface JCredentialsProvider;
typedef System::DelphiInterface<JCredentialsProvider> _di_JCredentialsProvider;
class DELPHICLASS TJCredentialsProvider;
__interface JRedirectHandlerClass;
typedef System::DelphiInterface<JRedirectHandlerClass> _di_JRedirectHandlerClass;
__interface JRedirectHandler;
typedef System::DelphiInterface<JRedirectHandler> _di_JRedirectHandler;
class DELPHICLASS TJRedirectHandler;
__interface JResponseHandlerClass;
typedef System::DelphiInterface<JResponseHandlerClass> _di_JResponseHandlerClass;
__interface JResponseHandler;
typedef System::DelphiInterface<JResponseHandler> _di_JResponseHandler;
class DELPHICLASS TJResponseHandler;
__interface JUserTokenHandlerClass;
typedef System::DelphiInterface<JUserTokenHandlerClass> _di_JUserTokenHandlerClass;
__interface JUserTokenHandler;
typedef System::DelphiInterface<JUserTokenHandler> _di_JUserTokenHandler;
class DELPHICLASS TJUserTokenHandler;
__interface JAbstractHttpMessageClass;
typedef System::DelphiInterface<JAbstractHttpMessageClass> _di_JAbstractHttpMessageClass;
__interface JAbstractHttpMessage;
typedef System::DelphiInterface<JAbstractHttpMessage> _di_JAbstractHttpMessage;
class DELPHICLASS TJAbstractHttpMessage;
__interface JHttpRequestBaseClass;
typedef System::DelphiInterface<JHttpRequestBaseClass> _di_JHttpRequestBaseClass;
__interface JHttpRequestBase;
typedef System::DelphiInterface<JHttpRequestBase> _di_JHttpRequestBase;
class DELPHICLASS TJHttpRequestBase;
__interface JHttpEntityEnclosingRequestBaseClass;
typedef System::DelphiInterface<JHttpEntityEnclosingRequestBaseClass> _di_JHttpEntityEnclosingRequestBaseClass;
__interface JHttpEntityEnclosingRequestBase;
typedef System::DelphiInterface<JHttpEntityEnclosingRequestBase> _di_JHttpEntityEnclosingRequestBase;
class DELPHICLASS TJHttpEntityEnclosingRequestBase;
__interface JHttpPostClass;
typedef System::DelphiInterface<JHttpPostClass> _di_JHttpPostClass;
__interface JHttpPost;
typedef System::DelphiInterface<JHttpPost> _di_JHttpPost;
class DELPHICLASS TJHttpPost;
__interface JHttpUriRequestClass;
typedef System::DelphiInterface<JHttpUriRequestClass> _di_JHttpUriRequestClass;
__interface JHttpUriRequest;
typedef System::DelphiInterface<JHttpUriRequest> _di_JHttpUriRequest;
class DELPHICLASS TJHttpUriRequest;
__interface JClientConnectionManagerClass;
typedef System::DelphiInterface<JClientConnectionManagerClass> _di_JClientConnectionManagerClass;
__interface JClientConnectionManager;
typedef System::DelphiInterface<JClientConnectionManager> _di_JClientConnectionManager;
class DELPHICLASS TJClientConnectionManager;
__interface JClientConnectionRequestClass;
typedef System::DelphiInterface<JClientConnectionRequestClass> _di_JClientConnectionRequestClass;
__interface JClientConnectionRequest;
typedef System::DelphiInterface<JClientConnectionRequest> _di_JClientConnectionRequest;
class DELPHICLASS TJClientConnectionRequest;
__interface JConnectionReleaseTriggerClass;
typedef System::DelphiInterface<JConnectionReleaseTriggerClass> _di_JConnectionReleaseTriggerClass;
__interface JConnectionReleaseTrigger;
typedef System::DelphiInterface<JConnectionReleaseTrigger> _di_JConnectionReleaseTrigger;
class DELPHICLASS TJConnectionReleaseTrigger;
__interface JManagedClientConnectionClass;
typedef System::DelphiInterface<JManagedClientConnectionClass> _di_JManagedClientConnectionClass;
__interface JManagedClientConnection;
typedef System::DelphiInterface<JManagedClientConnection> _di_JManagedClientConnection;
class DELPHICLASS TJManagedClientConnection;
__interface JHttpRouteClass;
typedef System::DelphiInterface<JHttpRouteClass> _di_JHttpRouteClass;
__interface JHttpRoute;
typedef System::DelphiInterface<JHttpRoute> _di_JHttpRoute;
class DELPHICLASS TJHttpRoute;
__interface JHttpRoutePlannerClass;
typedef System::DelphiInterface<JHttpRoutePlannerClass> _di_JHttpRoutePlannerClass;
__interface JHttpRoutePlanner;
typedef System::DelphiInterface<JHttpRoutePlanner> _di_JHttpRoutePlanner;
class DELPHICLASS TJHttpRoutePlanner;
__interface JRouteInfo_LayerTypeClass;
typedef System::DelphiInterface<JRouteInfo_LayerTypeClass> _di_JRouteInfo_LayerTypeClass;
__interface JRouteInfo_LayerType;
typedef System::DelphiInterface<JRouteInfo_LayerType> _di_JRouteInfo_LayerType;
class DELPHICLASS TJRouteInfo_LayerType;
__interface JRouteInfo_TunnelTypeClass;
typedef System::DelphiInterface<JRouteInfo_TunnelTypeClass> _di_JRouteInfo_TunnelTypeClass;
__interface JRouteInfo_TunnelType;
typedef System::DelphiInterface<JRouteInfo_TunnelType> _di_JRouteInfo_TunnelType;
class DELPHICLASS TJRouteInfo_TunnelType;
__interface JSchemeClass;
typedef System::DelphiInterface<JSchemeClass> _di_JSchemeClass;
__interface JScheme;
typedef System::DelphiInterface<JScheme> _di_JScheme;
class DELPHICLASS TJScheme;
__interface JSchemeRegistryClass;
typedef System::DelphiInterface<JSchemeRegistryClass> _di_JSchemeRegistryClass;
__interface JSchemeRegistry;
typedef System::DelphiInterface<JSchemeRegistry> _di_JSchemeRegistry;
class DELPHICLASS TJSchemeRegistry;
__interface JCookieClass;
typedef System::DelphiInterface<JCookieClass> _di_JCookieClass;
__interface JCookie;
typedef System::DelphiInterface<JCookie> _di_JCookie;
class DELPHICLASS TJCookie;
__interface JCookieOriginClass;
typedef System::DelphiInterface<JCookieOriginClass> _di_JCookieOriginClass;
__interface JCookieOrigin;
typedef System::DelphiInterface<JCookieOrigin> _di_JCookieOrigin;
class DELPHICLASS TJCookieOrigin;
__interface JCookieSpecClass;
typedef System::DelphiInterface<JCookieSpecClass> _di_JCookieSpecClass;
__interface JCookieSpec;
typedef System::DelphiInterface<JCookieSpec> _di_JCookieSpec;
class DELPHICLASS TJCookieSpec;
__interface JCookieSpecFactoryClass;
typedef System::DelphiInterface<JCookieSpecFactoryClass> _di_JCookieSpecFactoryClass;
__interface JCookieSpecFactory;
typedef System::DelphiInterface<JCookieSpecFactory> _di_JCookieSpecFactory;
class DELPHICLASS TJCookieSpecFactory;
__interface JCookieSpecRegistryClass;
typedef System::DelphiInterface<JCookieSpecRegistryClass> _di_JCookieSpecRegistryClass;
__interface JCookieSpecRegistry;
typedef System::DelphiInterface<JCookieSpecRegistry> _di_JCookieSpecRegistry;
class DELPHICLASS TJCookieSpecRegistry;
__interface JAbstractHttpEntityClass;
typedef System::DelphiInterface<JAbstractHttpEntityClass> _di_JAbstractHttpEntityClass;
__interface JAbstractHttpEntity;
typedef System::DelphiInterface<JAbstractHttpEntity> _di_JAbstractHttpEntity;
class DELPHICLASS TJAbstractHttpEntity;
__interface JBasicHttpProcessorClass;
typedef System::DelphiInterface<JBasicHttpProcessorClass> _di_JBasicHttpProcessorClass;
__interface JBasicHttpProcessor;
typedef System::DelphiInterface<JBasicHttpProcessor> _di_JBasicHttpProcessor;
class DELPHICLASS TJBasicHttpProcessor;
__interface JHttpContextClass;
typedef System::DelphiInterface<JHttpContextClass> _di_JHttpContextClass;
__interface JHttpContext;
typedef System::DelphiInterface<JHttpContext> _di_JHttpContext;
class DELPHICLASS TJHttpContext;
__interface JHttpProcessorClass;
typedef System::DelphiInterface<JHttpProcessorClass> _di_JHttpProcessorClass;
__interface JHttpProcessor;
typedef System::DelphiInterface<JHttpProcessor> _di_JHttpProcessor;
class DELPHICLASS TJHttpProcessor;
__interface JHttpRequestExecutorClass;
typedef System::DelphiInterface<JHttpRequestExecutorClass> _di_JHttpRequestExecutorClass;
__interface JHttpRequestExecutor;
typedef System::DelphiInterface<JHttpRequestExecutor> _di_JHttpRequestExecutor;
class DELPHICLASS TJHttpRequestExecutor;
__interface Jalipay_JSONExceptionClass;
typedef System::DelphiInterface<Jalipay_JSONExceptionClass> _di_Jalipay_JSONExceptionClass;
__interface Jalipay_JSONException;
typedef System::DelphiInterface<Jalipay_JSONException> _di_Jalipay_JSONException;
class DELPHICLASS TJalipay_JSONException;
__interface Jalipay_aClass;
typedef System::DelphiInterface<Jalipay_aClass> _di_Jalipay_aClass;
__interface Jalipay_a;
typedef System::DelphiInterface<Jalipay_a> _di_Jalipay_a;
class DELPHICLASS TJalipay_a;
__interface Jalipay_bClass;
typedef System::DelphiInterface<Jalipay_bClass> _di_Jalipay_bClass;
__interface Jalipay_b;
typedef System::DelphiInterface<Jalipay_b> _di_Jalipay_b;
class DELPHICLASS TJalipay_b;
__interface Jalipay_b_aClass;
typedef System::DelphiInterface<Jalipay_b_aClass> _di_Jalipay_b_aClass;
__interface Jalipay_b_a;
typedef System::DelphiInterface<Jalipay_b_a> _di_Jalipay_b_a;
class DELPHICLASS TJalipay_b_a;
__interface Jalipay_cClass;
typedef System::DelphiInterface<Jalipay_cClass> _di_Jalipay_cClass;
__interface Jalipay_c;
typedef System::DelphiInterface<Jalipay_c> _di_Jalipay_c;
class DELPHICLASS TJalipay_c;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{94EE6861-F326-489F-8919-E20B39E3D9C1}") JAccountClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Os::_di_JParcelable_Creator __cdecl _GetCREATOR(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Gettype(void) = 0 ;
	HIDESBASE virtual _di_JAccount __cdecl init(Androidapi::Jni::Javatypes::_di_JString name, Androidapi::Jni::Javatypes::_di_JString type_) = 0 /* overload */;
	HIDESBASE virtual _di_JAccount __cdecl init(Androidapi::Jni::Os::_di_JParcel in_) = 0 /* overload */;
	virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject o) = 0 ;
	virtual int __cdecl hashCode(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
	__property Androidapi::Jni::Os::_di_JParcelable_Creator CREATOR = {read=_GetCREATOR};
	__property Androidapi::Jni::Javatypes::_di_JString type = {read=_Gettype};
};

__interface  INTERFACE_UUID("{71476381-8B6E-471F-9189-9857ECD7508C}") JAccount  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getname(void) = 0 ;
	virtual int __cdecl describeContents(void) = 0 ;
	virtual void __cdecl writeToParcel(Androidapi::Jni::Os::_di_JParcel dest, int flags) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString name = {read=_Getname};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAccount : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAccountClass,_di_JAccount> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAccountClass,_di_JAccount>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAccount(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAccountClass,_di_JAccount> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAccount(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{7568C7B7-ADC4-4D9C-8F59-336A2DF1139D}") Ja_iClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{5B183F69-58B8-4058-8F1C-F4456B0BC7D7}") Ja_i  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_i : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_iClass,_di_Ja_i> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_iClass,_di_Ja_i>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_i(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_iClass,_di_Ja_i> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_i(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C0C2DC99-5905-4E41-81EF-3E942FCB680A}") Ja_a_aClass  : public Ja_iClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_a_a __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{27A926E7-18E8-402A-AE6A-154DCCD36E4A}") Ja_a_a  : public Ja_i 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_a_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_aClass,_di_Ja_a_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_aClass,_di_Ja_a_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_a_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_aClass,_di_Ja_a_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_a_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{03F2BA4E-41F6-47D7-B394-ED787422F725}") Ja_bClass  : public Ja_iClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_b __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{CDA876FD-68FE-4F65-9572-E77237E2D1CC}") Ja_b  : public Ja_i 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_bClass,_di_Ja_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_bClass,_di_Ja_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_bClass,_di_Ja_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6AE7D089-7435-400E-AD5B-4F2E079284E8}") Ja_cClass  : public Ja_iClass 
{
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_c __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{17D9A614-D997-4652-827E-D1720F193332}") Ja_c  : public Ja_i 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_c : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_cClass,_di_Ja_c> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_cClass,_di_Ja_c>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_c(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_cClass,_di_Ja_c> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_c(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{11E06558-80E9-4DFE-9CD0-DF334C639DD3}") Ja_dClass  : public Ja_iClass 
{
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_d __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{BD955E5C-DB6E-4BED-95EC-1384817E6193}") Ja_d  : public Ja_i 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_d : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_dClass,_di_Ja_d> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_dClass,_di_Ja_d>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_d(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_dClass,_di_Ja_d> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_d(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A5F52E35-9FA0-4F81-AAF5-84C0FA1D68CC}") Ja_eClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{C45B130D-EDE6-4AC0-A48F-1C27E70D75C6}") Ja_e  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_e : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_eClass,_di_Ja_e> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_eClass,_di_Ja_e>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_e(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_eClass,_di_Ja_e> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_e(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{54D1FF79-1896-48E1-AA04-1C596B671088}") Ja_fClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl b(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
};

__interface  INTERFACE_UUID("{E2175ED2-730A-496C-9E30-FBC3806157DE}") Ja_f  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_f : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_fClass,_di_Ja_f> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_fClass,_di_Ja_f>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_f(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_fClass,_di_Ja_f> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_f(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D7448935-70C0-4B51-9330-481C0E014104}") Ja_gClass  : public Ja_iClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_g __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{31B90300-CFC1-49A4-861B-2A8AA880DBF6}") Ja_g  : public Ja_i 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_g : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_gClass,_di_Ja_g> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_gClass,_di_Ja_g>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_g(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_gClass,_di_Ja_g> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_g(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{BCF53D41-3C7E-4FF3-BE07-FCED58C79191}") Ja_hClass  : public Ja_iClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_h __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{040B7DA8-B07F-436D-8B25-5DE5293F00A1}") Ja_h  : public Ja_i 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_h : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_hClass,_di_Ja_h> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_hClass,_di_Ja_h>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_h(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_hClass,_di_Ja_h> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_h(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5CDA0E9E-C57D-4308-B0E1-95F6A170736E}") Ja_jClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{5068C446-875E-4DF0-A202-62D5F7B19D4C}") Ja_j  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_j : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_jClass,_di_Ja_j> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_jClass,_di_Ja_j>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_j(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_jClass,_di_Ja_j> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_j(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F379F04D-B4EE-4281-A1D5-C7ABB3615A01}") Ja_kClass  : public Ja_iClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_k __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{5C534464-6A37-4063-A622-EFEB058EAE86}") Ja_k  : public Ja_i 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_k : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_kClass,_di_Ja_k> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_kClass,_di_Ja_k>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_k(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_kClass,_di_Ja_k> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_k(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E228FC07-A3BE-4D43-A698-5BA705BF3827}") Ja_lClass  : public Ja_iClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_l __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{DEBE404D-F474-43CB-ACB6-3DA6FFFF9F12}") Ja_l  : public Ja_i 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_l : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_lClass,_di_Ja_l> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_lClass,_di_Ja_l>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_l(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_lClass,_di_Ja_l> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_l(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C3403572-AF93-409B-ADB8-C5DA7DA47516}") Jb_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_Jlang_Class __cdecl a(Androidapi::Jni::Javatypes::_di_Jreflect_Type P1) = 0 /* overload */;
	virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{DB0835A7-FAF5-4020-BF04-94DDEE4DF2B1}") Jb_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJb_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jb_aClass,_di_Jb_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jb_aClass,_di_Jb_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJb_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jb_aClass,_di_Jb_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJb_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{CC5C1403-6D70-4A18-B461-1305A54A680D}") Jcore_HttpExceptionClass  : public Androidapi::Jni::Javatypes::JExceptionClass 
{
	virtual int __cdecl _GetNETWORK_AUTH_ERROR(void) = 0 ;
	virtual int __cdecl _GetNETWORK_CONNECTION_EXCEPTION(void) = 0 ;
	virtual int __cdecl _GetNETWORK_DNS_ERROR(void) = 0 ;
	virtual int __cdecl _GetNETWORK_IO_EXCEPTION(void) = 0 ;
	virtual int __cdecl _GetNETWORK_SCHEDULE_ERROR(void) = 0 ;
	virtual int __cdecl _GetNETWORK_SERVER_EXCEPTION(void) = 0 ;
	virtual int __cdecl _GetNETWORK_SOCKET_EXCEPTION(void) = 0 ;
	virtual int __cdecl _GetNETWORK_SSL_EXCEPTION(void) = 0 ;
	virtual int __cdecl _GetNETWORK_UNAVAILABLE(void) = 0 ;
	virtual int __cdecl _GetNETWORK_UNKNOWN_ERROR(void) = 0 ;
	HIDESBASE virtual _di_Jcore_HttpException __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jcore_HttpException __cdecl init(Androidapi::Jni::Javatypes::_di_JInteger P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	__property int NETWORK_AUTH_ERROR = {read=_GetNETWORK_AUTH_ERROR};
	__property int NETWORK_CONNECTION_EXCEPTION = {read=_GetNETWORK_CONNECTION_EXCEPTION};
	__property int NETWORK_DNS_ERROR = {read=_GetNETWORK_DNS_ERROR};
	__property int NETWORK_IO_EXCEPTION = {read=_GetNETWORK_IO_EXCEPTION};
	__property int NETWORK_SCHEDULE_ERROR = {read=_GetNETWORK_SCHEDULE_ERROR};
	__property int NETWORK_SERVER_EXCEPTION = {read=_GetNETWORK_SERVER_EXCEPTION};
	__property int NETWORK_SOCKET_EXCEPTION = {read=_GetNETWORK_SOCKET_EXCEPTION};
	__property int NETWORK_SSL_EXCEPTION = {read=_GetNETWORK_SSL_EXCEPTION};
	__property int NETWORK_UNAVAILABLE = {read=_GetNETWORK_UNAVAILABLE};
	__property int NETWORK_UNKNOWN_ERROR = {read=_GetNETWORK_UNKNOWN_ERROR};
};

__interface  INTERFACE_UUID("{D1DE0FA6-F296-4A94-AAA5-F76E63971B65}") Jcore_HttpException  : public Androidapi::Jni::Javatypes::JException 
{
	virtual int __cdecl getCode(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMsg(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_HttpException : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_HttpExceptionClass,_di_Jcore_HttpException> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_HttpExceptionClass,_di_Jcore_HttpException>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_HttpException(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_HttpExceptionClass,_di_Jcore_HttpException> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_HttpException(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A44A1138-C87B-4602-A8CD-55E65C69B940}") JHttpUrlHeaderClass  : public Androidapi::Jni::Javatypes::JSerializableClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getHead(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl getHeaders(void) = 0 ;
	virtual _di_JHttpUrlHeader __cdecl init(void) = 0 ;
	virtual void __cdecl setHead(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual void __cdecl setHeaders(Androidapi::Jni::Javatypes::_di_JMap P1) = 0 ;
};

__interface  INTERFACE_UUID("{25EC8E4F-5B26-4310-9F11-D4D77968CAB9}") JHttpUrlHeader  : public Androidapi::Jni::Javatypes::JSerializable 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpUrlHeader : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpUrlHeaderClass,_di_JHttpUrlHeader> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpUrlHeaderClass,_di_JHttpUrlHeader>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpUrlHeader(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpUrlHeaderClass,_di_JHttpUrlHeader> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpUrlHeader(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2D4B3926-4AF3-4F42-918C-8C1E55750E7E}") JRpcExceptionClass  : public Androidapi::Jni::Javatypes::JRuntimeExceptionClass 
{
	virtual int __cdecl getCode(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMsg(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getOperationType(void) = 0 ;
	HIDESBASE virtual _di_JRpcException __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	HIDESBASE virtual _di_JRpcException __cdecl init(Androidapi::Jni::Javatypes::_di_JInteger P1, Androidapi::Jni::Javatypes::_di_JThrowable P2) = 0 /* overload */;
	HIDESBASE virtual _di_JRpcException __cdecl init(Androidapi::Jni::Javatypes::_di_JInteger P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	HIDESBASE virtual _di_JRpcException __cdecl init(Androidapi::Jni::Javatypes::_di_JInteger P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JThrowable P3) = 0 /* overload */;
	virtual void __cdecl setOperationType(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{048EBE7A-C8FE-4A36-A497-3468F87F19A7}") JRpcException  : public Androidapi::Jni::Javatypes::JRuntimeException 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRpcException : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcExceptionClass,_di_JRpcException> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcExceptionClass,_di_JRpcException>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRpcException(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcExceptionClass,_di_JRpcException> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRpcException(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{00913673-C45A-4575-9C03-113FDAE052F4}") JvClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(void) = 0 ;
};

__interface  INTERFACE_UUID("{559CC000-9694-4450-87CE-5706C10AF8C8}") Jv  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJv : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JvClass,_di_Jv> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JvClass,_di_Jv>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJv(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JvClass,_di_Jv> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJv(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2AF77FBE-1B73-4D18-B8E1-AE369686E930}") Jcore_aClass  : public JvClass 
{
	virtual _di_Jcore_a __cdecl init(Androidapi::Jni::Javatypes::_di_JMethod P1, int P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P4, Androidapi::Jni::Javatypes::_di_JString P5, bool P6) = 0 ;
};

__interface  INTERFACE_UUID("{433F3D5D-A5AF-437A-9702-DB69E7BBA40C}") Jcore_a  : public Jv 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl _Getb(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getc(void) = 0 ;
	virtual int __cdecl _Getd(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Gete(void) = 0 ;
	virtual bool __cdecl _Getf(void) = 0 ;
	__property Androidapi::Jnibridge::TJavaArray__1<System::Byte> * b = {read=_Getb};
	__property Androidapi::Jni::Javatypes::_di_JString c = {read=_Getc};
	__property int d = {read=_Getd};
	__property Androidapi::Jni::Javatypes::_di_JString e = {read=_Gete};
	__property bool f = {read=_Getf};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_aClass,_di_Jcore_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_aClass,_di_Jcore_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_aClass,_di_Jcore_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{0680654E-998F-45E1-B8E0-0027AAF1FE25}") Jcore_a_cClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(void) = 0 ;
};

__interface  INTERFACE_UUID("{651F3B1C-E255-4B3D-873B-F2EB42F65A2A}") Jcore_a_c  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_a_c : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_cClass,_di_Jcore_a_c> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_cClass,_di_Jcore_a_c>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_a_c(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_cClass,_di_Jcore_a_c> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_a_c(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D67C467B-DA8F-44DC-8EE3-C4D57BF601E7}") Jcore_a_aClass  : public Jcore_a_cClass 
{
	virtual _di_Jcore_a_a __cdecl init(Androidapi::Jni::Javatypes::_di_Jreflect_Type P1, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P2) = 0 ;
};

__interface  INTERFACE_UUID("{A1B7D4A8-3C6A-4CF0-9CB5-B1F32A5400E5}") Jcore_a_a  : public Jcore_a_c 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl _Getb(void) = 0 ;
	__property Androidapi::Jnibridge::TJavaArray__1<System::Byte> * b = {read=_Getb};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_a_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_aClass,_di_Jcore_a_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_aClass,_di_Jcore_a_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_a_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_aClass,_di_Jcore_a_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_a_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{31D9A22F-3C7E-4423-A9A0-7A072A822579}") Jcore_a_fClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{21A776EB-DA97-4A31-8F77-2742A578F62F}") Jcore_a_f  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_a_f : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_fClass,_di_Jcore_a_f> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_fClass,_di_Jcore_a_f>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_a_f(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_fClass,_di_Jcore_a_f> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_a_f(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{09EE5263-5844-4354-877B-387E4B187D12}") Jcore_a_bClass  : public Jcore_a_fClass 
{
	virtual _di_Jcore_a_b __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JObject P2) = 0 ;
};

__interface  INTERFACE_UUID("{6D06CCFC-0D99-479D-A01A-187CFEA47984}") Jcore_a_b  : public Jcore_a_f 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl _Getb(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JObject b = {read=_Getb};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_a_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_bClass,_di_Jcore_a_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_bClass,_di_Jcore_a_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_a_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_bClass,_di_Jcore_a_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_a_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2C63E871-F9D1-4312-81EA-8CF7B0E3CB5D}") Jcore_a_dClass  : public Jcore_a_aClass 
{
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(void) = 0 ;
	HIDESBASE virtual _di_Jcore_a_d __cdecl init(Androidapi::Jni::Javatypes::_di_Jreflect_Type P1, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P2) = 0 ;
};

__interface  INTERFACE_UUID("{C728C7EF-A315-446D-99D8-26C10F8B7C28}") Jcore_a_d  : public Jcore_a_a 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_a_d : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_dClass,_di_Jcore_a_d> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_dClass,_di_Jcore_a_d>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_a_d(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_dClass,_di_Jcore_a_d> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_a_d(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{452CE4F9-FF27-463D-A095-0885BBCBA9B2}") Jcore_a_eClass  : public Jcore_a_bClass 
{
	HIDESBASE virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl a(void) = 0 /* overload */;
	HIDESBASE virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jcore_a_e __cdecl init(int P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JObject P3) = 0 ;
};

__interface  INTERFACE_UUID("{50E55CBE-350D-41F3-8303-5A4965EB56F0}") Jcore_a_e  : public Jcore_a_b 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_a_e : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_eClass,_di_Jcore_a_e> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_eClass,_di_Jcore_a_e>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_a_e(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_a_eClass,_di_Jcore_a_e> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_a_e(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6B2A835B-EA0F-4B81-B74D-C86EFE1C487A}") JaaClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl b(void) = 0 ;
	virtual bool __cdecl c(void) = 0 ;
	HIDESBASE virtual _di_Jaa __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{DC05E183-7B72-4F9B-8ECE-8A52D2C24868}") Jaa  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJaa : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JaaClass,_di_Jaa> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JaaClass,_di_Jaa>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJaa(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JaaClass,_di_Jaa> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJaa(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{21277B57-2C09-46BC-B837-37649FA1C1CB}") JabClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JFuture __cdecl a(_di_Jt P1) = 0 ;
};

__interface  INTERFACE_UUID("{7BD3A333-433F-4D89-9ABD-D676B0938757}") Jab  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJab : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JabClass,_di_Jab> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JabClass,_di_Jab>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJab(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JabClass,_di_Jab> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJab(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{3AFBD0FC-3CDD-42FF-AEBF-58A31833CEED}") JacClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{87DA54EC-F1B1-40BD-BDC8-2F8F7AFFFCBC}") Jac  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJac : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JacClass,_di_Jac> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JacClass,_di_Jac>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJac(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JacClass,_di_Jac> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJac(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B403C5C7-95AC-48E6-9F32-FE0EF330235F}") JHttpRequestRetryHandlerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl retryRequest(Androidapi::Jni::Javatypes::_di_JIOException exception, int executionCount, _di_JHttpContext context) = 0 ;
};

__interface  INTERFACE_UUID("{52DE82C7-6B53-417A-9FF6-5A38D0EF13F6}") JHttpRequestRetryHandler  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpRequestRetryHandler : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestRetryHandlerClass,_di_JHttpRequestRetryHandler> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestRetryHandlerClass,_di_JHttpRequestRetryHandler>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpRequestRetryHandler(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestRetryHandlerClass,_di_JHttpRequestRetryHandler> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpRequestRetryHandler(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{62DD5DFC-7599-4818-A699-67047CFE19D2}") Jcore_adClass  : public JHttpRequestRetryHandlerClass 
{
	virtual _di_Jcore_ad __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{2E521FB8-B2BB-44B6-854B-0BABB6DC2957}") Jcore_ad  : public JHttpRequestRetryHandler 
{
	virtual bool __cdecl retryRequest(Androidapi::Jni::Javatypes::_di_JIOException P1, int P2, _di_JHttpContext P3) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_ad : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_adClass,_di_Jcore_ad> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_adClass,_di_Jcore_ad>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_ad(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_adClass,_di_Jcore_ad> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_ad(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1518970D-DC32-430A-9928-1CB003312A3D}") JHttpClientClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual _di_JHttpResponse __cdecl execute(_di_JHttpUriRequest request) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpUriRequest request, _di_JResponseHandler responseHandler) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpUriRequest request, _di_JResponseHandler responseHandler, _di_JHttpContext context) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpHost target, _di_JHttpRequest request, _di_JResponseHandler responseHandler) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{D6C5F348-AEB8-4054-86A8-9A0800B017BF}") JHttpClient  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual _di_JHttpResponse __cdecl execute(_di_JHttpUriRequest request, _di_JHttpContext context) = 0 /* overload */;
	virtual _di_JHttpResponse __cdecl execute(_di_JHttpHost target, _di_JHttpRequest request) = 0 /* overload */;
	virtual _di_JHttpResponse __cdecl execute(_di_JHttpHost target, _di_JHttpRequest request, _di_JHttpContext context) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpHost target, _di_JHttpRequest request, _di_JResponseHandler responseHandler, _di_JHttpContext context) = 0 /* overload */;
	virtual _di_JClientConnectionManager __cdecl getConnectionManager(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpClient : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpClientClass,_di_JHttpClient> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpClientClass,_di_JHttpClient>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpClient(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpClientClass,_di_JHttpClient> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpClient(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{41D40643-A91C-4A38-94CB-7EDCEDA4F9DC}") Jcore_bClass  : public JHttpClientClass 
{
	virtual __int64 __cdecl _Geta(void) = 0 ;
	virtual _di_JHttpRequestInterceptor __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(_di_JHttpUriRequest P1) = 0 /* overload */;
	virtual _di_Jb_b __cdecl a(_di_Jcore_b P1) = 0 /* overload */;
	virtual _di_JAbstractHttpEntity __cdecl a(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JInputStream __cdecl a(_di_JHttpEntity P1) = 0 /* overload */;
	virtual _di_Jcore_b __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual void __cdecl a(_di_JHttpRequest P1) = 0 /* overload */;
	virtual __int64 __cdecl b(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual void __cdecl b(_di_JHttpRequest P1) = 0 /* overload */;
	__property __int64 a = {read=_Geta};
};

__interface  INTERFACE_UUID("{C02AA9F8-77E5-4AEB-AD03-2B25DEBED121}") Jcore_b  : public JHttpClient 
{
	virtual void __cdecl a(_di_JHttpRequestRetryHandler P1) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpResponse __cdecl execute(_di_JHttpUriRequest P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpUriRequest P1, _di_JResponseHandler P2) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpResponse __cdecl execute(_di_JHttpHost P1, _di_JHttpRequest P2) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpResponse __cdecl execute(_di_JHttpUriRequest P1, _di_JHttpContext P2) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpResponse __cdecl execute(_di_JHttpHost P1, _di_JHttpRequest P2, _di_JHttpContext P3) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpUriRequest P1, _di_JResponseHandler P2, _di_JHttpContext P3) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpHost P1, _di_JHttpRequest P2, _di_JResponseHandler P3) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpHost P1, _di_JHttpRequest P2, _di_JResponseHandler P3, _di_JHttpContext P4) = 0 /* overload */;
	HIDESBASE virtual _di_JClientConnectionManager __cdecl getConnectionManager(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_bClass,_di_Jcore_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_bClass,_di_Jcore_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_bClass,_di_Jcore_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{AC693EDF-C357-4395-A727-8080798F14F3}") JHttpRequestInterceptorClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{7D05F1C1-6494-4FD9-B00C-3C3561CB101E}") JHttpRequestInterceptor  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl process(_di_JHttpRequest request, _di_JHttpContext context) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpRequestInterceptor : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestInterceptorClass,_di_JHttpRequestInterceptor> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestInterceptorClass,_di_JHttpRequestInterceptor>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpRequestInterceptor(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestInterceptorClass,_di_JHttpRequestInterceptor> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpRequestInterceptor(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{137E4B5E-63FF-4A37-BFBC-64A3305C69BB}") Jcore_b_aClass  : public JHttpRequestInterceptorClass 
{
	virtual _di_Jcore_b_a __cdecl init(_di_Jcore_b P1, System::Byte P2) = 0 ;
};

__interface  INTERFACE_UUID("{56E1A6DA-BE2B-40B9-B60A-D7762F57A420}") Jcore_b_a  : public JHttpRequestInterceptor 
{
	HIDESBASE virtual void __cdecl process(_di_JHttpRequest P1, _di_JHttpContext P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_b_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_b_aClass,_di_Jcore_b_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_b_aClass,_di_Jcore_b_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_b_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_b_aClass,_di_Jcore_b_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_b_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{901AE9E5-267D-4F9A-8B9C-C055B6F1FDF0}") Jb_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{6F31450D-1E50-4196-8808-B83917BCBDF5}") Jb_b  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJb_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jb_bClass,_di_Jb_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jb_bClass,_di_Jb_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJb_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jb_bClass,_di_Jb_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJb_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9A02BE86-FD6C-4789-AAC6-8AD474F6A26B}") Jcore_cClass  : public JHttpRequestInterceptorClass 
{
	virtual void __cdecl process(_di_JHttpRequest P1, _di_JHttpContext P2) = 0 ;
};

__interface  INTERFACE_UUID("{25172D82-BB57-4549-AFAB-B2B19BE3AAFF}") Jcore_c  : public JHttpRequestInterceptor 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_c : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_cClass,_di_Jcore_c> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_cClass,_di_Jcore_c>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_c(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_cClass,_di_Jcore_c> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_c(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{AD945AB5-E3FC-4A26-A03B-6DF66BFFCDE3}") JAbstractHttpClientClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl addRequestInterceptor(_di_JHttpRequestInterceptor itcp) = 0 /* overload */;
	virtual void __cdecl addRequestInterceptor(_di_JHttpRequestInterceptor itcp, int index) = 0 /* overload */;
	virtual void __cdecl clearResponseInterceptors(void) = 0 ;
	virtual _di_JHttpResponse __cdecl execute(_di_JHttpUriRequest request) = 0 /* overload */;
	virtual _di_JHttpResponse __cdecl execute(_di_JHttpUriRequest request, _di_JHttpContext context) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpUriRequest request, _di_JResponseHandler responseHandler, _di_JHttpContext context) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpHost target, _di_JHttpRequest request, _di_JResponseHandler responseHandler) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpHost target, _di_JHttpRequest request, _di_JResponseHandler responseHandler, _di_JHttpContext context) = 0 /* overload */;
	virtual _di_JConnectionReuseStrategy __cdecl getConnectionReuseStrategy(void) = 0 ;
	virtual _di_JCookieSpecRegistry __cdecl getCookieSpecs(void) = 0 ;
	virtual _di_JCookieStore __cdecl getCookieStore(void) = 0 ;
	virtual _di_JAuthenticationHandler __cdecl getProxyAuthenticationHandler(void) = 0 ;
	virtual _di_JRedirectHandler __cdecl getRedirectHandler(void) = 0 ;
	virtual _di_JHttpRequestExecutor __cdecl getRequestExecutor(void) = 0 ;
	virtual int __cdecl getResponseInterceptorCount(void) = 0 ;
	virtual _di_JHttpRoutePlanner __cdecl getRoutePlanner(void) = 0 ;
	virtual _di_JAuthenticationHandler __cdecl getTargetAuthenticationHandler(void) = 0 ;
	virtual void __cdecl removeResponseInterceptorByClass(Androidapi::Jni::Javatypes::_di_Jlang_Class clazz) = 0 ;
	virtual void __cdecl setAuthSchemes(_di_JAuthSchemeRegistry authSchemeRegistry) = 0 ;
	virtual void __cdecl setCookieSpecs(_di_JCookieSpecRegistry cookieSpecRegistry) = 0 ;
	virtual void __cdecl setKeepAliveStrategy(_di_JConnectionKeepAliveStrategy keepAliveStrategy) = 0 ;
	virtual void __cdecl setProxyAuthenticationHandler(_di_JAuthenticationHandler proxyAuthHandler) = 0 ;
	virtual void __cdecl setTargetAuthenticationHandler(_di_JAuthenticationHandler targetAuthHandler) = 0 ;
	virtual void __cdecl setUserTokenHandler(_di_JUserTokenHandler userTokenHandler) = 0 ;
};

__interface  INTERFACE_UUID("{1D643550-B548-4E03-8F8E-50B16162D05F}") JAbstractHttpClient  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl addResponseInterceptor(_di_JHttpResponseInterceptor itcp) = 0 /* overload */;
	virtual void __cdecl addResponseInterceptor(_di_JHttpResponseInterceptor itcp, int index) = 0 /* overload */;
	virtual void __cdecl clearRequestInterceptors(void) = 0 ;
	virtual _di_JHttpResponse __cdecl execute(_di_JHttpHost target, _di_JHttpRequest request) = 0 /* overload */;
	virtual _di_JHttpResponse __cdecl execute(_di_JHttpHost target, _di_JHttpRequest request, _di_JHttpContext context) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpUriRequest request, _di_JResponseHandler responseHandler) = 0 /* overload */;
	virtual _di_JAuthSchemeRegistry __cdecl getAuthSchemes(void) = 0 ;
	virtual _di_JConnectionKeepAliveStrategy __cdecl getConnectionKeepAliveStrategy(void) = 0 ;
	virtual _di_JClientConnectionManager __cdecl getConnectionManager(void) = 0 ;
	virtual _di_JCredentialsProvider __cdecl getCredentialsProvider(void) = 0 ;
	virtual _di_JHttpRequestRetryHandler __cdecl getHttpRequestRetryHandler(void) = 0 ;
	virtual _di_JHttpRequestInterceptor __cdecl getRequestInterceptor(int index) = 0 ;
	virtual int __cdecl getRequestInterceptorCount(void) = 0 ;
	virtual _di_JHttpResponseInterceptor __cdecl getResponseInterceptor(int index) = 0 ;
	virtual _di_JUserTokenHandler __cdecl getUserTokenHandler(void) = 0 ;
	virtual void __cdecl removeRequestInterceptorByClass(Androidapi::Jni::Javatypes::_di_Jlang_Class clazz) = 0 ;
	virtual void __cdecl setCookieStore(_di_JCookieStore cookieStore) = 0 ;
	virtual void __cdecl setCredentialsProvider(_di_JCredentialsProvider credsProvider) = 0 ;
	virtual void __cdecl setHttpRequestRetryHandler(_di_JHttpRequestRetryHandler retryHandler) = 0 ;
	virtual void __cdecl setRedirectHandler(_di_JRedirectHandler redirectHandler) = 0 ;
	virtual void __cdecl setReuseStrategy(_di_JConnectionReuseStrategy reuseStrategy) = 0 ;
	virtual void __cdecl setRoutePlanner(_di_JHttpRoutePlanner routePlanner) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAbstractHttpClient : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractHttpClientClass,_di_JAbstractHttpClient> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractHttpClientClass,_di_JAbstractHttpClient>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAbstractHttpClient(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractHttpClientClass,_di_JAbstractHttpClient> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAbstractHttpClient(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{383EFA2F-3248-4CAA-AA02-B899B41E9871}") JDefaultHttpClientClass  : public JAbstractHttpClientClass 
{
	HIDESBASE virtual _di_JDefaultHttpClient __cdecl init(void) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{AA8EEF9F-1825-44AF-B12E-368C6984C2F4}") JDefaultHttpClient  : public JAbstractHttpClient 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDefaultHttpClient : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDefaultHttpClientClass,_di_JDefaultHttpClient> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDefaultHttpClientClass,_di_JDefaultHttpClient>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDefaultHttpClient(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDefaultHttpClientClass,_di_JDefaultHttpClient> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDefaultHttpClient(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{7D18A826-16FC-412D-95F4-6B07FC6AF20B}") Jcore_dClass  : public JDefaultHttpClientClass 
{
	
};

__interface  INTERFACE_UUID("{0B650DAE-384B-43CC-93FC-F75D1241E409}") Jcore_d  : public JDefaultHttpClient 
{
	virtual _di_JConnectionKeepAliveStrategy __cdecl createConnectionKeepAliveStrategy(void) = 0 ;
	virtual _di_JHttpContext __cdecl createHttpContext(void) = 0 ;
	virtual _di_JBasicHttpProcessor __cdecl createHttpProcessor(void) = 0 ;
	virtual _di_JRedirectHandler __cdecl createRedirectHandler(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_d : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_dClass,_di_Jcore_d> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_dClass,_di_Jcore_d>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_d(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_dClass,_di_Jcore_d> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_d(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{306A4D9D-8D8E-49FB-A9FE-A61611A28FB6}") JDefaultRedirectHandlerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JDefaultRedirectHandler __cdecl init(void) = 0 ;
	virtual Androidapi::Jni::Java::Net::_di_JURI __cdecl getLocationURI(_di_JHttpResponse response, _di_JHttpContext context) = 0 ;
	virtual bool __cdecl isRedirectRequested(_di_JHttpResponse response, _di_JHttpContext context) = 0 ;
};

__interface  INTERFACE_UUID("{6F5C4D13-49CC-4066-A2CB-735773D393A1}") JDefaultRedirectHandler  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDefaultRedirectHandler : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDefaultRedirectHandlerClass,_di_JDefaultRedirectHandler> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDefaultRedirectHandlerClass,_di_JDefaultRedirectHandler>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDefaultRedirectHandler(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDefaultRedirectHandlerClass,_di_JDefaultRedirectHandler> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDefaultRedirectHandler(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{754FC187-639D-4A0A-8179-522059917CF4}") Jcore_eClass  : public JDefaultRedirectHandlerClass 
{
	HIDESBASE virtual _di_Jcore_e __cdecl init(_di_Jcore_d P1) = 0 ;
};

__interface  INTERFACE_UUID("{429EC2D4-B5FA-4D0F-B0A9-119FD061AD05}") Jcore_e  : public JDefaultRedirectHandler 
{
	virtual _di_Jcore_d __cdecl _Getb(void) = 0 ;
	virtual bool __cdecl isRedirectRequested(_di_JHttpResponse P1, _di_JHttpContext P2) = 0 ;
	__property _di_Jcore_d b = {read=_Getb};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_e : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_eClass,_di_Jcore_e> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_eClass,_di_Jcore_e>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_e(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_eClass,_di_Jcore_e> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_e(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{EB448F9B-4A6B-49B8-9BCA-9A907DE72D64}") JConnectionKeepAliveStrategyClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{25479F70-1E68-4437-B78D-EECCC6FBC3EA}") JConnectionKeepAliveStrategy  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual __int64 __cdecl getKeepAliveDuration(_di_JHttpResponse response, _di_JHttpContext context) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJConnectionKeepAliveStrategy : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConnectionKeepAliveStrategyClass,_di_JConnectionKeepAliveStrategy> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConnectionKeepAliveStrategyClass,_di_JConnectionKeepAliveStrategy>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJConnectionKeepAliveStrategy(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConnectionKeepAliveStrategyClass,_di_JConnectionKeepAliveStrategy> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJConnectionKeepAliveStrategy(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{176A3FD8-87C0-49C3-B7C7-1C04308AF51B}") Jcore_fClass  : public JConnectionKeepAliveStrategyClass 
{
	virtual _di_Jcore_f __cdecl init(_di_Jcore_d P1) = 0 ;
};

__interface  INTERFACE_UUID("{D133BC4C-81D0-461B-8661-579C2A90A0E2}") Jcore_f  : public JConnectionKeepAliveStrategy 
{
	HIDESBASE virtual __int64 __cdecl getKeepAliveDuration(_di_JHttpResponse P1, _di_JHttpContext P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_f : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_fClass,_di_Jcore_f> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_fClass,_di_Jcore_f>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_f(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_fClass,_di_Jcore_f> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_f(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{DA462C8E-ADCE-4341-A987-52C6C4960963}") Jcore_gClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(void) = 0 ;
	virtual _di_Jab __cdecl b(void) = 0 ;
	virtual _di_Jaa __cdecl c(void) = 0 ;
	virtual bool __cdecl d(void) = 0 ;
};

__interface  INTERFACE_UUID("{23B51343-97D9-46C3-A3DA-1CAE81D9C149}") Jcore_g  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_g : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_gClass,_di_Jcore_g> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_gClass,_di_Jcore_g>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_g(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_gClass,_di_Jcore_g> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_g(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B0089B98-4A7C-42C5-87D6-D7129976C968}") Jcore_wClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1, _di_Jaa P2) = 0 ;
	HIDESBASE virtual _di_Jcore_w __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{3174DB2D-DB43-4B87-B207-3894FFF57402}") Jcore_w  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_w : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_wClass,_di_Jcore_w> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_wClass,_di_Jcore_w>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_w(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_wClass,_di_Jcore_w> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_w(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1307B170-53CE-4302-8E3E-32DD2FAA4626}") Jcore_hClass  : public Jcore_wClass 
{
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1, _di_Jaa P2) = 0 /* overload */;
	HIDESBASE virtual _di_Jcore_h __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{FC40A208-0425-46BB-B629-112BCAD4EC86}") Jcore_h  : public Jcore_w 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_h : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_hClass,_di_Jcore_h> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_hClass,_di_Jcore_h>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_h(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_hClass,_di_Jcore_h> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_h(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{91A6DF27-190A-4836-96E9-D0E338E2C19F}") Jcore_iClass  : public Jcore_gClass 
{
	virtual _di_Jcore_i __cdecl init(_di_Jcore_h P1, _di_Jaa P2) = 0 ;
};

__interface  INTERFACE_UUID("{4D6E9C9C-3CBE-4CA4-A3A5-BCA3A3BBDE23}") Jcore_i  : public Jcore_g 
{
	virtual _di_Jcore_h __cdecl _Getb(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(void) = 0 ;
	virtual _di_Jab __cdecl b(void) = 0 ;
	virtual _di_Jaa __cdecl c(void) = 0 ;
	virtual bool __cdecl d(void) = 0 ;
	__property _di_Jcore_h b = {read=_Getb};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_i : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_iClass,_di_Jcore_i> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_iClass,_di_Jcore_i>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_i(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_iClass,_di_Jcore_i> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_i(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{4CD1A5D4-BDF3-4227-AC1A-7ECD65014280}") Jcore_jClass  : public Jcore_aClass 
{
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(void) = 0 ;
	HIDESBASE virtual _di_Jcore_j __cdecl init(_di_Jcore_g P1, Androidapi::Jni::Javatypes::_di_JMethod P2, int P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P5, bool P6) = 0 ;
};

__interface  INTERFACE_UUID("{DBA8BC7D-1C07-42FD-9AB8-0240D9911C36}") Jcore_j  : public Jcore_a 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_j : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_jClass,_di_Jcore_j> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_jClass,_di_Jcore_j>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_j(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_jClass,_di_Jcore_j> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_j(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{12DA9D67-D06A-4D9D-AA19-1799B0CABF30}") Jcore_kClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual __int64 __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{90F74E0F-BB34-40CD-8C29-96D3D9F9C0C8}") Jcore_k  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_k : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_kClass,_di_Jcore_k> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_kClass,_di_Jcore_k>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_k(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_kClass,_di_Jcore_k> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_k(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{3EDA42B8-72D9-4467-B968-E1FFF5507152}") Jk_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_Jk_a __cdecl init(int P1, int P2, int P3) = 0 ;
};

__interface  INTERFACE_UUID("{7F91D286-ECBC-424C-9B67-3D3139EFCE9E}") Jk_a  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl _Getb(void) = 0 ;
	virtual int __cdecl _Getc(void) = 0 ;
	__property int b = {read=_Getb};
	__property int c = {read=_Getc};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJk_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jk_aClass,_di_Jk_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jk_aClass,_di_Jk_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJk_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jk_aClass,_di_Jk_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJk_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{60F15222-2456-4882-8D5C-E015F83634B2}") Jcore_lClass  : public JabClass 
{
	HIDESBASE virtual _di_Jcore_l __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{886C8361-101A-4D42-B35A-CB36835F5822}") Jcore_l  : public Jab 
{
	virtual _di_Jcore_b __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(__int64 P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JFuture __cdecl a(_di_Jt P1) = 0 /* overload */;
	virtual void __cdecl b(__int64 P1) = 0 ;
	virtual void __cdecl c(__int64 P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_l : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_lClass,_di_Jcore_l> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_lClass,_di_Jcore_l>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_l(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_lClass,_di_Jcore_l> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_l(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{933001EB-A47E-462A-A272-FBCD4DD2EA0F}") JFutureTaskClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JFutureTask __cdecl init(Androidapi::Jni::Javatypes::_di_JCallable callable) = 0 /* overload */;
	HIDESBASE virtual _di_JFutureTask __cdecl init(Androidapi::Jni::Javatypes::_di_JRunnable runnable, Androidapi::Jni::Javatypes::_di_JObject result) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl get(__int64 timeout, Androidapi::Jni::Javatypes::_di_JTimeUnit unit_) = 0 /* overload */;
	virtual bool __cdecl isCancelled(void) = 0 ;
};

__interface  INTERFACE_UUID("{456B6C2A-2B64-4D69-B899-D7093B2D2A18}") JFutureTask  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual bool __cdecl cancel(bool mayInterruptIfRunning) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl get(void) = 0 /* overload */;
	virtual bool __cdecl isDone(void) = 0 ;
	virtual void __cdecl run(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJFutureTask : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFutureTaskClass,_di_JFutureTask> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFutureTaskClass,_di_JFutureTask>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJFutureTask(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFutureTaskClass,_di_JFutureTask> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJFutureTask(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D9DD635C-D487-41DB-8372-C9D12945F0B6}") Jcore_mClass  : public JFutureTaskClass 
{
	HIDESBASE virtual _di_Jcore_m __cdecl init(_di_Jcore_l P1, Androidapi::Jni::Javatypes::_di_JCallable P2, _di_Jq P3) = 0 ;
};

__interface  INTERFACE_UUID("{D60966BF-A17D-44FA-93C4-AAB864573C0E}") Jcore_m  : public JFutureTask 
{
	virtual _di_Jcore_l __cdecl _Getb(void) = 0 ;
	virtual void __cdecl done(void) = 0 ;
	__property _di_Jcore_l b = {read=_Getb};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_m : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_mClass,_di_Jcore_m> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_mClass,_di_Jcore_m>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_m(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_mClass,_di_Jcore_m> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_m(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A13EB348-E84B-4A97-830A-88B1DC12AD55}") Jcore_nClass  : public Androidapi::Jni::Javautil::JThreadFactoryClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JThread __cdecl newThread(Androidapi::Jni::Javatypes::_di_JRunnable P1) = 0 ;
};

__interface  INTERFACE_UUID("{E632A14E-48A8-4B8E-90A9-92FFAFBCB1B5}") Jcore_n  : public Androidapi::Jni::Javautil::JThreadFactory 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_n : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_nClass,_di_Jcore_n> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_nClass,_di_Jcore_n>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_n(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_nClass,_di_Jcore_n> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_n(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{DB463AE8-4929-46F3-89F0-94C1F0F18E01}") JtClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_Jt __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{A2C03811-76CC-4AAB-839F-12EFF8A56D4B}") Jt  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual _di_Jac __cdecl f(void) = 0 ;
	virtual void __cdecl g(void) = 0 ;
	virtual bool __cdecl h(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJt : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JtClass,_di_Jt> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JtClass,_di_Jt>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJt(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JtClass,_di_Jt> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJt(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{ED2B7506-5AB4-426B-812C-D39E50629E91}") Jcore_oClass  : public JtClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual void __cdecl a(_di_JHeader P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 /* overload */;
	virtual void __cdecl a(bool P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl b(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JArrayList __cdecl d(void) = 0 ;
	virtual bool __cdecl e(void) = 0 ;
	virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual int __cdecl hashCode(void) = 0 ;
	HIDESBASE virtual _di_Jcore_o __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

__interface  INTERFACE_UUID("{EA4C91D4-774D-4D70-83FC-8CA5F0BE9F34}") Jcore_o  : public Jt 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_o : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_oClass,_di_Jcore_o> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_oClass,_di_Jcore_o>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_o(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_oClass,_di_Jcore_o> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_o(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D70BFC35-6A80-4781-804A-A9254B7151C8}") JuClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_Ju __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{8CFF1155-CB80-4833-840C-6FF2187C4F13}") Ju  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getb(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl b(void) = 0 /* overload */;
	virtual void __cdecl b(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	__property Androidapi::Jni::Javatypes::_di_JString b = {read=_Getb};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJu : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JuClass,_di_Ju> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JuClass,_di_Ju>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJu(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JuClass,_di_Ju> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJu(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{42DBD1B3-B9E7-4306-AAB4-D4AE6AD43E8B}") JpClass  : public JuClass 
{
	virtual _di_JHttpUrlHeader __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(__int64 P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual void __cdecl b(__int64 P1) = 0 ;
	HIDESBASE virtual _di_Jp __cdecl init(_di_JHttpUrlHeader P1, int P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P4) = 0 ;
};

__interface  INTERFACE_UUID("{F8AC062D-651C-4741-AB84-FA97A83860BD}") Jp  : public Ju 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJp : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JpClass,_di_Jp> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JpClass,_di_Jp>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJp(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JpClass,_di_Jp> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJp(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{209DCC80-8048-49BB-ADD7-721EECE0C2BE}") JqClass  : public Androidapi::Jni::Javatypes::JCallableClass 
{
	virtual _di_Jq __cdecl init(_di_Jcore_l P1, _di_Jcore_o P2) = 0 ;
};

__interface  INTERFACE_UUID("{649429AD-1CC7-45F9-8A88-6249DCA087EC}") Jq  : public Androidapi::Jni::Javatypes::JCallable 
{
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JContext __cdecl _Getb(void) = 0 ;
	virtual _di_Jcore_o __cdecl _Getc(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getd(void) = 0 ;
	virtual _di_Jcore_o __cdecl a(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl call(void) = 0 ;
	__property Androidapi::Jni::Graphicscontentviewtext::_di_JContext b = {read=_Getb};
	__property _di_Jcore_o c = {read=_Getc};
	__property Androidapi::Jni::Javatypes::_di_JString d = {read=_Getd};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJq : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JqClass,_di_Jq> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JqClass,_di_Jq>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJq(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JqClass,_di_Jq> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJq(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{3A4C9FBC-FAF1-4479-AE13-8AC5C0A13191}") Jcore_rClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JCloseable P1) = 0 ;
};

__interface  INTERFACE_UUID("{908376FD-07E4-4810-BFC9-9E28AE4FDFF9}") Jcore_r  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_r : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_rClass,_di_Jcore_r> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_rClass,_di_Jcore_r>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_r(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_rClass,_di_Jcore_r> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_r(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{75A9357A-1AD5-4F20-979A-1B664C299EEA}") JsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{7C55BDC8-B931-4F59-A3D1-A8FD616BE75E}") Js  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJs : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JsClass,_di_Js> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JsClass,_di_Js>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJs(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JsClass,_di_Js> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJs(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2144B871-123B-4F55-8CC1-95A06766DB3A}") JxClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Jcore_g __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jx __cdecl init(_di_Jcore_g P1) = 0 ;
};

__interface  INTERFACE_UUID("{29DB828B-C6CB-47D4-A8DF-DBEEEF66087E}") Jx  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJx : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JxClass,_di_Jx> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JxClass,_di_Jx>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJx(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JxClass,_di_Jx> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJx(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6A007CA5-3D80-4B09-9FFC-B88E3C887FB2}") JInvocationHandlerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{C23EFD3B-082E-4C1E-8E2C-BA2AD7C6F02D}") JInvocationHandler  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl invoke(Androidapi::Jni::Javatypes::_di_JObject proxy, Androidapi::Jni::Javatypes::_di_JMethod method, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JObject> * args) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJInvocationHandler : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JInvocationHandlerClass,_di_JInvocationHandler> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JInvocationHandlerClass,_di_JInvocationHandler>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJInvocationHandler(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JInvocationHandlerClass,_di_JInvocationHandler> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJInvocationHandler(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1913C381-5816-44B3-81F6-09BBE1F2D8C4}") JyClass  : public JInvocationHandlerClass 
{
	virtual _di_Jy __cdecl init(_di_Jcore_g P1, Androidapi::Jni::Javatypes::_di_Jlang_Class P2, _di_Jz P3) = 0 ;
};

__interface  INTERFACE_UUID("{FD4B40EA-E942-44FB-B248-DCAFD1DDD103}") Jy  : public JInvocationHandler 
{
	virtual Androidapi::Jni::Javatypes::_di_Jlang_Class __cdecl _Getb(void) = 0 ;
	virtual _di_Jz __cdecl _Getc(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl invoke(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_JMethod P2, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JObject> * P3) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_Jlang_Class b = {read=_Getb};
	__property _di_Jz c = {read=_Getc};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJy : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JyClass,_di_Jy> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JyClass,_di_Jy>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJy(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JyClass,_di_Jy> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJy(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{66AE66E9-C318-4E84-BA7C-BFC9311BD8E3}") JzClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JMethod P1, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JObject> * P2) = 0 ;
	HIDESBASE virtual _di_Jz __cdecl init(_di_Jx P1) = 0 ;
};

__interface  INTERFACE_UUID("{104F02DF-0517-469F-B551-ADFABF79A797}") Jz  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJz : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JzClass,_di_Jz> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JzClass,_di_Jz>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJz(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JzClass,_di_Jz> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJz(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F37BF5F0-6F59-482D-A1EE-51E8A4DF3DF3}") Japmobilesecuritysdk_a_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual int __cdecl a(Androidapi::Jni::Javatypes::_di_JMap P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	HIDESBASE virtual _di_Japmobilesecuritysdk_a_a __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{F1D465AC-9689-487E-B2FD-7794D8DFEE9C}") Japmobilesecuritysdk_a_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJapmobilesecuritysdk_a_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Japmobilesecuritysdk_a_aClass,_di_Japmobilesecuritysdk_a_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Japmobilesecuritysdk_a_aClass,_di_Japmobilesecuritysdk_a_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJapmobilesecuritysdk_a_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Japmobilesecuritysdk_a_aClass,_di_Japmobilesecuritysdk_a_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJapmobilesecuritysdk_a_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A0573669-28BC-493A-A38C-C822E055C72E}") Japmobilesecuritysdk_b_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Japmobilesecuritysdk_b_a __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(int P1) = 0 /* overload */;
	virtual int __cdecl b(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(void) = 0 ;
	HIDESBASE virtual _di_Japmobilesecuritysdk_b_a __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{D5ED96CF-D511-4A14-A179-A61B1003319B}") Japmobilesecuritysdk_b_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJapmobilesecuritysdk_b_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Japmobilesecuritysdk_b_aClass,_di_Japmobilesecuritysdk_b_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Japmobilesecuritysdk_b_aClass,_di_Japmobilesecuritysdk_b_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJapmobilesecuritysdk_b_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Japmobilesecuritysdk_b_aClass,_di_Japmobilesecuritysdk_b_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJapmobilesecuritysdk_b_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{72543BA2-588F-4157-9AA9-F274270721CC}") Jc_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JThrowable P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{324E1246-9459-4A09-BD0C-AF81534F1D32}") Jc_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJc_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_aClass,_di_Jc_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_aClass,_di_Jc_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJc_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_aClass,_di_Jc_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJc_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FCC4A381-1504-4104-8294-B6257467D10A}") Jd_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JMap P2) = 0 ;
};

__interface  INTERFACE_UUID("{478186C6-76A6-4959-992D-C81E056D0AEB}") Jd_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJd_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_aClass,_di_Jd_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_aClass,_di_Jd_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJd_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_aClass,_di_Jd_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJd_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B6BFDBC3-D41D-40C2-AD87-D758776976DF}") Jd_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JMap P2) = 0 ;
};

__interface  INTERFACE_UUID("{B62550F7-23EC-4B0A-B979-4441C0630B6D}") Jd_b  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJd_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_bClass,_di_Jd_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_bClass,_di_Jd_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJd_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_bClass,_di_Jd_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJd_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{51EDD722-617E-43D4-9F11-497980E7B8FC}") Jd_cClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{61D44336-0A94-4CA4-8E18-9D7ECA1245FA}") Jd_c  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJd_c : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_cClass,_di_Jd_c> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_cClass,_di_Jd_c>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJd_c(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_cClass,_di_Jd_c> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJd_c(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{30628190-C17A-459C-B156-9B84BF0EA02B}") Jd_dClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{84623449-0A20-4420-8933-231555D9446E}") Jd_d  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJd_d : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_dClass,_di_Jd_d> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_dClass,_di_Jd_d>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJd_d(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_dClass,_di_Jd_d> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJd_d(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{48FB2908-EE82-41A4-8328-D20013176FD7}") Jd_eClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JMap P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JMap P2) = 0 ;
};

__interface  INTERFACE_UUID("{7CBB8164-A128-442A-BC30-AB5E60914DBD}") Jd_e  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJd_e : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_eClass,_di_Jd_e> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_eClass,_di_Jd_e>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJd_e(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jd_eClass,_di_Jd_e> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJd_e(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F8042B29-C16B-4D3D-AC6E-1A09BD3FFD3A}") Je_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(void) = 0 ;
};

__interface  INTERFACE_UUID("{FD8C1E91-308B-45B8-AE75-DE77C85029B3}") Je_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJe_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Je_aClass,_di_Je_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Je_aClass,_di_Je_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJe_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Je_aClass,_di_Je_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJe_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B1973223-217B-4307-AEFE-8769D0978E55}") Jf_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, _di_Jf_b P2) = 0 /* overload */;
	virtual _di_Jf_b __cdecl b(void) = 0 /* overload */;
	virtual _di_Jf_b __cdecl b(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual _di_Jf_b __cdecl c(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{86F9E95B-CA37-44A7-9186-454CC8326E29}") Jf_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJf_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_aClass,_di_Jf_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_aClass,_di_Jf_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJf_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_aClass,_di_Jf_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJf_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6D563791-C8A5-43CD-9AA7-2D749C7FD885}") Jf_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(void) = 0 ;
	HIDESBASE virtual _di_Jf_b __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
};

__interface  INTERFACE_UUID("{CC803E61-BC20-4970-B630-3E150897B376}") Jf_b  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJf_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_bClass,_di_Jf_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_bClass,_di_Jf_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJf_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_bClass,_di_Jf_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJf_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{ECBB2C3D-8E0D-40AA-97B4-6019AD33A17E}") Jf_cClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl d(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl e(void) = 0 ;
	HIDESBASE virtual _di_Jf_c __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jni::Javatypes::_di_JString P5) = 0 ;
};

__interface  INTERFACE_UUID("{EFAA3EFF-7555-45D7-A2F0-69B7C342671D}") Jf_c  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJf_c : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_cClass,_di_Jf_c> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_cClass,_di_Jf_c>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJf_c(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_cClass,_di_Jf_c> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJf_c(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{023B2566-EEC5-4F90-ACD2-3F6023D9E5AE}") Jf_dClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, _di_Jf_c P2) = 0 /* overload */;
	virtual _di_Jf_c __cdecl b(void) = 0 /* overload */;
	virtual _di_Jf_c __cdecl b(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual _di_Jf_c __cdecl c(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{5EDED553-4A03-482C-8D89-5ABEA3DDCB32}") Jf_d  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJf_d : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_dClass,_di_Jf_d> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_dClass,_di_Jf_d>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJf_d(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_dClass,_di_Jf_d> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJf_d(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{75D16F55-F5B6-458E-B046-83189D1FB0F6}") Jf_eClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Jf_f __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{C68EF219-CE81-4C8D-9EFE-0385447354BD}") Jf_e  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJf_e : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_eClass,_di_Jf_e> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_eClass,_di_Jf_e>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJf_e(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_eClass,_di_Jf_e> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJf_e(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{EFBD5DD9-B612-4197-B43A-C0193CEB67E0}") Jf_fClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(void) = 0 /* overload */;
	virtual void __cdecl b(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(void) = 0 /* overload */;
	virtual void __cdecl c(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl d(void) = 0 /* overload */;
	virtual void __cdecl d(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl e(void) = 0 /* overload */;
	virtual void __cdecl e(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jf_f __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_Jf_f __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jni::Javatypes::_di_JString P5) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{4E842BE4-FC63-41BD-8935-2BD2096EFFA5}") Jf_f  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJf_f : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_fClass,_di_Jf_f> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_fClass,_di_Jf_f>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJf_f(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_fClass,_di_Jf_f> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJf_f(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{37A8D7D7-651A-4E3A-8C16-DA91C675F1FA}") Jf_gClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{63151975-76A7-4287-9A67-64E191A9DBDC}") Jf_g  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJf_g : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_gClass,_di_Jf_g> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_gClass,_di_Jf_g>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJf_g(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_gClass,_di_Jf_g> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJf_g(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{70BEF3E7-7415-4B7C-9709-61F0BA6A7FFF}") Jf_hClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, bool P2) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, __int64 P3) = 0 /* overload */;
	virtual bool __cdecl b(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual void __cdecl b(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual __int64 __cdecl c(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{6B0FFACF-864C-4829-8A1C-0179E67BA1F8}") Jf_h  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJf_h : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_hClass,_di_Jf_h> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_hClass,_di_Jf_h>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJf_h(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_hClass,_di_Jf_h> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJf_h(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{78E68835-786E-40BB-A0C8-AF9255D45B63}") Jf_iClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(_di_Jf_c P1) = 0 /* overload */;
	virtual void __cdecl a(_di_Jf_b P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual bool __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(void) = 0 /* overload */;
	virtual void __cdecl b(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(void) = 0 /* overload */;
	virtual void __cdecl c(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl d(void) = 0 /* overload */;
	virtual void __cdecl d(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl e(void) = 0 /* overload */;
	virtual void __cdecl e(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl f(void) = 0 /* overload */;
	virtual void __cdecl f(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual _di_Jf_c __cdecl g(void) = 0 ;
	virtual void __cdecl h(void) = 0 ;
};

__interface  INTERFACE_UUID("{3A364C8B-62F4-4DFB-9B77-DAEDFB308E30}") Jf_i  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJf_i : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_iClass,_di_Jf_i> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_iClass,_di_Jf_i>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJf_i(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jf_iClass,_di_Jf_i> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJf_i(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{07CFF90F-19B4-40C6-9CF9-8E41DB947C39}") JAPSecuritySdkClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getApdidToken(void) = 0 ;
	virtual _di_JAPSecuritySdk __cdecl getInstance(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getSdkName(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getSdkVersion(void) = 0 ;
	virtual _di_JAPSecuritySdk_TokenResult __cdecl getTokenResult(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUtdid(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual void __cdecl initToken(int P1, Androidapi::Jni::Javatypes::_di_JMap P2, _di_JAPSecuritySdk_InitResultListener P3) = 0 ;
};

__interface  INTERFACE_UUID("{F2F36D3A-0BDE-4205-AE47-12E09698950E}") JAPSecuritySdk  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAPSecuritySdk : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAPSecuritySdkClass,_di_JAPSecuritySdk> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAPSecuritySdkClass,_di_JAPSecuritySdk>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAPSecuritySdk(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAPSecuritySdkClass,_di_JAPSecuritySdk> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAPSecuritySdk(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{795EB560-A87A-475C-9E8B-3EE151D9A7C7}") JAPSecuritySdk_1Class  : public Androidapi::Jni::Javatypes::JRunnableClass 
{
	virtual _di_JAPSecuritySdk_1 __cdecl init(_di_JAPSecuritySdk P1, Androidapi::Jni::Javatypes::_di_JMap P2, _di_JAPSecuritySdk_InitResultListener P3) = 0 ;
};

__interface  INTERFACE_UUID("{2F4C0034-B0B4-4D68-9EE8-AD215C0D15A6}") JAPSecuritySdk_1  : public Androidapi::Jni::Javatypes::JRunnable 
{
	virtual _di_JAPSecuritySdk_InitResultListener __cdecl _Getb(void) = 0 ;
	virtual _di_JAPSecuritySdk __cdecl _Getc(void) = 0 ;
	HIDESBASE virtual void __cdecl run(void) = 0 ;
	__property _di_JAPSecuritySdk_InitResultListener b = {read=_Getb};
	__property _di_JAPSecuritySdk c = {read=_Getc};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAPSecuritySdk_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAPSecuritySdk_1Class,_di_JAPSecuritySdk_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAPSecuritySdk_1Class,_di_JAPSecuritySdk_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAPSecuritySdk_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAPSecuritySdk_1Class,_di_JAPSecuritySdk_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAPSecuritySdk_1(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E2A41046-FFD3-4B54-BB33-1A0E0F5867BE}") JAPSecuritySdk_InitResultListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl onResult(_di_JAPSecuritySdk_TokenResult P1) = 0 ;
};

__interface  INTERFACE_UUID("{631C5164-EEE6-4B80-88AD-3D82B1F7423A}") JAPSecuritySdk_InitResultListener  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAPSecuritySdk_InitResultListener : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAPSecuritySdk_InitResultListenerClass,_di_JAPSecuritySdk_InitResultListener> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAPSecuritySdk_InitResultListenerClass,_di_JAPSecuritySdk_InitResultListener>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAPSecuritySdk_InitResultListener(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAPSecuritySdk_InitResultListenerClass,_di_JAPSecuritySdk_InitResultListener> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAPSecuritySdk_InitResultListener(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{7F90CEA0-6DB9-4C49-B625-520A8231D218}") JAPSecuritySdk_TokenResultClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetapdidToken(void) = 0 ;
	HIDESBASE virtual _di_JAPSecuritySdk_TokenResult __cdecl init(_di_JAPSecuritySdk P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString apdidToken = {read=_GetapdidToken};
};

__interface  INTERFACE_UUID("{7A359AD8-F8E8-48DC-9353-1A534AAFDC09}") JAPSecuritySdk_TokenResult  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual _di_JAPSecuritySdk __cdecl _Geta(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getapdid(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetclientKey(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetumidToken(void) = 0 ;
	__property _di_JAPSecuritySdk a = {read=_Geta};
	__property Androidapi::Jni::Javatypes::_di_JString apdid = {read=_Getapdid};
	__property Androidapi::Jni::Javatypes::_di_JString clientKey = {read=_GetclientKey};
	__property Androidapi::Jni::Javatypes::_di_JString umidToken = {read=_GetumidToken};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAPSecuritySdk_TokenResult : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAPSecuritySdk_TokenResultClass,_di_JAPSecuritySdk_TokenResult> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAPSecuritySdk_TokenResultClass,_di_JAPSecuritySdk_TokenResult>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAPSecuritySdk_TokenResult(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAPSecuritySdk_TokenResultClass,_di_JAPSecuritySdk_TokenResult> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAPSecuritySdk_TokenResult(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{34244198-C0BE-490B-83EC-86504E1571A4}") JEnvModeConfigClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetENVIRONMENT_AAA(void) = 0 ;
	virtual int __cdecl _GetENVIRONMENT_DAILY(void) = 0 ;
	virtual int __cdecl _GetENVIRONMENT_ONLINE(void) = 0 ;
	virtual int __cdecl _GetENVIRONMENT_PRE(void) = 0 ;
	virtual int __cdecl _GetENVIRONMENT_SIT(void) = 0 ;
	HIDESBASE virtual _di_JEnvModeConfig __cdecl init(void) = 0 ;
	__property int ENVIRONMENT_AAA = {read=_GetENVIRONMENT_AAA};
	__property int ENVIRONMENT_DAILY = {read=_GetENVIRONMENT_DAILY};
	__property int ENVIRONMENT_ONLINE = {read=_GetENVIRONMENT_ONLINE};
	__property int ENVIRONMENT_PRE = {read=_GetENVIRONMENT_PRE};
	__property int ENVIRONMENT_SIT = {read=_GetENVIRONMENT_SIT};
};

__interface  INTERFACE_UUID("{ED0A5AFB-047D-4A39-A517-A06906355EFE}") JEnvModeConfig  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJEnvModeConfig : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JEnvModeConfigClass,_di_JEnvModeConfig> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JEnvModeConfigClass,_di_JEnvModeConfig>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJEnvModeConfig(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JEnvModeConfigClass,_di_JEnvModeConfig> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJEnvModeConfig(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B9202446-06DD-43BB-A254-AFDB6F7E6444}") Jg_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{7CAFEE3E-F7B1-463F-98F8-3E11141F0E4A}") Jg_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJg_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jg_aClass,_di_Jg_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jg_aClass,_di_Jg_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJg_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jg_aClass,_di_Jg_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJg_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A8DB61CE-2617-47E6-BDAE-D04D4AF14BA8}") Jg_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Jg_b __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JRunnable P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jg_b __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{D5AB92D3-AF12-4CB4-B2B9-9122972D8527}") Jg_b  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJg_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jg_bClass,_di_Jg_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jg_bClass,_di_Jg_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJg_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jg_bClass,_di_Jg_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJg_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{4FD3DCFC-F23D-4DC3-BE97-17591F3DD494}") Jg_cClass  : public Androidapi::Jni::Javatypes::JRunnableClass 
{
	virtual _di_Jg_c __cdecl init(_di_Jg_b P1) = 0 ;
};

__interface  INTERFACE_UUID("{6F2BD15E-3246-4AA8-97CE-FB16005CD29C}") Jg_c  : public Androidapi::Jni::Javatypes::JRunnable 
{
	HIDESBASE virtual void __cdecl run(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJg_c : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jg_cClass,_di_Jg_c> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jg_cClass,_di_Jg_c>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJg_c(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jg_cClass,_di_Jg_c> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJg_c(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1B73EE23-A7DB-45E9-B924-B65BA8126D4D}") Ja_a_a_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JFile __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JThrowable P1) = 0 /* overload */;
	virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JMap P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 /* overload */;
	virtual bool __cdecl b(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl d(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl e(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl f(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{4B230CA9-388F-4FFD-9663-9A2530D6BDE2}") Ja_a_a_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_a_a_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_a_aClass,_di_Ja_a_a_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_a_aClass,_di_Ja_a_a_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_a_a_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_a_aClass,_di_Ja_a_a_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_a_a_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F5A99F8B-A089-463D-80C3-C7E6457C826B}") Ja_a_a_a_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{1A1C7342-6B2C-42A9-89A7-5FB036FB8C47}") Ja_a_a_a_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_a_a_a_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_a_a_aClass,_di_Ja_a_a_a_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_a_a_aClass,_di_Ja_a_a_a_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_a_a_a_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_a_a_aClass,_di_Ja_a_a_a_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_a_a_a_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{476CAD21-39D0-46FF-8B84-41AE4F2FE7B8}") Ja_a_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{359E6759-77CB-45B9-9A5E-948E98B0F61F}") Ja_a_b  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_a_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_bClass,_di_Ja_a_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_bClass,_di_Ja_a_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_a_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_bClass,_di_Ja_a_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_a_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{92992E03-F2B4-45A9-9F39-12124A6C120F}") Ja_a_cClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

__interface  INTERFACE_UUID("{7E19D787-560C-422C-B02B-984C03E16AA0}") Ja_a_c  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_a_c : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_cClass,_di_Ja_a_c> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_cClass,_di_Ja_a_c>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_a_c(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_cClass,_di_Ja_a_c> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_a_c(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F8E67476-5CE5-419D-BD63-9D270EDEB34C}") Ja_a_a_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

__interface  INTERFACE_UUID("{8ACA7334-E481-4003-B7B2-55FE0D29A651}") Ja_a_a_b  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_a_a_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_a_bClass,_di_Ja_a_a_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_a_bClass,_di_Ja_a_a_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_a_a_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_a_a_bClass,_di_Ja_a_a_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_a_a_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{66A6442D-6B18-4370-BB5A-C9CC17F1A0AC}") Ja_b_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Ja_b_a __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{1E9BA860-92EE-4D5E-902B-56A8FE7D9FC7}") Ja_b_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_b_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_b_aClass,_di_Ja_b_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_b_aClass,_di_Ja_b_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_b_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_b_aClass,_di_Ja_b_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_b_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5F55A502-A203-4B8A-BC1F-F4B4DDF8CC9A}") Ja_b_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Ja_b_b __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl d(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl d(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl e(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl e(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl f(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl f(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl g(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl g(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl h(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl h(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl i(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl i(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl j(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl j(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl k(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl k(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl l(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl l(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl m(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl m(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl n(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl n(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl o(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl o(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl p(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl p(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl q(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl q(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl r(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl r(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl s(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl s(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl t(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl t(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl u(void) = 0 ;
};

__interface  INTERFACE_UUID("{E62103EC-99F9-4134-81E3-805AB9C017C4}") Ja_b_b  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_b_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_b_bClass,_di_Ja_b_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_b_bClass,_di_Ja_b_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_b_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_b_bClass,_di_Ja_b_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_b_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D27FE25E-5CB2-4A8F-AD5F-9A2B7574F184}") Jb_cClass  : public Androidapi::Jni::Javatypes::JFileFilterClass 
{
	virtual _di_Jb_c __cdecl init(_di_Ja_b_b P1) = 0 ;
};

__interface  INTERFACE_UUID("{8299A6B5-2927-4E8D-8BE4-59662C55EE1F}") Jb_c  : public Androidapi::Jni::Javatypes::JFileFilter 
{
	HIDESBASE virtual bool __cdecl accept(Androidapi::Jni::Javatypes::_di_JFile P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJb_c : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jb_cClass,_di_Jb_c> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jb_cClass,_di_Jb_c>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJb_c(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jb_cClass,_di_Jb_c> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJb_c(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{DFB2FDC9-11C9-49D8-A634-F305446CF0EE}") Jb_dClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Jb_d __cdecl a(void) = 0 /* overload */;
	virtual bool __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(void) = 0 ;
	virtual bool __cdecl c(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl d(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl e(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl f(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl g(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl h(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl i(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl j(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl k(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl l(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl m(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl n(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl o(void) = 0 ;
};

__interface  INTERFACE_UUID("{CCEF547C-AD52-4774-B73D-C5175F64E00E}") Jb_d  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJb_d : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jb_dClass,_di_Jb_d> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jb_dClass,_di_Jb_d>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJb_d(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jb_dClass,_di_Jb_d> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJb_d(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C40C5D64-6A56-4CFE-A55B-4E0BCAEC7644}") Ja_c_aClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual _di_JDeviceDataReportResult __cdecl a(_di_JDeviceDataReportRequest P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{1C96F2F2-D3F4-4325-85B5-ED5DA3A4872E}") Ja_c_a  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_c_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_c_aClass,_di_Ja_c_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_c_aClass,_di_Ja_c_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_c_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_c_aClass,_di_Ja_c_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_c_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{18813CF6-3A61-4394-87F7-730A5D729A65}") Jc_a_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl _Geta(void) = 0 ;
	HIDESBASE virtual _di_Jc_a_a __cdecl init(void) = 0 ;
	__property bool a = {read=_Geta};
};

__interface  INTERFACE_UUID("{A9EAC790-49F7-4244-BF4D-9B0C499946B2}") Jc_a_a  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getb(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString b = {read=_Getb};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJc_a_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_aClass,_di_Jc_a_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_aClass,_di_Jc_a_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJc_a_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_aClass,_di_Jc_a_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJc_a_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F4E0B7B3-3608-4EC1-8DD0-0E18AADE7870}") Jc_a_bClass  : public Jc_a_aClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getc(void) = 0 ;
	HIDESBASE virtual _di_Jc_a_b __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString c = {read=_Getc};
};

__interface  INTERFACE_UUID("{A26E1B1F-80A2-42DF-AE5C-0F7336FD55E2}") Jc_a_b  : public Jc_a_a 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getd(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Gete(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getf(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getg(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Geth(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Geti(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getj(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString d = {read=_Getd};
	__property Androidapi::Jni::Javatypes::_di_JString e = {read=_Gete};
	__property Androidapi::Jni::Javatypes::_di_JString f = {read=_Getf};
	__property Androidapi::Jni::Javatypes::_di_JString g = {read=_Getg};
	__property Androidapi::Jni::Javatypes::_di_JString h = {read=_Geth};
	__property Androidapi::Jni::Javatypes::_di_JString i = {read=_Geti};
	__property Androidapi::Jni::Javatypes::_di_JString j = {read=_Getj};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJc_a_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_bClass,_di_Jc_a_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_bClass,_di_Jc_a_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJc_a_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_bClass,_di_Jc_a_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJc_a_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B1FDF5D1-C147-4CEE-ABF4-A44926A3B6F5}") Jc_a_cClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JMap P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(void) = 0 /* overload */;
	virtual void __cdecl b(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(void) = 0 /* overload */;
	virtual void __cdecl c(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl d(void) = 0 /* overload */;
	virtual void __cdecl d(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl e(void) = 0 /* overload */;
	virtual void __cdecl e(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl f(void) = 0 /* overload */;
	virtual void __cdecl f(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl g(void) = 0 /* overload */;
	virtual void __cdecl g(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl h(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl i(void) = 0 ;
	HIDESBASE virtual _di_Jc_a_c __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{4DF93953-491C-49ED-AA57-65394C452E91}") Jc_a_c  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJc_a_c : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_cClass,_di_Jc_a_c> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_cClass,_di_Jc_a_c>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJc_a_c(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_cClass,_di_Jc_a_c> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJc_a_c(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{EF03C143-54BE-4309-A924-9B4C48ABBD93}") Jc_bClass  : public Ja_c_aClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	HIDESBASE virtual _di_JDeviceDataReportResult __cdecl a(_di_JDeviceDataReportRequest P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jc_b __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{250D4A3A-21F0-4E86-BE5A-15F9FF492F77}") Jc_b  : public Ja_c_a 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJc_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_bClass,_di_Jc_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_bClass,_di_Jc_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJc_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_bClass,_di_Jc_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJc_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{CC5C31C1-CEAC-4A31-85B1-795F55D6D35D}") Jc_b_aClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual _di_Jc_a_b __cdecl a(_di_Jc_a_c P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{2A8FBFB5-9E67-4692-9793-668618BDD281}") Jc_b_a  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJc_b_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_b_aClass,_di_Jc_b_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_b_aClass,_di_Jc_b_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJc_b_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_b_aClass,_di_Jc_b_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJc_b_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{58B78F95-177E-406B-A65B-0E286A91D265}") Jc_b_bClass  : public Jc_b_aClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jc_a_b __cdecl a(_di_Jc_a_c P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jc_b_a __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual _di_Jc_b_b __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{DE6D848B-7F6D-42F2-ABB1-0935E06AF211}") Jc_b_b  : public Jc_b_a 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJc_b_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_b_bClass,_di_Jc_b_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_b_bClass,_di_Jc_b_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJc_b_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_b_bClass,_di_Jc_b_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJc_b_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{593519AC-164F-46FF-9B1A-945008624F4F}") Jc_cClass  : public Androidapi::Jni::Javatypes::JRunnableClass 
{
	virtual _di_Jc_c __cdecl init(_di_Jc_b P1, _di_JDeviceDataReportRequest P2) = 0 ;
};

__interface  INTERFACE_UUID("{02C3999B-6E66-4840-9DFB-EB9CC6A5DB48}") Jc_c  : public Androidapi::Jni::Javatypes::JRunnable 
{
	virtual _di_Jc_b __cdecl _Getb(void) = 0 ;
	HIDESBASE virtual void __cdecl run(void) = 0 ;
	__property _di_Jc_b b = {read=_Getb};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJc_c : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_cClass,_di_Jc_c> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_cClass,_di_Jc_c>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJc_c(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_cClass,_di_Jc_c> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJc_c(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{396C2884-4F21-41BD-B2D2-F8A7E2C06BE9}") Jc_dClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Jc_b_a __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

__interface  INTERFACE_UUID("{FEA0AFE5-EBC5-4D76-B733-C804E02A3558}") Jc_d  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJc_d : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_dClass,_di_Jc_d> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_dClass,_di_Jc_d>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJc_d(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_dClass,_di_Jc_d> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJc_d(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{634369ED-196A-4377-B69F-A267296D39AC}") Ja_d_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{3299577F-8AD0-45BD-BECA-0A60525052A4}") Ja_d_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_d_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_d_aClass,_di_Ja_d_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_d_aClass,_di_Ja_d_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_d_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_d_aClass,_di_Ja_d_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_d_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2A572441-04F0-4C3B-95A9-2BD60F3FB980}") Ja_d_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{1916C80D-0748-4CE6-B6A5-E173A1D31AF3}") Ja_d_b  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_d_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_d_bClass,_di_Ja_d_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_d_bClass,_di_Ja_d_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_d_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_d_bClass,_di_Ja_d_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_d_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{4EB940D8-F58A-4210-9113-9272024EB44B}") Ja_d_cClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JMap P3) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{F26D6714-54D1-4F03-9609-466B1B0EFCBC}") Ja_d_c  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_d_c : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_d_cClass,_di_Ja_d_c> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_d_cClass,_di_Ja_d_c>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_d_c(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_d_cClass,_di_Ja_d_c> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_d_c(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{39019470-CC76-4F14-BB64-E490347879C5}") Ja_e_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_Ja_e_a __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jni::Javatypes::_di_JString P5, Androidapi::Jni::Javatypes::_di_JString P6, Androidapi::Jni::Javatypes::_di_JString P7) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

__interface  INTERFACE_UUID("{DD1925A7-A62D-4E6E-BB76-BF871FEA4D8F}") Ja_e_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_e_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_e_aClass,_di_Ja_e_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_e_aClass,_di_Ja_e_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_e_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_e_aClass,_di_Ja_e_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_e_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{CDD66F2B-63FA-45C1-A200-6A3FC9B37C11}") Je_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(void) = 0 /* overload */;
	HIDESBASE virtual _di_Je_b __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, _di_Jc_b_a P2) = 0 ;
};

__interface  INTERFACE_UUID("{E6747602-30ED-42DC-9A5C-1D5757FC2596}") Je_b  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJe_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Je_bClass,_di_Je_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Je_bClass,_di_Je_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJe_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Je_bClass,_di_Je_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJe_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{83061A20-EADD-4AF1-B905-531783E91263}") Je_cClass  : public Androidapi::Jni::Javatypes::JRunnableClass 
{
	virtual _di_Je_c __cdecl init(_di_Je_b P1) = 0 ;
};

__interface  INTERFACE_UUID("{3687530E-2A39-4485-AC1C-E20263E69728}") Je_c  : public Androidapi::Jni::Javatypes::JRunnable 
{
	HIDESBASE virtual void __cdecl run(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJe_c : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Je_cClass,_di_Je_c> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Je_cClass,_di_Je_c>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJe_c(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Je_cClass,_di_Je_c> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJe_c(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{40AD1247-067E-423F-8A25-395B78C4D86D}") Je_dClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JThrowable P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{C6FE5BD0-896D-4F56-8EB5-BF453B7CEDFC}") Je_d  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJe_d : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Je_dClass,_di_Je_d> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Je_dClass,_di_Je_d>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJe_d(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Je_dClass,_di_Je_d> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJe_d(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{0521C6AF-8EED-413C-A5DE-A817BF5CCF98}") JOperationTypeClass  : public Androidapi::Jni::Javatypes::JAnnotationClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl value(void) = 0 ;
};

__interface  INTERFACE_UUID("{97F3A6E1-7A01-46FF-B652-45CF4F8C6E6E}") JOperationType  : public Androidapi::Jni::Javatypes::JAnnotation 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJOperationType : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JOperationTypeClass,_di_JOperationType> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JOperationTypeClass,_di_JOperationType>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJOperationType(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JOperationTypeClass,_di_JOperationType> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJOperationType(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E30536BE-193B-4E1D-A02C-2E3E178B6B28}") JResetCookieClass  : public Androidapi::Jni::Javatypes::JAnnotationClass 
{
	
};

__interface  INTERFACE_UUID("{93090071-A411-4517-A5BE-F604A524715C}") JResetCookie  : public Androidapi::Jni::Javatypes::JAnnotation 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJResetCookie : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JResetCookieClass,_di_JResetCookie> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JResetCookieClass,_di_JResetCookie>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJResetCookie(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JResetCookieClass,_di_JResetCookie> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJResetCookie(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{800FD95A-9E46-4DC8-A66C-A34FF4766111}") JUpdateDeviceInfoClass  : public Androidapi::Jni::Javatypes::JAnnotationClass 
{
	
};

__interface  INTERFACE_UUID("{36113D85-9BB1-43CB-BF28-4804D0BA1DB7}") JUpdateDeviceInfo  : public Androidapi::Jni::Javatypes::JAnnotation 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJUpdateDeviceInfo : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUpdateDeviceInfoClass,_di_JUpdateDeviceInfo> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUpdateDeviceInfoClass,_di_JUpdateDeviceInfo>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUpdateDeviceInfo(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUpdateDeviceInfoClass,_di_JUpdateDeviceInfo> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUpdateDeviceInfo(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A54A455C-8532-475A-B610-FECCD2005DE5}") JSecurityClientMobileClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl GetApdid(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JMap P2) = 0 ;
	HIDESBASE virtual _di_JSecurityClientMobile __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{CCA6A6EB-E9A7-4B20-8D05-6DA3DEFF966A}") JSecurityClientMobile  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSecurityClientMobile : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSecurityClientMobileClass,_di_JSecurityClientMobile> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSecurityClientMobileClass,_di_JSecurityClientMobile>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSecurityClientMobile(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSecurityClientMobileClass,_di_JSecurityClientMobile> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSecurityClientMobile(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{34AFEC3A-5A5C-496F-877B-64B0538C6A78}") JBugTrackMessageServiceClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl logCollect(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{E1EE52AC-DD57-4EC7-9755-9519A67DFAD3}") JBugTrackMessageService  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBugTrackMessageService : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBugTrackMessageServiceClass,_di_JBugTrackMessageService> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBugTrackMessageServiceClass,_di_JBugTrackMessageService>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBugTrackMessageService(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBugTrackMessageServiceClass,_di_JBugTrackMessageService> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBugTrackMessageService(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{4537DA14-05EC-48D0-8DBD-6F20A4A8DA0F}") JAppListCmdServiceClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual _di_JAppListCmdResult __cdecl getAppListCmd(_di_JAppListCmdRequest P1) = 0 ;
	virtual _di_JAppListCmdResult __cdecl reGetAppListCmd(_di_JAppListCmdRequest P1) = 0 ;
};

__interface  INTERFACE_UUID("{C3C25450-324E-45CF-BD74-5E35B4B1D2D8}") JAppListCmdService  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAppListCmdService : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAppListCmdServiceClass,_di_JAppListCmdService> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAppListCmdServiceClass,_di_JAppListCmdService>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAppListCmdService(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAppListCmdServiceClass,_di_JAppListCmdService> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAppListCmdService(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D625EBF8-1F65-4E44-A178-37E07F4BD0C7}") JDeviceDataReportServiceClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual _di_JAppListResult __cdecl getAppList(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual _di_JDeviceDataReportResult __cdecl reportStaticData(_di_JDeviceDataReportRequest P1) = 0 ;
};

__interface  INTERFACE_UUID("{C6F73BD8-875D-4B47-8380-50F895325135}") JDeviceDataReportService  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDeviceDataReportService : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceDataReportServiceClass,_di_JDeviceDataReportService> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceDataReportServiceClass,_di_JDeviceDataReportService>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDeviceDataReportService(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceDataReportServiceClass,_di_JDeviceDataReportService> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDeviceDataReportService(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C3DC1D87-7D79-469A-BDBD-8D49756D7ECF}") JAppListCmdRequestClass  : public Androidapi::Jni::Javatypes::JSerializableClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getos(void) = 0 ;
	virtual _di_JAppListCmdRequest __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString os = {read=_Getos};
};

__interface  INTERFACE_UUID("{76090AF6-2CA9-4417-BD0A-C2556D1E9A11}") JAppListCmdRequest  : public Androidapi::Jni::Javatypes::JSerializable 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getapdid(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getapplist(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Gettoken(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetuserId(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString apdid = {read=_Getapdid};
	__property Androidapi::Jni::Javatypes::_di_JString applist = {read=_Getapplist};
	__property Androidapi::Jni::Javatypes::_di_JString token = {read=_Gettoken};
	__property Androidapi::Jni::Javatypes::_di_JString userId = {read=_GetuserId};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAppListCmdRequest : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAppListCmdRequestClass,_di_JAppListCmdRequest> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAppListCmdRequestClass,_di_JAppListCmdRequest>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAppListCmdRequest(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAppListCmdRequestClass,_di_JAppListCmdRequest> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAppListCmdRequest(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C49473C7-6E0E-4A53-B529-DA3802F7FC0A}") JDeviceDataReportRequestClass  : public Androidapi::Jni::Javatypes::JSerializableClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getos(void) = 0 ;
	virtual _di_JDeviceDataReportRequest __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString os = {read=_Getos};
};

__interface  INTERFACE_UUID("{7047C84D-C354-4AE2-9D40-1661BD61D679}") JDeviceDataReportRequest  : public Androidapi::Jni::Javatypes::JSerializable 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getapdid(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl _GetdataMap(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetlastTime(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetpriApdid(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetpubApdid(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Gettoken(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetumidToken(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getversion(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString apdid = {read=_Getapdid};
	__property Androidapi::Jni::Javatypes::_di_JMap dataMap = {read=_GetdataMap};
	__property Androidapi::Jni::Javatypes::_di_JString lastTime = {read=_GetlastTime};
	__property Androidapi::Jni::Javatypes::_di_JString priApdid = {read=_GetpriApdid};
	__property Androidapi::Jni::Javatypes::_di_JString pubApdid = {read=_GetpubApdid};
	__property Androidapi::Jni::Javatypes::_di_JString token = {read=_Gettoken};
	__property Androidapi::Jni::Javatypes::_di_JString umidToken = {read=_GetumidToken};
	__property Androidapi::Jni::Javatypes::_di_JString version = {read=_Getversion};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDeviceDataReportRequest : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceDataReportRequestClass,_di_JDeviceDataReportRequest> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceDataReportRequestClass,_di_JDeviceDataReportRequest>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDeviceDataReportRequest(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceDataReportRequestClass,_di_JDeviceDataReportRequest> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDeviceDataReportRequest(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FCEE1347-9834-432A-A6F0-52CDED09DA53}") JBaseResultClass  : public Androidapi::Jni::Javatypes::JSerializableClass 
{
	virtual bool __cdecl _Getsuccess(void) = 0 ;
	virtual _di_JBaseResult __cdecl init(void) = 0 ;
	__property bool success = {read=_Getsuccess};
};

__interface  INTERFACE_UUID("{AD489043-9CC2-4348-9F4E-320FDB32A726}") JBaseResult  : public Androidapi::Jni::Javatypes::JSerializable 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetresultCode(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString resultCode = {read=_GetresultCode};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBaseResult : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBaseResultClass,_di_JBaseResult> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBaseResultClass,_di_JBaseResult>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBaseResult(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBaseResultClass,_di_JBaseResult> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBaseResult(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{3CA64A42-1ED2-4CBE-B1B3-7A138914274D}") JAppListResultClass  : public JBaseResultClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetappListVer(void) = 0 ;
	HIDESBASE virtual _di_JAppListResult __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString appListVer = {read=_GetappListVer};
};

__interface  INTERFACE_UUID("{9E4805EF-07A3-42D9-AE98-FBBB4954DE8F}") JAppListResult  : public JBaseResult 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetappListData(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString appListData = {read=_GetappListData};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAppListResult : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAppListResultClass,_di_JAppListResult> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAppListResultClass,_di_JAppListResult>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAppListResult(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAppListResultClass,_di_JAppListResult> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAppListResult(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{AC32C6FF-61B8-4DEA-8F2D-2609253689FC}") JAppListCmdResultClass  : public JAppListResultClass 
{
	virtual bool __cdecl _GetneedRetry(void) = 0 ;
	HIDESBASE virtual _di_JAppListCmdResult __cdecl init(void) = 0 ;
	__property bool needRetry = {read=_GetneedRetry};
};

__interface  INTERFACE_UUID("{5109EB6F-B4CF-4040-8175-D801AFEE63A1}") JAppListCmdResult  : public JAppListResult 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAppListCmdResult : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAppListCmdResultClass,_di_JAppListCmdResult> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAppListCmdResultClass,_di_JAppListCmdResult>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAppListCmdResult(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAppListCmdResultClass,_di_JAppListCmdResult> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAppListCmdResult(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{BC280121-1047-4284-BE40-E4C741869965}") JDeviceDataReportResultClass  : public JBaseResultClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getapdid(void) = 0 ;
	HIDESBASE virtual _di_JDeviceDataReportResult __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString apdid = {read=_Getapdid};
};

__interface  INTERFACE_UUID("{E3D48A24-CFC2-4C2F-AF25-FE19C2DB49BE}") JDeviceDataReportResult  : public JBaseResult 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetappListVer(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetbugTrackSwitch(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetcurrentTime(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Gettoken(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getversion(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetvkeySwitch(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString appListVer = {read=_GetappListVer};
	__property Androidapi::Jni::Javatypes::_di_JString bugTrackSwitch = {read=_GetbugTrackSwitch};
	__property Androidapi::Jni::Javatypes::_di_JString currentTime = {read=_GetcurrentTime};
	__property Androidapi::Jni::Javatypes::_di_JString token = {read=_Gettoken};
	__property Androidapi::Jni::Javatypes::_di_JString version = {read=_Getversion};
	__property Androidapi::Jni::Javatypes::_di_JString vkeySwitch = {read=_GetvkeySwitch};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDeviceDataReportResult : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceDataReportResultClass,_di_JDeviceDataReportResult> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceDataReportResultClass,_di_JDeviceDataReportResult>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDeviceDataReportResult(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceDataReportResultClass,_di_JDeviceDataReportResult> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDeviceDataReportResult(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{04244716-A5CC-452E-94A9-BEB66A972297}") JAidManagerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_JAidManager __cdecl getInstance(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getValue(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	virtual void __cdecl requestAid(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, _di_JAidCallback P4) = 0 ;
};

__interface  INTERFACE_UUID("{D049CF76-35DF-4F7D-AC18-D12845D376D0}") JAidManager  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAidManager : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidManagerClass,_di_JAidManager> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidManagerClass,_di_JAidManager>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAidManager(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidManagerClass,_di_JAidManager> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAidManager(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{DF888233-D22E-4680-9069-72F4629B1412}") JAidRequesterClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_JAidRequester __cdecl getInstance(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	HIDESBASE virtual _di_JAidRequester __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl postRest(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4) = 0 ;
	virtual void __cdecl postRestAsync(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4, _di_JAidCallback P5) = 0 ;
};

__interface  INTERFACE_UUID("{F49085E9-1573-4829-8B02-B4798CB34126}") JAidRequester  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAidRequester : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidRequesterClass,_di_JAidRequester> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidRequesterClass,_di_JAidRequester>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAidRequester(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidRequesterClass,_di_JAidRequester> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAidRequester(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E581C7DD-F246-4ADB-A376-93C03DDA5700}") JAidRequester_PostRestThreadClass  : public Androidapi::Jni::Javatypes::JThreadClass 
{
	HIDESBASE virtual _di_JAidRequester_PostRestThread __cdecl init(_di_JAidRequester P1, _di_JHttpPost P2) = 0 /* overload */;
	HIDESBASE virtual _di_JAidRequester_PostRestThread __cdecl init(_di_JAidRequester P1, _di_JHttpPost P2, _di_JAidCallback P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jni::Javatypes::_di_JString P5, Androidapi::Jni::Javatypes::_di_JString P6) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{3C7144FF-428D-46FD-BBEA-D84B76CE1102}") JAidRequester_PostRestThread  : public Androidapi::Jni::Javatypes::JThread 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetmAppName(void) = 0 ;
	virtual _di_JAidCallback __cdecl _GetmCallback(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetmOldAid(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetmRspLine(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetmToken(void) = 0 ;
	virtual _di_JAidRequester __cdecl _GetthisClass(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getResponseLine(void) = 0 ;
	HIDESBASE virtual void __cdecl run(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString mAppName = {read=_GetmAppName};
	__property _di_JAidCallback mCallback = {read=_GetmCallback};
	__property Androidapi::Jni::Javatypes::_di_JString mOldAid = {read=_GetmOldAid};
	__property Androidapi::Jni::Javatypes::_di_JString mRspLine = {read=_GetmRspLine};
	__property Androidapi::Jni::Javatypes::_di_JString mToken = {read=_GetmToken};
	__property _di_JAidRequester thisClass = {read=_GetthisClass};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAidRequester_PostRestThread : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidRequester_PostRestThreadClass,_di_JAidRequester_PostRestThread> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidRequester_PostRestThreadClass,_di_JAidRequester_PostRestThread>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAidRequester_PostRestThread(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidRequester_PostRestThreadClass,_di_JAidRequester_PostRestThread> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAidRequester_PostRestThread(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FFDB9509-AA96-46A4-8A13-08467F35BD4C}") JAidStorageControllerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual __int64 __cdecl getAidGenTimeFromSP(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getAidValueFromSP(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	HIDESBASE virtual _di_JAidStorageController __cdecl init(void) = 0 ;
	virtual void __cdecl setAidValueToSP(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4) = 0 ;
};

__interface  INTERFACE_UUID("{4741034C-EF44-4B29-837F-7B5C16606346}") JAidStorageController  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAidStorageController : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidStorageControllerClass,_di_JAidStorageController> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidStorageControllerClass,_di_JAidStorageController>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAidStorageController(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidStorageControllerClass,_di_JAidStorageController> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAidStorageController(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{09B85EB6-F6A0-40E9-9851-04F7AFE2D608}") JAESUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTAG(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl _Gett(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl decrypt(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl encrypt(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl fromHex(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual _di_JAESUtils __cdecl init(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl toByte(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toHex(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toHex(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	__property Androidapi::Jni::Javatypes::_di_JString TAG = {read=_GetTAG};
	__property Androidapi::Jnibridge::TJavaArray__1<System::Byte> * t = {read=_Gett};
};

__interface  INTERFACE_UUID("{C2DF7B82-8D74-41C4-8E8C-2FDF64EDDEA0}") JAESUtils  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAESUtils : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAESUtilsClass,_di_JAESUtils> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAESUtilsClass,_di_JAESUtils>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAESUtils(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAESUtilsClass,_di_JAESUtils> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAESUtils(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C77871AD-4AD8-44C3-9D15-9E012915AB82}") Jutils_Base64Class  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl _GetAssertionsDisabled(void) = 0 ;
	virtual int __cdecl _GetCRLF(void) = 0 ;
	virtual int __cdecl _GetDEFAULT(void) = 0 ;
	virtual int __cdecl _GetNO_CLOSE(void) = 0 ;
	virtual int __cdecl _GetNO_PADDING(void) = 0 ;
	virtual int __cdecl _GetNO_WRAP(void) = 0 ;
	virtual int __cdecl _GetURL_SAFE(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl decode(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl decode(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl decode(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2, int P3, int P4) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl encode(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl encode(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2, int P3, int P4) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl encodeToString(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl encodeToString(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2, int P3, int P4) = 0 /* overload */;
	__property bool AssertionsDisabled = {read=_GetAssertionsDisabled};
	__property int CRLF = {read=_GetCRLF};
	__property int DEFAULT = {read=_GetDEFAULT};
	__property int NO_CLOSE = {read=_GetNO_CLOSE};
	__property int NO_PADDING = {read=_GetNO_PADDING};
	__property int NO_WRAP = {read=_GetNO_WRAP};
	__property int URL_SAFE = {read=_GetURL_SAFE};
};

__interface  INTERFACE_UUID("{973D30BB-0B0E-4470-9522-2BF1D35C9DEB}") Jutils_Base64  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJutils_Base64 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jutils_Base64Class,_di_Jutils_Base64> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jutils_Base64Class,_di_Jutils_Base64>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJutils_Base64(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jutils_Base64Class,_di_Jutils_Base64> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJutils_Base64(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D4128C35-73E9-4C1D-993C-322EB7DE2475}") JBase64_CoderClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl _Getoutput(void) = 0 ;
	HIDESBASE virtual _di_JBase64_Coder __cdecl init(void) = 0 ;
	__property Androidapi::Jnibridge::TJavaArray__1<System::Byte> * output = {read=_Getoutput};
};

__interface  INTERFACE_UUID("{87B19DF2-A58D-4B15-B83B-186795BA5996}") JBase64_Coder  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl _Getop(void) = 0 ;
	virtual int __cdecl maxOutputSize(int P1) = 0 ;
	virtual bool __cdecl process(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2, int P3, bool P4) = 0 ;
	__property int op = {read=_Getop};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBase64_Coder : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBase64_CoderClass,_di_JBase64_Coder> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBase64_CoderClass,_di_JBase64_Coder>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBase64_Coder(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBase64_CoderClass,_di_JBase64_Coder> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBase64_Coder(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{8605DF3F-C783-4CE8-BF64-1988423B8BB2}") JBase64_DecoderClass  : public JBase64_CoderClass 
{
	HIDESBASE virtual _di_JBase64_Decoder __cdecl init(int P1, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P2) = 0 ;
	virtual int __cdecl maxOutputSize(int P1) = 0 ;
	virtual bool __cdecl process(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2, int P3, bool P4) = 0 ;
};

__interface  INTERFACE_UUID("{95CC5BA6-5D4C-4EEA-916C-75ACF7195492}") JBase64_Decoder  : public JBase64_Coder 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBase64_Decoder : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBase64_DecoderClass,_di_JBase64_Decoder> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBase64_DecoderClass,_di_JBase64_Decoder>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBase64_Decoder(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBase64_DecoderClass,_di_JBase64_Decoder> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBase64_Decoder(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{AE97BB61-7135-454E-A603-DF3D8C4B623B}") JBase64_EncoderClass  : public JBase64_CoderClass 
{
	virtual bool __cdecl _GetAssertionsDisabled(void) = 0 ;
	virtual int __cdecl _GetLINE_GROUPS(void) = 0 ;
	HIDESBASE virtual _di_JBase64_Encoder __cdecl init(int P1, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P2) = 0 ;
	__property bool AssertionsDisabled = {read=_GetAssertionsDisabled};
	__property int LINE_GROUPS = {read=_GetLINE_GROUPS};
};

__interface  INTERFACE_UUID("{A532D535-CFF0-4806-A8AC-07F0D064DCB3}") JBase64_Encoder  : public JBase64_Coder 
{
	virtual bool __cdecl _Getdo_cr(void) = 0 ;
	virtual bool __cdecl _Getdo_newline(void) = 0 ;
	virtual bool __cdecl _Getdo_padding(void) = 0 ;
	virtual int __cdecl _GettailLen(void) = 0 ;
	HIDESBASE virtual int __cdecl maxOutputSize(int P1) = 0 ;
	HIDESBASE virtual bool __cdecl process(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2, int P3, bool P4) = 0 ;
	__property bool do_cr = {read=_Getdo_cr};
	__property bool do_newline = {read=_Getdo_newline};
	__property bool do_padding = {read=_Getdo_padding};
	__property int tailLen = {read=_GettailLen};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBase64_Encoder : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBase64_EncoderClass,_di_JBase64_Encoder> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBase64_EncoderClass,_di_JBase64_Encoder>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBase64_Encoder(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBase64_EncoderClass,_di_JBase64_Encoder> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBase64_Encoder(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A30CFF0D-7CC5-4ADE-AEB9-E34C366879B1}") JBase64HelperClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl encodeToString(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2) = 0 ;
	HIDESBASE virtual _di_JBase64Helper __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{E0DDDBF9-5BD2-4580-AEDB-699120318325}") JBase64Helper  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBase64Helper : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBase64HelperClass,_di_JBase64Helper> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBase64HelperClass,_di_JBase64Helper>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBase64Helper(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBase64HelperClass,_di_JBase64Helper> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBase64Helper(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1F9FFF4A-D4E0-4882-8199-04E7B8183BA9}") Jutils_DebugUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl _GetDBG(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl get(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual int __cdecl getInt(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 ;
	HIDESBASE virtual _di_Jutils_DebugUtils __cdecl init(void) = 0 ;
	__property bool DBG = {read=_GetDBG};
};

__interface  INTERFACE_UUID("{0490C164-767F-4D7D-BF04-510C73EA014B}") Jutils_DebugUtils  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJutils_DebugUtils : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jutils_DebugUtilsClass,_di_Jutils_DebugUtils> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jutils_DebugUtilsClass,_di_Jutils_DebugUtils>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJutils_DebugUtils(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jutils_DebugUtilsClass,_di_Jutils_DebugUtils> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJutils_DebugUtils(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{770CC10F-11DB-4503-8B19-E6E9C276BE0E}") JIntUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl getBytes(int P1) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl getBytes(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2) = 0 /* overload */;
	HIDESBASE virtual _di_JIntUtils __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{DECED3D4-063F-45CF-BF5A-BB55C249273F}") JIntUtils  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJIntUtils : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIntUtilsClass,_di_JIntUtils> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIntUtilsClass,_di_JIntUtils>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJIntUtils(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIntUtilsClass,_di_JIntUtils> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJIntUtils(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{80FDEF09-71AD-4A04-9EEE-A567669606DF}") JNetworkUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetDEFAULT_WIFI_ADDRESS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetWIFI(void) = 0 ;
	virtual Androidapi::Jni::Net::_di_JConnectivityManager __cdecl getConnManager(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * __cdecl getNetworkState(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getWifiAddress(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getWifiIpAddress(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	HIDESBASE virtual _di_JNetworkUtils __cdecl init(void) = 0 ;
	virtual bool __cdecl isConnected(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual bool __cdecl isConnectedToWeakNetwork(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual bool __cdecl isWifi(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString DEFAULT_WIFI_ADDRESS = {read=_GetDEFAULT_WIFI_ADDRESS};
	__property Androidapi::Jni::Javatypes::_di_JString WIFI = {read=_GetWIFI};
};

__interface  INTERFACE_UUID("{9087C662-8D03-49FC-82C6-AA8483C6BA41}") JNetworkUtils  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJNetworkUtils : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNetworkUtilsClass,_di_JNetworkUtils> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNetworkUtilsClass,_di_JNetworkUtils>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJNetworkUtils(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNetworkUtilsClass,_di_JNetworkUtils> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJNetworkUtils(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FEA7C571-9C47-4799-9346-F9B772FD8186}") JPhoneInfoUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getImei(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getImsi(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUniqueID(void) = 0 ;
	HIDESBASE virtual _di_JPhoneInfoUtils __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{6DA38057-6773-4B6F-9BE3-FADDA86F6C60}") JPhoneInfoUtils  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJPhoneInfoUtils : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneInfoUtilsClass,_di_JPhoneInfoUtils> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneInfoUtilsClass,_di_JPhoneInfoUtils>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJPhoneInfoUtils(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneInfoUtilsClass,_di_JPhoneInfoUtils> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJPhoneInfoUtils(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{0783C49D-F782-4F1E-910C-AFA32CA102D6}") JSharedPreferenceHelperClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl apply(Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences_Editor P1) = 0 ;
	HIDESBASE virtual _di_JSharedPreferenceHelper __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{75D83034-420B-4D29-B29A-E46B5E7FE275}") JSharedPreferenceHelper  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSharedPreferenceHelper : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSharedPreferenceHelperClass,_di_JSharedPreferenceHelper> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSharedPreferenceHelperClass,_di_JSharedPreferenceHelper>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSharedPreferenceHelper(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSharedPreferenceHelperClass,_di_JSharedPreferenceHelper> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSharedPreferenceHelper(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FFF30908-BCB8-40FC-9A8E-AB30733151DC}") JStringUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl convertObjectToString(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual int __cdecl hashCode(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual _di_JStringUtils __cdecl init(void) = 0 ;
	virtual bool __cdecl isEmpty(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{C3A68936-BA92-4821-9B91-A441772C2594}") JStringUtils  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJStringUtils : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JStringUtilsClass,_di_JStringUtils> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JStringUtilsClass,_di_JStringUtils>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJStringUtils(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JStringUtilsClass,_di_JStringUtils> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJStringUtils(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{BAA26794-ECFE-444C-8C73-27C9358075FB}") JSystemUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getAppLabel(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getCpuInfo(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JFile __cdecl getRootFolder(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual int __cdecl getSystemVersion(void) = 0 ;
	HIDESBASE virtual _di_JSystemUtils __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{2E7115B5-A331-4509-9C1F-35AD5BA3F0F0}") JSystemUtils  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSystemUtils : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSystemUtilsClass,_di_JSystemUtils> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSystemUtilsClass,_di_JSystemUtils>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSystemUtils(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSystemUtilsClass,_di_JSystemUtils> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSystemUtils(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E70A705C-4D4D-488C-9A09-6F256CBEA046}") Jutils_TimeUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTAG(void) = 0 ;
	virtual int __cdecl _GetTOTAL_M_S_ONE_DAY(void) = 0 ;
	HIDESBASE virtual _di_Jutils_TimeUtils __cdecl init(void) = 0 ;
	virtual bool __cdecl isUpToDate(__int64 P1, int P2) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString TAG = {read=_GetTAG};
	__property int TOTAL_M_S_ONE_DAY = {read=_GetTOTAL_M_S_ONE_DAY};
};

__interface  INTERFACE_UUID("{06E43E9F-AAFB-42B6-A9DE-500B88B850DE}") Jutils_TimeUtils  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJutils_TimeUtils : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jutils_TimeUtilsClass,_di_Jutils_TimeUtils> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jutils_TimeUtilsClass,_di_Jutils_TimeUtils>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJutils_TimeUtils(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jutils_TimeUtilsClass,_di_Jutils_TimeUtils> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJutils_TimeUtils(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{78C92895-99CC-4DEA-80BD-53CC79A0DFCD}") JFastXmlSerializerClass  : public Androidapi::Jni::Javatypes::JXmlSerializerClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JXmlSerializer __cdecl attribute(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	virtual void __cdecl cdsect(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl comment(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl docdecl(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl endDocument(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JXmlSerializer __cdecl endTag(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual void __cdecl entityRef(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl flush(void) = 0 ;
	virtual int __cdecl getDepth(void) = 0 ;
	virtual bool __cdecl getFeature(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getName(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getNamespace(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPrefix(Androidapi::Jni::Javatypes::_di_JString P1, bool P2) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getProperty(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl ignorableWhitespace(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl processingInstruction(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setFeature(Androidapi::Jni::Javatypes::_di_JString P1, bool P2) = 0 ;
	virtual void __cdecl setOutput(Androidapi::Jni::Javatypes::_di_JWriter P1) = 0 /* overload */;
	virtual void __cdecl setOutput(Androidapi::Jni::Javatypes::_di_JOutputStream P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual void __cdecl setPrefix(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual void __cdecl setProperty(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JObject P2) = 0 ;
	virtual void __cdecl startDocument(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JBoolean P2) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JXmlSerializer __cdecl startTag(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JXmlSerializer __cdecl text(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JXmlSerializer __cdecl text(Androidapi::Jnibridge::TJavaArray__1<System::WideChar> * P1, int P2, int P3) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{C23A8D17-404D-4115-A8D5-0AD35A805ACE}") JFastXmlSerializer  : public Androidapi::Jni::Javatypes::JXmlSerializer 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJFastXmlSerializer : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFastXmlSerializerClass,_di_JFastXmlSerializer> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFastXmlSerializerClass,_di_JFastXmlSerializer>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJFastXmlSerializer(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFastXmlSerializerClass,_di_JFastXmlSerializer> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJFastXmlSerializer(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{3096B488-9A68-4CCB-A0A1-E2B8B8985403}") JMySharedPreferencesClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl checkFile(void) = 0 ;
	virtual bool __cdecl contains(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual _di_JMySharedPreferences_MyEditor __cdecl edit(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl getAll(void) = 0 ;
	virtual bool __cdecl getBoolean(Androidapi::Jni::Javatypes::_di_JString P1, bool P2) = 0 ;
	virtual float __cdecl getFloat(Androidapi::Jni::Javatypes::_di_JString P1, float P2) = 0 ;
	virtual int __cdecl getInt(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 ;
	virtual __int64 __cdecl getLong(Androidapi::Jni::Javatypes::_di_JString P1, __int64 P2) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getString(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual void __cdecl registerOnSharedPreferenceChangeListener(_di_JMySharedPreferences_OnSharedPreferenceChangeListener P1) = 0 ;
	virtual void __cdecl unregisterOnSharedPreferenceChangeListener(_di_JMySharedPreferences_OnSharedPreferenceChangeListener P1) = 0 ;
};

__interface  INTERFACE_UUID("{658292D8-6C51-4693-BBBD-7CE7209207B8}") JMySharedPreferences  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMySharedPreferences : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMySharedPreferencesClass,_di_JMySharedPreferences> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMySharedPreferencesClass,_di_JMySharedPreferences>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMySharedPreferences(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMySharedPreferencesClass,_di_JMySharedPreferences> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMySharedPreferences(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B09F7DB9-65AB-4C48-973C-3BE10A80D8C5}") JMySharedPreferences_MyEditorClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual _di_JMySharedPreferences_MyEditor __cdecl clear(void) = 0 ;
	virtual bool __cdecl commit(void) = 0 ;
	virtual _di_JMySharedPreferences_MyEditor __cdecl putBoolean(Androidapi::Jni::Javatypes::_di_JString P1, bool P2) = 0 ;
	virtual _di_JMySharedPreferences_MyEditor __cdecl putFloat(Androidapi::Jni::Javatypes::_di_JString P1, float P2) = 0 ;
	virtual _di_JMySharedPreferences_MyEditor __cdecl putInt(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 ;
	virtual _di_JMySharedPreferences_MyEditor __cdecl putLong(Androidapi::Jni::Javatypes::_di_JString P1, __int64 P2) = 0 ;
	virtual _di_JMySharedPreferences_MyEditor __cdecl putString(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual _di_JMySharedPreferences_MyEditor __cdecl remove(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{81E60435-8DB9-4671-A6C4-02E0C640A1EB}") JMySharedPreferences_MyEditor  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMySharedPreferences_MyEditor : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMySharedPreferences_MyEditorClass,_di_JMySharedPreferences_MyEditor> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMySharedPreferences_MyEditorClass,_di_JMySharedPreferences_MyEditor>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMySharedPreferences_MyEditor(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMySharedPreferences_MyEditorClass,_di_JMySharedPreferences_MyEditor> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMySharedPreferences_MyEditor(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{55CA9C37-945B-4CA0-B4DE-3E1D386DFDA7}") JMySharedPreferences_OnSharedPreferenceChangeListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl onSharedPreferenceChanged(_di_JMySharedPreferences P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

__interface  INTERFACE_UUID("{D55AB233-CC66-4CAD-BDB4-2BC67B493DE8}") JMySharedPreferences_OnSharedPreferenceChangeListener  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMySharedPreferences_OnSharedPreferenceChangeListener : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMySharedPreferences_OnSharedPreferenceChangeListenerClass,_di_JMySharedPreferences_OnSharedPreferenceChangeListener> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMySharedPreferences_OnSharedPreferenceChangeListenerClass,_di_JMySharedPreferences_OnSharedPreferenceChangeListener>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMySharedPreferences_OnSharedPreferenceChangeListener(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMySharedPreferences_OnSharedPreferenceChangeListenerClass,_di_JMySharedPreferences_OnSharedPreferenceChangeListener> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMySharedPreferences_OnSharedPreferenceChangeListener(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{73BA3E19-8FE9-486A-A4AF-ED59FF245B8F}") JPersistentConfigurationClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl clear(void) = 0 ;
	virtual bool __cdecl commit(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl getAll(void) = 0 ;
	virtual bool __cdecl getBoolean(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual float __cdecl getFloat(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual int __cdecl getInt(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual __int64 __cdecl getLong(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getString(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual _di_JPersistentConfiguration __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, bool P4, bool P5) = 0 ;
	virtual void __cdecl putBoolean(Androidapi::Jni::Javatypes::_di_JString P1, bool P2) = 0 ;
	virtual void __cdecl putFloat(Androidapi::Jni::Javatypes::_di_JString P1, float P2) = 0 ;
	virtual void __cdecl putInt(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 ;
	virtual void __cdecl putLong(Androidapi::Jni::Javatypes::_di_JString P1, __int64 P2) = 0 ;
	virtual void __cdecl putString(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual void __cdecl reload(void) = 0 ;
	virtual void __cdecl remove(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{2F6C31A8-DE21-41C6-AE34-AF91BE1563A0}") JPersistentConfiguration  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJPersistentConfiguration : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPersistentConfigurationClass,_di_JPersistentConfiguration> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPersistentConfigurationClass,_di_JPersistentConfiguration>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJPersistentConfiguration(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPersistentConfigurationClass,_di_JPersistentConfiguration> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJPersistentConfiguration(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{7D34A53F-9DC4-40E6-8D64-A225D3986AE7}") JTransactionXMLFileClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetMODE_PRIVATE(void) = 0 ;
	virtual int __cdecl _GetMODE_WORLD_READABLE(void) = 0 ;
	virtual int __cdecl _GetMODE_WORLD_WRITEABLE(void) = 0 ;
	HIDESBASE virtual _di_JTransactionXMLFile __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	__property int MODE_PRIVATE = {read=_GetMODE_PRIVATE};
	__property int MODE_WORLD_READABLE = {read=_GetMODE_WORLD_READABLE};
	__property int MODE_WORLD_WRITEABLE = {read=_GetMODE_WORLD_WRITEABLE};
};

__interface  INTERFACE_UUID("{15EDB4A3-9C41-40C9-A942-239B5BD9CEAF}") JTransactionXMLFile  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual _di_JMySharedPreferences __cdecl getMySharedPreferences(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTransactionXMLFile : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransactionXMLFileClass,_di_JTransactionXMLFile> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransactionXMLFileClass,_di_JTransactionXMLFile>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTransactionXMLFile(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransactionXMLFileClass,_di_JTransactionXMLFile> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTransactionXMLFile(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{77B48AB7-47F8-40BD-B4C7-E872D7A6928E}") JTransactionXMLFile_MySharedPreferencesImplClass  : public JMySharedPreferencesClass 
{
	HIDESBASE virtual bool __cdecl checkFile(void) = 0 ;
	HIDESBASE virtual bool __cdecl contains(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual _di_JMySharedPreferences_MyEditor __cdecl edit(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl getAll(void) = 0 ;
	HIDESBASE virtual bool __cdecl getBoolean(Androidapi::Jni::Javatypes::_di_JString P1, bool P2) = 0 ;
	HIDESBASE virtual float __cdecl getFloat(Androidapi::Jni::Javatypes::_di_JString P1, float P2) = 0 ;
	HIDESBASE virtual int __cdecl getInt(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 ;
	HIDESBASE virtual __int64 __cdecl getLong(Androidapi::Jni::Javatypes::_di_JString P1, __int64 P2) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getString(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual bool __cdecl hasFileChanged(void) = 0 ;
	HIDESBASE virtual void __cdecl registerOnSharedPreferenceChangeListener(_di_JMySharedPreferences_OnSharedPreferenceChangeListener P1) = 0 ;
	virtual void __cdecl replace(Androidapi::Jni::Javatypes::_di_JMap P1) = 0 ;
	virtual void __cdecl setHasChange(bool P1) = 0 ;
	HIDESBASE virtual void __cdecl unregisterOnSharedPreferenceChangeListener(_di_JMySharedPreferences_OnSharedPreferenceChangeListener P1) = 0 ;
};

__interface  INTERFACE_UUID("{A4C8A6CC-1323-4B93-B171-84F3AEF68223}") JTransactionXMLFile_MySharedPreferencesImpl  : public JMySharedPreferences 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTransactionXMLFile_MySharedPreferencesImpl : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransactionXMLFile_MySharedPreferencesImplClass,_di_JTransactionXMLFile_MySharedPreferencesImpl> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransactionXMLFile_MySharedPreferencesImplClass,_di_JTransactionXMLFile_MySharedPreferencesImpl>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTransactionXMLFile_MySharedPreferencesImpl(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransactionXMLFile_MySharedPreferencesImplClass,_di_JTransactionXMLFile_MySharedPreferencesImpl> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTransactionXMLFile_MySharedPreferencesImpl(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A0F7BC80-302E-4795-9F34-CC9558A94505}") JMySharedPreferencesImpl_EditorImplClass  : public JMySharedPreferences_MyEditorClass 
{
	virtual _di_JMySharedPreferencesImpl_EditorImpl __cdecl init(_di_JTransactionXMLFile_MySharedPreferencesImpl P1) = 0 ;
};

__interface  INTERFACE_UUID("{7FFF1137-3BBE-4851-BFB7-16A2D86FB6EB}") JMySharedPreferencesImpl_EditorImpl  : public JMySharedPreferences_MyEditor 
{
	virtual _di_JMySharedPreferences_MyEditor __cdecl clear(void) = 0 ;
	virtual bool __cdecl commit(void) = 0 ;
	virtual _di_JMySharedPreferences_MyEditor __cdecl putBoolean(Androidapi::Jni::Javatypes::_di_JString P1, bool P2) = 0 ;
	virtual _di_JMySharedPreferences_MyEditor __cdecl putFloat(Androidapi::Jni::Javatypes::_di_JString P1, float P2) = 0 ;
	virtual _di_JMySharedPreferences_MyEditor __cdecl putInt(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 ;
	virtual _di_JMySharedPreferences_MyEditor __cdecl putLong(Androidapi::Jni::Javatypes::_di_JString P1, __int64 P2) = 0 ;
	virtual _di_JMySharedPreferences_MyEditor __cdecl putString(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual _di_JMySharedPreferences_MyEditor __cdecl remove(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMySharedPreferencesImpl_EditorImpl : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMySharedPreferencesImpl_EditorImplClass,_di_JMySharedPreferencesImpl_EditorImpl> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMySharedPreferencesImpl_EditorImplClass,_di_JMySharedPreferencesImpl_EditorImpl>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMySharedPreferencesImpl_EditorImpl(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMySharedPreferencesImpl_EditorImplClass,_di_JMySharedPreferencesImpl_EditorImpl> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMySharedPreferencesImpl_EditorImpl(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F41B4C88-3752-4CBF-8B42-6CBDE12EB000}") JXmlUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl beginDocument(Androidapi::Jni::Javatypes::_di_JXmlPullParser P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual bool __cdecl convertValueToBoolean(Androidapi::Jni::Javatypes::_di_JCharSequence P1, bool P2) = 0 ;
	virtual int __cdecl convertValueToInt(Androidapi::Jni::Javatypes::_di_JCharSequence P1, int P2) = 0 ;
	virtual int __cdecl convertValueToList(Androidapi::Jni::Javatypes::_di_JCharSequence P1, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P2, int P3) = 0 ;
	virtual int __cdecl convertValueToUnsignedInt(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 ;
	virtual void __cdecl nextElement(Androidapi::Jni::Javatypes::_di_JXmlPullParser P1) = 0 ;
	virtual int __cdecl parseUnsignedIntAttribute(Androidapi::Jni::Javatypes::_di_JCharSequence P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JArrayList __cdecl readListXml(Androidapi::Jni::Javatypes::_di_JInputStream P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JHashMap __cdecl readMapXml(Androidapi::Jni::Javatypes::_di_JInputStream P1) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<int> * __cdecl readThisIntArrayXml(Androidapi::Jni::Javatypes::_di_JXmlPullParser P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P3) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JArrayList __cdecl readThisListXml(Androidapi::Jni::Javatypes::_di_JXmlPullParser P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P3) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JHashMap __cdecl readThisMapXml(Androidapi::Jni::Javatypes::_di_JXmlPullParser P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P3) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl readValueXml(Androidapi::Jni::Javatypes::_di_JXmlPullParser P1, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P2) = 0 ;
	virtual void __cdecl skipCurrentTag(Androidapi::Jni::Javatypes::_di_JXmlPullParser P1) = 0 ;
	virtual void __cdecl writeByteArrayXml(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JXmlSerializer P3) = 0 ;
	virtual void __cdecl writeIntArrayXml(Androidapi::Jnibridge::TJavaArray__1<int> * P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JXmlSerializer P3) = 0 ;
	virtual void __cdecl writeListXml(Androidapi::Jni::Javatypes::_di_JList P1, Androidapi::Jni::Javatypes::_di_JOutputStream P2) = 0 /* overload */;
	virtual void __cdecl writeListXml(Androidapi::Jni::Javatypes::_di_JList P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JXmlSerializer P3) = 0 /* overload */;
	virtual void __cdecl writeMapXml(Androidapi::Jni::Javatypes::_di_JMap P1, Androidapi::Jni::Javatypes::_di_JOutputStream P2) = 0 /* overload */;
	virtual void __cdecl writeMapXml(Androidapi::Jni::Javatypes::_di_JMap P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JXmlSerializer P3) = 0 /* overload */;
	virtual void __cdecl writeValueXml(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JXmlSerializer P3) = 0 ;
};

__interface  INTERFACE_UUID("{D79E9038-72D4-4F8B-A513-7EBC21EB4AE2}") JXmlUtils  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJXmlUtils : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JXmlUtilsClass,_di_JXmlUtils> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JXmlUtilsClass,_di_JXmlUtils>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJXmlUtils(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JXmlUtilsClass,_di_JXmlUtils> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJXmlUtils(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{7AB941EE-78D6-4BA7-B681-677905DED2FD}") JDeviceClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDeviceId(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getImei(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getImsi(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUtdid(void) = 0 ;
	HIDESBASE virtual _di_JDevice __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{9F333004-7404-4C39-8575-605660C8407B}") JDevice  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDevice : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceClass,_di_JDevice> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceClass,_di_JDevice>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDevice(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceClass,_di_JDevice> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDevice(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{98520297-688B-4ED7-94CB-16543AA08E51}") JDeviceInfoClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl _GetCREATE_DEVICE_METADATA_LOCK(void) = 0 ;
	virtual System::Byte __cdecl _GetUTDID_VERSION_CODE(void) = 0 ;
	virtual _di_JDevice __cdecl getDevice(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual __int64 __cdecl getMetadataCheckSum(_di_JDevice P1) = 0 ;
	HIDESBASE virtual _di_JDeviceInfo __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JObject CREATE_DEVICE_METADATA_LOCK = {read=_GetCREATE_DEVICE_METADATA_LOCK};
	__property System::Byte UTDID_VERSION_CODE = {read=_GetUTDID_VERSION_CODE};
};

__interface  INTERFACE_UUID("{EA042690-0D39-452D-B1D6-0DBD54E65931}") JDeviceInfo  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDeviceInfo : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceInfoClass,_di_JDeviceInfo> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceInfoClass,_di_JDeviceInfo>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDeviceInfo(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeviceInfoClass,_di_JDeviceInfo> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDeviceInfo(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FF1D0654-3898-4F58-8796-0AC46DCF1BD6}") JUTDeviceClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUtdid(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	HIDESBASE virtual _di_JUTDevice __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{008A2F49-E03C-46F9-9271-8F02538B7FBA}") JUTDevice  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJUTDevice : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUTDeviceClass,_di_JUTDevice> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUTDeviceClass,_di_JUTDevice>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUTDevice(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUTDeviceClass,_di_JUTDevice> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUTDevice(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{4420B993-CB6B-4C49-BB0A-012676223689}") JUTUtdidClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetUM_SETTINGS_STORAGE_NEW(void) = 0 ;
	HIDESBASE virtual _di_JUTUtdid __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual _di_JUTUtdid __cdecl instance(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString UM_SETTINGS_STORAGE_NEW = {read=_GetUM_SETTINGS_STORAGE_NEW};
};

__interface  INTERFACE_UUID("{141CBA3C-CC0F-4F10-AD1F-95BCBA6914BC}") JUTUtdid  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getValue(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJUTUtdid : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUTUtdidClass,_di_JUTUtdid> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUTUtdidClass,_di_JUTUtdid>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUTUtdid(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUTUtdidClass,_di_JUTUtdid> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUTUtdid(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C5CD17D5-F130-42F8-8265-B50DE22ED399}") JUTUtdidHelperClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl dePack(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl generateRandomUTDID(void) = 0 ;
	HIDESBASE virtual _di_JUTUtdidHelper __cdecl init(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl pack(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl packUtdidStr(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{6741351F-EC7B-4995-AF95-B5A645BD5DB0}") JUTUtdidHelper  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJUTUtdidHelper : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUTUtdidHelperClass,_di_JUTUtdidHelper> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUTUtdidHelperClass,_di_JUTUtdidHelper>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUTUtdidHelper(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUTUtdidHelperClass,_di_JUTUtdidHelper> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUTUtdidHelper(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{515F20EA-2FC3-40D1-A89B-3709E4D60B81}") JUTUtdidHelper2Class  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl dePack(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl dePackWithBase64(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual _di_JUTUtdidHelper2 __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{B71C7268-FF06-407F-A1C6-D5EA2A4E59BF}") JUTUtdidHelper2  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJUTUtdidHelper2 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUTUtdidHelper2Class,_di_JUTUtdidHelper2> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUTUtdidHelper2Class,_di_JUTUtdidHelper2>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUTUtdidHelper2(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUTUtdidHelper2Class,_di_JUTUtdidHelper2> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUTUtdidHelper2(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6940D9D7-C652-4BF5-929A-5A23503FB336}") JAidCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl onAidEventChanged(int P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

__interface  INTERFACE_UUID("{C1BDE83F-75A6-493B-AA7C-22275DAC3C3E}") JAidCallback  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAidCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidCallbackClass,_di_JAidCallback> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidCallbackClass,_di_JAidCallback>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAidCallback(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidCallbackClass,_di_JAidCallback> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAidCallback(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{87D2E752-8791-487C-B845-91D7B2E178E1}") JAidConstantsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetEVENT_NETWORK_ERROR(void) = 0 ;
	virtual int __cdecl _GetEVENT_REQUEST_FAILED(void) = 0 ;
	virtual int __cdecl _GetEVENT_REQUEST_STARTED(void) = 0 ;
	virtual int __cdecl _GetEVENT_REQUEST_SUCCESS(void) = 0 ;
	HIDESBASE virtual _di_JAidConstants __cdecl init(void) = 0 ;
	__property int EVENT_NETWORK_ERROR = {read=_GetEVENT_NETWORK_ERROR};
	__property int EVENT_REQUEST_FAILED = {read=_GetEVENT_REQUEST_FAILED};
	__property int EVENT_REQUEST_STARTED = {read=_GetEVENT_REQUEST_STARTED};
	__property int EVENT_REQUEST_SUCCESS = {read=_GetEVENT_REQUEST_SUCCESS};
};

__interface  INTERFACE_UUID("{E2B88B15-22C0-4EBA-A672-3EA652A02187}") JAidConstants  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAidConstants : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidConstantsClass,_di_JAidConstants> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidConstantsClass,_di_JAidConstants>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAidConstants(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAidConstantsClass,_di_JAidConstants> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAidConstants(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{76A24B59-D5C6-4F8B-B3E8-5BA714C348E7}") Jdevice_UTDeviceClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getAid(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContext P3) = 0 ;
	virtual void __cdecl getAidAsync(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContext P3, _di_JAidCallback P4) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUtdid(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	HIDESBASE virtual _di_Jdevice_UTDevice __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{BDA5BCFB-9DD3-4A3A-B912-AE63BA155CBC}") Jdevice_UTDevice  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJdevice_UTDevice : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jdevice_UTDeviceClass,_di_Jdevice_UTDevice> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jdevice_UTDeviceClass,_di_Jdevice_UTDevice>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJdevice_UTDevice(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jdevice_UTDeviceClass,_di_Jdevice_UTDevice> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJdevice_UTDevice(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A92E28C4-6D5E-4DA2-86CA-DDC42618E862}") JAbstractSequentialListClass  : public Androidapi::Jni::Javatypes::JAbstractListClass 
{
	virtual void __cdecl add(int location, Androidapi::Jni::Javatypes::_di_JObject object_) = 0 ;
	virtual bool __cdecl addAll(int location, Androidapi::Jni::Javatypes::_di_JCollection collection) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl remove(int location) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl set(int location, Androidapi::Jni::Javatypes::_di_JObject object_) = 0 ;
};

__interface  INTERFACE_UUID("{9348F5BB-85A6-4522-98D0-532EC8CC3CD5}") JAbstractSequentialList  : public Androidapi::Jni::Javatypes::JAbstractList 
{
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl get(int location) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JIterator __cdecl iterator(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JListIterator __cdecl listIterator(int location) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAbstractSequentialList : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractSequentialListClass,_di_JAbstractSequentialList> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractSequentialListClass,_di_JAbstractSequentialList>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAbstractSequentialList(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractSequentialListClass,_di_JAbstractSequentialList> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAbstractSequentialList(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6993E6FF-7348-469B-8AAA-54A5EAD78369}") JLinkedListClass  : public JAbstractSequentialListClass 
{
	HIDESBASE virtual _di_JLinkedList __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JLinkedList __cdecl init(Androidapi::Jni::Javatypes::_di_JCollection collection) = 0 /* overload */;
	HIDESBASE virtual bool __cdecl addAll(Androidapi::Jni::Javatypes::_di_JCollection collection) = 0 /* overload */;
	virtual void __cdecl addFirst(Androidapi::Jni::Javatypes::_di_JObject object_) = 0 ;
	virtual void __cdecl addLast(Androidapi::Jni::Javatypes::_di_JObject object_) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JIterator __cdecl descendingIterator(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl element(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl get(int location) = 0 ;
	virtual int __cdecl lastIndexOf(Androidapi::Jni::Javatypes::_di_JObject object_) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JListIterator __cdecl listIterator(int location) = 0 ;
	virtual bool __cdecl offer(Androidapi::Jni::Javatypes::_di_JObject o) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl peekFirst(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl peekLast(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl poll(void) = 0 ;
	virtual void __cdecl push(Androidapi::Jni::Javatypes::_di_JObject e) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl remove(int location) = 0 /* overload */;
	HIDESBASE virtual bool __cdecl remove(Androidapi::Jni::Javatypes::_di_JObject object_) = 0 /* overload */;
	virtual bool __cdecl removeFirstOccurrence(Androidapi::Jni::Javatypes::_di_JObject o) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl removeLast(void) = 0 ;
	virtual bool __cdecl removeLastOccurrence(Androidapi::Jni::Javatypes::_di_JObject o) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JObject> * __cdecl toArray(Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JObject> * contents) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{4A635C54-7C6B-4707-B3D9-880FF84F8084}") JLinkedList  : public JAbstractSequentialList 
{
	HIDESBASE virtual void __cdecl add(int location, Androidapi::Jni::Javatypes::_di_JObject object_) = 0 /* overload */;
	HIDESBASE virtual bool __cdecl add(Androidapi::Jni::Javatypes::_di_JObject object_) = 0 /* overload */;
	HIDESBASE virtual bool __cdecl addAll(int location, Androidapi::Jni::Javatypes::_di_JCollection collection) = 0 /* overload */;
	HIDESBASE virtual void __cdecl clear(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl clone(void) = 0 ;
	HIDESBASE virtual bool __cdecl contains(Androidapi::Jni::Javatypes::_di_JObject object_) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getFirst(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getLast(void) = 0 ;
	HIDESBASE virtual int __cdecl indexOf(Androidapi::Jni::Javatypes::_di_JObject object_) = 0 ;
	virtual bool __cdecl offerFirst(Androidapi::Jni::Javatypes::_di_JObject e) = 0 ;
	virtual bool __cdecl offerLast(Androidapi::Jni::Javatypes::_di_JObject e) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl peek(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl pollFirst(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl pollLast(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl pop(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl remove(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl removeFirst(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl set(int location, Androidapi::Jni::Javatypes::_di_JObject object_) = 0 ;
	HIDESBASE virtual int __cdecl size(void) = 0 ;
	HIDESBASE virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JObject> * __cdecl toArray(void) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLinkedList : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLinkedListClass,_di_JLinkedList> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLinkedListClass,_di_JLinkedList>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLinkedList(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLinkedListClass,_di_JLinkedList> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLinkedList(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{44668B66-6645-4B14-878C-999BCBBDD45B}") JConnectionReuseStrategyClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{E2039F21-FF38-475B-B61C-11C4A7919CAA}") JConnectionReuseStrategy  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual bool __cdecl keepAlive(_di_JHttpResponse response, _di_JHttpContext context) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJConnectionReuseStrategy : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConnectionReuseStrategyClass,_di_JConnectionReuseStrategy> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConnectionReuseStrategyClass,_di_JConnectionReuseStrategy>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJConnectionReuseStrategy(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConnectionReuseStrategyClass,_di_JConnectionReuseStrategy> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJConnectionReuseStrategy(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{589CF2B2-75D2-4C63-A335-1AD6F4F7BF29}") JHeaderClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getValue(void) = 0 ;
};

__interface  INTERFACE_UUID("{1545C3CE-B97A-46E3-AF15-FF98E8457C5D}") JHeader  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<_di_JHeaderElement> * __cdecl getElements(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getName(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHeader : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeaderClass,_di_JHeader> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeaderClass,_di_JHeader>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHeader(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeaderClass,_di_JHeader> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHeader(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FD42BB66-0F92-4D58-A313-B39DA3700197}") JHeaderElementClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getName(void) = 0 ;
	virtual int __cdecl getParameterCount(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<_di_JNameValuePair> * __cdecl getParameters(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getValue(void) = 0 ;
};

__interface  INTERFACE_UUID("{1E662490-4240-48E0-894A-CD657EFC7711}") JHeaderElement  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual _di_JNameValuePair __cdecl getParameter(int index) = 0 ;
	virtual _di_JNameValuePair __cdecl getParameterByName(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHeaderElement : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeaderElementClass,_di_JHeaderElement> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeaderElementClass,_di_JHeaderElement>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHeaderElement(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeaderElementClass,_di_JHeaderElement> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHeaderElement(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{570A2BB6-F91F-4289-BA9B-81DC99E9E622}") JHeaderIteratorClass  : public Androidapi::Jni::Javatypes::JIteratorClass 
{
	
};

__interface  INTERFACE_UUID("{69615D53-6AB0-43BC-9E7B-B3EF6ADDE8C3}") JHeaderIterator  : public Androidapi::Jni::Javatypes::JIterator 
{
	HIDESBASE virtual bool __cdecl hasNext(void) = 0 ;
	virtual _di_JHeader __cdecl nextHeader(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHeaderIterator : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeaderIteratorClass,_di_JHeaderIterator> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeaderIteratorClass,_di_JHeaderIterator>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHeaderIterator(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeaderIteratorClass,_di_JHeaderIterator> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHeaderIterator(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C53297C2-FCCC-4112-BE4C-4A748C779A37}") JHttpConnectionClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl isOpen(void) = 0 ;
	virtual bool __cdecl isStale(void) = 0 ;
	virtual void __cdecl setSocketTimeout(int timeout) = 0 ;
};

__interface  INTERFACE_UUID("{D9CF496A-43F1-4CAB-AE8C-0BB91D68B07F}") JHttpConnection  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl close(void) = 0 ;
	virtual _di_JHttpConnectionMetrics __cdecl getMetrics(void) = 0 ;
	virtual int __cdecl getSocketTimeout(void) = 0 ;
	virtual void __cdecl shutdown(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpConnection : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpConnectionClass,_di_JHttpConnection> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpConnectionClass,_di_JHttpConnection>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpConnection(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpConnectionClass,_di_JHttpConnection> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpConnection(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{262D8E40-A3D7-4A3B-9118-0B20C42B3501}") JHttpClientConnectionClass  : public JHttpConnectionClass 
{
	virtual void __cdecl flush(void) = 0 ;
	virtual bool __cdecl isResponseAvailable(int timeout) = 0 ;
	virtual void __cdecl receiveResponseEntity(_di_JHttpResponse response) = 0 ;
};

__interface  INTERFACE_UUID("{7D23A414-2C9F-45D6-9A98-88629A619D1F}") JHttpClientConnection  : public JHttpConnection 
{
	virtual _di_JHttpResponse __cdecl receiveResponseHeader(void) = 0 ;
	virtual void __cdecl sendRequestEntity(_di_JHttpEntityEnclosingRequest request) = 0 ;
	virtual void __cdecl sendRequestHeader(_di_JHttpRequest request) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpClientConnection : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpClientConnectionClass,_di_JHttpClientConnection> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpClientConnectionClass,_di_JHttpClientConnection>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpClientConnection(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpClientConnectionClass,_di_JHttpClientConnection> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpClientConnection(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{BBC2B8E7-16A1-4CFF-BFF2-2F35F77A6D6C}") JHttpConnectionMetricsClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getMetric(Androidapi::Jni::Javatypes::_di_JString metricName) = 0 ;
	virtual __int64 __cdecl getReceivedBytesCount(void) = 0 ;
	virtual void __cdecl reset(void) = 0 ;
};

__interface  INTERFACE_UUID("{EF972B75-57BA-4CAC-A4A4-E68C390763C4}") JHttpConnectionMetrics  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual __int64 __cdecl getRequestCount(void) = 0 ;
	virtual __int64 __cdecl getResponseCount(void) = 0 ;
	virtual __int64 __cdecl getSentBytesCount(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpConnectionMetrics : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpConnectionMetricsClass,_di_JHttpConnectionMetrics> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpConnectionMetricsClass,_di_JHttpConnectionMetrics>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpConnectionMetrics(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpConnectionMetricsClass,_di_JHttpConnectionMetrics> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpConnectionMetrics(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F5B7ED25-9187-4F24-8E48-16EC24834C00}") JHttpEntityClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl consumeContent(void) = 0 ;
	virtual _di_JHeader __cdecl getContentType(void) = 0 ;
	virtual bool __cdecl isChunked(void) = 0 ;
	virtual bool __cdecl isRepeatable(void) = 0 ;
};

__interface  INTERFACE_UUID("{F1AFF91A-2BBF-4B08-84E1-7D5BF15559C0}") JHttpEntity  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JInputStream __cdecl getContent(void) = 0 ;
	virtual _di_JHeader __cdecl getContentEncoding(void) = 0 ;
	virtual __int64 __cdecl getContentLength(void) = 0 ;
	virtual bool __cdecl isStreaming(void) = 0 ;
	virtual void __cdecl writeTo(Androidapi::Jni::Javatypes::_di_JOutputStream outstream) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpEntity : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpEntityClass,_di_JHttpEntity> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpEntityClass,_di_JHttpEntity>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpEntity(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpEntityClass,_di_JHttpEntity> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpEntity(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{769F5EF5-9771-4A6E-B142-B37A3FD1E352}") JHttpMessageClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl containsHeader(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<_di_JHeader> * __cdecl getAllHeaders(void) = 0 ;
	virtual _di_JHeader __cdecl getFirstHeader(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual _di_JProtocolVersion __cdecl getProtocolVersion(void) = 0 ;
	virtual _di_JHeaderIterator __cdecl headerIterator(void) = 0 /* overload */;
	virtual _di_JHeaderIterator __cdecl headerIterator(Androidapi::Jni::Javatypes::_di_JString name) = 0 /* overload */;
	virtual void __cdecl setHeader(Androidapi::Jni::Javatypes::_di_JString name, Androidapi::Jni::Javatypes::_di_JString value) = 0 /* overload */;
	virtual void __cdecl setHeaders(Androidapi::Jnibridge::TJavaObjectArray__1<_di_JHeader> * headers) = 0 ;
};

__interface  INTERFACE_UUID("{77BA2E48-2EA0-44E6-9B30-1FDE4206E6E2}") JHttpMessage  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl addHeader(_di_JHeader header) = 0 /* overload */;
	virtual void __cdecl addHeader(Androidapi::Jni::Javatypes::_di_JString name, Androidapi::Jni::Javatypes::_di_JString value) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<_di_JHeader> * __cdecl getHeaders(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual _di_JHeader __cdecl getLastHeader(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual void __cdecl removeHeader(_di_JHeader header) = 0 ;
	virtual void __cdecl removeHeaders(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual void __cdecl setHeader(_di_JHeader header) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpMessage : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpMessageClass,_di_JHttpMessage> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpMessageClass,_di_JHttpMessage>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpMessage(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpMessageClass,_di_JHttpMessage> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpMessage(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1DBB6013-86AC-4303-9CE1-6EF0AE148C1F}") JHttpRequestClass  : public JHttpMessageClass 
{
	
};

__interface  INTERFACE_UUID("{71D33C58-D271-428D-8350-E0F5C90CF053}") JHttpRequest  : public JHttpMessage 
{
	virtual _di_JRequestLine __cdecl getRequestLine(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpRequest : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestClass,_di_JHttpRequest> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestClass,_di_JHttpRequest>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpRequest(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestClass,_di_JHttpRequest> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpRequest(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{EF750C00-E20C-4F55-A7EC-1210D7C62E10}") JHttpEntityEnclosingRequestClass  : public JHttpRequestClass 
{
	virtual bool __cdecl expectContinue(void) = 0 ;
	virtual _di_JHttpEntity __cdecl getEntity(void) = 0 ;
	virtual void __cdecl setEntity(_di_JHttpEntity entity) = 0 ;
};

__interface  INTERFACE_UUID("{1CF37AC6-66EA-4673-803B-8D4FF8422B4E}") JHttpEntityEnclosingRequest  : public JHttpRequest 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpEntityEnclosingRequest : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpEntityEnclosingRequestClass,_di_JHttpEntityEnclosingRequest> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpEntityEnclosingRequestClass,_di_JHttpEntityEnclosingRequest>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpEntityEnclosingRequest(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpEntityEnclosingRequestClass,_di_JHttpEntityEnclosingRequest> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpEntityEnclosingRequest(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6AB208B8-533D-4292-B759-7D13B07ED3CB}") JHttpHostClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetDEFAULT_SCHEME_NAME(void) = 0 ;
	HIDESBASE virtual _di_JHttpHost __cdecl init(Androidapi::Jni::Javatypes::_di_JString hostname, int port, Androidapi::Jni::Javatypes::_di_JString scheme) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpHost __cdecl init(Androidapi::Jni::Javatypes::_di_JString hostname, int port) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpHost __cdecl init(Androidapi::Jni::Javatypes::_di_JString hostname) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpHost __cdecl init(_di_JHttpHost httphost) = 0 /* overload */;
	virtual int __cdecl getPort(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getSchemeName(void) = 0 ;
	virtual int __cdecl hashCode(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString DEFAULT_SCHEME_NAME = {read=_GetDEFAULT_SCHEME_NAME};
};

__interface  INTERFACE_UUID("{17C5E0CC-A973-473E-913B-32525005285D}") JHttpHost  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl clone(void) = 0 ;
	HIDESBASE virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject obj) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getHostName(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toHostString(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toURI(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpHost : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpHostClass,_di_JHttpHost> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpHostClass,_di_JHttpHost>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpHost(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpHostClass,_di_JHttpHost> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpHost(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{35967E10-7901-4C83-A54C-D0A8DBFE3EAB}") JHttpResponseClass  : public JHttpMessageClass 
{
	virtual void __cdecl setEntity(_di_JHttpEntity entity) = 0 ;
	virtual void __cdecl setLocale(Androidapi::Jni::Javatypes::_di_JLocale loc) = 0 ;
	virtual void __cdecl setReasonPhrase(Androidapi::Jni::Javatypes::_di_JString reason) = 0 ;
	virtual void __cdecl setStatusLine(_di_JProtocolVersion ver, int code, Androidapi::Jni::Javatypes::_di_JString reason) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{B3288FCA-65A7-4CD0-BFFA-708987C7EC7F}") JHttpResponse  : public JHttpMessage 
{
	virtual _di_JHttpEntity __cdecl getEntity(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JLocale __cdecl getLocale(void) = 0 ;
	virtual _di_JStatusLine __cdecl getStatusLine(void) = 0 ;
	virtual void __cdecl setStatusCode(int code) = 0 ;
	virtual void __cdecl setStatusLine(_di_JStatusLine statusline) = 0 /* overload */;
	virtual void __cdecl setStatusLine(_di_JProtocolVersion ver, int code) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpResponse : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpResponseClass,_di_JHttpResponse> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpResponseClass,_di_JHttpResponse>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpResponse(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpResponseClass,_di_JHttpResponse> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpResponse(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{ACF19767-82E9-4B27-A6BD-AAD6AE2A3C2C}") JHttpResponseInterceptorClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{41F11D4A-E795-407D-B113-55C759C49B05}") JHttpResponseInterceptor  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl process(_di_JHttpResponse response, _di_JHttpContext context) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpResponseInterceptor : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpResponseInterceptorClass,_di_JHttpResponseInterceptor> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpResponseInterceptorClass,_di_JHttpResponseInterceptor>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpResponseInterceptor(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpResponseInterceptorClass,_di_JHttpResponseInterceptor> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpResponseInterceptor(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F48E930D-87E4-4AD5-AABA-1A46559260F3}") JNameValuePairClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{91756B16-E947-4BC6-A22E-4D27B91E5A2E}") JNameValuePair  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getName(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getValue(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJNameValuePair : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNameValuePairClass,_di_JNameValuePair> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNameValuePairClass,_di_JNameValuePair>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJNameValuePair(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNameValuePairClass,_di_JNameValuePair> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJNameValuePair(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C56E5208-0D19-47D5-896B-3FDCE955DC5B}") JProtocolVersionClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JProtocolVersion __cdecl init(Androidapi::Jni::Javatypes::_di_JString protocol, int major, int minor) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl clone(void) = 0 ;
	virtual int __cdecl getMajor(void) = 0 ;
	virtual int __cdecl getMinor(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getProtocol(void) = 0 ;
	virtual bool __cdecl isComparable(_di_JProtocolVersion that) = 0 ;
	virtual bool __cdecl lessEquals(_di_JProtocolVersion version) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

__interface  INTERFACE_UUID("{AF19280C-20EA-4C98-8656-AC6E14724D6B}") JProtocolVersion  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl compareToVersion(_di_JProtocolVersion that) = 0 ;
	HIDESBASE virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject obj) = 0 ;
	virtual _di_JProtocolVersion __cdecl forVersion(int major, int minor) = 0 ;
	virtual bool __cdecl greaterEquals(_di_JProtocolVersion version) = 0 ;
	HIDESBASE virtual int __cdecl hashCode(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJProtocolVersion : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JProtocolVersionClass,_di_JProtocolVersion> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JProtocolVersionClass,_di_JProtocolVersion>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJProtocolVersion(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JProtocolVersionClass,_di_JProtocolVersion> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJProtocolVersion(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{0442D6CB-26E0-417E-A04B-75F61DE5DBF2}") JRequestLineClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual _di_JProtocolVersion __cdecl getProtocolVersion(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUri(void) = 0 ;
};

__interface  INTERFACE_UUID("{970ADDDF-CF27-4BDE-BB93-1D40E494805E}") JRequestLine  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMethod(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRequestLine : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRequestLineClass,_di_JRequestLine> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRequestLineClass,_di_JRequestLine>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRequestLine(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRequestLineClass,_di_JRequestLine> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRequestLine(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{139B984C-CA35-45C5-AA3D-64E889A1295B}") JStatusLineClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual _di_JProtocolVersion __cdecl getProtocolVersion(void) = 0 ;
};

__interface  INTERFACE_UUID("{A055CBF8-6D7E-4C22-B4DC-73A675009C6C}") JStatusLine  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getReasonPhrase(void) = 0 ;
	virtual int __cdecl getStatusCode(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJStatusLine : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JStatusLineClass,_di_JStatusLine> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JStatusLineClass,_di_JStatusLine>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJStatusLine(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JStatusLineClass,_di_JStatusLine> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJStatusLine(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{03F47518-A7C4-432F-9949-EA87941DAE0A}") JAuthSchemeClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual _di_JHeader __cdecl authenticate(_di_JCredentials credentials, _di_JHttpRequest request) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getParameter(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual bool __cdecl isConnectionBased(void) = 0 ;
	virtual void __cdecl processChallenge(_di_JHeader header) = 0 ;
};

__interface  INTERFACE_UUID("{3FF7DAAF-5116-42BA-BE4B-12CBED74A89A}") JAuthScheme  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getRealm(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getSchemeName(void) = 0 ;
	virtual bool __cdecl isComplete(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAuthScheme : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthSchemeClass,_di_JAuthScheme> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthSchemeClass,_di_JAuthScheme>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAuthScheme(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthSchemeClass,_di_JAuthScheme> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAuthScheme(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{89ADB9B6-238E-4706-A245-45131EECF1A6}") JAuthSchemeFactoryClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{AB162B5F-B8DD-4EA9-8138-550AAAADA248}") JAuthSchemeFactory  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAuthSchemeFactory : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthSchemeFactoryClass,_di_JAuthSchemeFactory> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthSchemeFactoryClass,_di_JAuthSchemeFactory>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAuthSchemeFactory(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthSchemeFactoryClass,_di_JAuthSchemeFactory> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAuthSchemeFactory(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F7A22118-354D-4E5F-9B0A-9FC6E41A6556}") JAuthSchemeRegistryClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JAuthSchemeRegistry __cdecl init(void) = 0 ;
	virtual void __cdecl unregister(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
};

__interface  INTERFACE_UUID("{DE9069CA-AEB7-4295-8145-67CDDD96E15E}") JAuthSchemeRegistry  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getSchemeNames(void) = 0 ;
	virtual void __cdecl Register(Androidapi::Jni::Javatypes::_di_JString name, _di_JAuthSchemeFactory factory) = 0 ;
	virtual void __cdecl setItems(Androidapi::Jni::Javatypes::_di_JMap map) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAuthSchemeRegistry : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthSchemeRegistryClass,_di_JAuthSchemeRegistry> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthSchemeRegistryClass,_di_JAuthSchemeRegistry>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAuthSchemeRegistry(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthSchemeRegistryClass,_di_JAuthSchemeRegistry> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAuthSchemeRegistry(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FD111C1F-F6FC-49B5-83B2-9A4610557623}") JAuthScopeClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_JAuthScope __cdecl _GetANY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetANY_HOST(void) = 0 ;
	virtual int __cdecl _GetANY_PORT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetANY_REALM(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetANY_SCHEME(void) = 0 ;
	HIDESBASE virtual _di_JAuthScope __cdecl init(Androidapi::Jni::Javatypes::_di_JString host, int port, Androidapi::Jni::Javatypes::_di_JString realm, Androidapi::Jni::Javatypes::_di_JString scheme) = 0 /* overload */;
	HIDESBASE virtual _di_JAuthScope __cdecl init(Androidapi::Jni::Javatypes::_di_JString host, int port, Androidapi::Jni::Javatypes::_di_JString realm) = 0 /* overload */;
	HIDESBASE virtual _di_JAuthScope __cdecl init(Androidapi::Jni::Javatypes::_di_JString host, int port) = 0 /* overload */;
	HIDESBASE virtual _di_JAuthScope __cdecl init(_di_JAuthScope authscope) = 0 /* overload */;
	virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject o) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getHost(void) = 0 ;
	virtual int __cdecl hashCode(void) = 0 ;
	virtual int __cdecl match(_di_JAuthScope that) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
	__property _di_JAuthScope ANY = {read=_GetANY};
	__property Androidapi::Jni::Javatypes::_di_JString ANY_HOST = {read=_GetANY_HOST};
	__property int ANY_PORT = {read=_GetANY_PORT};
	__property Androidapi::Jni::Javatypes::_di_JString ANY_REALM = {read=_GetANY_REALM};
	__property Androidapi::Jni::Javatypes::_di_JString ANY_SCHEME = {read=_GetANY_SCHEME};
};

__interface  INTERFACE_UUID("{CE42C955-6B70-441C-91FB-F333AD423178}") JAuthScope  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl getPort(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getRealm(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getScheme(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAuthScope : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthScopeClass,_di_JAuthScope> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthScopeClass,_di_JAuthScope>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAuthScope(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthScopeClass,_di_JAuthScope> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAuthScope(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{AEA60FCA-4E56-4CC7-A91C-571CD6EC1699}") JCredentialsClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{C8B7E448-DF38-4362-AA3F-E41F58BCC586}") JCredentials  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPassword(void) = 0 ;
	virtual Androidapi::Jni::Java::Security::_di_JPrincipal __cdecl getUserPrincipal(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCredentials : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCredentialsClass,_di_JCredentials> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCredentialsClass,_di_JCredentials>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCredentials(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCredentialsClass,_di_JCredentials> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCredentials(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{88103D6C-22BD-4AE5-BE64-36D728952706}") JAuthenticationHandlerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl getChallenges(_di_JHttpResponse response, _di_JHttpContext context) = 0 ;
};

__interface  INTERFACE_UUID("{3EE45546-6891-44F9-A918-E6642489DE87}") JAuthenticationHandler  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual bool __cdecl isAuthenticationRequested(_di_JHttpResponse response, _di_JHttpContext context) = 0 ;
	virtual _di_JAuthScheme __cdecl selectScheme(Androidapi::Jni::Javatypes::_di_JMap challenges, _di_JHttpResponse response, _di_JHttpContext context) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAuthenticationHandler : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthenticationHandlerClass,_di_JAuthenticationHandler> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthenticationHandlerClass,_di_JAuthenticationHandler>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAuthenticationHandler(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAuthenticationHandlerClass,_di_JAuthenticationHandler> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAuthenticationHandler(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{73B1BAAE-58E0-4C99-BDEF-945F33AFFB09}") JCookieStoreClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl clear(void) = 0 ;
	virtual bool __cdecl clearExpired(Androidapi::Jni::Javatypes::_di_JDate date) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getCookies(void) = 0 ;
};

__interface  INTERFACE_UUID("{25E4CBBC-2B70-432C-8460-A1970320562F}") JCookieStore  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl addCookie(_di_JCookie cookie) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCookieStore : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieStoreClass,_di_JCookieStore> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieStoreClass,_di_JCookieStore>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCookieStore(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieStoreClass,_di_JCookieStore> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCookieStore(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5B39FA61-D973-42F8-837F-12309CC1F0EA}") JCredentialsProviderClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual _di_JCredentials __cdecl getCredentials(_di_JAuthScope authscope) = 0 ;
	virtual void __cdecl setCredentials(_di_JAuthScope authscope, _di_JCredentials credentials) = 0 ;
};

__interface  INTERFACE_UUID("{E92BBDB2-4532-4E85-BFC8-869D85FBDF4E}") JCredentialsProvider  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl clear(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCredentialsProvider : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCredentialsProviderClass,_di_JCredentialsProvider> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCredentialsProviderClass,_di_JCredentialsProvider>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCredentialsProvider(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCredentialsProviderClass,_di_JCredentialsProvider> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCredentialsProvider(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2E4965F0-4A25-47D3-80DC-F05BE4E12969}") JRedirectHandlerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{B7B3DE33-EB89-4DDF-830A-4DA0871A64D6}") JRedirectHandler  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Java::Net::_di_JURI __cdecl getLocationURI(_di_JHttpResponse response, _di_JHttpContext context) = 0 ;
	virtual bool __cdecl isRedirectRequested(_di_JHttpResponse response, _di_JHttpContext context) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRedirectHandler : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRedirectHandlerClass,_di_JRedirectHandler> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRedirectHandlerClass,_di_JRedirectHandler>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRedirectHandler(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRedirectHandlerClass,_di_JRedirectHandler> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRedirectHandler(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1C871AF7-9B56-40F6-9AE6-F8CD552CCD20}") JResponseHandlerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{54D77D7D-70A7-41C2-840E-DFAA5D9BD8C3}") JResponseHandler  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl handleResponse(_di_JHttpResponse response) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJResponseHandler : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JResponseHandlerClass,_di_JResponseHandler> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JResponseHandlerClass,_di_JResponseHandler>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJResponseHandler(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JResponseHandlerClass,_di_JResponseHandler> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJResponseHandler(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{77E9B776-AA70-47BA-99FE-D3DA5B62BD6A}") JUserTokenHandlerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{D17A393B-8FB5-42DD-9047-7D76615A81B3}") JUserTokenHandler  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getUserToken(_di_JHttpContext context) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJUserTokenHandler : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUserTokenHandlerClass,_di_JUserTokenHandler> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUserTokenHandlerClass,_di_JUserTokenHandler>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUserTokenHandler(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUserTokenHandlerClass,_di_JUserTokenHandler> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUserTokenHandler(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{035FC0CD-8336-40F3-9912-F58B0589CA93}") JAbstractHttpMessageClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl addHeader(_di_JHeader header) = 0 /* overload */;
	virtual void __cdecl addHeader(Androidapi::Jni::Javatypes::_di_JString name, Androidapi::Jni::Javatypes::_di_JString value) = 0 /* overload */;
	virtual bool __cdecl containsHeader(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual _di_JHeader __cdecl getLastHeader(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual _di_JHeaderIterator __cdecl headerIterator(void) = 0 /* overload */;
	virtual _di_JHeaderIterator __cdecl headerIterator(Androidapi::Jni::Javatypes::_di_JString name) = 0 /* overload */;
	virtual void __cdecl removeHeader(_di_JHeader header) = 0 ;
	virtual void __cdecl setHeaders(Androidapi::Jnibridge::TJavaObjectArray__1<_di_JHeader> * headers) = 0 ;
};

__interface  INTERFACE_UUID("{3E0C6F90-A105-41CD-B2FF-FEA4B5534770}") JAbstractHttpMessage  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<_di_JHeader> * __cdecl getAllHeaders(void) = 0 ;
	virtual _di_JHeader __cdecl getFirstHeader(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<_di_JHeader> * __cdecl getHeaders(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual void __cdecl removeHeaders(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual void __cdecl setHeader(_di_JHeader header) = 0 /* overload */;
	virtual void __cdecl setHeader(Androidapi::Jni::Javatypes::_di_JString name, Androidapi::Jni::Javatypes::_di_JString value) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAbstractHttpMessage : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractHttpMessageClass,_di_JAbstractHttpMessage> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractHttpMessageClass,_di_JAbstractHttpMessage>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAbstractHttpMessage(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractHttpMessageClass,_di_JAbstractHttpMessage> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAbstractHttpMessage(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D2B5D33F-9C02-4292-806C-044B825A7A3B}") JHttpRequestBaseClass  : public JAbstractHttpMessageClass 
{
	HIDESBASE virtual _di_JHttpRequestBase __cdecl init(void) = 0 ;
	virtual void __cdecl abort(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl clone(void) = 0 ;
	virtual Androidapi::Jni::Java::Net::_di_JURI __cdecl getURI(void) = 0 ;
	virtual bool __cdecl isAborted(void) = 0 ;
	virtual void __cdecl setConnectionRequest(_di_JClientConnectionRequest connRequest) = 0 ;
};

__interface  INTERFACE_UUID("{1EB6D05C-503B-48CD-9D65-144383983C1C}") JHttpRequestBase  : public JAbstractHttpMessage 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMethod(void) = 0 ;
	virtual _di_JProtocolVersion __cdecl getProtocolVersion(void) = 0 ;
	virtual _di_JRequestLine __cdecl getRequestLine(void) = 0 ;
	virtual void __cdecl setReleaseTrigger(_di_JConnectionReleaseTrigger releaseTrigger) = 0 ;
	virtual void __cdecl setURI(Androidapi::Jni::Java::Net::_di_JURI uri) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpRequestBase : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestBaseClass,_di_JHttpRequestBase> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestBaseClass,_di_JHttpRequestBase>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpRequestBase(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestBaseClass,_di_JHttpRequestBase> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpRequestBase(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1A3667C1-ED66-4664-B770-FFFA2A909ACC}") JHttpEntityEnclosingRequestBaseClass  : public JHttpRequestBaseClass 
{
	HIDESBASE virtual _di_JHttpEntityEnclosingRequestBase __cdecl init(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl clone(void) = 0 ;
	virtual bool __cdecl expectContinue(void) = 0 ;
	virtual _di_JHttpEntity __cdecl getEntity(void) = 0 ;
};

__interface  INTERFACE_UUID("{CFDDE6AC-7E3B-4C30-9154-CF377A198D49}") JHttpEntityEnclosingRequestBase  : public JHttpRequestBase 
{
	virtual void __cdecl setEntity(_di_JHttpEntity entity) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpEntityEnclosingRequestBase : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpEntityEnclosingRequestBaseClass,_di_JHttpEntityEnclosingRequestBase> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpEntityEnclosingRequestBaseClass,_di_JHttpEntityEnclosingRequestBase>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpEntityEnclosingRequestBase(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpEntityEnclosingRequestBaseClass,_di_JHttpEntityEnclosingRequestBase> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpEntityEnclosingRequestBase(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{759D3B73-B39E-4ACA-A575-89D41E554C42}") JHttpPostClass  : public JHttpEntityEnclosingRequestBaseClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetMETHOD_NAME(void) = 0 ;
	HIDESBASE virtual _di_JHttpPost __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpPost __cdecl init(Androidapi::Jni::Java::Net::_di_JURI uri) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpPost __cdecl init(Androidapi::Jni::Javatypes::_di_JString uri) = 0 /* overload */;
	__property Androidapi::Jni::Javatypes::_di_JString METHOD_NAME = {read=_GetMETHOD_NAME};
};

__interface  INTERFACE_UUID("{CDB4CE90-B7E5-400B-A789-BB9EF0AB6357}") JHttpPost  : public JHttpEntityEnclosingRequestBase 
{
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMethod(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpPost : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpPostClass,_di_JHttpPost> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpPostClass,_di_JHttpPost>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpPost(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpPostClass,_di_JHttpPost> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpPost(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{03050ACF-CA74-4FC2-92D6-79EFC584A02C}") JHttpUriRequestClass  : public JHttpRequestClass 
{
	virtual void __cdecl abort(void) = 0 ;
};

__interface  INTERFACE_UUID("{D6BF8DE6-6768-4F0C-A77C-26AE9A17CA59}") JHttpUriRequest  : public JHttpRequest 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMethod(void) = 0 ;
	virtual Androidapi::Jni::Java::Net::_di_JURI __cdecl getURI(void) = 0 ;
	virtual bool __cdecl isAborted(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpUriRequest : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpUriRequestClass,_di_JHttpUriRequest> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpUriRequestClass,_di_JHttpUriRequest>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpUriRequest(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpUriRequestClass,_di_JHttpUriRequest> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpUriRequest(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FC182A29-526D-42F0-BC95-57C53C61F77D}") JClientConnectionManagerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl closeIdleConnections(__int64 idletime, Androidapi::Jni::Javatypes::_di_JTimeUnit tunit) = 0 ;
	virtual _di_JSchemeRegistry __cdecl getSchemeRegistry(void) = 0 ;
	virtual void __cdecl releaseConnection(_di_JManagedClientConnection conn, __int64 validDuration, Androidapi::Jni::Javatypes::_di_JTimeUnit timeUnit) = 0 ;
};

__interface  INTERFACE_UUID("{13B8846B-8308-4399-AFD1-6EFB5208086C}") JClientConnectionManager  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl closeExpiredConnections(void) = 0 ;
	virtual _di_JClientConnectionRequest __cdecl requestConnection(_di_JHttpRoute route, Androidapi::Jni::Javatypes::_di_JObject state) = 0 ;
	virtual void __cdecl shutdown(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJClientConnectionManager : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JClientConnectionManagerClass,_di_JClientConnectionManager> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JClientConnectionManagerClass,_di_JClientConnectionManager>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJClientConnectionManager(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JClientConnectionManagerClass,_di_JClientConnectionManager> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJClientConnectionManager(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2CD79E84-A871-4642-B841-366423B959B9}") JClientConnectionRequestClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl abortRequest(void) = 0 ;
};

__interface  INTERFACE_UUID("{EB1EA890-6DA7-4EBB-99A0-CBA0D6D6FE18}") JClientConnectionRequest  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual _di_JManagedClientConnection __cdecl getConnection(__int64 timeout, Androidapi::Jni::Javatypes::_di_JTimeUnit tunit) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJClientConnectionRequest : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JClientConnectionRequestClass,_di_JClientConnectionRequest> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JClientConnectionRequestClass,_di_JClientConnectionRequest>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJClientConnectionRequest(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JClientConnectionRequestClass,_di_JClientConnectionRequest> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJClientConnectionRequest(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{BAD42D0B-59F1-4260-9796-6FA670BEE76B}") JConnectionReleaseTriggerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{429EBF24-4506-405F-AFEC-5085AA2F0782}") JConnectionReleaseTrigger  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl abortConnection(void) = 0 ;
	virtual void __cdecl releaseConnection(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJConnectionReleaseTrigger : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConnectionReleaseTriggerClass,_di_JConnectionReleaseTrigger> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConnectionReleaseTriggerClass,_di_JConnectionReleaseTrigger>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJConnectionReleaseTrigger(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConnectionReleaseTriggerClass,_di_JConnectionReleaseTrigger> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJConnectionReleaseTrigger(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FBA28C84-5C60-4702-A1D5-03FC08631327}") JManagedClientConnectionClass  : public JConnectionReleaseTriggerClass 
{
	virtual Androidapi::Jni::Java::Net::_di_JSSLSession __cdecl getSSLSession(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getState(void) = 0 ;
	virtual bool __cdecl isMarkedReusable(void) = 0 ;
	virtual void __cdecl setIdleDuration(__int64 duration, Androidapi::Jni::Javatypes::_di_JTimeUnit unit_) = 0 ;
	virtual void __cdecl setState(Androidapi::Jni::Javatypes::_di_JObject state) = 0 ;
};

__interface  INTERFACE_UUID("{790A6967-CE13-4A3B-9ED3-A26AEB2C28DB}") JManagedClientConnection  : public JConnectionReleaseTrigger 
{
	virtual _di_JHttpRoute __cdecl getRoute(void) = 0 ;
	virtual bool __cdecl isSecure(void) = 0 ;
	virtual void __cdecl markReusable(void) = 0 ;
	virtual void __cdecl unmarkReusable(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJManagedClientConnection : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JManagedClientConnectionClass,_di_JManagedClientConnection> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JManagedClientConnectionClass,_di_JManagedClientConnection>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJManagedClientConnection(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JManagedClientConnectionClass,_di_JManagedClientConnection> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJManagedClientConnection(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9E6EB1EE-04BF-49FF-9285-F430A15C0560}") JHttpRouteClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JHttpRoute __cdecl init(_di_JHttpHost target, Androidapi::Jni::Java::Net::_di_JInetAddress local, Androidapi::Jnibridge::TJavaObjectArray__1<_di_JHttpHost> * proxies, bool secure, _di_JRouteInfo_TunnelType tunnelled, _di_JRouteInfo_LayerType layered) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpRoute __cdecl init(_di_JHttpHost target, Androidapi::Jni::Java::Net::_di_JInetAddress local, _di_JHttpHost proxy, bool secure, _di_JRouteInfo_TunnelType tunnelled, _di_JRouteInfo_LayerType layered) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpRoute __cdecl init(_di_JHttpHost target, Androidapi::Jni::Java::Net::_di_JInetAddress local, bool secure) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpRoute __cdecl init(_di_JHttpHost target) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpRoute __cdecl init(_di_JHttpHost target, Androidapi::Jni::Java::Net::_di_JInetAddress local, _di_JHttpHost proxy, bool secure) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl clone(void) = 0 ;
	virtual _di_JRouteInfo_LayerType __cdecl getLayerType(void) = 0 ;
	virtual Androidapi::Jni::Java::Net::_di_JInetAddress __cdecl getLocalAddress(void) = 0 ;
	virtual int __cdecl hashCode(void) = 0 ;
	virtual bool __cdecl isLayered(void) = 0 ;
	virtual bool __cdecl isSecure(void) = 0 ;
};

__interface  INTERFACE_UUID("{76E07FD3-8742-46A1-B862-80EB4F5748C8}") JHttpRoute  : public Androidapi::Jni::Javatypes::JObject 
{
	HIDESBASE virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject o) = 0 ;
	virtual int __cdecl getHopCount(void) = 0 ;
	virtual _di_JHttpHost __cdecl getHopTarget(int hop) = 0 ;
	virtual _di_JHttpHost __cdecl getProxyHost(void) = 0 ;
	virtual _di_JHttpHost __cdecl getTargetHost(void) = 0 ;
	virtual _di_JRouteInfo_TunnelType __cdecl getTunnelType(void) = 0 ;
	virtual bool __cdecl isTunnelled(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpRoute : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRouteClass,_di_JHttpRoute> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRouteClass,_di_JHttpRoute>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpRoute(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRouteClass,_di_JHttpRoute> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpRoute(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{18D8506A-3FAB-4003-9AE0-341A267AAF7E}") JHttpRoutePlannerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{D398A4DA-7744-4F4A-B5E9-8E99533B6BBF}") JHttpRoutePlanner  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual _di_JHttpRoute __cdecl determineRoute(_di_JHttpHost target, _di_JHttpRequest request, _di_JHttpContext context) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpRoutePlanner : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRoutePlannerClass,_di_JHttpRoutePlanner> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRoutePlannerClass,_di_JHttpRoutePlanner>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpRoutePlanner(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRoutePlannerClass,_di_JHttpRoutePlanner> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpRoutePlanner(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{60048D75-EA8E-410F-88E0-1BD36C9A028C}") JRouteInfo_LayerTypeClass  : public Androidapi::Jni::Javatypes::JEnumClass 
{
	virtual _di_JRouteInfo_LayerType __cdecl _GetLAYERED(void) = 0 ;
	virtual _di_JRouteInfo_LayerType __cdecl _GetPLAIN(void) = 0 ;
	HIDESBASE virtual _di_JRouteInfo_LayerType __cdecl valueOf(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<_di_JRouteInfo_LayerType> * __cdecl values(void) = 0 ;
	__property _di_JRouteInfo_LayerType LAYERED = {read=_GetLAYERED};
	__property _di_JRouteInfo_LayerType PLAIN = {read=_GetPLAIN};
};

__interface  INTERFACE_UUID("{C8F1AD6F-3575-42E0-8476-273A37A201F4}") JRouteInfo_LayerType  : public Androidapi::Jni::Javatypes::JEnum 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRouteInfo_LayerType : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRouteInfo_LayerTypeClass,_di_JRouteInfo_LayerType> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRouteInfo_LayerTypeClass,_di_JRouteInfo_LayerType>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRouteInfo_LayerType(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRouteInfo_LayerTypeClass,_di_JRouteInfo_LayerType> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRouteInfo_LayerType(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{28D7840F-39A6-4911-B716-86E718E766B6}") JRouteInfo_TunnelTypeClass  : public Androidapi::Jni::Javatypes::JEnumClass 
{
	virtual _di_JRouteInfo_TunnelType __cdecl _GetPLAIN(void) = 0 ;
	virtual _di_JRouteInfo_TunnelType __cdecl _GetTUNNELLED(void) = 0 ;
	HIDESBASE virtual _di_JRouteInfo_TunnelType __cdecl valueOf(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<_di_JRouteInfo_TunnelType> * __cdecl values(void) = 0 ;
	__property _di_JRouteInfo_TunnelType PLAIN = {read=_GetPLAIN};
	__property _di_JRouteInfo_TunnelType TUNNELLED = {read=_GetTUNNELLED};
};

__interface  INTERFACE_UUID("{F608BF71-A853-49EE-9592-0D829D50A201}") JRouteInfo_TunnelType  : public Androidapi::Jni::Javatypes::JEnum 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRouteInfo_TunnelType : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRouteInfo_TunnelTypeClass,_di_JRouteInfo_TunnelType> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRouteInfo_TunnelTypeClass,_di_JRouteInfo_TunnelType>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRouteInfo_TunnelType(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRouteInfo_TunnelTypeClass,_di_JRouteInfo_TunnelType> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRouteInfo_TunnelType(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{635CDE67-A624-486C-9E6E-B6A8473B08BA}") JSchemeClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl getDefaultPort(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getName(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

__interface  INTERFACE_UUID("{4AC448F9-BB4D-4DED-BB8E-9355A6C11CAC}") JScheme  : public Androidapi::Jni::Javatypes::JObject 
{
	HIDESBASE virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject obj) = 0 ;
	HIDESBASE virtual int __cdecl hashCode(void) = 0 ;
	virtual bool __cdecl isLayered(void) = 0 ;
	virtual int __cdecl resolvePort(int port) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJScheme : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSchemeClass,_di_JScheme> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSchemeClass,_di_JScheme>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJScheme(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSchemeClass,_di_JScheme> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJScheme(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C1ED374C-96B9-4496-9F3D-2BAB87B516A5}") JSchemeRegistryClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JSchemeRegistry __cdecl init(void) = 0 ;
	virtual _di_JScheme __cdecl get(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual _di_JScheme __cdecl getScheme(Androidapi::Jni::Javatypes::_di_JString name) = 0 /* overload */;
	virtual void __cdecl setItems(Androidapi::Jni::Javatypes::_di_JMap map) = 0 ;
	virtual _di_JScheme __cdecl unregister(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
};

__interface  INTERFACE_UUID("{A984A32C-5289-4E06-93F3-44BA21B230C4}") JSchemeRegistry  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual _di_JScheme __cdecl getScheme(_di_JHttpHost host) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getSchemeNames(void) = 0 ;
	virtual _di_JScheme __cdecl Register(_di_JScheme sch) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSchemeRegistry : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSchemeRegistryClass,_di_JSchemeRegistry> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSchemeRegistryClass,_di_JSchemeRegistry>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSchemeRegistry(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSchemeRegistryClass,_di_JSchemeRegistry> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSchemeRegistry(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E7050B1C-560A-44C1-8D16-7A4B462AD730}") JCookieClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getComment(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getCommentURL(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDomain(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<int> * __cdecl getPorts(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getValue(void) = 0 ;
	virtual int __cdecl getVersion(void) = 0 ;
};

__interface  INTERFACE_UUID("{380B776E-27A5-4A2A-B789-430F13BF76DE}") JCookie  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JDate __cdecl getExpiryDate(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getName(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPath(void) = 0 ;
	virtual bool __cdecl isExpired(Androidapi::Jni::Javatypes::_di_JDate date) = 0 ;
	virtual bool __cdecl isPersistent(void) = 0 ;
	virtual bool __cdecl isSecure(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCookie : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieClass,_di_JCookie> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieClass,_di_JCookie>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCookie(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieClass,_di_JCookie> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCookie(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{42AB6407-775C-4087-BA49-446863354251}") JCookieOriginClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JCookieOrigin __cdecl init(Androidapi::Jni::Javatypes::_di_JString host, int port, Androidapi::Jni::Javatypes::_di_JString path, bool secure) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPath(void) = 0 ;
	virtual int __cdecl getPort(void) = 0 ;
	virtual bool __cdecl isSecure(void) = 0 ;
};

__interface  INTERFACE_UUID("{A4882607-5641-4AE3-87EE-404EE0E1AFBB}") JCookieOrigin  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getHost(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCookieOrigin : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieOriginClass,_di_JCookieOrigin> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieOriginClass,_di_JCookieOrigin>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCookieOrigin(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieOriginClass,_di_JCookieOrigin> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCookieOrigin(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E2391BED-B581-44A5-AE30-1A2F9C269D69}") JCookieSpecClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl match(_di_JCookie cookie, _di_JCookieOrigin origin) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl parse(_di_JHeader header, _di_JCookieOrigin origin) = 0 ;
	virtual void __cdecl validate(_di_JCookie cookie, _di_JCookieOrigin origin) = 0 ;
};

__interface  INTERFACE_UUID("{0248E0DD-3AE4-4451-84E2-330818DD4C47}") JCookieSpec  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl formatCookies(Androidapi::Jni::Javatypes::_di_JList cookies) = 0 ;
	virtual int __cdecl getVersion(void) = 0 ;
	virtual _di_JHeader __cdecl getVersionHeader(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCookieSpec : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieSpecClass,_di_JCookieSpec> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieSpecClass,_di_JCookieSpec>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCookieSpec(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieSpecClass,_di_JCookieSpec> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCookieSpec(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{025662F3-0BAC-43C9-A03F-B978376A2F3D}") JCookieSpecFactoryClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{843CD984-93ED-42FA-BBD3-0C6C4381F09F}") JCookieSpecFactory  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCookieSpecFactory : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieSpecFactoryClass,_di_JCookieSpecFactory> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieSpecFactoryClass,_di_JCookieSpecFactory>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCookieSpecFactory(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieSpecFactoryClass,_di_JCookieSpecFactory> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCookieSpecFactory(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F16CAFC2-EC46-4641-82D6-1A904E7C957F}") JCookieSpecRegistryClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JCookieSpecRegistry __cdecl init(void) = 0 ;
	virtual void __cdecl setItems(Androidapi::Jni::Javatypes::_di_JMap map) = 0 ;
	virtual void __cdecl unregister(Androidapi::Jni::Javatypes::_di_JString id) = 0 ;
};

__interface  INTERFACE_UUID("{7AB205D7-2F8C-4272-9E10-02E4F51BE0AE}") JCookieSpecRegistry  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual _di_JCookieSpec __cdecl getCookieSpec(Androidapi::Jni::Javatypes::_di_JString name) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getSpecNames(void) = 0 ;
	virtual void __cdecl Register(Androidapi::Jni::Javatypes::_di_JString name, _di_JCookieSpecFactory factory) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCookieSpecRegistry : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieSpecRegistryClass,_di_JCookieSpecRegistry> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieSpecRegistryClass,_di_JCookieSpecRegistry>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCookieSpecRegistry(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCookieSpecRegistryClass,_di_JCookieSpecRegistry> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCookieSpecRegistry(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9FDA815E-02E0-42FF-88AC-BA9B3465F38D}") JAbstractHttpEntityClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl isChunked(void) = 0 ;
	virtual void __cdecl setChunked(bool b) = 0 ;
	virtual void __cdecl setContentEncoding(_di_JHeader contentEncoding) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{A9495467-0B90-49C9-9604-E61DDF1C5798}") JAbstractHttpEntity  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl consumeContent(void) = 0 ;
	virtual _di_JHeader __cdecl getContentEncoding(void) = 0 ;
	virtual _di_JHeader __cdecl getContentType(void) = 0 ;
	virtual void __cdecl setContentEncoding(Androidapi::Jni::Javatypes::_di_JString ceString) = 0 /* overload */;
	virtual void __cdecl setContentType(_di_JHeader contentType) = 0 /* overload */;
	virtual void __cdecl setContentType(Androidapi::Jni::Javatypes::_di_JString ctString) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAbstractHttpEntity : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractHttpEntityClass,_di_JAbstractHttpEntity> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractHttpEntityClass,_di_JAbstractHttpEntity>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAbstractHttpEntity(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractHttpEntityClass,_di_JAbstractHttpEntity> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAbstractHttpEntity(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2D1EE7FA-6263-4FC4-9003-35172237B3DA}") JBasicHttpProcessorClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JBasicHttpProcessor __cdecl init(void) = 0 ;
	virtual void __cdecl addInterceptor(_di_JHttpResponseInterceptor interceptor, int index) = 0 /* overload */;
	virtual void __cdecl addRequestInterceptor(_di_JHttpRequestInterceptor itcp) = 0 /* overload */;
	virtual void __cdecl addRequestInterceptor(_di_JHttpRequestInterceptor itcp, int index) = 0 /* overload */;
	virtual void __cdecl addResponseInterceptor(_di_JHttpResponseInterceptor itcp, int index) = 0 /* overload */;
	virtual void __cdecl clearResponseInterceptors(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl clone(void) = 0 ;
	virtual _di_JBasicHttpProcessor __cdecl copy(void) = 0 ;
	virtual _di_JHttpResponseInterceptor __cdecl getResponseInterceptor(int index) = 0 ;
	virtual int __cdecl getResponseInterceptorCount(void) = 0 ;
	virtual void __cdecl process(_di_JHttpRequest request, _di_JHttpContext context) = 0 /* overload */;
	virtual void __cdecl setInterceptors(Androidapi::Jni::Javatypes::_di_JList list) = 0 ;
};

__interface  INTERFACE_UUID("{D8FB41DF-77B2-4813-8FE1-B8731400C4EE}") JBasicHttpProcessor  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl addInterceptor(_di_JHttpRequestInterceptor interceptor) = 0 /* overload */;
	virtual void __cdecl addInterceptor(_di_JHttpRequestInterceptor interceptor, int index) = 0 /* overload */;
	virtual void __cdecl addInterceptor(_di_JHttpResponseInterceptor interceptor) = 0 /* overload */;
	virtual void __cdecl addResponseInterceptor(_di_JHttpResponseInterceptor itcp) = 0 /* overload */;
	virtual void __cdecl clearInterceptors(void) = 0 ;
	virtual void __cdecl clearRequestInterceptors(void) = 0 ;
	virtual _di_JHttpRequestInterceptor __cdecl getRequestInterceptor(int index) = 0 ;
	virtual int __cdecl getRequestInterceptorCount(void) = 0 ;
	virtual void __cdecl process(_di_JHttpResponse response, _di_JHttpContext context) = 0 /* overload */;
	virtual void __cdecl removeRequestInterceptorByClass(Androidapi::Jni::Javatypes::_di_Jlang_Class clazz) = 0 ;
	virtual void __cdecl removeResponseInterceptorByClass(Androidapi::Jni::Javatypes::_di_Jlang_Class clazz) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBasicHttpProcessor : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBasicHttpProcessorClass,_di_JBasicHttpProcessor> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBasicHttpProcessorClass,_di_JBasicHttpProcessor>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBasicHttpProcessor(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBasicHttpProcessorClass,_di_JBasicHttpProcessor> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBasicHttpProcessor(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{7201EEAB-2CA1-49F7-8D1B-B136E0908F58}") JHttpContextClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetRESERVED_PREFIX(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getAttribute(Androidapi::Jni::Javatypes::_di_JString id) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString RESERVED_PREFIX = {read=_GetRESERVED_PREFIX};
};

__interface  INTERFACE_UUID("{7A5C3529-9406-4465-B56E-0827D1D1FD32}") JHttpContext  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl removeAttribute(Androidapi::Jni::Javatypes::_di_JString id) = 0 ;
	virtual void __cdecl setAttribute(Androidapi::Jni::Javatypes::_di_JString id, Androidapi::Jni::Javatypes::_di_JObject obj) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpContext : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpContextClass,_di_JHttpContext> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpContextClass,_di_JHttpContext>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpContext(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpContextClass,_di_JHttpContext> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpContext(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B6EB12DA-5D46-4C49-88DF-0B43E1FE2E11}") JHttpProcessorClass  : public JHttpRequestInterceptorClass 
{
	
};

__interface  INTERFACE_UUID("{7D717389-A90C-454D-8FA1-88DBD2F204F2}") JHttpProcessor  : public JHttpRequestInterceptor 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpProcessor : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpProcessorClass,_di_JHttpProcessor> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpProcessorClass,_di_JHttpProcessor>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpProcessor(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpProcessorClass,_di_JHttpProcessor> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpProcessor(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{13BB5E0E-6965-4AD1-9A79-334BC0F0A3AD}") JHttpRequestExecutorClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JHttpRequestExecutor __cdecl init(void) = 0 ;
	virtual void __cdecl postProcess(_di_JHttpResponse response, _di_JHttpProcessor processor, _di_JHttpContext context) = 0 ;
	virtual void __cdecl preProcess(_di_JHttpRequest request, _di_JHttpProcessor processor, _di_JHttpContext context) = 0 ;
};

__interface  INTERFACE_UUID("{8CD354C7-5544-4140-8929-BC56D5F85DAE}") JHttpRequestExecutor  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual _di_JHttpResponse __cdecl execute(_di_JHttpRequest request, _di_JHttpClientConnection conn, _di_JHttpContext context) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpRequestExecutor : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestExecutorClass,_di_JHttpRequestExecutor> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestExecutorClass,_di_JHttpRequestExecutor>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpRequestExecutor(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpRequestExecutorClass,_di_JHttpRequestExecutor> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpRequestExecutor(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{21D74A72-10FE-4DD5-BE52-F71A04FEA699}") Jalipay_JSONExceptionClass  : public Androidapi::Jni::Javatypes::JExceptionClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JThrowable __cdecl getCause(void) = 0 ;
	HIDESBASE virtual _di_Jalipay_JSONException __cdecl init(Androidapi::Jni::Javatypes::_di_JThrowable P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jalipay_JSONException __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{0AC7DE45-A0F6-420F-9BF7-B1A934F5B8D5}") Jalipay_JSONException  : public Androidapi::Jni::Javatypes::JException 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJalipay_JSONException : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_JSONExceptionClass,_di_Jalipay_JSONException> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_JSONExceptionClass,_di_Jalipay_JSONException>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJalipay_JSONException(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_JSONExceptionClass,_di_Jalipay_JSONException> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJalipay_JSONException(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{989F766E-A6F1-4110-B4E2-44B07708D9D9}") Jalipay_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(int P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jalipay_a __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_Jalipay_a __cdecl init(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jalipay_a __cdecl init(_di_Jalipay_c P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jalipay_a __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jalipay_a __cdecl init(Androidapi::Jni::Javatypes::_di_JCollection P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

__interface  INTERFACE_UUID("{E458B775-7B9C-466C-82CA-D36D62D7AA6D}") Jalipay_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJalipay_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_aClass,_di_Jalipay_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_aClass,_di_Jalipay_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJalipay_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_aClass,_di_Jalipay_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJalipay_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{63C72C33-B64D-4C75-A964-958B382E070F}") Jalipay_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl _Geta(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual _di_Jalipay_b __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_Jalipay_b __cdecl init(_di_Jalipay_c P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jalipay_b __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jalipay_b __cdecl init(Androidapi::Jni::Javatypes::_di_JMap P1) = 0 /* overload */;
	__property Androidapi::Jni::Javatypes::_di_JObject a = {read=_Geta};
};

__interface  INTERFACE_UUID("{F95C5DB7-3BB8-4692-B856-A328CA928884}") Jalipay_b  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JIterator __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual bool __cdecl b(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJalipay_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_bClass,_di_Jalipay_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_bClass,_di_Jalipay_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJalipay_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_bClass,_di_Jalipay_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJalipay_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{06487B3B-FB54-4683-A5CE-5112452F747D}") Jalipay_b_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

__interface  INTERFACE_UUID("{616356B1-1254-49BA-A831-0F2A3B3D5AEF}") Jalipay_b_a  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJalipay_b_a : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_b_aClass,_di_Jalipay_b_a> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_b_aClass,_di_Jalipay_b_a>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJalipay_b_a(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_b_aClass,_di_Jalipay_b_a> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJalipay_b_a(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{AD4B8367-AFBA-4A53-AAC5-A140EED7F4E7}") Jalipay_cClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(void) = 0 /* overload */;
	virtual _di_Jalipay_JSONException __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual System::WideChar __cdecl b(void) = 0 ;
	virtual System::WideChar __cdecl c(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl d(void) = 0 ;
	HIDESBASE virtual _di_Jalipay_c __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

__interface  INTERFACE_UUID("{4B74E3DD-8AF8-49F4-9896-9DF771C2DA7E}") Jalipay_c  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJalipay_c : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_cClass,_di_Jalipay_c> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_cClass,_di_Jalipay_c>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJalipay_c(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalipay_cClass,_di_Jalipay_c> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJalipay_c(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Alipay */
}	/* namespace Jni */
}	/* namespace Android */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ANDROID_JNI_ALIPAY)
using namespace Android::Jni::Alipay;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ANDROID_JNI)
using namespace Android::Jni;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ANDROID)
using namespace Android;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Android_Jni_AlipayHPP
