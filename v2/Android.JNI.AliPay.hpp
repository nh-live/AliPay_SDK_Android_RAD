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
__interface JRpcCallerClass;
typedef System::DelphiInterface<JRpcCallerClass> _di_JRpcCallerClass;
__interface JRpcCaller;
typedef System::DelphiInterface<JRpcCaller> _di_JRpcCaller;
class DELPHICLASS TJRpcCaller;
__interface JAbstractRpcCallerClass;
typedef System::DelphiInterface<JAbstractRpcCallerClass> _di_JAbstractRpcCallerClass;
__interface JAbstractRpcCaller;
typedef System::DelphiInterface<JAbstractRpcCaller> _di_JAbstractRpcCaller;
class DELPHICLASS TJAbstractRpcCaller;
__interface JHttpClientClass;
typedef System::DelphiInterface<JHttpClientClass> _di_JHttpClientClass;
__interface JHttpClient;
typedef System::DelphiInterface<JHttpClient> _di_JHttpClient;
class DELPHICLASS TJHttpClient;
__interface Jcore_AndroidHttpClientClass;
typedef System::DelphiInterface<Jcore_AndroidHttpClientClass> _di_Jcore_AndroidHttpClientClass;
__interface Jcore_AndroidHttpClient;
typedef System::DelphiInterface<Jcore_AndroidHttpClient> _di_Jcore_AndroidHttpClient;
class DELPHICLASS TJcore_AndroidHttpClient;
__interface JHttpRequestInterceptorClass;
typedef System::DelphiInterface<JHttpRequestInterceptorClass> _di_JHttpRequestInterceptorClass;
__interface JHttpRequestInterceptor;
typedef System::DelphiInterface<JHttpRequestInterceptor> _di_JHttpRequestInterceptor;
class DELPHICLASS TJHttpRequestInterceptor;
__interface Jcore_AndroidHttpClient_1Class;
typedef System::DelphiInterface<Jcore_AndroidHttpClient_1Class> _di_Jcore_AndroidHttpClient_1Class;
__interface Jcore_AndroidHttpClient_1;
typedef System::DelphiInterface<Jcore_AndroidHttpClient_1> _di_Jcore_AndroidHttpClient_1;
class DELPHICLASS TJcore_AndroidHttpClient_1;
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
__interface Jcore_AndroidHttpClient_2Class;
typedef System::DelphiInterface<Jcore_AndroidHttpClient_2Class> _di_Jcore_AndroidHttpClient_2Class;
__interface Jcore_AndroidHttpClient_2;
typedef System::DelphiInterface<Jcore_AndroidHttpClient_2> _di_Jcore_AndroidHttpClient_2;
class DELPHICLASS TJcore_AndroidHttpClient_2;
__interface JDefaultRedirectHandlerClass;
typedef System::DelphiInterface<JDefaultRedirectHandlerClass> _di_JDefaultRedirectHandlerClass;
__interface JDefaultRedirectHandler;
typedef System::DelphiInterface<JDefaultRedirectHandler> _di_JDefaultRedirectHandler;
class DELPHICLASS TJDefaultRedirectHandler;
__interface J2_1Class;
typedef System::DelphiInterface<J2_1Class> _di_J2_1Class;
__interface J2_1;
typedef System::DelphiInterface<J2_1> _di_J2_1;
class DELPHICLASS TJ2_1;
__interface JConnectionKeepAliveStrategyClass;
typedef System::DelphiInterface<JConnectionKeepAliveStrategyClass> _di_JConnectionKeepAliveStrategyClass;
__interface JConnectionKeepAliveStrategy;
typedef System::DelphiInterface<JConnectionKeepAliveStrategy> _di_JConnectionKeepAliveStrategy;
class DELPHICLASS TJConnectionKeepAliveStrategy;
__interface J2_2Class;
typedef System::DelphiInterface<J2_2Class> _di_J2_2Class;
__interface J2_2;
typedef System::DelphiInterface<J2_2> _di_J2_2;
class DELPHICLASS TJ2_2;
__interface Jcore_AndroidHttpClient_CurlLoggerClass;
typedef System::DelphiInterface<Jcore_AndroidHttpClient_CurlLoggerClass> _di_Jcore_AndroidHttpClient_CurlLoggerClass;
__interface Jcore_AndroidHttpClient_CurlLogger;
typedef System::DelphiInterface<Jcore_AndroidHttpClient_CurlLogger> _di_Jcore_AndroidHttpClient_CurlLogger;
class DELPHICLASS TJcore_AndroidHttpClient_CurlLogger;
__interface Jcore_AndroidHttpClient_LoggingConfigurationClass;
typedef System::DelphiInterface<Jcore_AndroidHttpClient_LoggingConfigurationClass> _di_Jcore_AndroidHttpClient_LoggingConfigurationClass;
__interface Jcore_AndroidHttpClient_LoggingConfiguration;
typedef System::DelphiInterface<Jcore_AndroidHttpClient_LoggingConfiguration> _di_Jcore_AndroidHttpClient_LoggingConfiguration;
class DELPHICLASS TJcore_AndroidHttpClient_LoggingConfiguration;
__interface JCharArrayBuffersClass;
typedef System::DelphiInterface<JCharArrayBuffersClass> _di_JCharArrayBuffersClass;
__interface JCharArrayBuffers;
typedef System::DelphiInterface<JCharArrayBuffers> _di_JCharArrayBuffers;
class DELPHICLASS TJCharArrayBuffers;
__interface Jcore_ConfigClass;
typedef System::DelphiInterface<Jcore_ConfigClass> _di_Jcore_ConfigClass;
__interface Jcore_Config;
typedef System::DelphiInterface<Jcore_Config> _di_Jcore_Config;
class DELPHICLASS TJcore_Config;
__interface JRpcClientClass;
typedef System::DelphiInterface<JRpcClientClass> _di_JRpcClientClass;
__interface JRpcClient;
typedef System::DelphiInterface<JRpcClient> _di_JRpcClient;
class DELPHICLASS TJRpcClient;
__interface JDefaultRpcClientClass;
typedef System::DelphiInterface<JDefaultRpcClientClass> _di_JDefaultRpcClientClass;
__interface JDefaultRpcClient;
typedef System::DelphiInterface<JDefaultRpcClient> _di_JDefaultRpcClient;
class DELPHICLASS TJDefaultRpcClient;
__interface JDefaultRpcClient_1Class;
typedef System::DelphiInterface<JDefaultRpcClient_1Class> _di_JDefaultRpcClient_1Class;
__interface JDefaultRpcClient_1;
typedef System::DelphiInterface<JDefaultRpcClient_1> _di_JDefaultRpcClient_1;
class DELPHICLASS TJDefaultRpcClient_1;
__interface JHeadersClass;
typedef System::DelphiInterface<JHeadersClass> _di_JHeadersClass;
__interface JHeaders;
typedef System::DelphiInterface<JHeaders> _di_JHeaders;
class DELPHICLASS TJHeaders;
__interface JHeaders_HeaderCallbackClass;
typedef System::DelphiInterface<JHeaders_HeaderCallbackClass> _di_JHeaders_HeaderCallbackClass;
__interface JHeaders_HeaderCallback;
typedef System::DelphiInterface<JHeaders_HeaderCallback> _di_JHeaders_HeaderCallback;
class DELPHICLASS TJHeaders_HeaderCallback;
__interface JHttpCallerClass;
typedef System::DelphiInterface<JHttpCallerClass> _di_JHttpCallerClass;
__interface JHttpCaller;
typedef System::DelphiInterface<JHttpCaller> _di_JHttpCaller;
class DELPHICLASS TJHttpCaller;
__interface Jcore_HttpDateTimeClass;
typedef System::DelphiInterface<Jcore_HttpDateTimeClass> _di_Jcore_HttpDateTimeClass;
__interface Jcore_HttpDateTime;
typedef System::DelphiInterface<Jcore_HttpDateTime> _di_Jcore_HttpDateTime;
class DELPHICLASS TJcore_HttpDateTime;
__interface Jcore_HttpDateTime_TimeOfDayClass;
typedef System::DelphiInterface<Jcore_HttpDateTime_TimeOfDayClass> _di_Jcore_HttpDateTime_TimeOfDayClass;
__interface Jcore_HttpDateTime_TimeOfDay;
typedef System::DelphiInterface<Jcore_HttpDateTime_TimeOfDay> _di_Jcore_HttpDateTime_TimeOfDay;
class DELPHICLASS TJcore_HttpDateTime_TimeOfDay;
__interface Jcore_HttpExceptionClass;
typedef System::DelphiInterface<Jcore_HttpExceptionClass> _di_Jcore_HttpExceptionClass;
__interface Jcore_HttpException;
typedef System::DelphiInterface<Jcore_HttpException> _di_Jcore_HttpException;
class DELPHICLASS TJcore_HttpException;
__interface JTransportClass;
typedef System::DelphiInterface<JTransportClass> _di_JTransportClass;
__interface JTransport;
typedef System::DelphiInterface<JTransport> _di_JTransport;
class DELPHICLASS TJTransport;
__interface JHttpManagerClass;
typedef System::DelphiInterface<JHttpManagerClass> _di_JHttpManagerClass;
__interface JHttpManager;
typedef System::DelphiInterface<JHttpManager> _di_JHttpManager;
class DELPHICLASS TJHttpManager;
__interface JFutureTaskClass;
typedef System::DelphiInterface<JFutureTaskClass> _di_JFutureTaskClass;
__interface JFutureTask;
typedef System::DelphiInterface<JFutureTask> _di_JFutureTask;
class DELPHICLASS TJFutureTask;
__interface JHttpManager_1Class;
typedef System::DelphiInterface<JHttpManager_1Class> _di_JHttpManager_1Class;
__interface JHttpManager_1;
typedef System::DelphiInterface<JHttpManager_1> _di_JHttpManager_1;
class DELPHICLASS TJHttpManager_1;
__interface JHttpManager_2Class;
typedef System::DelphiInterface<JHttpManager_2Class> _di_JHttpManager_2Class;
__interface JHttpManager_2;
typedef System::DelphiInterface<JHttpManager_2> _di_JHttpManager_2;
class DELPHICLASS TJHttpManager_2;
__interface JHttpUrlHeaderClass;
typedef System::DelphiInterface<JHttpUrlHeaderClass> _di_JHttpUrlHeaderClass;
__interface JHttpUrlHeader;
typedef System::DelphiInterface<JHttpUrlHeader> _di_JHttpUrlHeader;
class DELPHICLASS TJHttpUrlHeader;
__interface JRequestClass;
typedef System::DelphiInterface<JRequestClass> _di_JRequestClass;
__interface JRequest;
typedef System::DelphiInterface<JRequest> _di_JRequest;
class DELPHICLASS TJRequest;
__interface JHttpUrlRequestClass;
typedef System::DelphiInterface<JHttpUrlRequestClass> _di_JHttpUrlRequestClass;
__interface JHttpUrlRequest;
typedef System::DelphiInterface<JHttpUrlRequest> _di_JHttpUrlRequest;
class DELPHICLASS TJHttpUrlRequest;
__interface JResponseClass;
typedef System::DelphiInterface<JResponseClass> _di_JResponseClass;
__interface JResponse;
typedef System::DelphiInterface<JResponse> _di_JResponse;
class DELPHICLASS TJResponse;
__interface JHttpUrlResponseClass;
typedef System::DelphiInterface<JHttpUrlResponseClass> _di_JHttpUrlResponseClass;
__interface JHttpUrlResponse;
typedef System::DelphiInterface<JHttpUrlResponse> _di_JHttpUrlResponse;
class DELPHICLASS TJHttpUrlResponse;
__interface JHttpWorkerClass;
typedef System::DelphiInterface<JHttpWorkerClass> _di_JHttpWorkerClass;
__interface JHttpWorker;
typedef System::DelphiInterface<JHttpWorker> _di_JHttpWorker;
class DELPHICLASS TJHttpWorker;
__interface JIOUtilClass;
typedef System::DelphiInterface<JIOUtilClass> _di_JIOUtilClass;
__interface JIOUtil;
typedef System::DelphiInterface<JIOUtil> _di_JIOUtil;
class DELPHICLASS TJIOUtil;
__interface JMiscUtilsClass;
typedef System::DelphiInterface<JMiscUtilsClass> _di_JMiscUtilsClass;
__interface JMiscUtils;
typedef System::DelphiInterface<JMiscUtils> _di_JMiscUtils;
class DELPHICLASS TJMiscUtils;
__interface Jcore_NetworkUtilsClass;
typedef System::DelphiInterface<Jcore_NetworkUtilsClass> _di_Jcore_NetworkUtilsClass;
__interface Jcore_NetworkUtils;
typedef System::DelphiInterface<Jcore_NetworkUtils> _di_Jcore_NetworkUtils;
class DELPHICLASS TJcore_NetworkUtils;
__interface JRpcExceptionClass;
typedef System::DelphiInterface<JRpcExceptionClass> _di_JRpcExceptionClass;
__interface JRpcException;
typedef System::DelphiInterface<JRpcException> _di_JRpcException;
class DELPHICLASS TJRpcException;
__interface JRpcException_ErrorCodeClass;
typedef System::DelphiInterface<JRpcException_ErrorCodeClass> _di_JRpcException_ErrorCodeClass;
__interface JRpcException_ErrorCode;
typedef System::DelphiInterface<JRpcException_ErrorCode> _di_JRpcException_ErrorCode;
class DELPHICLASS TJRpcException_ErrorCode;
__interface JRpcFactoryClass;
typedef System::DelphiInterface<JRpcFactoryClass> _di_JRpcFactoryClass;
__interface JRpcFactory;
typedef System::DelphiInterface<JRpcFactory> _di_JRpcFactory;
class DELPHICLASS TJRpcFactory;
__interface JInvocationHandlerClass;
typedef System::DelphiInterface<JInvocationHandlerClass> _di_JInvocationHandlerClass;
__interface JInvocationHandler;
typedef System::DelphiInterface<JInvocationHandler> _di_JInvocationHandler;
class DELPHICLASS TJInvocationHandler;
__interface JRpcInvocationHandlerClass;
typedef System::DelphiInterface<JRpcInvocationHandlerClass> _di_JRpcInvocationHandlerClass;
__interface JRpcInvocationHandler;
typedef System::DelphiInterface<JRpcInvocationHandler> _di_JRpcInvocationHandler;
class DELPHICLASS TJRpcInvocationHandler;
__interface JRpcInvokerClass;
typedef System::DelphiInterface<JRpcInvokerClass> _di_JRpcInvokerClass;
__interface JRpcInvoker;
typedef System::DelphiInterface<JRpcInvoker> _di_JRpcInvoker;
class DELPHICLASS TJRpcInvoker;
__interface JRpcParamsClass;
typedef System::DelphiInterface<JRpcParamsClass> _di_JRpcParamsClass;
__interface JRpcParams;
typedef System::DelphiInterface<JRpcParams> _di_JRpcParams;
class DELPHICLASS TJRpcParams;
__interface JThreadUtilClass;
typedef System::DelphiInterface<JThreadUtilClass> _di_JThreadUtilClass;
__interface JThreadUtil;
typedef System::DelphiInterface<JThreadUtil> _di_JThreadUtil;
class DELPHICLASS TJThreadUtil;
__interface JTransportCallbackClass;
typedef System::DelphiInterface<JTransportCallbackClass> _di_JTransportCallbackClass;
__interface JTransportCallback;
typedef System::DelphiInterface<JTransportCallback> _di_JTransportCallback;
class DELPHICLASS TJTransportCallback;
__interface JHttpRequestRetryHandlerClass;
typedef System::DelphiInterface<JHttpRequestRetryHandlerClass> _di_JHttpRequestRetryHandlerClass;
__interface JHttpRequestRetryHandler;
typedef System::DelphiInterface<JHttpRequestRetryHandler> _di_JHttpRequestRetryHandler;
class DELPHICLASS TJHttpRequestRetryHandler;
__interface JZHttpRequestRetryHandlerClass;
typedef System::DelphiInterface<JZHttpRequestRetryHandlerClass> _di_JZHttpRequestRetryHandlerClass;
__interface JZHttpRequestRetryHandler;
typedef System::DelphiInterface<JZHttpRequestRetryHandler> _di_JZHttpRequestRetryHandler;
class DELPHICLASS TJZHttpRequestRetryHandler;
__interface JDeserializerClass;
typedef System::DelphiInterface<JDeserializerClass> _di_JDeserializerClass;
__interface JDeserializer;
typedef System::DelphiInterface<JDeserializer> _di_JDeserializer;
class DELPHICLASS TJDeserializer;
__interface JAbstractDeserializerClass;
typedef System::DelphiInterface<JAbstractDeserializerClass> _di_JAbstractDeserializerClass;
__interface JAbstractDeserializer;
typedef System::DelphiInterface<JAbstractDeserializer> _di_JAbstractDeserializer;
class DELPHICLASS TJAbstractDeserializer;
__interface JSerializerClass;
typedef System::DelphiInterface<JSerializerClass> _di_JSerializerClass;
__interface JSerializer;
typedef System::DelphiInterface<JSerializer> _di_JSerializer;
class DELPHICLASS TJSerializer;
__interface JAbstractSerializerClass;
typedef System::DelphiInterface<JAbstractSerializerClass> _di_JAbstractSerializerClass;
__interface JAbstractSerializer;
typedef System::DelphiInterface<JAbstractSerializer> _di_JAbstractSerializer;
class DELPHICLASS TJAbstractSerializer;
__interface JJsonDeserializerClass;
typedef System::DelphiInterface<JJsonDeserializerClass> _di_JJsonDeserializerClass;
__interface JJsonDeserializer;
typedef System::DelphiInterface<JJsonDeserializer> _di_JJsonDeserializer;
class DELPHICLASS TJJsonDeserializer;
__interface JJsonSerializerClass;
typedef System::DelphiInterface<JJsonSerializerClass> _di_JJsonSerializerClass;
__interface JJsonSerializer;
typedef System::DelphiInterface<JJsonSerializer> _di_JJsonSerializer;
class DELPHICLASS TJJsonSerializer;
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
__interface Jc_bClass;
typedef System::DelphiInterface<Jc_bClass> _di_Jc_bClass;
__interface Jc_b;
typedef System::DelphiInterface<Jc_b> _di_Jc_b;
class DELPHICLASS TJc_b;
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
__interface Jb_bClass;
typedef System::DelphiInterface<Jb_bClass> _di_Jb_bClass;
__interface Jb_b;
typedef System::DelphiInterface<Jb_b> _di_Jb_b;
class DELPHICLASS TJb_b;
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
__interface Jc_a_dClass;
typedef System::DelphiInterface<Jc_a_dClass> _di_Jc_a_dClass;
__interface Jc_a_d;
typedef System::DelphiInterface<Jc_a_d> _di_Jc_a_d;
class DELPHICLASS TJc_a_d;
__interface Ja_c_bClass;
typedef System::DelphiInterface<Ja_c_bClass> _di_Ja_c_bClass;
__interface Ja_c_b;
typedef System::DelphiInterface<Ja_c_b> _di_Ja_c_b;
class DELPHICLASS TJa_c_b;
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
__interface Ja_d_dClass;
typedef System::DelphiInterface<Ja_d_dClass> _di_Ja_d_dClass;
__interface Ja_d_d;
typedef System::DelphiInterface<Ja_d_d> _di_Ja_d_d;
class DELPHICLASS TJa_d_d;
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
__interface JDataReportServiceClass;
typedef System::DelphiInterface<JDataReportServiceClass> _di_JDataReportServiceClass;
__interface JDataReportService;
typedef System::DelphiInterface<JDataReportService> _di_JDataReportService;
class DELPHICLASS TJDataReportService;
__interface JDataReportRequestClass;
typedef System::DelphiInterface<JDataReportRequestClass> _di_JDataReportRequestClass;
__interface JDataReportRequest;
typedef System::DelphiInterface<JDataReportRequest> _di_JDataReportRequest;
class DELPHICLASS TJDataReportRequest;
__interface JDataReportResultClass;
typedef System::DelphiInterface<JDataReportResultClass> _di_JDataReportResultClass;
__interface JDataReportResult;
typedef System::DelphiInterface<JDataReportResult> _di_JDataReportResult;
class DELPHICLASS TJDataReportResult;
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
__interface JByteArrayBufferClass;
typedef System::DelphiInterface<JByteArrayBufferClass> _di_JByteArrayBufferClass;
__interface JByteArrayBuffer;
typedef System::DelphiInterface<JByteArrayBuffer> _di_JByteArrayBuffer;
class DELPHICLASS TJByteArrayBuffer;
__interface JCharArrayBufferClass;
typedef System::DelphiInterface<JCharArrayBufferClass> _di_JCharArrayBufferClass;
__interface JCharArrayBuffer;
typedef System::DelphiInterface<JCharArrayBuffer> _di_JCharArrayBuffer;
class DELPHICLASS TJCharArrayBuffer;
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

__interface  INTERFACE_UUID("{EC93777C-9987-42D9-9B0B-2B21015B904E}") Ja_iClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{E5A43B86-902C-490C-8A6A-E38D96F94B1F}") Ja_i  : public Androidapi::Jnibridge::IJavaInstance 
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

__interface  INTERFACE_UUID("{08940A27-7C8E-484E-8781-9B0560947C98}") Ja_a_aClass  : public Ja_iClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_a_a __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{4F629409-A606-4082-A4FF-4F6F35DF6C07}") Ja_a_a  : public Ja_i 
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

__interface  INTERFACE_UUID("{1187AFAF-4F8C-4522-8327-1DB8741B4FF3}") Ja_bClass  : public Ja_iClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_b __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{743ED6F0-919C-4336-B28F-BFA7489A269B}") Ja_b  : public Ja_i 
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

__interface  INTERFACE_UUID("{034EF210-4056-497A-86AC-471834BDA90C}") Ja_cClass  : public Ja_iClass 
{
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_c __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{8C4C77CE-97F5-4960-A038-CCD6EE67A196}") Ja_c  : public Ja_i 
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

__interface  INTERFACE_UUID("{8CCAEDF5-0B18-4B98-954E-AF537405F4C5}") Ja_dClass  : public Ja_iClass 
{
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_d __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{D016600A-121D-4DB5-A34D-FE6581ED206E}") Ja_d  : public Ja_i 
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

__interface  INTERFACE_UUID("{7B39F25C-AD4A-46FF-BF50-02EEAA24F44E}") Ja_eClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{0A5F3407-E1A4-4317-B16F-6756633F3BC9}") Ja_e  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{A94B7151-91C9-4B6F-9078-38C1593C93D2}") Ja_fClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl b(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
};

__interface  INTERFACE_UUID("{8A0A75C7-FF28-489E-A0B9-A27136ACFB22}") Ja_f  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{D2442937-B42C-492F-B48B-2F50B920DC93}") Ja_gClass  : public Ja_iClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_g __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{0C6CF252-74D2-4C86-A627-FDC9CF83AC6E}") Ja_g  : public Ja_i 
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

__interface  INTERFACE_UUID("{A9E5C0C9-BFB6-457F-92AC-E9302CB819F9}") Ja_hClass  : public Ja_iClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_h __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{FD1A0907-358B-47C4-8AC5-64ECC7FE154E}") Ja_h  : public Ja_i 
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

__interface  INTERFACE_UUID("{4DCA0E66-E324-4711-9A75-9A0CC22785B3}") Ja_jClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{812F64F2-0B26-44E3-8311-EC59F70FAF78}") Ja_j  : public Androidapi::Jnibridge::IJavaInstance 
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

__interface  INTERFACE_UUID("{82278725-300D-4388-984E-BBF8401EA604}") Ja_kClass  : public Ja_iClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_k __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{E6B04AB3-B344-4A77-81BB-A512377B343F}") Ja_k  : public Ja_i 
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

__interface  INTERFACE_UUID("{8265BC5F-294C-4D6C-94B7-04337B76202B}") Ja_lClass  : public Ja_iClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl a(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jreflect_Type P2) = 0 /* overload */;
	virtual _di_Ja_l __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{AA2960BB-44E3-4445-8DE5-0F84385A6E6A}") Ja_l  : public Ja_i 
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

__interface  INTERFACE_UUID("{AD746224-C612-4F96-BEA8-3D16DFDE4AA6}") Jb_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_Jlang_Class __cdecl a(Androidapi::Jni::Javatypes::_di_Jreflect_Type P1) = 0 /* overload */;
	virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{4B38FAA2-EFE4-4009-BEA9-A6EC5F8D2BA6}") Jb_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{1C429CBF-2123-47E8-A713-3F28877239BC}") JRpcCallerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl call(void) = 0 ;
};

__interface  INTERFACE_UUID("{0AE76C58-86D9-4921-9DAC-78910B85955B}") JRpcCaller  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRpcCaller : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcCallerClass,_di_JRpcCaller> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcCallerClass,_di_JRpcCaller>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRpcCaller(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcCallerClass,_di_JRpcCaller> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRpcCaller(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2B5CD7FB-525B-4B7F-8E49-0D1E526F6695}") JAbstractRpcCallerClass  : public JRpcCallerClass 
{
	virtual _di_JAbstractRpcCaller __cdecl init(Androidapi::Jni::Javatypes::_di_JMethod P1, int P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P4, Androidapi::Jni::Javatypes::_di_JString P5, bool P6) = 0 ;
};

__interface  INTERFACE_UUID("{9F48393C-BFE2-41CC-A743-157E0C63EFF7}") JAbstractRpcCaller  : public JRpcCaller 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetmContentType(void) = 0 ;
	virtual int __cdecl _GetmId(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetmOperationType(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl _GetmReqData(void) = 0 ;
	virtual bool __cdecl _GetmResetCookie(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString mContentType = {read=_GetmContentType};
	__property int mId = {read=_GetmId};
	__property Androidapi::Jni::Javatypes::_di_JString mOperationType = {read=_GetmOperationType};
	__property Androidapi::Jnibridge::TJavaArray__1<System::Byte> * mReqData = {read=_GetmReqData};
	__property bool mResetCookie = {read=_GetmResetCookie};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAbstractRpcCaller : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractRpcCallerClass,_di_JAbstractRpcCaller> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractRpcCallerClass,_di_JAbstractRpcCaller>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAbstractRpcCaller(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractRpcCallerClass,_di_JAbstractRpcCaller> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAbstractRpcCaller(void) { }
	
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

__interface  INTERFACE_UUID("{73EB9AF0-8B76-467D-9E99-B75FB5ED780A}") Jcore_AndroidHttpClientClass  : public JHttpClientClass 
{
	virtual __int64 __cdecl _GetDEFAULT_SYNC_MIN_GZIP_BYTES(void) = 0 ;
	virtual _di_JAbstractHttpEntity __cdecl getCompressedEntity(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, Androidapi::Jni::Graphicscontentviewtext::_di_JContentResolver P2) = 0 ;
	virtual __int64 __cdecl getMinGzipSize(Androidapi::Jni::Graphicscontentviewtext::_di_JContentResolver P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JInputStream __cdecl getUngzippedContent(_di_JHttpEntity P1) = 0 ;
	virtual void __cdecl modifyRequestToAcceptGzipResponse(_di_JHttpRequest P1) = 0 ;
	virtual void __cdecl modifyRequestToKeepAlive(_di_JHttpRequest P1) = 0 ;
	virtual _di_Jcore_AndroidHttpClient __cdecl newInstance(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual _di_Jcore_AndroidHttpClient __cdecl newInstance(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Graphicscontentviewtext::_di_JContext P2) = 0 /* overload */;
	virtual __int64 __cdecl parseDate(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	__property __int64 DEFAULT_SYNC_MIN_GZIP_BYTES = {read=_GetDEFAULT_SYNC_MIN_GZIP_BYTES};
};

__interface  INTERFACE_UUID("{F6DC9894-2053-4B86-9AA6-B752963D61CE}") Jcore_AndroidHttpClient  : public JHttpClient 
{
	virtual void __cdecl close(void) = 0 ;
	virtual void __cdecl disableCurlLogging(void) = 0 ;
	virtual void __cdecl enableCurlLogging(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 ;
	HIDESBASE virtual _di_JHttpResponse __cdecl execute(_di_JHttpUriRequest P1) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpResponse __cdecl execute(_di_JHttpUriRequest P1, _di_JHttpContext P2) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpUriRequest P1, _di_JResponseHandler P2) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpResponse __cdecl execute(_di_JHttpHost P1, _di_JHttpRequest P2) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpResponse __cdecl execute(_di_JHttpHost P1, _di_JHttpRequest P2, _di_JHttpContext P3) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpUriRequest P1, _di_JResponseHandler P2, _di_JHttpContext P3) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpHost P1, _di_JHttpRequest P2, _di_JResponseHandler P3) = 0 /* overload */;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl execute(_di_JHttpHost P1, _di_JHttpRequest P2, _di_JResponseHandler P3, _di_JHttpContext P4) = 0 /* overload */;
	HIDESBASE virtual _di_JClientConnectionManager __cdecl getConnectionManager(void) = 0 ;
	virtual void __cdecl setHttpRequestRetryHandler(_di_JHttpRequestRetryHandler P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_AndroidHttpClient : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClientClass,_di_Jcore_AndroidHttpClient> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClientClass,_di_Jcore_AndroidHttpClient>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_AndroidHttpClient(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClientClass,_di_Jcore_AndroidHttpClient> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_AndroidHttpClient(void) { }
	
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

__interface  INTERFACE_UUID("{03E6C5AD-CE4D-4647-86A0-B937957A1C8B}") Jcore_AndroidHttpClient_1Class  : public JHttpRequestInterceptorClass 
{
	virtual void __cdecl process(_di_JHttpRequest P1, _di_JHttpContext P2) = 0 ;
};

__interface  INTERFACE_UUID("{B53F7B1B-7DA6-48AE-88FF-2B7258184EE5}") Jcore_AndroidHttpClient_1  : public JHttpRequestInterceptor 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_AndroidHttpClient_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClient_1Class,_di_Jcore_AndroidHttpClient_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClient_1Class,_di_Jcore_AndroidHttpClient_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_AndroidHttpClient_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClient_1Class,_di_Jcore_AndroidHttpClient_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_AndroidHttpClient_1(void) { }
	
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

__interface  INTERFACE_UUID("{C51D13C9-EED3-4584-B7E7-F7BF19677ABF}") Jcore_AndroidHttpClient_2Class  : public JDefaultHttpClientClass 
{
	
};

__interface  INTERFACE_UUID("{37C5EAC9-1837-46D6-9E1D-82F856239F94}") Jcore_AndroidHttpClient_2  : public JDefaultHttpClient 
{
	virtual _di_JConnectionKeepAliveStrategy __cdecl createConnectionKeepAliveStrategy(void) = 0 ;
	virtual _di_JHttpContext __cdecl createHttpContext(void) = 0 ;
	virtual _di_JBasicHttpProcessor __cdecl createHttpProcessor(void) = 0 ;
	virtual _di_JRedirectHandler __cdecl createRedirectHandler(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_AndroidHttpClient_2 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClient_2Class,_di_Jcore_AndroidHttpClient_2> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClient_2Class,_di_Jcore_AndroidHttpClient_2>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_AndroidHttpClient_2(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClient_2Class,_di_Jcore_AndroidHttpClient_2> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_AndroidHttpClient_2(void) { }
	
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

__interface  INTERFACE_UUID("{27BEF0E0-F259-46BB-B8EE-18E683088BE1}") J2_1Class  : public JDefaultRedirectHandlerClass 
{
	HIDESBASE virtual _di_J2_1 __cdecl init(_di_Jcore_AndroidHttpClient_2 P1) = 0 ;
};

__interface  INTERFACE_UUID("{70B24001-CBFF-48CC-896E-087331E88992}") J2_1  : public JDefaultRedirectHandler 
{
	virtual _di_Jcore_AndroidHttpClient_2 __cdecl _GetthisClass(void) = 0 ;
	virtual bool __cdecl isRedirectRequested(_di_JHttpResponse P1, _di_JHttpContext P2) = 0 ;
	__property _di_Jcore_AndroidHttpClient_2 thisClass = {read=_GetthisClass};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJ2_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_J2_1Class,_di_J2_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_J2_1Class,_di_J2_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJ2_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_J2_1Class,_di_J2_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJ2_1(void) { }
	
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

__interface  INTERFACE_UUID("{6506AD3F-40CE-4521-9056-EEA5EE9CDEDB}") J2_2Class  : public JConnectionKeepAliveStrategyClass 
{
	virtual _di_J2_2 __cdecl init(_di_Jcore_AndroidHttpClient_2 P1) = 0 ;
};

__interface  INTERFACE_UUID("{F23D2F12-E726-4088-B9F7-AE79CC0704BC}") J2_2  : public JConnectionKeepAliveStrategy 
{
	HIDESBASE virtual __int64 __cdecl getKeepAliveDuration(_di_JHttpResponse P1, _di_JHttpContext P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJ2_2 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_J2_2Class,_di_J2_2> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_J2_2Class,_di_J2_2>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJ2_2(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_J2_2Class,_di_J2_2> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJ2_2(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1B771FCC-53C2-4950-8F7D-13E31943F3C9}") Jcore_AndroidHttpClient_CurlLoggerClass  : public JHttpRequestInterceptorClass 
{
	virtual _di_Jcore_AndroidHttpClient_CurlLogger __cdecl init(_di_Jcore_AndroidHttpClient P1, _di_Jcore_AndroidHttpClient_1 P2) = 0 ;
};

__interface  INTERFACE_UUID("{E862D608-F613-4D2D-B0B7-8897AC660674}") Jcore_AndroidHttpClient_CurlLogger  : public JHttpRequestInterceptor 
{
	HIDESBASE virtual void __cdecl process(_di_JHttpRequest P1, _di_JHttpContext P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_AndroidHttpClient_CurlLogger : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClient_CurlLoggerClass,_di_Jcore_AndroidHttpClient_CurlLogger> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClient_CurlLoggerClass,_di_Jcore_AndroidHttpClient_CurlLogger>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_AndroidHttpClient_CurlLogger(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClient_CurlLoggerClass,_di_Jcore_AndroidHttpClient_CurlLogger> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_AndroidHttpClient_CurlLogger(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{DDB1A3D8-A804-442C-B3F4-A72095B9310F}") Jcore_AndroidHttpClient_LoggingConfigurationClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{A86A6632-575F-4674-96E4-F8BAE1760F59}") Jcore_AndroidHttpClient_LoggingConfiguration  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_AndroidHttpClient_LoggingConfiguration : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClient_LoggingConfigurationClass,_di_Jcore_AndroidHttpClient_LoggingConfiguration> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClient_LoggingConfigurationClass,_di_Jcore_AndroidHttpClient_LoggingConfiguration>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_AndroidHttpClient_LoggingConfiguration(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_AndroidHttpClient_LoggingConfigurationClass,_di_Jcore_AndroidHttpClient_LoggingConfiguration> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_AndroidHttpClient_LoggingConfiguration(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1E185DC8-4F6F-406E-A903-5FE5C640F4D2}") JCharArrayBuffersClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl containsIgnoreCaseTrimmed(_di_JCharArrayBuffer P1, int P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	HIDESBASE virtual _di_JCharArrayBuffers __cdecl init(void) = 0 ;
	virtual int __cdecl setLowercaseIndexOf(_di_JCharArrayBuffer P1, int P2) = 0 ;
};

__interface  INTERFACE_UUID("{7321087D-2CD1-4DC0-8091-95972A9FF254}") JCharArrayBuffers  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCharArrayBuffers : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharArrayBuffersClass,_di_JCharArrayBuffers> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharArrayBuffersClass,_di_JCharArrayBuffers>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCharArrayBuffers(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharArrayBuffersClass,_di_JCharArrayBuffers> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCharArrayBuffers(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{BAE0C303-FEBB-43F3-A46E-EECB0A595DB4}") Jcore_ConfigClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JContext __cdecl getApplicationContext(void) = 0 ;
	virtual _di_JRpcParams __cdecl getRpcParams(void) = 0 ;
	virtual _di_JTransport __cdecl getTransport(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUrl(void) = 0 ;
	virtual bool __cdecl isGzip(void) = 0 ;
};

__interface  INTERFACE_UUID("{35BAB20C-34A7-4700-B6B3-D35F97F09A02}") Jcore_Config  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_Config : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_ConfigClass,_di_Jcore_Config> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_ConfigClass,_di_Jcore_Config>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_Config(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_ConfigClass,_di_Jcore_Config> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_Config(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9AD8E7B8-6A3E-4F3A-A17B-8C61599E8980}") JRpcClientClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getRpcProxy(Androidapi::Jni::Javatypes::_di_Jlang_Class P1, _di_JRpcParams P2) = 0 ;
	HIDESBASE virtual _di_JRpcClient __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{B3405C0F-79E1-4EC3-AE6C-90DE607FB92B}") JRpcClient  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRpcClient : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcClientClass,_di_JRpcClient> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcClientClass,_di_JRpcClient>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRpcClient(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcClientClass,_di_JRpcClient> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRpcClient(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D04BBBDD-42C9-4783-BF03-AE7CF0D0653E}") JDefaultRpcClientClass  : public JRpcClientClass 
{
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getRpcProxy(Androidapi::Jni::Javatypes::_di_Jlang_Class P1, _di_JRpcParams P2) = 0 ;
	HIDESBASE virtual _di_JDefaultRpcClient __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{A9E456B3-6A4B-4724-B837-0D2ED65D8CF1}") JDefaultRpcClient  : public JRpcClient 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDefaultRpcClient : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDefaultRpcClientClass,_di_JDefaultRpcClient> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDefaultRpcClientClass,_di_JDefaultRpcClient>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDefaultRpcClient(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDefaultRpcClientClass,_di_JDefaultRpcClient> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDefaultRpcClient(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{081772FA-8E9D-483D-B04B-65E94DAE6544}") JDefaultRpcClient_1Class  : public Jcore_ConfigClass 
{
	virtual _di_JDefaultRpcClient_1 __cdecl init(_di_JDefaultRpcClient P1, _di_JRpcParams P2) = 0 ;
};

__interface  INTERFACE_UUID("{AD0C5597-F47D-47F2-9491-C2412CCE3AAC}") JDefaultRpcClient_1  : public Jcore_Config 
{
	virtual _di_JDefaultRpcClient __cdecl _GetthisClass(void) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JContext __cdecl getApplicationContext(void) = 0 ;
	virtual _di_JRpcParams __cdecl getRpcParams(void) = 0 ;
	virtual _di_JTransport __cdecl getTransport(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUrl(void) = 0 ;
	virtual bool __cdecl isGzip(void) = 0 ;
	__property _di_JDefaultRpcClient thisClass = {read=_GetthisClass};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDefaultRpcClient_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDefaultRpcClient_1Class,_di_JDefaultRpcClient_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDefaultRpcClient_1Class,_di_JDefaultRpcClient_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDefaultRpcClient_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDefaultRpcClient_1Class,_di_JDefaultRpcClient_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDefaultRpcClient_1(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{8D8736F4-C724-4259-80E0-9E591D171F26}") JHeadersClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACCEPT_RANGES(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCACHE_CONTROL(void) = 0 ;
	virtual int __cdecl _GetCONN_CLOSE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCONN_DIRECTIVE(void) = 0 ;
	virtual int __cdecl _GetCONN_KEEP_ALIVE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCONTENT_DISPOSITION(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCONTENT_ENCODING(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCONTENT_LEN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCONTENT_TYPE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetETAG(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXPIRES(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetLAST_MODIFIED(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetLOCATION(void) = 0 ;
	virtual int __cdecl _GetNO_CONN_TYPE(void) = 0 ;
	virtual __int64 __cdecl _GetNO_CONTENT_LENGTH(void) = 0 ;
	virtual __int64 __cdecl _GetNO_TRANSFER_ENCODING(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetPRAGMA(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetPROXY_AUTHENTICATE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetPROXY_CONNECTION(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetREFRESH(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSET_COOKIE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTRANSFER_ENCODING(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetWWW_AUTHENTICATE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetX_PERMITTED_CROSS_DOMAIN_POLICIES(void) = 0 ;
	HIDESBASE virtual _di_JHeaders __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString ACCEPT_RANGES = {read=_GetACCEPT_RANGES};
	__property Androidapi::Jni::Javatypes::_di_JString CACHE_CONTROL = {read=_GetCACHE_CONTROL};
	__property int CONN_CLOSE = {read=_GetCONN_CLOSE};
	__property Androidapi::Jni::Javatypes::_di_JString CONN_DIRECTIVE = {read=_GetCONN_DIRECTIVE};
	__property int CONN_KEEP_ALIVE = {read=_GetCONN_KEEP_ALIVE};
	__property Androidapi::Jni::Javatypes::_di_JString CONTENT_DISPOSITION = {read=_GetCONTENT_DISPOSITION};
	__property Androidapi::Jni::Javatypes::_di_JString CONTENT_ENCODING = {read=_GetCONTENT_ENCODING};
	__property Androidapi::Jni::Javatypes::_di_JString CONTENT_LEN = {read=_GetCONTENT_LEN};
	__property Androidapi::Jni::Javatypes::_di_JString CONTENT_TYPE = {read=_GetCONTENT_TYPE};
	__property Androidapi::Jni::Javatypes::_di_JString ETAG = {read=_GetETAG};
	__property Androidapi::Jni::Javatypes::_di_JString EXPIRES = {read=_GetEXPIRES};
	__property Androidapi::Jni::Javatypes::_di_JString LAST_MODIFIED = {read=_GetLAST_MODIFIED};
	__property Androidapi::Jni::Javatypes::_di_JString LOCATION = {read=_GetLOCATION};
	__property int NO_CONN_TYPE = {read=_GetNO_CONN_TYPE};
	__property __int64 NO_CONTENT_LENGTH = {read=_GetNO_CONTENT_LENGTH};
	__property __int64 NO_TRANSFER_ENCODING = {read=_GetNO_TRANSFER_ENCODING};
	__property Androidapi::Jni::Javatypes::_di_JString PRAGMA = {read=_GetPRAGMA};
	__property Androidapi::Jni::Javatypes::_di_JString PROXY_AUTHENTICATE = {read=_GetPROXY_AUTHENTICATE};
	__property Androidapi::Jni::Javatypes::_di_JString PROXY_CONNECTION = {read=_GetPROXY_CONNECTION};
	__property Androidapi::Jni::Javatypes::_di_JString REFRESH = {read=_GetREFRESH};
	__property Androidapi::Jni::Javatypes::_di_JString SET_COOKIE = {read=_GetSET_COOKIE};
	__property Androidapi::Jni::Javatypes::_di_JString TRANSFER_ENCODING = {read=_GetTRANSFER_ENCODING};
	__property Androidapi::Jni::Javatypes::_di_JString WWW_AUTHENTICATE = {read=_GetWWW_AUTHENTICATE};
	__property Androidapi::Jni::Javatypes::_di_JString X_PERMITTED_CROSS_DOMAIN_POLICIES = {read=_GetX_PERMITTED_CROSS_DOMAIN_POLICIES};
};

__interface  INTERFACE_UUID("{9F6C5716-3DD8-495A-9EAB-4375A53A852F}") JHeaders  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getAcceptRanges(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getCacheControl(void) = 0 ;
	virtual int __cdecl getConnectionType(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getContentDisposition(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getContentEncoding(void) = 0 ;
	virtual __int64 __cdecl getContentLength(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getContentType(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getEtag(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getExpires(void) = 0 ;
	virtual void __cdecl getHeaders(_di_JHeaders_HeaderCallback P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getLastModified(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getLocation(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPragma(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getProxyAuthenticate(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getRefresh(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JArrayList __cdecl getSetCookie(void) = 0 ;
	virtual __int64 __cdecl getTransferEncoding(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getWwwAuthenticate(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getXPermittedCrossDomainPolicies(void) = 0 ;
	virtual void __cdecl parseHeader(_di_JCharArrayBuffer P1) = 0 ;
	virtual void __cdecl setAcceptRanges(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setCacheControl(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setContentDisposition(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setContentEncoding(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setContentLength(__int64 P1) = 0 ;
	virtual void __cdecl setContentType(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setEtag(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setExpires(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setLastModified(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setLocation(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setProxyAuthenticate(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setWwwAuthenticate(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setXPermittedCrossDomainPolicies(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHeaders : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeadersClass,_di_JHeaders> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeadersClass,_di_JHeaders>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHeaders(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeadersClass,_di_JHeaders> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHeaders(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B8E70B7F-B898-46E8-953B-06A4D212CEAF}") JHeaders_HeaderCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl header(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

__interface  INTERFACE_UUID("{E54A3738-1BCD-4F9F-84EC-74D1E089D26B}") JHeaders_HeaderCallback  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHeaders_HeaderCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeaders_HeaderCallbackClass,_di_JHeaders_HeaderCallback> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeaders_HeaderCallbackClass,_di_JHeaders_HeaderCallback>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHeaders_HeaderCallback(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHeaders_HeaderCallbackClass,_di_JHeaders_HeaderCallback> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHeaders_HeaderCallback(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FD0EE9FC-7488-4D78-B2CB-EC39C07771A5}") JHttpCallerClass  : public JAbstractRpcCallerClass 
{
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl call(void) = 0 ;
	HIDESBASE virtual _di_JHttpCaller __cdecl init(_di_Jcore_Config P1, Androidapi::Jni::Javatypes::_di_JMethod P2, int P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P5, bool P6) = 0 ;
};

__interface  INTERFACE_UUID("{E59C6EC6-E70B-45A9-A313-432FAAF4F083}") JHttpCaller  : public JAbstractRpcCaller 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpCaller : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpCallerClass,_di_JHttpCaller> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpCallerClass,_di_JHttpCaller>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpCaller(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpCallerClass,_di_JHttpCaller> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpCaller(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9B7AC089-E9DA-4058-B2D4-E6885BEEA40D}") Jcore_HttpDateTimeClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_Jcore_HttpDateTime __cdecl init(void) = 0 ;
	virtual __int64 __cdecl parse(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{6632028B-BDF5-4CBD-BABE-55B8401A8E41}") Jcore_HttpDateTime  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_HttpDateTime : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_HttpDateTimeClass,_di_Jcore_HttpDateTime> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_HttpDateTimeClass,_di_Jcore_HttpDateTime>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_HttpDateTime(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_HttpDateTimeClass,_di_Jcore_HttpDateTime> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_HttpDateTime(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{58F174BB-DE4E-4E90-BDBE-FECF46CAEA9F}") Jcore_HttpDateTime_TimeOfDayClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_Jcore_HttpDateTime_TimeOfDay __cdecl init(int P1, int P2, int P3) = 0 ;
};

__interface  INTERFACE_UUID("{259200C5-CEAE-4C4D-92F8-8D6A7D82C754}") Jcore_HttpDateTime_TimeOfDay  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl _Getminute(void) = 0 ;
	virtual int __cdecl _Getsecond(void) = 0 ;
	__property int minute = {read=_Getminute};
	__property int second = {read=_Getsecond};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_HttpDateTime_TimeOfDay : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_HttpDateTime_TimeOfDayClass,_di_Jcore_HttpDateTime_TimeOfDay> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_HttpDateTime_TimeOfDayClass,_di_Jcore_HttpDateTime_TimeOfDay>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_HttpDateTime_TimeOfDay(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_HttpDateTime_TimeOfDayClass,_di_Jcore_HttpDateTime_TimeOfDay> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_HttpDateTime_TimeOfDay(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6C3D992C-90BF-4875-82A4-13F5B1093324}") Jcore_HttpExceptionClass  : public Androidapi::Jni::Javatypes::JExceptionClass 
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

__interface  INTERFACE_UUID("{894D9AFF-17C5-4E2B-BB6E-C32B0A9C86DF}") Jcore_HttpException  : public Androidapi::Jni::Javatypes::JException 
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

__interface  INTERFACE_UUID("{5874B6BB-3BFC-4B0B-B5B7-68F9A93066A0}") JTransportClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JFuture __cdecl execute(_di_JRequest P1) = 0 ;
};

__interface  INTERFACE_UUID("{7A07F8AA-B4C6-4413-B4AF-4436A794DCF5}") JTransport  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTransport : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransportClass,_di_JTransport> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransportClass,_di_JTransport>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTransport(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransportClass,_di_JTransport> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTransport(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D5B169C5-D0E6-4F5F-8147-5539FE45F7CB}") JHttpManagerClass  : public JTransportClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTAG(void) = 0 ;
	virtual _di_JHttpManager __cdecl getInstance(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual _di_JHttpManager __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString TAG = {read=_GetTAG};
};

__interface  INTERFACE_UUID("{128180FF-283D-494F-9437-3F74DC73ADD9}") JHttpManager  : public JTransport 
{
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JContext __cdecl _GetmContext(void) = 0 ;
	virtual void __cdecl addConnectTime(__int64 P1) = 0 ;
	virtual void __cdecl addDataSize(__int64 P1) = 0 ;
	virtual void __cdecl addSocketTime(__int64 P1) = 0 ;
	virtual void __cdecl close(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl dumpPerf(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JFuture __cdecl execute(_di_JRequest P1) = 0 ;
	virtual _di_JHttpWorker __cdecl generateWorker(_di_JHttpUrlRequest P1) = 0 ;
	virtual __int64 __cdecl getAverageConnectTime(void) = 0 ;
	virtual __int64 __cdecl getAverageSpeed(void) = 0 ;
	virtual _di_Jcore_AndroidHttpClient __cdecl getHttpClient(void) = 0 ;
	__property Androidapi::Jni::Graphicscontentviewtext::_di_JContext mContext = {read=_GetmContext};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpManager : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpManagerClass,_di_JHttpManager> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpManagerClass,_di_JHttpManager>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpManager(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpManagerClass,_di_JHttpManager> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpManager(void) { }
	
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

__interface  INTERFACE_UUID("{0543A57F-4B50-485C-A3CA-96E12F0EE8E6}") JHttpManager_1Class  : public JFutureTaskClass 
{
	HIDESBASE virtual _di_JHttpManager_1 __cdecl init(_di_JHttpManager P1, Androidapi::Jni::Javatypes::_di_JCallable P2, _di_JHttpWorker P3) = 0 ;
};

__interface  INTERFACE_UUID("{26301052-BE75-44A8-BF71-064A13914DF6}") JHttpManager_1  : public JFutureTask 
{
	virtual _di_JHttpManager __cdecl _GetthisClass(void) = 0 ;
	virtual void __cdecl done(void) = 0 ;
	__property _di_JHttpManager thisClass = {read=_GetthisClass};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpManager_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpManager_1Class,_di_JHttpManager_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpManager_1Class,_di_JHttpManager_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpManager_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpManager_1Class,_di_JHttpManager_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpManager_1(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{68E68C0E-BA82-4946-B746-8B5A3A3527F7}") JHttpManager_2Class  : public Androidapi::Jni::Javautil::JThreadFactoryClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JThread __cdecl newThread(Androidapi::Jni::Javatypes::_di_JRunnable P1) = 0 ;
};

__interface  INTERFACE_UUID("{0690AEEA-121A-474C-A6CF-FB612B30B9B9}") JHttpManager_2  : public Androidapi::Jni::Javautil::JThreadFactory 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpManager_2 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpManager_2Class,_di_JHttpManager_2> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpManager_2Class,_di_JHttpManager_2>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpManager_2(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpManager_2Class,_di_JHttpManager_2> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpManager_2(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5AFFA03F-B4AD-4BDC-B45F-D44268FE4F64}") JHttpUrlHeaderClass  : public Androidapi::Jni::Javatypes::JSerializableClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getHead(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl getHeaders(void) = 0 ;
	virtual _di_JHttpUrlHeader __cdecl init(void) = 0 ;
	virtual void __cdecl setHead(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual void __cdecl setHeaders(Androidapi::Jni::Javatypes::_di_JMap P1) = 0 ;
};

__interface  INTERFACE_UUID("{6C9C77D1-A9F8-48C6-9ED2-004865FA69AA}") JHttpUrlHeader  : public Androidapi::Jni::Javatypes::JSerializable 
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

__interface  INTERFACE_UUID("{89700945-902C-4346-ADF6-2EFD68F1987D}") JRequestClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JRequest __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{EBBE45A4-85F6-41A4-9CFA-2D82DCA6CC8D}") JRequest  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl cancel(void) = 0 ;
	virtual _di_JTransportCallback __cdecl getCallback(void) = 0 ;
	virtual bool __cdecl isCanceled(void) = 0 ;
	virtual void __cdecl setTransportCallback(_di_JTransportCallback P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRequest : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRequestClass,_di_JRequest> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRequestClass,_di_JRequest>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRequest(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRequestClass,_di_JRequest> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRequest(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6984A494-392E-4F59-9B1B-9AF635AA2904}") JHttpUrlRequestClass  : public JRequestClass 
{
	virtual void __cdecl addHeader(_di_JHeader P1) = 0 ;
	virtual void __cdecl addTags(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getContentType(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JArrayList __cdecl getHeaders(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getKey(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl getReqData(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getTag(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUrl(void) = 0 ;
	virtual int __cdecl hashCode(void) = 0 ;
	HIDESBASE virtual _di_JHttpUrlRequest __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	HIDESBASE virtual _di_JHttpUrlRequest __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P2, Androidapi::Jni::Javatypes::_di_JArrayList P3, Androidapi::Jni::Javatypes::_di_JHashMap P4) = 0 /* overload */;
	virtual bool __cdecl isResetCookie(void) = 0 ;
	virtual void __cdecl setContentType(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setHeaders(Androidapi::Jni::Javatypes::_di_JArrayList P1) = 0 ;
	virtual void __cdecl setReqData(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 ;
	virtual void __cdecl setResetCookie(bool P1) = 0 ;
	virtual void __cdecl setTags(Androidapi::Jni::Javatypes::_di_JMap P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl setUrl(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

__interface  INTERFACE_UUID("{12301DC5-B3A5-46F9-A692-C6761CB5731C}") JHttpUrlRequest  : public JRequest 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpUrlRequest : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpUrlRequestClass,_di_JHttpUrlRequest> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpUrlRequestClass,_di_JHttpUrlRequest>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpUrlRequest(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpUrlRequestClass,_di_JHttpUrlRequest> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpUrlRequest(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{ABDCD389-0B69-42E4-97A9-26646072CCE3}") JResponseClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JResponse __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{962FBE3C-53F2-4466-BB28-70921F9D5CCC}") JResponse  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetmContentType(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getContentType(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl getResData(void) = 0 ;
	virtual void __cdecl setContentType(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setResData(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString mContentType = {read=_GetmContentType};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJResponse : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JResponseClass,_di_JResponse> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JResponseClass,_di_JResponse>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJResponse(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JResponseClass,_di_JResponse> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJResponse(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FF33B06A-7AC9-4407-9034-E5A5139D1D0B}") JHttpUrlResponseClass  : public JResponseClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getCharset(void) = 0 ;
	virtual int __cdecl getCode(void) = 0 ;
	virtual __int64 __cdecl getCreateTime(void) = 0 ;
	virtual _di_JHttpUrlHeader __cdecl getHeader(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMsg(void) = 0 ;
	virtual __int64 __cdecl getPeriod(void) = 0 ;
	HIDESBASE virtual _di_JHttpUrlResponse __cdecl init(_di_JHttpUrlHeader P1, int P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P4) = 0 ;
	virtual void __cdecl setCharset(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setCreateTime(__int64 P1) = 0 ;
	virtual void __cdecl setHeader(_di_JHttpUrlHeader P1) = 0 ;
	virtual void __cdecl setPeriod(__int64 P1) = 0 ;
};

__interface  INTERFACE_UUID("{C7D8708E-FB95-44EA-AEF6-5F5F32D30F74}") JHttpUrlResponse  : public JResponse 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpUrlResponse : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpUrlResponseClass,_di_JHttpUrlResponse> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpUrlResponseClass,_di_JHttpUrlResponse>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpUrlResponse(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpUrlResponseClass,_di_JHttpUrlResponse> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpUrlResponse(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6B565687-F4EC-40B2-8536-7BAE34FBDA71}") JHttpWorkerClass  : public Androidapi::Jni::Javatypes::JCallableClass 
{
	virtual _di_JHttpWorker __cdecl init(_di_JHttpManager P1, _di_JHttpUrlRequest P2) = 0 ;
};

__interface  INTERFACE_UUID("{EE2D2660-5F2A-4851-BC53-BD05B5AAFFF0}") JHttpWorker  : public Androidapi::Jni::Javatypes::JCallable 
{
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JContext __cdecl _GetmContext(void) = 0 ;
	virtual _di_JHttpUrlRequest __cdecl _GetmRequest(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetmUrl(void) = 0 ;
	HIDESBASE virtual _di_JResponse __cdecl call(void) = 0 ;
	virtual void __cdecl fillResponse(_di_JHttpUrlResponse P1, _di_JHttpResponse P2) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JHashMap __cdecl getContentType(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JArrayList __cdecl getHeaders(void) = 0 ;
	virtual __int64 __cdecl getPeriod(_di_JHttpResponse P1) = 0 ;
	virtual _di_JAbstractHttpEntity __cdecl getPostData(void) = 0 ;
	virtual _di_JHttpUrlRequest __cdecl getRequest(void) = 0 ;
	virtual Androidapi::Jni::Java::Net::_di_JURI __cdecl getUri(void) = 0 ;
	virtual _di_JResponse __cdecl handleResponse(_di_JHttpResponse P1, int P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	virtual _di_JHttpUrlHeader __cdecl handleResponseHeader(_di_JHttpResponse P1) = 0 ;
	virtual __int64 __cdecl parserMaxage(Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P1) = 0 ;
	virtual _di_JResponse __cdecl processResponse(_di_JHttpResponse P1, _di_JHttpUrlRequest P2) = 0 ;
	virtual bool __cdecl willHandleOtherCode(int P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual void __cdecl writeData(_di_JHttpEntity P1, __int64 P2, Androidapi::Jni::Javatypes::_di_JOutputStream P3) = 0 ;
	__property Androidapi::Jni::Graphicscontentviewtext::_di_JContext mContext = {read=_GetmContext};
	__property _di_JHttpUrlRequest mRequest = {read=_GetmRequest};
	__property Androidapi::Jni::Javatypes::_di_JString mUrl = {read=_GetmUrl};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJHttpWorker : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpWorkerClass,_di_JHttpWorker> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpWorkerClass,_di_JHttpWorker>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHttpWorker(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHttpWorkerClass,_di_JHttpWorker> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHttpWorker(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{0C3717EF-F204-4A97-ABDE-5AD10625A526}") JIOUtilClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl InputStreamToByte(Androidapi::Jni::Javatypes::_di_JInputStream P1) = 0 ;
	virtual void __cdecl closeStream(Androidapi::Jni::Javatypes::_di_JCloseable P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl convertStreamToString(Androidapi::Jni::Javatypes::_di_JInputStream P1) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl fileToByte(Androidapi::Jni::Javatypes::_di_JFile P1) = 0 ;
	HIDESBASE virtual _di_JIOUtil __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{14A7F2A9-0CAF-4962-BF8E-D449F0983861}") JIOUtil  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJIOUtil : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIOUtilClass,_di_JIOUtil> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIOUtilClass,_di_JIOUtil>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJIOUtil(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIOUtilClass,_di_JIOUtil> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJIOUtil(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F1AC4A41-0C69-4560-829C-09EF4C3313B6}") JMiscUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetRC_PACKAGE_NAME(void) = 0 ;
	HIDESBASE virtual _di_JMiscUtils __cdecl init(void) = 0 ;
	virtual bool __cdecl isDebugger(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString RC_PACKAGE_NAME = {read=_GetRC_PACKAGE_NAME};
};

__interface  INTERFACE_UUID("{695C574E-6E20-41AD-AF69-5F4369DFF45E}") JMiscUtils  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMiscUtils : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMiscUtilsClass,_di_JMiscUtils> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMiscUtilsClass,_di_JMiscUtils>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMiscUtils(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMiscUtilsClass,_di_JMiscUtils> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMiscUtils(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{8B2982D1-242F-4DD6-8C61-E0B302C683B7}") Jcore_NetworkUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetNETWORK_TYPE_2G(void) = 0 ;
	virtual int __cdecl _GetNETWORK_TYPE_3G_4G(void) = 0 ;
	virtual int __cdecl _GetNETWORK_TYPE_INVALID(void) = 0 ;
	virtual int __cdecl _GetNETWORK_TYPE_LTE(void) = 0 ;
	virtual int __cdecl _GetNETWORK_TYPE_WIFI(void) = 0 ;
	virtual Androidapi::Jni::Net::_di_JNetworkInfo __cdecl getActiveNetworkInfo(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual int __cdecl getNetType(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual int __cdecl getNetworkType(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual _di_JHttpHost __cdecl getProxy(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	HIDESBASE virtual _di_Jcore_NetworkUtils __cdecl init(void) = 0 ;
	virtual bool __cdecl isNetworkAvailable(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	__property int NETWORK_TYPE_2G = {read=_GetNETWORK_TYPE_2G};
	__property int NETWORK_TYPE_3G_4G = {read=_GetNETWORK_TYPE_3G_4G};
	__property int NETWORK_TYPE_INVALID = {read=_GetNETWORK_TYPE_INVALID};
	__property int NETWORK_TYPE_LTE = {read=_GetNETWORK_TYPE_LTE};
	__property int NETWORK_TYPE_WIFI = {read=_GetNETWORK_TYPE_WIFI};
};

__interface  INTERFACE_UUID("{2B6D380B-17A6-412F-9428-41AD539F03B0}") Jcore_NetworkUtils  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcore_NetworkUtils : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_NetworkUtilsClass,_di_Jcore_NetworkUtils> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_NetworkUtilsClass,_di_Jcore_NetworkUtils>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcore_NetworkUtils(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcore_NetworkUtilsClass,_di_Jcore_NetworkUtils> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcore_NetworkUtils(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6A891B33-3C20-4E75-9E6D-5D7CDEEA7FDE}") JRpcExceptionClass  : public Androidapi::Jni::Javatypes::JRuntimeExceptionClass 
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

__interface  INTERFACE_UUID("{3FF10BDE-986A-4898-9A00-C5CAB4CBED6C}") JRpcException  : public Androidapi::Jni::Javatypes::JRuntimeException 
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

__interface  INTERFACE_UUID("{E0EFE002-80B5-4963-821E-ACE7A09D6966}") JRpcException_ErrorCodeClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual int __cdecl _GetCLIENT_DESERIALIZER_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_HANDLE_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_INTERUPTED_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_LOGIN_FAIL_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_NETWORK_AUTH_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_NETWORK_CACHE_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_NETWORK_CONNECTION_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_NETWORK_DNS_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_NETWORK_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_NETWORK_SCHEDULE_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_NETWORK_SERVER_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_NETWORK_SOCKET_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_NETWORK_SSL_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_NETWORK_UNAVAILABLE_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_TRANSPORT_UNAVAILABAL_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_UNKNOWN_ERROR(void) = 0 ;
	virtual int __cdecl _GetCLIENT_USER_CHANGE_ERROR(void) = 0 ;
	virtual int __cdecl _GetOK(void) = 0 ;
	virtual int __cdecl _GetSERVER_BIZEXCEPTION(void) = 0 ;
	virtual int __cdecl _GetSERVER_CREATEPROXYERROR(void) = 0 ;
	virtual int __cdecl _GetSERVER_ILLEGALACCESS(void) = 0 ;
	virtual int __cdecl _GetSERVER_ILLEGALARGUMENT(void) = 0 ;
	virtual int __cdecl _GetSERVER_INVOKEEXCEEDLIMIT(void) = 0 ;
	virtual int __cdecl _GetSERVER_JSONPARSEREXCEPTION(void) = 0 ;
	virtual int __cdecl _GetSERVER_METHODNOTFOUND(void) = 0 ;
	virtual int __cdecl _GetSERVER_OPERATIONTYPEMISSED(void) = 0 ;
	virtual int __cdecl _GetSERVER_PARAMMISSING(void) = 0 ;
	virtual int __cdecl _GetSERVER_PERMISSIONDENY(void) = 0 ;
	virtual int __cdecl _GetSERVER_REMOTEACCESSEXCEPTION(void) = 0 ;
	virtual int __cdecl _GetSERVER_REQUESTDATAMISSED(void) = 0 ;
	virtual int __cdecl _GetSERVER_REQUESTTIMEOUT(void) = 0 ;
	virtual int __cdecl _GetSERVER_SERVICENOTFOUND(void) = 0 ;
	virtual int __cdecl _GetSERVER_SESSIONSTATUS(void) = 0 ;
	virtual int __cdecl _GetSERVER_UNKNOWERROR(void) = 0 ;
	virtual int __cdecl _GetSERVER_VALUEINVALID(void) = 0 ;
	__property int CLIENT_DESERIALIZER_ERROR = {read=_GetCLIENT_DESERIALIZER_ERROR};
	__property int CLIENT_HANDLE_ERROR = {read=_GetCLIENT_HANDLE_ERROR};
	__property int CLIENT_INTERUPTED_ERROR = {read=_GetCLIENT_INTERUPTED_ERROR};
	__property int CLIENT_LOGIN_FAIL_ERROR = {read=_GetCLIENT_LOGIN_FAIL_ERROR};
	__property int CLIENT_NETWORK_AUTH_ERROR = {read=_GetCLIENT_NETWORK_AUTH_ERROR};
	__property int CLIENT_NETWORK_CACHE_ERROR = {read=_GetCLIENT_NETWORK_CACHE_ERROR};
	__property int CLIENT_NETWORK_CONNECTION_ERROR = {read=_GetCLIENT_NETWORK_CONNECTION_ERROR};
	__property int CLIENT_NETWORK_DNS_ERROR = {read=_GetCLIENT_NETWORK_DNS_ERROR};
	__property int CLIENT_NETWORK_ERROR = {read=_GetCLIENT_NETWORK_ERROR};
	__property int CLIENT_NETWORK_SCHEDULE_ERROR = {read=_GetCLIENT_NETWORK_SCHEDULE_ERROR};
	__property int CLIENT_NETWORK_SERVER_ERROR = {read=_GetCLIENT_NETWORK_SERVER_ERROR};
	__property int CLIENT_NETWORK_SOCKET_ERROR = {read=_GetCLIENT_NETWORK_SOCKET_ERROR};
	__property int CLIENT_NETWORK_SSL_ERROR = {read=_GetCLIENT_NETWORK_SSL_ERROR};
	__property int CLIENT_NETWORK_UNAVAILABLE_ERROR = {read=_GetCLIENT_NETWORK_UNAVAILABLE_ERROR};
	__property int CLIENT_TRANSPORT_UNAVAILABAL_ERROR = {read=_GetCLIENT_TRANSPORT_UNAVAILABAL_ERROR};
	__property int CLIENT_UNKNOWN_ERROR = {read=_GetCLIENT_UNKNOWN_ERROR};
	__property int CLIENT_USER_CHANGE_ERROR = {read=_GetCLIENT_USER_CHANGE_ERROR};
	__property int OK = {read=_GetOK};
	__property int SERVER_BIZEXCEPTION = {read=_GetSERVER_BIZEXCEPTION};
	__property int SERVER_CREATEPROXYERROR = {read=_GetSERVER_CREATEPROXYERROR};
	__property int SERVER_ILLEGALACCESS = {read=_GetSERVER_ILLEGALACCESS};
	__property int SERVER_ILLEGALARGUMENT = {read=_GetSERVER_ILLEGALARGUMENT};
	__property int SERVER_INVOKEEXCEEDLIMIT = {read=_GetSERVER_INVOKEEXCEEDLIMIT};
	__property int SERVER_JSONPARSEREXCEPTION = {read=_GetSERVER_JSONPARSEREXCEPTION};
	__property int SERVER_METHODNOTFOUND = {read=_GetSERVER_METHODNOTFOUND};
	__property int SERVER_OPERATIONTYPEMISSED = {read=_GetSERVER_OPERATIONTYPEMISSED};
	__property int SERVER_PARAMMISSING = {read=_GetSERVER_PARAMMISSING};
	__property int SERVER_PERMISSIONDENY = {read=_GetSERVER_PERMISSIONDENY};
	__property int SERVER_REMOTEACCESSEXCEPTION = {read=_GetSERVER_REMOTEACCESSEXCEPTION};
	__property int SERVER_REQUESTDATAMISSED = {read=_GetSERVER_REQUESTDATAMISSED};
	__property int SERVER_REQUESTTIMEOUT = {read=_GetSERVER_REQUESTTIMEOUT};
	__property int SERVER_SERVICENOTFOUND = {read=_GetSERVER_SERVICENOTFOUND};
	__property int SERVER_SESSIONSTATUS = {read=_GetSERVER_SESSIONSTATUS};
	__property int SERVER_UNKNOWERROR = {read=_GetSERVER_UNKNOWERROR};
	__property int SERVER_VALUEINVALID = {read=_GetSERVER_VALUEINVALID};
};

__interface  INTERFACE_UUID("{170DFC44-977E-46E0-A3DD-4763A3A93383}") JRpcException_ErrorCode  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRpcException_ErrorCode : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcException_ErrorCodeClass,_di_JRpcException_ErrorCode> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcException_ErrorCodeClass,_di_JRpcException_ErrorCode>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRpcException_ErrorCode(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcException_ErrorCodeClass,_di_JRpcException_ErrorCode> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRpcException_ErrorCode(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FBCA4C21-2644-4C52-8E79-5D94AB15DDC2}") JRpcFactoryClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Jcore_Config __cdecl getConfig(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getRpcProxy(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 ;
	HIDESBASE virtual _di_JRpcFactory __cdecl init(_di_Jcore_Config P1) = 0 ;
};

__interface  INTERFACE_UUID("{6E86A9E8-892E-4EBE-820E-C96D00F4F82D}") JRpcFactory  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRpcFactory : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcFactoryClass,_di_JRpcFactory> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcFactoryClass,_di_JRpcFactory>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRpcFactory(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcFactoryClass,_di_JRpcFactory> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRpcFactory(void) { }
	
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

__interface  INTERFACE_UUID("{5C3E60DA-1B26-49BA-A51F-78715E83350B}") JRpcInvocationHandlerClass  : public JInvocationHandlerClass 
{
	virtual _di_JRpcInvocationHandler __cdecl init(_di_Jcore_Config P1, Androidapi::Jni::Javatypes::_di_Jlang_Class P2, _di_JRpcInvoker P3) = 0 ;
};

__interface  INTERFACE_UUID("{9648F2B2-E724-4313-B8B5-25FC789AF09D}") JRpcInvocationHandler  : public JInvocationHandler 
{
	virtual Androidapi::Jni::Javatypes::_di_Jlang_Class __cdecl _GetmClazz(void) = 0 ;
	virtual _di_JRpcInvoker __cdecl _GetmRpcInvoker(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl invoke(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_JMethod P2, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JObject> * P3) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_Jlang_Class mClazz = {read=_GetmClazz};
	__property _di_JRpcInvoker mRpcInvoker = {read=_GetmRpcInvoker};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRpcInvocationHandler : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcInvocationHandlerClass,_di_JRpcInvocationHandler> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcInvocationHandlerClass,_di_JRpcInvocationHandler>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRpcInvocationHandler(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcInvocationHandlerClass,_di_JRpcInvocationHandler> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRpcInvocationHandler(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9295940C-7CB7-4A4E-9D72-4760275253D2}") JRpcInvokerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl addProtocolArgs(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JObject P2) = 0 ;
	virtual void __cdecl batchBegin(void) = 0 ;
	virtual _di_JFutureTask __cdecl batchCommit(void) = 0 ;
	virtual _di_JDeserializer __cdecl getDeserializer(Androidapi::Jni::Javatypes::_di_Jreflect_Type P1, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P2) = 0 ;
	virtual _di_JSerializer __cdecl getSerializer(int P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JObject> * P3) = 0 ;
	virtual _di_JRpcCaller __cdecl getTransport(Androidapi::Jni::Javatypes::_di_JMethod P1, int P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P4, bool P5) = 0 ;
	HIDESBASE virtual _di_JRpcInvoker __cdecl init(_di_JRpcFactory P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl invoke(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_Jlang_Class P2, Androidapi::Jni::Javatypes::_di_JMethod P3, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JObject> * P4) = 0 ;
};

__interface  INTERFACE_UUID("{486FCCFA-DAEA-4674-9C46-4EFAF533AA79}") JRpcInvoker  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRpcInvoker : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcInvokerClass,_di_JRpcInvoker> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcInvokerClass,_di_JRpcInvoker>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRpcInvoker(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcInvokerClass,_di_JRpcInvoker> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRpcInvoker(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C3B3F373-E8B0-471D-93D0-AE484B8F6EF6}") JRpcParamsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getGwUrl(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getHeaders(void) = 0 ;
	HIDESBASE virtual _di_JRpcParams __cdecl init(void) = 0 ;
	virtual bool __cdecl isGzip(void) = 0 ;
	virtual void __cdecl setGwUrl(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setGzip(bool P1) = 0 ;
	virtual void __cdecl setHeaders(Androidapi::Jni::Javatypes::_di_JList P1) = 0 ;
};

__interface  INTERFACE_UUID("{1041BEFA-A84E-4E6B-A87B-6C1F29114D97}") JRpcParams  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRpcParams : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcParamsClass,_di_JRpcParams> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcParamsClass,_di_JRpcParams>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRpcParams(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRpcParamsClass,_di_JRpcParams> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRpcParams(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F452A222-B369-4D5F-818A-A024A03E9E1A}") JThreadUtilClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl checkMainThread(void) = 0 ;
	HIDESBASE virtual _di_JThreadUtil __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{718D76FA-41CE-4369-A31B-A2EB310E4A7F}") JThreadUtil  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJThreadUtil : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JThreadUtilClass,_di_JThreadUtil> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JThreadUtilClass,_di_JThreadUtil>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJThreadUtil(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JThreadUtilClass,_di_JThreadUtil> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJThreadUtil(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{7E207201-A760-49CE-9ACC-FA51343656EB}") JTransportCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl onCancelled(_di_JRequest P1) = 0 ;
	virtual void __cdecl onFailed(_di_JRequest P1, int P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	virtual void __cdecl onPostExecute(_di_JRequest P1, _di_JResponse P2) = 0 ;
	virtual void __cdecl onPreExecute(_di_JRequest P1) = 0 ;
	virtual void __cdecl onProgressUpdate(_di_JRequest P1, double P2) = 0 ;
};

__interface  INTERFACE_UUID("{A203A6AF-8DE8-4CE4-9FD2-5FB27EA8932E}") JTransportCallback  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTransportCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransportCallbackClass,_di_JTransportCallback> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransportCallbackClass,_di_JTransportCallback>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTransportCallback(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransportCallbackClass,_di_JTransportCallback> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTransportCallback(void) { }
	
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

__interface  INTERFACE_UUID("{9755AE38-4849-4CFA-A763-312ADB8F7BB9}") JZHttpRequestRetryHandlerClass  : public JHttpRequestRetryHandlerClass 
{
	virtual _di_JZHttpRequestRetryHandler __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{A82BF35C-FDD2-4273-B64E-DACF21D8D2DE}") JZHttpRequestRetryHandler  : public JHttpRequestRetryHandler 
{
	virtual bool __cdecl retryRequest(Androidapi::Jni::Javatypes::_di_JIOException P1, int P2, _di_JHttpContext P3) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJZHttpRequestRetryHandler : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JZHttpRequestRetryHandlerClass,_di_JZHttpRequestRetryHandler> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JZHttpRequestRetryHandlerClass,_di_JZHttpRequestRetryHandler>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJZHttpRequestRetryHandler(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JZHttpRequestRetryHandlerClass,_di_JZHttpRequestRetryHandler> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJZHttpRequestRetryHandler(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1FC36C14-CF64-4255-859C-8C357735135B}") JDeserializerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl parser(void) = 0 ;
};

__interface  INTERFACE_UUID("{AFCA2F6F-EDE0-4613-8A08-C0EC6DC2F4E9}") JDeserializer  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDeserializer : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeserializerClass,_di_JDeserializer> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeserializerClass,_di_JDeserializer>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDeserializer(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDeserializerClass,_di_JDeserializer> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDeserializer(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FA7657F8-AB1F-4D6B-B351-0B53CA6A08DB}") JAbstractDeserializerClass  : public JDeserializerClass 
{
	virtual _di_JAbstractDeserializer __cdecl init(Androidapi::Jni::Javatypes::_di_Jreflect_Type P1, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P2) = 0 ;
};

__interface  INTERFACE_UUID("{631002C3-DDEF-4B92-85F3-ADA8238762A8}") JAbstractDeserializer  : public JDeserializer 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl _GetmData(void) = 0 ;
	__property Androidapi::Jnibridge::TJavaArray__1<System::Byte> * mData = {read=_GetmData};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAbstractDeserializer : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractDeserializerClass,_di_JAbstractDeserializer> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractDeserializerClass,_di_JAbstractDeserializer>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAbstractDeserializer(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractDeserializerClass,_di_JAbstractDeserializer> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAbstractDeserializer(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1871B165-F769-4617-82FC-902A57B79B97}") JSerializerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl packet(void) = 0 ;
	virtual void __cdecl setExtParam(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
};

__interface  INTERFACE_UUID("{EE334F5C-0010-4649-A7E9-94BB4DD48E99}") JSerializer  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSerializer : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerializerClass,_di_JSerializer> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerializerClass,_di_JSerializer>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSerializer(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerializerClass,_di_JSerializer> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSerializer(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{8DF68162-56EB-4277-98AD-E4C89B740422}") JAbstractSerializerClass  : public JSerializerClass 
{
	virtual _di_JAbstractSerializer __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JObject P2) = 0 ;
};

__interface  INTERFACE_UUID("{3728F5A5-CDE1-4D06-96DD-94A42DADB291}") JAbstractSerializer  : public JSerializer 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl _GetmParams(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JObject mParams = {read=_GetmParams};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAbstractSerializer : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractSerializerClass,_di_JAbstractSerializer> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractSerializerClass,_di_JAbstractSerializer>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAbstractSerializer(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractSerializerClass,_di_JAbstractSerializer> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAbstractSerializer(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{CADA3A7E-736F-4724-A0B4-316F28D5579D}") JJsonDeserializerClass  : public JAbstractDeserializerClass 
{
	HIDESBASE virtual _di_JJsonDeserializer __cdecl init(Androidapi::Jni::Javatypes::_di_Jreflect_Type P1, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P2) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl parser(void) = 0 ;
};

__interface  INTERFACE_UUID("{284E9375-5C50-46A8-A9DB-80881F64C7D5}") JJsonDeserializer  : public JAbstractDeserializer 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJJsonDeserializer : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JJsonDeserializerClass,_di_JJsonDeserializer> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JJsonDeserializerClass,_di_JJsonDeserializer>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJJsonDeserializer(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JJsonDeserializerClass,_di_JJsonDeserializer> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJJsonDeserializer(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{7BB7BD1F-BEE2-48AE-89F1-78D7148F7BFA}") JJsonSerializerClass  : public JAbstractSerializerClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetVERSION(void) = 0 ;
	HIDESBASE virtual _di_JJsonSerializer __cdecl init(int P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JObject P3) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString VERSION = {read=_GetVERSION};
};

__interface  INTERFACE_UUID("{799A8EE7-5A06-457C-A4FA-0F652B2AD313}") JJsonSerializer  : public JAbstractSerializer 
{
	virtual int __cdecl getId(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl packet(void) = 0 ;
	virtual void __cdecl setExtParam(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual void __cdecl setId(int P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJJsonSerializer : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JJsonSerializerClass,_di_JJsonSerializer> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JJsonSerializerClass,_di_JJsonSerializer>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJJsonSerializer(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JJsonSerializerClass,_di_JJsonSerializer> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJJsonSerializer(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C91F780F-37E9-47A5-A4F3-213235DD1307}") Japmobilesecuritysdk_a_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual int __cdecl a(Androidapi::Jni::Javatypes::_di_JMap P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	HIDESBASE virtual _di_Japmobilesecuritysdk_a_a __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{3B7C7449-1E61-4613-ABE9-758C447A1169}") Japmobilesecuritysdk_a_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{BE17F234-8D76-47F2-9987-470CF8A1D1AA}") Japmobilesecuritysdk_b_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Japmobilesecuritysdk_b_a __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(int P1) = 0 /* overload */;
	virtual int __cdecl b(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(void) = 0 ;
	HIDESBASE virtual _di_Japmobilesecuritysdk_b_a __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{223CDA6E-6DA3-43CF-8709-3AC5ED546887}") Japmobilesecuritysdk_b_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{A1074CAE-7B82-48EA-A3BD-328473BF16A0}") Jc_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JThrowable P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{697DB9F6-27CC-4408-BB0A-888CC42E0989}") Jc_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{A9144AD3-9C48-4596-B652-0EE8F438398E}") Jc_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_Jc_b __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{9A0C30DB-FE32-4004-9AB2-52E112A2CF3E}") Jc_b  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{20427709-B442-4CE9-9F2B-EE9F248828E6}") Jd_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JMap P2) = 0 ;
};

__interface  INTERFACE_UUID("{B4479F50-AFE3-48F2-B883-FF049C77B891}") Jd_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{204914B9-0A64-49BC-8439-C948ECF9958B}") Jd_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JMap P2) = 0 ;
};

__interface  INTERFACE_UUID("{375D1939-26E4-4D00-AA23-E0280A2BE6A8}") Jd_b  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{FFD228EB-BBDD-4CA1-BA4A-84AB6603C611}") Jd_cClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{EE170850-B1A4-4B7D-80F5-CF1B12A00F87}") Jd_c  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{EF08EA4D-A02D-451A-A7B0-4170FB7279A4}") Jd_dClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{B693BC12-6914-40BB-9099-80936074058A}") Jd_d  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{E33F86F4-57B2-486C-97FD-49C0C7853FB8}") Jd_eClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JMap P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JMap P2) = 0 ;
};

__interface  INTERFACE_UUID("{C7E8ACD9-EE53-41C5-8D69-FBC683DCEC95}") Jd_e  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{A97F37B1-B3B9-42F0-B336-BE4B57071C87}") Je_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(void) = 0 ;
};

__interface  INTERFACE_UUID("{71D57DE0-6566-4B5E-9DBA-B31EB8A7BB56}") Je_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{13050921-63A4-4F9B-91FD-F29A1CBAFABA}") Jf_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, _di_Jf_b P2) = 0 /* overload */;
	virtual _di_Jf_b __cdecl b(void) = 0 /* overload */;
	virtual _di_Jf_b __cdecl b(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual _di_Jf_b __cdecl c(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{F76C8E66-6679-4672-B55E-C08531271197}") Jf_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{9507240B-0499-4D16-88F6-DC4D74272405}") Jf_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(void) = 0 ;
	HIDESBASE virtual _di_Jf_b __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
};

__interface  INTERFACE_UUID("{A7A7CB4D-B5C8-4803-9B74-A1EF2A516C73}") Jf_b  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{B387123D-9243-4915-B0D0-BFB836BAAF49}") Jf_cClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl d(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl e(void) = 0 ;
	HIDESBASE virtual _di_Jf_c __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jni::Javatypes::_di_JString P5) = 0 ;
};

__interface  INTERFACE_UUID("{D36D3DFD-2617-4043-AFA1-2DEF93B30E6B}") Jf_c  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{8C2CC8E9-5955-429A-ADC4-39E85E7A6855}") Jf_dClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, _di_Jf_c P2) = 0 /* overload */;
	virtual _di_Jf_c __cdecl b(void) = 0 /* overload */;
	virtual _di_Jf_c __cdecl b(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual _di_Jf_c __cdecl c(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{45DC9CE5-DEE4-4FB7-B56A-543DFBF9869F}") Jf_d  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{FAEF61FB-A60A-40E7-A7F5-00C325BBB7D2}") Jf_eClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Jf_f __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{0BC16BBF-5636-4A79-A3CE-D5361346F0BA}") Jf_e  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{3E28B190-B2F9-4DDD-8661-DA841E72A9AD}") Jf_fClass  : public Androidapi::Jni::Javatypes::JObjectClass 
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

__interface  INTERFACE_UUID("{53872548-82E7-430A-AECD-21A79D3A08D3}") Jf_f  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{6DD5F371-36E3-4262-884B-578750F5AC3F}") Jf_gClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{1C817CB4-EB7E-421F-B5DB-6FAA577D45F4}") Jf_g  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{2061B550-C478-434F-A480-4757C3AC8636}") Jf_hClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual __int64 __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, bool P2) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, __int64 P3) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual void __cdecl b(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl c(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual void __cdecl c(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual bool __cdecl d(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual void __cdecl d(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl e(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual void __cdecl e(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl f(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual void __cdecl f(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual __int64 __cdecl g(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	HIDESBASE virtual _di_Jf_h __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{CFC4389D-7597-42BF-8043-ED5C2488E2A7}") Jf_h  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{98FA4B40-D099-4FEF-8AD9-2597D675ADAA}") Jf_iClass  : public Androidapi::Jni::Javatypes::JObjectClass 
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

__interface  INTERFACE_UUID("{DB36BAF6-9528-4A42-96F7-432464649FA1}") Jf_i  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{5EBAD7D1-BBB3-42F7-9A50-163F5C88DE7F}") JAPSecuritySdkClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getApdidToken(void) = 0 ;
	virtual _di_JAPSecuritySdk __cdecl getInstance(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getSdkName(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getSdkVersion(void) = 0 ;
	virtual _di_JAPSecuritySdk_TokenResult __cdecl getTokenResult(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUtdid(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual void __cdecl initToken(int P1, Androidapi::Jni::Javatypes::_di_JMap P2, _di_JAPSecuritySdk_InitResultListener P3) = 0 ;
};

__interface  INTERFACE_UUID("{9A418597-6499-4831-9014-DBDD20C7918A}") JAPSecuritySdk  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{EEFECE69-CD20-449B-9851-7E0EAADD4F9A}") JAPSecuritySdk_1Class  : public Androidapi::Jni::Javatypes::JRunnableClass 
{
	virtual _di_JAPSecuritySdk_1 __cdecl init(_di_JAPSecuritySdk P1, Androidapi::Jni::Javatypes::_di_JMap P2, _di_JAPSecuritySdk_InitResultListener P3) = 0 ;
};

__interface  INTERFACE_UUID("{67D1B887-BF72-4759-AABF-A65CF5CE94C4}") JAPSecuritySdk_1  : public Androidapi::Jni::Javatypes::JRunnable 
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

__interface  INTERFACE_UUID("{4DC3AF4A-78B0-4D12-B997-FB8C87A53471}") JAPSecuritySdk_InitResultListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl onResult(_di_JAPSecuritySdk_TokenResult P1) = 0 ;
};

__interface  INTERFACE_UUID("{02C9B0A5-06EB-4649-B5D5-5C9C9BADF45A}") JAPSecuritySdk_InitResultListener  : public Androidapi::Jnibridge::IJavaInstance 
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

__interface  INTERFACE_UUID("{77BBD280-AEE8-4EA7-A75E-9A9BF95F787A}") JAPSecuritySdk_TokenResultClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetapdidToken(void) = 0 ;
	HIDESBASE virtual _di_JAPSecuritySdk_TokenResult __cdecl init(_di_JAPSecuritySdk P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString apdidToken = {read=_GetapdidToken};
};

__interface  INTERFACE_UUID("{E8B42878-7ED6-45A5-8E77-215C5458B1FC}") JAPSecuritySdk_TokenResult  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{93CC833F-33F6-4ED1-8CC4-3D317B1F8E83}") JEnvModeConfigClass  : public Androidapi::Jni::Javatypes::JObjectClass 
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

__interface  INTERFACE_UUID("{BC62937E-CABE-4D0D-B930-1A0BC6FEBCF8}") JEnvModeConfig  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{5B974D10-B8D1-4B69-9F88-3B1FCE623ACB}") Jg_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4) = 0 /* overload */;
	HIDESBASE virtual _di_Jg_a __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{4C40F23E-D109-4B93-BD1B-E7096903AC33}") Jg_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{46366D22-B787-4228-99B1-0F4A4A343A56}") Jg_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Jg_b __cdecl a(void) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JRunnable P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jg_b __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{14EE70B6-3C89-4349-8F6B-BF4B9CC2852D}") Jg_b  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{693D0555-D683-4106-BA03-B80E0061A691}") Jg_cClass  : public Androidapi::Jni::Javatypes::JRunnableClass 
{
	virtual _di_Jg_c __cdecl init(_di_Jg_b P1) = 0 ;
};

__interface  INTERFACE_UUID("{2818684D-646E-4A06-AB04-2136B43EA347}") Jg_c  : public Androidapi::Jni::Javatypes::JRunnable 
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

__interface  INTERFACE_UUID("{6BE63C9D-186E-4DF9-A4A8-81F209F6008A}") Ja_a_a_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
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

__interface  INTERFACE_UUID("{1441AF73-FF06-4E92-9671-338BA3A867E4}") Ja_a_a_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{9F332342-F66C-40BC-A5CF-95C1CDF52AA2}") Ja_a_a_a_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{5E0CB842-B72A-432C-8C6D-E4762B703C41}") Ja_a_a_a_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{E23839E4-A14E-4577-8423-0D2747C5C647}") Ja_a_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{FABC4787-4032-4D29-9A0E-4CAE3D6CD070}") Ja_a_b  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{90775D5C-B534-4C67-98A1-DBF7F7E4D8B2}") Ja_a_cClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl b(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

__interface  INTERFACE_UUID("{A2B7F8D1-EEDA-488C-BA56-94BD688EAC29}") Ja_a_c  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{43FFF9EA-EA3A-4FE3-A243-FA097126F4B0}") Ja_a_a_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

__interface  INTERFACE_UUID("{E5267C4F-D872-4B5F-87C6-D2331BD7519E}") Ja_a_a_b  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{8A0D549A-230B-442B-B343-33A45A377962}") Ja_b_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Ja_b_a __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{2F16508F-2111-406A-AF90-1BB6792E230D}") Ja_b_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{BABD44AB-261F-48C8-AF16-015791AE9AB5}") Jb_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Jb_b __cdecl a(void) = 0 /* overload */;
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

__interface  INTERFACE_UUID("{8544D94A-3411-46D8-A610-FBEA7C4DF6C3}") Jb_b  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{C665F386-BCF3-4E1F-9869-782B29609B36}") Jb_cClass  : public Androidapi::Jni::Javatypes::JFileFilterClass 
{
	virtual _di_Jb_c __cdecl init(_di_Jb_b P1) = 0 ;
};

__interface  INTERFACE_UUID("{41C911A3-D5A1-4841-976E-7B70E21F38C1}") Jb_c  : public Androidapi::Jni::Javatypes::JFileFilter 
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

__interface  INTERFACE_UUID("{A97CCA51-66F0-48D5-B367-1B3B01A709C0}") Jb_dClass  : public Androidapi::Jni::Javatypes::JObjectClass 
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

__interface  INTERFACE_UUID("{6A1B943F-3EC8-4AE3-9CC4-9457CB5C1574}") Jb_d  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{49541CAB-2551-4154-B702-09456931DD74}") Ja_c_aClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual _di_JDataReportResult __cdecl a(_di_JDataReportRequest P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{CE9346D4-FA43-4C57-A437-426D1B6671BE}") Ja_c_a  : public Androidapi::Jnibridge::IJavaInstance 
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

__interface  INTERFACE_UUID("{65ACA88A-6D93-4126-AD89-9B7CF9F44512}") Jc_a_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl _Geta(void) = 0 ;
	HIDESBASE virtual _di_Jc_a_a __cdecl init(void) = 0 ;
	__property bool a = {read=_Geta};
};

__interface  INTERFACE_UUID("{119DBA55-2499-4C8A-A82D-9C6E03E32ACE}") Jc_a_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{2D848936-4CCE-4892-97AF-CA367E8BCE90}") Jc_a_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Jc_a_c __cdecl a(_di_JDataReportResult P1) = 0 ;
};

__interface  INTERFACE_UUID("{838B20EF-5766-4AEC-992A-BE5BCACF455A}") Jc_a_b  : public Androidapi::Jni::Javatypes::JObject 
{
	
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

__interface  INTERFACE_UUID("{B2F6FE41-A1D1-4676-A7EA-B7C3ED891391}") Jc_a_cClass  : public Jc_a_aClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getc(void) = 0 ;
	HIDESBASE virtual _di_Jc_a_c __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString c = {read=_Getc};
};

__interface  INTERFACE_UUID("{4E950D8F-7413-45E8-A251-95A01CD2D4AC}") Jc_a_c  : public Jc_a_a 
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
class PASCALIMPLEMENTATION TJc_a_c : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_cClass,_di_Jc_a_c> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_cClass,_di_Jc_a_c>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJc_a_c(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_cClass,_di_Jc_a_c> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJc_a_c(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{335256F0-2B93-4945-A0A9-9415EE75AD90}") Jc_a_dClass  : public Androidapi::Jni::Javatypes::JObjectClass 
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
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl e(void) = 0 /* overload */;
	virtual void __cdecl e(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl f(void) = 0 /* overload */;
	virtual void __cdecl f(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual void __cdecl g(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl h(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual _di_Jc_a_d __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{A5E4CDFC-9FD0-46F3-BB27-8FD935D912DB}") Jc_a_d  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJc_a_d : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_dClass,_di_Jc_a_d> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_dClass,_di_Jc_a_d>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJc_a_d(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jc_a_dClass,_di_Jc_a_d> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJc_a_d(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{456EAB2E-374D-431A-871E-ACB8FA811508}") Ja_c_bClass  : public Ja_c_aClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	HIDESBASE virtual _di_JDataReportResult __cdecl a(_di_JDataReportRequest P1) = 0 /* overload */;
	HIDESBASE virtual _di_Ja_c_b __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{05F54B7A-6C6C-4A9A-B86E-3F2E69818B79}") Ja_c_b  : public Ja_c_a 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_c_b : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_c_bClass,_di_Ja_c_b> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_c_bClass,_di_Ja_c_b>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_c_b(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_c_bClass,_di_Ja_c_b> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_c_b(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{347B16D5-D246-4AF5-B43F-845592909B23}") Jc_b_aClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual _di_Jc_a_c __cdecl a(_di_Jc_a_d P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{09DD154B-6EE6-4BA8-9A9D-66DB7177E4EC}") Jc_b_a  : public Androidapi::Jnibridge::IJavaInstance 
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

__interface  INTERFACE_UUID("{5DA3F993-29F1-43CB-A826-760C19829B06}") Jc_b_bClass  : public Jc_b_aClass 
{
	HIDESBASE virtual bool __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jc_a_c __cdecl a(_di_Jc_a_d P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jc_b_a __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual _di_Jc_b_b __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{8F309520-FFD6-4D86-8781-EE509CCF6EBD}") Jc_b_b  : public Jc_b_a 
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

__interface  INTERFACE_UUID("{939FDF03-57AD-470E-B080-24FDC9744B0A}") Jc_cClass  : public Androidapi::Jni::Javatypes::JRunnableClass 
{
	virtual _di_Jc_c __cdecl init(_di_Ja_c_b P1, _di_JDataReportRequest P2) = 0 ;
};

__interface  INTERFACE_UUID("{2DABF99C-E4DD-42DF-83E1-98723B7F7A17}") Jc_c  : public Androidapi::Jni::Javatypes::JRunnable 
{
	virtual _di_Ja_c_b __cdecl _Getb(void) = 0 ;
	HIDESBASE virtual void __cdecl run(void) = 0 ;
	__property _di_Ja_c_b b = {read=_Getb};
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

__interface  INTERFACE_UUID("{6384E990-C002-4B29-952C-76903E0913EE}") Jc_dClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_Jc_b_a __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

__interface  INTERFACE_UUID("{B57E4431-3BE8-4895-9755-EAAFA29ADB41}") Jc_d  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{29933F3A-E42E-4CA7-862A-991C5D646A74}") Ja_d_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4) = 0 /* overload */;
	HIDESBASE virtual _di_Ja_d_a __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{B3177AB6-5481-45FC-B396-77596BE7199A}") Ja_d_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{D8B12404-FE9D-4A02-837A-4E5CB466775C}") Ja_d_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{459A3810-D645-4375-A759-106C716BE248}") Ja_d_b  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{08AFC329-1465-4FCB-A09D-9EEDAAE4869B}") Ja_d_cClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl a(void) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{CCEFEA37-D25A-4E8E-87E4-C154A398F510}") Ja_d_c  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{C7AFF9B2-87CD-4945-8EBB-37EE59D82224}") Ja_d_dClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JMap P3) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl a(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{1B503505-4AA9-4756-BBB8-697EC1B4B3FD}") Ja_d_d  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJa_d_d : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_d_dClass,_di_Ja_d_d> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_d_dClass,_di_Ja_d_d>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJa_d_d(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Ja_d_dClass,_di_Ja_d_d> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJa_d_d(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{CD49ABEA-53BA-49EA-9F73-160873080982}") Ja_e_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_Ja_e_a __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jni::Javatypes::_di_JString P5, Androidapi::Jni::Javatypes::_di_JString P6, Androidapi::Jni::Javatypes::_di_JString P7) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

__interface  INTERFACE_UUID("{6389F6BA-D622-4C70-B108-25C896887C33}") Ja_e_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{3EEAF256-EB05-4CF7-8F48-DCC04ED57C87}") Je_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(void) = 0 /* overload */;
	HIDESBASE virtual _di_Je_b __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, _di_Jc_b_a P2) = 0 ;
};

__interface  INTERFACE_UUID("{C7EA47E9-055D-407A-A25C-42F57ACC396D}") Je_b  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{0EA593C6-5673-48A6-90BA-796D10255AE3}") Je_cClass  : public Androidapi::Jni::Javatypes::JRunnableClass 
{
	virtual _di_Je_c __cdecl init(_di_Je_b P1) = 0 ;
};

__interface  INTERFACE_UUID("{180FE9D3-D22B-4A34-9DA0-5F6F5D0C20F8}") Je_c  : public Androidapi::Jni::Javatypes::JRunnable 
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

__interface  INTERFACE_UUID("{EC800639-6E46-4766-80EF-83842E4302A6}") Je_dClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JThrowable P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual void __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{9D3D875C-8304-4BD7-9072-3F2898541AE1}") Je_d  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{CC8DBD65-EB43-4BFD-B92C-3BE4847A8D29}") JOperationTypeClass  : public Androidapi::Jni::Javatypes::JAnnotationClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl value(void) = 0 ;
};

__interface  INTERFACE_UUID("{4EA7F4DA-4F33-4094-B4BB-2F46FC7EF0ED}") JOperationType  : public Androidapi::Jni::Javatypes::JAnnotation 
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

__interface  INTERFACE_UUID("{E61D366A-E1E3-423B-A5A3-26703DED82B7}") JResetCookieClass  : public Androidapi::Jni::Javatypes::JAnnotationClass 
{
	
};

__interface  INTERFACE_UUID("{427D8408-08FA-4734-89C9-729A91A26DAD}") JResetCookie  : public Androidapi::Jni::Javatypes::JAnnotation 
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

__interface  INTERFACE_UUID("{C29DCC0D-988A-4B54-B98F-7494BB1E05E6}") JUpdateDeviceInfoClass  : public Androidapi::Jni::Javatypes::JAnnotationClass 
{
	
};

__interface  INTERFACE_UUID("{84DDDCCD-6EA8-49EA-9E09-80FA95A519F5}") JUpdateDeviceInfo  : public Androidapi::Jni::Javatypes::JAnnotation 
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

__interface  INTERFACE_UUID("{FA41811B-2587-4ACF-8D20-0E6D69247118}") JSecurityClientMobileClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl GetApdid(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JMap P2) = 0 ;
	HIDESBASE virtual _di_JSecurityClientMobile __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{91A5FEC8-F31E-438E-A728-6147AAA699FE}") JSecurityClientMobile  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{CA343617-D10A-42B8-9C32-E284C1090B32}") JBugTrackMessageServiceClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl logCollect(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{8852EDA2-03B7-4F7E-80C6-84BA0403E82C}") JBugTrackMessageService  : public Androidapi::Jnibridge::IJavaInstance 
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

__interface  INTERFACE_UUID("{5E69D0D3-3EF8-4F6B-8C59-D34F6D184B1C}") JDataReportServiceClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual _di_JDataReportResult __cdecl reportData(_di_JDataReportRequest P1) = 0 ;
};

__interface  INTERFACE_UUID("{C8C667CD-7A4D-42F7-9171-C86554378751}") JDataReportService  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDataReportService : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDataReportServiceClass,_di_JDataReportService> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDataReportServiceClass,_di_JDataReportService>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDataReportService(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDataReportServiceClass,_di_JDataReportService> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDataReportService(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B67EC962-629D-47B2-966B-D733174B75C1}") JDataReportRequestClass  : public Androidapi::Jni::Javatypes::JSerializableClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetbizType(void) = 0 ;
	virtual _di_JDataReportRequest __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString bizType = {read=_GetbizType};
};

__interface  INTERFACE_UUID("{5BD33A2C-96AF-434A-9804-AA316BF85CEE}") JDataReportRequest  : public Androidapi::Jni::Javatypes::JSerializable 
{
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl _GetbizData(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl _GetdeviceData(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getos(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetrpcVersion(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JMap bizData = {read=_GetbizData};
	__property Androidapi::Jni::Javatypes::_di_JMap deviceData = {read=_GetdeviceData};
	__property Androidapi::Jni::Javatypes::_di_JString os = {read=_Getos};
	__property Androidapi::Jni::Javatypes::_di_JString rpcVersion = {read=_GetrpcVersion};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDataReportRequest : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDataReportRequestClass,_di_JDataReportRequest> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDataReportRequestClass,_di_JDataReportRequest>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDataReportRequest(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDataReportRequestClass,_di_JDataReportRequest> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDataReportRequest(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C644957B-C355-4CD4-A6A8-E0187411AD0E}") JDataReportResultClass  : public Androidapi::Jni::Javatypes::JSerializableClass 
{
	virtual bool __cdecl _Getsuccess(void) = 0 ;
	virtual _di_JDataReportResult __cdecl init(void) = 0 ;
	__property bool success = {read=_Getsuccess};
};

__interface  INTERFACE_UUID("{06F58597-5F02-4F32-96B4-0F31F9090F86}") JDataReportResult  : public Androidapi::Jni::Javatypes::JSerializable 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetresultCode(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl _GetresultData(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString resultCode = {read=_GetresultCode};
	__property Androidapi::Jni::Javatypes::_di_JMap resultData = {read=_GetresultData};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDataReportResult : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDataReportResultClass,_di_JDataReportResult> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDataReportResultClass,_di_JDataReportResult>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDataReportResult(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDataReportResultClass,_di_JDataReportResult> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDataReportResult(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C257DE4A-4167-4BC1-97F3-04551057A6DF}") JAppListCmdServiceClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual _di_JAppListCmdResult __cdecl getAppListCmd(_di_JAppListCmdRequest P1) = 0 ;
	virtual _di_JAppListCmdResult __cdecl reGetAppListCmd(_di_JAppListCmdRequest P1) = 0 ;
};

__interface  INTERFACE_UUID("{3BFDCD00-100F-4350-AF48-88508D8D24C5}") JAppListCmdService  : public Androidapi::Jnibridge::IJavaInstance 
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

__interface  INTERFACE_UUID("{19003D6D-3F0A-4F2A-B9DE-50660D71E0DC}") JDeviceDataReportServiceClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual _di_JAppListResult __cdecl getAppList(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual _di_JDeviceDataReportResult __cdecl reportStaticData(_di_JDeviceDataReportRequest P1) = 0 ;
};

__interface  INTERFACE_UUID("{851D1B69-82D4-4563-835B-7D63FFDB597F}") JDeviceDataReportService  : public Androidapi::Jnibridge::IJavaInstance 
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

__interface  INTERFACE_UUID("{07F383AD-477F-44D5-878F-F9DA700D0594}") JAppListCmdRequestClass  : public Androidapi::Jni::Javatypes::JSerializableClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getos(void) = 0 ;
	virtual _di_JAppListCmdRequest __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString os = {read=_Getos};
};

__interface  INTERFACE_UUID("{EF15A765-BB31-44FC-B978-EF71365940CB}") JAppListCmdRequest  : public Androidapi::Jni::Javatypes::JSerializable 
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

__interface  INTERFACE_UUID("{73F6D8CD-6F11-4A5F-A596-6DA14A15E21C}") JDeviceDataReportRequestClass  : public Androidapi::Jni::Javatypes::JSerializableClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getos(void) = 0 ;
	virtual _di_JDeviceDataReportRequest __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString os = {read=_Getos};
};

__interface  INTERFACE_UUID("{27A7DBC4-BC86-48DF-A674-BDDD2EDD2D0F}") JDeviceDataReportRequest  : public Androidapi::Jni::Javatypes::JSerializable 
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

__interface  INTERFACE_UUID("{5B8B751F-1D2A-49A6-BDE5-09F1AB27D614}") JBaseResultClass  : public Androidapi::Jni::Javatypes::JSerializableClass 
{
	virtual bool __cdecl _Getsuccess(void) = 0 ;
	virtual _di_JBaseResult __cdecl init(void) = 0 ;
	__property bool success = {read=_Getsuccess};
};

__interface  INTERFACE_UUID("{C0BE5E49-CDE7-42FA-BE56-116ABA05C863}") JBaseResult  : public Androidapi::Jni::Javatypes::JSerializable 
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

__interface  INTERFACE_UUID("{B4EEB9E4-94BC-47CD-B439-6167596F5A6F}") JAppListResultClass  : public JBaseResultClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetappListVer(void) = 0 ;
	HIDESBASE virtual _di_JAppListResult __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString appListVer = {read=_GetappListVer};
};

__interface  INTERFACE_UUID("{B9168D47-32ED-4C38-BFCF-7C47A854CC6C}") JAppListResult  : public JBaseResult 
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

__interface  INTERFACE_UUID("{B3425B7F-BEE4-4716-89F2-2B88476AE878}") JAppListCmdResultClass  : public JAppListResultClass 
{
	virtual bool __cdecl _GetneedRetry(void) = 0 ;
	HIDESBASE virtual _di_JAppListCmdResult __cdecl init(void) = 0 ;
	__property bool needRetry = {read=_GetneedRetry};
};

__interface  INTERFACE_UUID("{906DF8C9-02C9-46E3-BB7B-1FD67EF98B0B}") JAppListCmdResult  : public JAppListResult 
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

__interface  INTERFACE_UUID("{0D4BA34E-07E9-4BB2-8BD9-07313BBBADE0}") JDeviceDataReportResultClass  : public JBaseResultClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getapdid(void) = 0 ;
	HIDESBASE virtual _di_JDeviceDataReportResult __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString apdid = {read=_Getapdid};
};

__interface  INTERFACE_UUID("{4E6E2DF6-886C-4E8B-9ABF-E95556E55927}") JDeviceDataReportResult  : public JBaseResult 
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

__interface  INTERFACE_UUID("{B0050162-7C93-4B97-9C38-936235B580CB}") JAidManagerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_JAidManager __cdecl getInstance(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getValue(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	virtual void __cdecl requestAid(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, _di_JAidCallback P4) = 0 ;
};

__interface  INTERFACE_UUID("{FF97B34D-C51F-4A7A-B02F-D3CEBEF0A337}") JAidManager  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{6E156744-2CFE-4D9E-9229-C218A8997291}") JAidRequesterClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_JAidRequester __cdecl getInstance(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	HIDESBASE virtual _di_JAidRequester __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl postRest(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4) = 0 ;
	virtual void __cdecl postRestAsync(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4, _di_JAidCallback P5) = 0 ;
};

__interface  INTERFACE_UUID("{00CF76FE-2B85-4112-9B80-FCC5B15DF423}") JAidRequester  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{1DE71A15-6D06-4B93-B135-6B6F3EB8C97E}") JAidRequester_PostRestThreadClass  : public Androidapi::Jni::Javatypes::JThreadClass 
{
	HIDESBASE virtual _di_JAidRequester_PostRestThread __cdecl init(_di_JAidRequester P1, _di_JHttpPost P2) = 0 /* overload */;
	HIDESBASE virtual _di_JAidRequester_PostRestThread __cdecl init(_di_JAidRequester P1, _di_JHttpPost P2, _di_JAidCallback P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jni::Javatypes::_di_JString P5, Androidapi::Jni::Javatypes::_di_JString P6) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{B02D0ECD-8CE3-4C8D-9D95-4A8BEE5CDEF5}") JAidRequester_PostRestThread  : public Androidapi::Jni::Javatypes::JThread 
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

__interface  INTERFACE_UUID("{16641458-B689-4E79-9E7F-0E71064CA9E0}") JAidStorageControllerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual __int64 __cdecl getAidGenTimeFromSP(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getAidValueFromSP(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	HIDESBASE virtual _di_JAidStorageController __cdecl init(void) = 0 ;
	virtual void __cdecl setAidValueToSP(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4) = 0 ;
};

__interface  INTERFACE_UUID("{CCA96F7B-DD28-4085-96A5-19EB6B3C3D39}") JAidStorageController  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{1F92ABE9-9EA9-4C0C-A7B5-D90E1AA8E4C5}") JAESUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
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

__interface  INTERFACE_UUID("{54D9941E-6EF6-47B4-82DE-9AD21C9389C3}") JAESUtils  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{4486DFDF-4760-4A9B-B9E1-45E7451533A6}") Jutils_Base64Class  : public Androidapi::Jni::Javatypes::JObjectClass 
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

__interface  INTERFACE_UUID("{1E035533-D4B9-4A87-9E1E-26AD7432D414}") Jutils_Base64  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{A4648892-A227-462F-8B27-F2EDEB8DEB50}") JBase64_CoderClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl _Getoutput(void) = 0 ;
	HIDESBASE virtual _di_JBase64_Coder __cdecl init(void) = 0 ;
	__property Androidapi::Jnibridge::TJavaArray__1<System::Byte> * output = {read=_Getoutput};
};

__interface  INTERFACE_UUID("{D6ACF272-87F1-470D-B432-FDA639A2B3D1}") JBase64_Coder  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{3390D742-36B2-4C91-9109-B390FFFB59F9}") JBase64_DecoderClass  : public JBase64_CoderClass 
{
	HIDESBASE virtual _di_JBase64_Decoder __cdecl init(int P1, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P2) = 0 ;
	virtual int __cdecl maxOutputSize(int P1) = 0 ;
	virtual bool __cdecl process(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2, int P3, bool P4) = 0 ;
};

__interface  INTERFACE_UUID("{F7AE409B-6937-4734-A6C5-301CCF6CAEC3}") JBase64_Decoder  : public JBase64_Coder 
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

__interface  INTERFACE_UUID("{EA8E0A94-E06F-44D0-807C-5FAFCF84AC8C}") JBase64_EncoderClass  : public JBase64_CoderClass 
{
	virtual bool __cdecl _GetAssertionsDisabled(void) = 0 ;
	virtual int __cdecl _GetLINE_GROUPS(void) = 0 ;
	HIDESBASE virtual _di_JBase64_Encoder __cdecl init(int P1, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P2) = 0 ;
	__property bool AssertionsDisabled = {read=_GetAssertionsDisabled};
	__property int LINE_GROUPS = {read=_GetLINE_GROUPS};
};

__interface  INTERFACE_UUID("{B7ADD8A3-21C5-4B0E-B67E-4B05506270EC}") JBase64_Encoder  : public JBase64_Coder 
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

__interface  INTERFACE_UUID("{44365966-BBE6-4E62-9EC1-CF501ACEB194}") JBase64HelperClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl encodeToString(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2) = 0 ;
	HIDESBASE virtual _di_JBase64Helper __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{659EE408-12DF-4C44-AD7F-B33546293F50}") JBase64Helper  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{39C1E445-CEE3-4C07-A3D4-DD9DBDD93A9D}") Jutils_DebugUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl _GetDBG(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl get(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual int __cdecl getInt(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 ;
	HIDESBASE virtual _di_Jutils_DebugUtils __cdecl init(void) = 0 ;
	__property bool DBG = {read=_GetDBG};
};

__interface  INTERFACE_UUID("{A05B623A-C99D-4AC1-9C64-043245D27D0B}") Jutils_DebugUtils  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{4613CA53-BD28-40E6-BF64-C7AD3024D081}") JIntUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl getBytes(int P1) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl getBytes(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2) = 0 /* overload */;
	HIDESBASE virtual _di_JIntUtils __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{6559FDDA-47E3-4CCC-B9E7-775E660F0DEA}") JIntUtils  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{A270F4B8-F1FF-4D96-9B17-724E90CCE8F0}") JNetworkUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
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

__interface  INTERFACE_UUID("{6FE8DD62-7E77-4076-B924-3B1B60D20406}") JNetworkUtils  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{4B90EC30-700E-46D8-B62A-BAB5B2ADBEAA}") JPhoneInfoUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getImei(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getImsi(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUniqueID(void) = 0 ;
	HIDESBASE virtual _di_JPhoneInfoUtils __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{3B5BF4F5-48E2-4270-AECC-5308817724BB}") JPhoneInfoUtils  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{6336537B-D179-4C32-9D63-BC41831E7A8B}") JSharedPreferenceHelperClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl apply(Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences_Editor P1) = 0 ;
	HIDESBASE virtual _di_JSharedPreferenceHelper __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{C88D2B54-41BF-418A-8754-5115873D58EF}") JSharedPreferenceHelper  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{C6158269-925B-4F02-AAC4-EED1C7EC9271}") JStringUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl convertObjectToString(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual int __cdecl hashCode(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual _di_JStringUtils __cdecl init(void) = 0 ;
	virtual bool __cdecl isEmpty(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{A71E8499-8D65-4519-8AA8-DD12293D55BB}") JStringUtils  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{6765BE37-A6B4-41B5-B0F5-25FDBB5A30A7}") JSystemUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getAppLabel(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getCpuInfo(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JFile __cdecl getRootFolder(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual int __cdecl getSystemVersion(void) = 0 ;
	HIDESBASE virtual _di_JSystemUtils __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{5A39D18E-242E-4881-8589-FE2945A687F0}") JSystemUtils  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{C28BEE27-B658-4C94-9F45-706E9B8EE355}") Jutils_TimeUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTAG(void) = 0 ;
	virtual int __cdecl _GetTOTAL_M_S_ONE_DAY(void) = 0 ;
	HIDESBASE virtual _di_Jutils_TimeUtils __cdecl init(void) = 0 ;
	virtual bool __cdecl isUpToDate(__int64 P1, int P2) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString TAG = {read=_GetTAG};
	__property int TOTAL_M_S_ONE_DAY = {read=_GetTOTAL_M_S_ONE_DAY};
};

__interface  INTERFACE_UUID("{97213E81-CB16-4432-8D64-35D4408B37E9}") Jutils_TimeUtils  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{C53FC63C-1462-4C85-889E-A7EEBBCFA4A1}") JFastXmlSerializerClass  : public Androidapi::Jni::Javatypes::JXmlSerializerClass 
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

__interface  INTERFACE_UUID("{559933D1-28A8-4148-8FC8-112957CEEC58}") JFastXmlSerializer  : public Androidapi::Jni::Javatypes::JXmlSerializer 
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

__interface  INTERFACE_UUID("{178BFC14-9B2A-4E36-80D9-12DB00E50172}") JMySharedPreferencesClass  : public Androidapi::Jnibridge::IJavaClass 
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

__interface  INTERFACE_UUID("{F62AEAF3-5191-41C0-8BD8-D28206A7383C}") JMySharedPreferences  : public Androidapi::Jnibridge::IJavaInstance 
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

__interface  INTERFACE_UUID("{6D0D5CF3-5DB2-431D-BDBE-66857656B8CC}") JMySharedPreferences_MyEditorClass  : public Androidapi::Jnibridge::IJavaClass 
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

__interface  INTERFACE_UUID("{4E4FFC4D-53A6-428E-834C-B861907E0B29}") JMySharedPreferences_MyEditor  : public Androidapi::Jnibridge::IJavaInstance 
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

__interface  INTERFACE_UUID("{01B2BDEC-86CC-4D86-8CB6-2F5ECBECC719}") JMySharedPreferences_OnSharedPreferenceChangeListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl onSharedPreferenceChanged(_di_JMySharedPreferences P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

__interface  INTERFACE_UUID("{AD178ED6-5E5C-4490-90B0-365874406CBA}") JMySharedPreferences_OnSharedPreferenceChangeListener  : public Androidapi::Jnibridge::IJavaInstance 
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

__interface  INTERFACE_UUID("{02916C2F-BC47-4CC1-AA39-EDF97142370E}") JPersistentConfigurationClass  : public Androidapi::Jni::Javatypes::JObjectClass 
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

__interface  INTERFACE_UUID("{A15AC631-1E73-44C8-8551-ED7F359433A6}") JPersistentConfiguration  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{5453903B-5A08-473D-8F20-3E976F70CA60}") JTransactionXMLFileClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetMODE_PRIVATE(void) = 0 ;
	virtual int __cdecl _GetMODE_WORLD_READABLE(void) = 0 ;
	virtual int __cdecl _GetMODE_WORLD_WRITEABLE(void) = 0 ;
	HIDESBASE virtual _di_JTransactionXMLFile __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	__property int MODE_PRIVATE = {read=_GetMODE_PRIVATE};
	__property int MODE_WORLD_READABLE = {read=_GetMODE_WORLD_READABLE};
	__property int MODE_WORLD_WRITEABLE = {read=_GetMODE_WORLD_WRITEABLE};
};

__interface  INTERFACE_UUID("{09E516DD-FF3A-4944-9312-B526B206D55D}") JTransactionXMLFile  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{D5F3056F-D3D6-4FB5-841D-C3199C23D4CE}") JTransactionXMLFile_MySharedPreferencesImplClass  : public JMySharedPreferencesClass 
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

__interface  INTERFACE_UUID("{FB390023-0E7C-4D3C-861A-83615FEAA7F0}") JTransactionXMLFile_MySharedPreferencesImpl  : public JMySharedPreferences 
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

__interface  INTERFACE_UUID("{B89F20AD-4F73-4627-BAB4-581E28E50A85}") JMySharedPreferencesImpl_EditorImplClass  : public JMySharedPreferences_MyEditorClass 
{
	virtual _di_JMySharedPreferencesImpl_EditorImpl __cdecl init(_di_JTransactionXMLFile_MySharedPreferencesImpl P1) = 0 ;
};

__interface  INTERFACE_UUID("{9DA29498-23A6-4F2D-BC2B-17B1A575A331}") JMySharedPreferencesImpl_EditorImpl  : public JMySharedPreferences_MyEditor 
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

__interface  INTERFACE_UUID("{FDB7CDD1-552A-49D6-8847-E00EA8BB056A}") JXmlUtilsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
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

__interface  INTERFACE_UUID("{3249602B-9AD7-49FD-A165-EAF0F8250251}") JXmlUtils  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{04AACC0A-F041-453F-AB57-B479BDC148B6}") JDeviceClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDeviceId(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getImei(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getImsi(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUtdid(void) = 0 ;
	HIDESBASE virtual _di_JDevice __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{417557F2-634B-4198-BA47-49858E305DD5}") JDevice  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{B031293C-8C01-4790-B659-4ECB1EF19759}") JDeviceInfoClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl _GetCREATE_DEVICE_METADATA_LOCK(void) = 0 ;
	virtual System::Byte __cdecl _GetUTDID_VERSION_CODE(void) = 0 ;
	virtual _di_JDevice __cdecl getDevice(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual __int64 __cdecl getMetadataCheckSum(_di_JDevice P1) = 0 ;
	HIDESBASE virtual _di_JDeviceInfo __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JObject CREATE_DEVICE_METADATA_LOCK = {read=_GetCREATE_DEVICE_METADATA_LOCK};
	__property System::Byte UTDID_VERSION_CODE = {read=_GetUTDID_VERSION_CODE};
};

__interface  INTERFACE_UUID("{194A3744-10F6-47F4-AA83-C6D877C2731A}") JDeviceInfo  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{FB678D0F-F006-490C-AD10-1270B78CA257}") JUTDeviceClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUtdid(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	HIDESBASE virtual _di_JUTDevice __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{49246B5D-F52F-4CEB-8790-759EB03FFE7F}") JUTDevice  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{8AAC4245-759B-4657-8F25-5DFCF9B871F4}") JUTUtdidClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetUM_SETTINGS_STORAGE_NEW(void) = 0 ;
	HIDESBASE virtual _di_JUTUtdid __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual _di_JUTUtdid __cdecl instance(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString UM_SETTINGS_STORAGE_NEW = {read=_GetUM_SETTINGS_STORAGE_NEW};
};

__interface  INTERFACE_UUID("{7E348ADC-B37D-4ED0-9E4C-96F507CE047B}") JUTUtdid  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{D1E251BA-186A-42CE-A9BC-DC89E9B244DA}") JUTUtdidHelperClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl dePack(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl generateRandomUTDID(void) = 0 ;
	HIDESBASE virtual _di_JUTUtdidHelper __cdecl init(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl pack(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl packUtdidStr(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{11ACB926-98AC-457C-A11E-FC76C6982AA2}") JUTUtdidHelper  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{8A881728-E481-412F-931C-657542CEF6AB}") JUTUtdidHelper2Class  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl dePack(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl dePackWithBase64(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual _di_JUTUtdidHelper2 __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{E9885093-0ACB-4391-BBA6-225659252479}") JUTUtdidHelper2  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{8D63D32D-C7D3-4EF4-B9F3-82E9E1A62CD8}") JAidCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl onAidEventChanged(int P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

__interface  INTERFACE_UUID("{DC0A815E-B5A8-4FA2-BD53-F4C74A0BAF11}") JAidCallback  : public Androidapi::Jnibridge::IJavaInstance 
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

__interface  INTERFACE_UUID("{3B4473FF-F87D-4473-8C35-7EB67030636D}") JAidConstantsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
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

__interface  INTERFACE_UUID("{377B696C-8B31-414F-A047-77E5CE3E21DC}") JAidConstants  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{03EB0A05-B124-4C21-B54A-C9F5B75D19D0}") Jdevice_UTDeviceClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getAid(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContext P3) = 0 ;
	virtual void __cdecl getAidAsync(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContext P3, _di_JAidCallback P4) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUtdid(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	HIDESBASE virtual _di_Jdevice_UTDevice __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{804079CF-C844-4468-BAC9-5B2A7596DD18}") Jdevice_UTDevice  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{A0037B0E-7130-4A66-92EA-1FF16812B7DA}") JByteArrayBufferClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JByteArrayBuffer __cdecl init(int capacity) = 0 ;
	virtual void __cdecl append(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * b, int off, int len) = 0 /* overload */;
	virtual void __cdecl append(int b) = 0 /* overload */;
	virtual void __cdecl append(Androidapi::Jnibridge::TJavaArray__1<System::WideChar> * b, int off, int len) = 0 /* overload */;
	virtual int __cdecl capacity(void) = 0 ;
	virtual void __cdecl clear(void) = 0 ;
	virtual bool __cdecl isEmpty(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl toByteArray(void) = 0 ;
};

__interface  INTERFACE_UUID("{1F62E17E-E9D2-44E0-8DCB-F3D6FF056886}") JByteArrayBuffer  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl append(_di_JCharArrayBuffer b, int off, int len) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl buffer(void) = 0 ;
	virtual int __cdecl byteAt(int i) = 0 ;
	virtual bool __cdecl isFull(void) = 0 ;
	virtual int __cdecl length(void) = 0 ;
	virtual void __cdecl setLength(int len) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJByteArrayBuffer : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JByteArrayBufferClass,_di_JByteArrayBuffer> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JByteArrayBufferClass,_di_JByteArrayBuffer>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJByteArrayBuffer(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JByteArrayBufferClass,_di_JByteArrayBuffer> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJByteArrayBuffer(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{96629A0E-3877-4D5A-8214-06CF0B9201FE}") JCharArrayBufferClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JCharArrayBuffer __cdecl init(int capacity) = 0 ;
	virtual void __cdecl append(_di_JCharArrayBuffer b, int off, int len) = 0 /* overload */;
	virtual void __cdecl append(_di_JCharArrayBuffer b) = 0 /* overload */;
	virtual void __cdecl append(System::WideChar ch) = 0 /* overload */;
	virtual void __cdecl append(Androidapi::Jni::Javatypes::_di_JObject obj) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::WideChar> * __cdecl buffer(void) = 0 ;
	virtual int __cdecl capacity(void) = 0 ;
	virtual int __cdecl indexOf(int ch, int beginIndex, int endIndex) = 0 /* overload */;
	virtual int __cdecl indexOf(int ch) = 0 /* overload */;
	virtual bool __cdecl isEmpty(void) = 0 ;
	virtual void __cdecl setLength(int len) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl substring(int beginIndex, int endIndex) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl substringTrimmed(int beginIndex, int endIndex) = 0 ;
};

__interface  INTERFACE_UUID("{8F77F86B-6F54-48D8-BF37-1E8F6A6A2E15}") JCharArrayBuffer  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl append(Androidapi::Jnibridge::TJavaArray__1<System::WideChar> * b, int off, int len) = 0 /* overload */;
	virtual void __cdecl append(Androidapi::Jni::Javatypes::_di_JString str) = 0 /* overload */;
	virtual void __cdecl append(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * b, int off, int len) = 0 /* overload */;
	virtual void __cdecl append(_di_JByteArrayBuffer b, int off, int len) = 0 /* overload */;
	virtual System::WideChar __cdecl charAt(int i) = 0 ;
	virtual void __cdecl clear(void) = 0 ;
	virtual void __cdecl ensureCapacity(int required) = 0 ;
	virtual bool __cdecl isFull(void) = 0 ;
	virtual int __cdecl length(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::WideChar> * __cdecl toCharArray(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCharArrayBuffer : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharArrayBufferClass,_di_JCharArrayBuffer> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharArrayBufferClass,_di_JCharArrayBuffer>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCharArrayBuffer(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharArrayBufferClass,_di_JCharArrayBuffer> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCharArrayBuffer(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6C7E1C31-0A64-4E15-ADC4-F8CB5286F7DE}") Jalipay_JSONExceptionClass  : public Androidapi::Jni::Javatypes::JExceptionClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JThrowable __cdecl getCause(void) = 0 ;
	HIDESBASE virtual _di_Jalipay_JSONException __cdecl init(Androidapi::Jni::Javatypes::_di_JThrowable P1) = 0 /* overload */;
	HIDESBASE virtual _di_Jalipay_JSONException __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{3C691E71-2D5C-4D49-85F1-72DFC49FA130}") Jalipay_JSONException  : public Androidapi::Jni::Javatypes::JException 
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

__interface  INTERFACE_UUID("{29733E96-4FEB-4E86-A899-D95827E42BAF}") Jalipay_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
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

__interface  INTERFACE_UUID("{E40DC344-A8A4-4393-B935-ED797A8E8BFE}") Jalipay_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{B84FBD0D-C0FF-4C6C-99F2-6A7715EFD454}") Jalipay_bClass  : public Androidapi::Jni::Javatypes::JObjectClass 
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

__interface  INTERFACE_UUID("{2A851289-61A4-40D1-8F88-7E380E9CCF96}") Jalipay_b  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{70BFADE5-B06B-4052-82E8-7A57913F3CBC}") Jalipay_b_aClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

__interface  INTERFACE_UUID("{0E4EFE60-9C4A-4508-9968-0B6EE4DFBDF3}") Jalipay_b_a  : public Androidapi::Jni::Javatypes::JObject 
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

__interface  INTERFACE_UUID("{A9BEF94D-F7EC-4188-B2EF-8043D98CB40F}") Jalipay_cClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl a(void) = 0 /* overload */;
	virtual _di_Jalipay_JSONException __cdecl a(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual System::WideChar __cdecl b(void) = 0 ;
	virtual System::WideChar __cdecl c(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl d(void) = 0 ;
	HIDESBASE virtual _di_Jalipay_c __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

__interface  INTERFACE_UUID("{A6669AEB-84AD-4C33-B84B-DB80B6789369}") Jalipay_c  : public Androidapi::Jni::Javatypes::JObject 
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
