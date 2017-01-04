
unit Android.JNI.AliPay;

interface

uses
  Androidapi.JNIBridge,
  Androidapi.JNI.GraphicsContentViewText,
  Androidapi.JNI.Java.Net,
  Androidapi.JNI.Java.Security,
  Androidapi.JNI.JavaUtil,
  //Androidapi.JNI.Java.Util,
  Androidapi.JNI.JavaTypes,
  Androidapi.JNI.Net,
  Androidapi.JNI.Os;

type
// ===== Forward declarations =====

  JAccount = interface;//android.accounts.Account
  Ja_i = interface;//com.alipay.a.a.i
  Ja_a_a = interface;//com.alipay.a.a.a
  Ja_b = interface;//com.alipay.a.a.b
  Ja_c = interface;//com.alipay.a.a.c
  Ja_d = interface;//com.alipay.a.a.d
  Ja_e = interface;//com.alipay.a.a.e
  Ja_f = interface;//com.alipay.a.a.f
  Ja_g = interface;//com.alipay.a.a.g
  Ja_h = interface;//com.alipay.a.a.h
  Ja_j = interface;//com.alipay.a.a.j
  Ja_k = interface;//com.alipay.a.a.k
  Ja_l = interface;//com.alipay.a.a.l
  Jb_a = interface;//com.alipay.a.b.a
  Jcore_HttpException = interface;//com.alipay.android.phone.mrpc.core.HttpException
  JHttpUrlHeader = interface;//com.alipay.android.phone.mrpc.core.HttpUrlHeader
  JRpcException = interface;//com.alipay.android.phone.mrpc.core.RpcException
  Jv = interface;//com.alipay.android.phone.mrpc.core.v
  Jcore_a = interface;//com.alipay.android.phone.mrpc.core.a
  Jcore_a_c = interface;//com.alipay.android.phone.mrpc.core.a.c
  Jcore_a_a = interface;//com.alipay.android.phone.mrpc.core.a.a
  Jcore_a_f = interface;//com.alipay.android.phone.mrpc.core.a.f
  Jcore_a_b = interface;//com.alipay.android.phone.mrpc.core.a.b
  Jcore_a_d = interface;//com.alipay.android.phone.mrpc.core.a.d
  Jcore_a_e = interface;//com.alipay.android.phone.mrpc.core.a.e
  Jaa = interface;//com.alipay.android.phone.mrpc.core.aa
  Jab = interface;//com.alipay.android.phone.mrpc.core.ab
  Jac = interface;//com.alipay.android.phone.mrpc.core.ac
  JHttpRequestRetryHandler = interface;//org.apache.http.client.HttpRequestRetryHandler
  Jcore_ad = interface;//com.alipay.android.phone.mrpc.core.ad
  JHttpClient = interface;//org.apache.http.client.HttpClient
  Jcore_b = interface;//com.alipay.android.phone.mrpc.core.b
  JHttpRequestInterceptor = interface;//org.apache.http.HttpRequestInterceptor
  Jcore_b_a = interface;//com.alipay.android.phone.mrpc.core.b$a
  Jb_b = interface;//com.alipay.android.phone.mrpc.core.b$b
  Jcore_c = interface;//com.alipay.android.phone.mrpc.core.c
  JAbstractHttpClient = interface;//org.apache.http.impl.client.AbstractHttpClient
  JDefaultHttpClient = interface;//org.apache.http.impl.client.DefaultHttpClient
  Jcore_d = interface;//com.alipay.android.phone.mrpc.core.d
  JDefaultRedirectHandler = interface;//org.apache.http.impl.client.DefaultRedirectHandler
  Jcore_e = interface;//com.alipay.android.phone.mrpc.core.e
  JConnectionKeepAliveStrategy = interface;//org.apache.http.conn.ConnectionKeepAliveStrategy
  Jcore_f = interface;//com.alipay.android.phone.mrpc.core.f
  Jcore_g = interface;//com.alipay.android.phone.mrpc.core.g
  Jcore_w = interface;//com.alipay.android.phone.mrpc.core.w
  Jcore_h = interface;//com.alipay.android.phone.mrpc.core.h
  Jcore_i = interface;//com.alipay.android.phone.mrpc.core.i
  Jcore_j = interface;//com.alipay.android.phone.mrpc.core.j
  Jcore_k = interface;//com.alipay.android.phone.mrpc.core.k
  Jk_a = interface;//com.alipay.android.phone.mrpc.core.k$a
  Jcore_l = interface;//com.alipay.android.phone.mrpc.core.l
  JFutureTask = interface;//java.util.concurrent.FutureTask
  Jcore_m = interface;//com.alipay.android.phone.mrpc.core.m
  Jcore_n = interface;//com.alipay.android.phone.mrpc.core.n
  Jt = interface;//com.alipay.android.phone.mrpc.core.t
  Jcore_o = interface;//com.alipay.android.phone.mrpc.core.o
  Ju = interface;//com.alipay.android.phone.mrpc.core.u
  Jp = interface;//com.alipay.android.phone.mrpc.core.p
  Jq = interface;//com.alipay.android.phone.mrpc.core.q
  Jcore_r = interface;//com.alipay.android.phone.mrpc.core.r
  Js = interface;//com.alipay.android.phone.mrpc.core.s
  Jx = interface;//com.alipay.android.phone.mrpc.core.x
  JInvocationHandler = interface;//java.lang.reflect.InvocationHandler
  Jy = interface;//com.alipay.android.phone.mrpc.core.y
  Jz = interface;//com.alipay.android.phone.mrpc.core.z
  Japmobilesecuritysdk_a_a = interface;//com.alipay.apmobilesecuritysdk.a.a
  Japmobilesecuritysdk_b_a = interface;//com.alipay.apmobilesecuritysdk.b.a
  Jc_a = interface;//com.alipay.apmobilesecuritysdk.c.a
  Jd_a = interface;//com.alipay.apmobilesecuritysdk.d.a
  Jd_b = interface;//com.alipay.apmobilesecuritysdk.d.b
  Jd_c = interface;//com.alipay.apmobilesecuritysdk.d.c
  Jd_d = interface;//com.alipay.apmobilesecuritysdk.d.d
  Jd_e = interface;//com.alipay.apmobilesecuritysdk.d.e
  Je_a = interface;//com.alipay.apmobilesecuritysdk.e.a
  Jf_a = interface;//com.alipay.apmobilesecuritysdk.f.a
  Jf_b = interface;//com.alipay.apmobilesecuritysdk.f.b
  Jf_c = interface;//com.alipay.apmobilesecuritysdk.f.c
  Jf_d = interface;//com.alipay.apmobilesecuritysdk.f.d
  Jf_e = interface;//com.alipay.apmobilesecuritysdk.f.e
  Jf_f = interface;//com.alipay.apmobilesecuritysdk.f.f
  Jf_g = interface;//com.alipay.apmobilesecuritysdk.f.g
  Jf_h = interface;//com.alipay.apmobilesecuritysdk.f.h
  Jf_i = interface;//com.alipay.apmobilesecuritysdk.f.i
  JAPSecuritySdk = interface;//com.alipay.apmobilesecuritysdk.face.APSecuritySdk
  JAPSecuritySdk_1 = interface;//com.alipay.apmobilesecuritysdk.face.APSecuritySdk$1
  JAPSecuritySdk_InitResultListener = interface;//com.alipay.apmobilesecuritysdk.face.APSecuritySdk$InitResultListener
  JAPSecuritySdk_TokenResult = interface;//com.alipay.apmobilesecuritysdk.face.APSecuritySdk$TokenResult
  JEnvModeConfig = interface;//com.alipay.apmobilesecuritysdk.face.EnvModeConfig
  Jg_a = interface;//com.alipay.apmobilesecuritysdk.g.a
  Jg_b = interface;//com.alipay.apmobilesecuritysdk.g.b
  Jg_c = interface;//com.alipay.apmobilesecuritysdk.g.c
  Ja_a_a_a = interface;//com.alipay.b.a.a.a.a
  Ja_a_a_a_a = interface;//com.alipay.b.a.a.a.a.a
  Ja_a_b = interface;//com.alipay.b.a.a.a.a.b
  Ja_a_c = interface;//com.alipay.b.a.a.a.a.c
  Ja_a_a_b = interface;//com.alipay.b.a.a.a.b
  Ja_b_a = interface;//com.alipay.b.a.a.b.a
  Ja_b_b = interface;//com.alipay.b.a.a.b.b
  Jb_c = interface;//com.alipay.b.a.a.b.c
  Jb_d = interface;//com.alipay.b.a.a.b.d
  Ja_c_a = interface;//com.alipay.b.a.a.c.a
  Jc_a_a = interface;//com.alipay.b.a.a.c.a.a
  Jc_a_b = interface;//com.alipay.b.a.a.c.a.b
  Jc_a_c = interface;//com.alipay.b.a.a.c.a.c
  Jc_b = interface;//com.alipay.b.a.a.c.b
  Jc_b_a = interface;//com.alipay.b.a.a.c.b.a
  Jc_b_b = interface;//com.alipay.b.a.a.c.b.b
  Jc_c = interface;//com.alipay.b.a.a.c.c
  Jc_d = interface;//com.alipay.b.a.a.c.d
  Ja_d_a = interface;//com.alipay.b.a.a.d.a
  Ja_d_b = interface;//com.alipay.b.a.a.d.b
  Ja_d_c = interface;//com.alipay.b.a.a.d.c
  Ja_e_a = interface;//com.alipay.b.a.a.e.a
  Je_b = interface;//com.alipay.b.a.a.e.b
  Je_c = interface;//com.alipay.b.a.a.e.c
  Je_d = interface;//com.alipay.b.a.a.e.d
  JOperationType = interface;//com.alipay.mobile.framework.service.annotation.OperationType
  JResetCookie = interface;//com.alipay.mobile.framework.service.annotation.ResetCookie
  JUpdateDeviceInfo = interface;//com.alipay.mobile.framework.service.annotation.UpdateDeviceInfo
  JSecurityClientMobile = interface;//com.alipay.mobilesecuritysdk.face.SecurityClientMobile
  JBugTrackMessageService = interface;//com.alipay.tscenter.biz.rpc.deviceFp.BugTrackMessageService
  JAppListCmdService = interface;//com.alipay.tscenter.biz.rpc.vkeydfp.AppListCmdService
  JDeviceDataReportService = interface;//com.alipay.tscenter.biz.rpc.vkeydfp.DeviceDataReportService
  JAppListCmdRequest = interface;//com.alipay.tscenter.biz.rpc.vkeydfp.request.AppListCmdRequest
  JDeviceDataReportRequest = interface;//com.alipay.tscenter.biz.rpc.vkeydfp.request.DeviceDataReportRequest
  JBaseResult = interface;//com.alipay.tscenter.biz.rpc.vkeydfp.result.BaseResult
  JAppListResult = interface;//com.alipay.tscenter.biz.rpc.vkeydfp.result.AppListResult
  JAppListCmdResult = interface;//com.alipay.tscenter.biz.rpc.vkeydfp.result.AppListCmdResult
  JDeviceDataReportResult = interface;//com.alipay.tscenter.biz.rpc.vkeydfp.result.DeviceDataReportResult
  JAidManager = interface;//com.ta.utdid2.aid.AidManager
  JAidRequester = interface;//com.ta.utdid2.aid.AidRequester
  JAidRequester_PostRestThread = interface;//com.ta.utdid2.aid.AidRequester$PostRestThread
  JAidStorageController = interface;//com.ta.utdid2.aid.AidStorageController
  JAESUtils = interface;//com.ta.utdid2.android.utils.AESUtils
  Jutils_Base64 = interface;//com.ta.utdid2.android.utils.Base64
  JBase64_Coder = interface;//com.ta.utdid2.android.utils.Base64$Coder
  JBase64_Decoder = interface;//com.ta.utdid2.android.utils.Base64$Decoder
  JBase64_Encoder = interface;//com.ta.utdid2.android.utils.Base64$Encoder
  JBase64Helper = interface;//com.ta.utdid2.android.utils.Base64Helper
  Jutils_DebugUtils = interface;//com.ta.utdid2.android.utils.DebugUtils
  JIntUtils = interface;//com.ta.utdid2.android.utils.IntUtils
  JNetworkUtils = interface;//com.ta.utdid2.android.utils.NetworkUtils
  JPhoneInfoUtils = interface;//com.ta.utdid2.android.utils.PhoneInfoUtils
  JSharedPreferenceHelper = interface;//com.ta.utdid2.android.utils.SharedPreferenceHelper
  JStringUtils = interface;//com.ta.utdid2.android.utils.StringUtils
  JSystemUtils = interface;//com.ta.utdid2.android.utils.SystemUtils
  Jutils_TimeUtils = interface;//com.ta.utdid2.android.utils.TimeUtils
  JFastXmlSerializer = interface;//com.ta.utdid2.core.persistent.FastXmlSerializer
  JMySharedPreferences = interface;//com.ta.utdid2.core.persistent.MySharedPreferences
  JMySharedPreferences_MyEditor = interface;//com.ta.utdid2.core.persistent.MySharedPreferences$MyEditor
  JMySharedPreferences_OnSharedPreferenceChangeListener = interface;//com.ta.utdid2.core.persistent.MySharedPreferences$OnSharedPreferenceChangeListener
  JPersistentConfiguration = interface;//com.ta.utdid2.core.persistent.PersistentConfiguration
  JTransactionXMLFile = interface;//com.ta.utdid2.core.persistent.TransactionXMLFile
  JTransactionXMLFile_MySharedPreferencesImpl = interface;//com.ta.utdid2.core.persistent.TransactionXMLFile$MySharedPreferencesImpl
  JMySharedPreferencesImpl_EditorImpl = interface;//com.ta.utdid2.core.persistent.TransactionXMLFile$MySharedPreferencesImpl$EditorImpl
  JXmlUtils = interface;//com.ta.utdid2.core.persistent.XmlUtils
  JDevice = interface;//com.ta.utdid2.device.Device
  JDeviceInfo = interface;//com.ta.utdid2.device.DeviceInfo
  JUTDevice = interface;//com.ta.utdid2.device.UTDevice
  JUTUtdid = interface;//com.ta.utdid2.device.UTUtdid
  JUTUtdidHelper = interface;//com.ta.utdid2.device.UTUtdidHelper
  JUTUtdidHelper2 = interface;//com.ta.utdid2.device.UTUtdidHelper2
  JAidCallback = interface;//com.ut.device.AidCallback
  JAidConstants = interface;//com.ut.device.AidConstants
  Jdevice_UTDevice = interface;//com.ut.device.UTDevice
  //JStringBuffer = interface;//java.lang.StringBuffer
  //JStringBuilder = interface;//java.lang.StringBuilder
  JAbstractSequentialList = interface;//java.util.AbstractSequentialList
  JLinkedList = interface;//java.util.LinkedList
  JConnectionReuseStrategy = interface;//org.apache.http.ConnectionReuseStrategy
  JHeader = interface;//org.apache.http.Header
  JHeaderElement = interface;//org.apache.http.HeaderElement
  JHeaderIterator = interface;//org.apache.http.HeaderIterator
  JHttpConnection = interface;//org.apache.http.HttpConnection
  JHttpClientConnection = interface;//org.apache.http.HttpClientConnection
  JHttpConnectionMetrics = interface;//org.apache.http.HttpConnectionMetrics
  JHttpEntity = interface;//org.apache.http.HttpEntity
  JHttpMessage = interface;//org.apache.http.HttpMessage
  JHttpRequest = interface;//org.apache.http.HttpRequest
  JHttpEntityEnclosingRequest = interface;//org.apache.http.HttpEntityEnclosingRequest
  JHttpHost = interface;//org.apache.http.HttpHost
  JHttpResponse = interface;//org.apache.http.HttpResponse
  JHttpResponseInterceptor = interface;//org.apache.http.HttpResponseInterceptor
  JNameValuePair = interface;//org.apache.http.NameValuePair
  JProtocolVersion = interface;//org.apache.http.ProtocolVersion
  JRequestLine = interface;//org.apache.http.RequestLine
  JStatusLine = interface;//org.apache.http.StatusLine
  JAuthScheme = interface;//org.apache.http.auth.AuthScheme
  JAuthSchemeFactory = interface;//org.apache.http.auth.AuthSchemeFactory
  JAuthSchemeRegistry = interface;//org.apache.http.auth.AuthSchemeRegistry
  JAuthScope = interface;//org.apache.http.auth.AuthScope
  JCredentials = interface;//org.apache.http.auth.Credentials
  JAuthenticationHandler = interface;//org.apache.http.client.AuthenticationHandler
  JCookieStore = interface;//org.apache.http.client.CookieStore
  JCredentialsProvider = interface;//org.apache.http.client.CredentialsProvider
  JRedirectHandler = interface;//org.apache.http.client.RedirectHandler
  JResponseHandler = interface;//org.apache.http.client.ResponseHandler
  JUserTokenHandler = interface;//org.apache.http.client.UserTokenHandler
  JAbstractHttpMessage = interface;//org.apache.http.message.AbstractHttpMessage
  JHttpRequestBase = interface;//org.apache.http.client.methods.HttpRequestBase
  JHttpEntityEnclosingRequestBase = interface;//org.apache.http.client.methods.HttpEntityEnclosingRequestBase
  JHttpPost = interface;//org.apache.http.client.methods.HttpPost
  JHttpUriRequest = interface;//org.apache.http.client.methods.HttpUriRequest
  JClientConnectionManager = interface;//org.apache.http.conn.ClientConnectionManager
  JClientConnectionRequest = interface;//org.apache.http.conn.ClientConnectionRequest
  JConnectionReleaseTrigger = interface;//org.apache.http.conn.ConnectionReleaseTrigger
  JManagedClientConnection = interface;//org.apache.http.conn.ManagedClientConnection
  JHttpRoute = interface;//org.apache.http.conn.routing.HttpRoute
  JHttpRoutePlanner = interface;//org.apache.http.conn.routing.HttpRoutePlanner
  JRouteInfo_LayerType = interface;//org.apache.http.conn.routing.RouteInfo$LayerType
  JRouteInfo_TunnelType = interface;//org.apache.http.conn.routing.RouteInfo$TunnelType
  JScheme = interface;//org.apache.http.conn.scheme.Scheme
  JSchemeRegistry = interface;//org.apache.http.conn.scheme.SchemeRegistry
  JCookie = interface;//org.apache.http.cookie.Cookie
  JCookieOrigin = interface;//org.apache.http.cookie.CookieOrigin
  JCookieSpec = interface;//org.apache.http.cookie.CookieSpec
  JCookieSpecFactory = interface;//org.apache.http.cookie.CookieSpecFactory
  JCookieSpecRegistry = interface;//org.apache.http.cookie.CookieSpecRegistry
  JAbstractHttpEntity = interface;//org.apache.http.entity.AbstractHttpEntity
  JBasicHttpProcessor = interface;//org.apache.http.protocol.BasicHttpProcessor
  JHttpContext = interface;//org.apache.http.protocol.HttpContext
  JHttpProcessor = interface;//org.apache.http.protocol.HttpProcessor
  JHttpRequestExecutor = interface;//org.apache.http.protocol.HttpRequestExecutor
  Jalipay_JSONException = interface;//org.json.alipay.JSONException
  Jalipay_a = interface;//org.json.alipay.a
  Jalipay_b = interface;//org.json.alipay.b
  Jalipay_b_a = interface;//org.json.alipay.b$a
  Jalipay_c = interface;//org.json.alipay.c

// ===== Interface declarations =====

  JAccountClass = interface(JObjectClass)
    ['{94EE6861-F326-489F-8919-E20B39E3D9C1}']
    {class} function _GetCREATOR: JParcelable_Creator; cdecl;
    {class} function _Gettype: JString; cdecl;
    {class} function init(name: JString; type_: JString): JAccount; cdecl; overload;//Deprecated
    {class} function init(in_: JParcel): JAccount; cdecl; overload;//Deprecated
    {class} function equals(o: JObject): Boolean; cdecl;//Deprecated
    {class} function hashCode: Integer; cdecl;//Deprecated
    {class} function toString: JString; cdecl;//Deprecated
    {class} property CREATOR: JParcelable_Creator read _GetCREATOR;
    {class} property &type: JString read _Gettype;
  end;

  [JavaSignature('android/accounts/Account')]
  JAccount = interface(JObject)
    ['{71476381-8B6E-471F-9189-9857ECD7508C}']
    function _Getname: JString; cdecl;
    function describeContents: Integer; cdecl;//Deprecated
    procedure writeToParcel(dest: JParcel; flags: Integer); cdecl;//Deprecated
    property name: JString read _Getname;
  end;
  TJAccount = class(TJavaGenericImport<JAccountClass, JAccount>) end;

  Ja_iClass = interface(IJavaClass)
    ['{7568C7B7-ADC4-4D9C-8F59-336A2DF1139D}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/i')]
  Ja_i = interface(IJavaInstance)
    ['{5B183F69-58B8-4058-8F1C-F4456B0BC7D7}']
  end;
  TJa_i = class(TJavaGenericImport<Ja_iClass, Ja_i>) end;

  Ja_a_aClass = interface(Ja_iClass)
    ['{C0C2DC99-5905-4E41-81EF-3E942FCB680A}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_a_a; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/a')]
  Ja_a_a = interface(Ja_i)
    ['{27A926E7-18E8-402A-AE6A-154DCCD36E4A}']
  end;
  TJa_a_a = class(TJavaGenericImport<Ja_a_aClass, Ja_a_a>) end;

  Ja_bClass = interface(Ja_iClass)
    ['{03F2BA4E-41F6-47D7-B394-ED787422F725}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_b; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/b')]
  Ja_b = interface(Ja_i)
    ['{CDA876FD-68FE-4F65-9572-E77237E2D1CC}']
  end;
  TJa_b = class(TJavaGenericImport<Ja_bClass, Ja_b>) end;

  Ja_cClass = interface(Ja_iClass)
    ['{6AE7D089-7435-400E-AD5B-4F2E079284E8}']
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_c; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/c')]
  Ja_c = interface(Ja_i)
    ['{17D9A614-D997-4652-827E-D1720F193332}']
  end;
  TJa_c = class(TJavaGenericImport<Ja_cClass, Ja_c>) end;

  Ja_dClass = interface(Ja_iClass)
    ['{11E06558-80E9-4DFE-9CD0-DF334C639DD3}']
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_d; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/d')]
  Ja_d = interface(Ja_i)
    ['{BD955E5C-DB6E-4BED-95EC-1384817E6193}']
  end;
  TJa_d = class(TJavaGenericImport<Ja_dClass, Ja_d>) end;

  Ja_eClass = interface(JObjectClass)
    ['{A5F52E35-9FA0-4F81-AAF5-84C0FA1D68CC}']
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;
    {class} function a(P1: JString; P2: Jreflect_Type): JObject; cdecl; overload;
  end;

  [JavaSignature('com/alipay/a/a/e')]
  Ja_e = interface(JObject)
    ['{C45B130D-EDE6-4AC0-A48F-1C27E70D75C6}']
  end;
  TJa_e = class(TJavaGenericImport<Ja_eClass, Ja_e>) end;

  Ja_fClass = interface(JObjectClass)
    ['{54D1FF79-1896-48E1-AA04-1C596B671088}']
    {class} function a(P1: JObject): JString; cdecl;//Deprecated
    {class} function b(P1: JObject): JObject; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/f')]
  Ja_f = interface(JObject)
    ['{E2175ED2-730A-496C-9E30-FBC3806157DE}']
  end;
  TJa_f = class(TJavaGenericImport<Ja_fClass, Ja_f>) end;

  Ja_gClass = interface(Ja_iClass)
    ['{D7448935-70C0-4B51-9330-481C0E014104}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_g; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/g')]
  Ja_g = interface(Ja_i)
    ['{31B90300-CFC1-49A4-861B-2A8AA880DBF6}']
  end;
  TJa_g = class(TJavaGenericImport<Ja_gClass, Ja_g>) end;

  Ja_hClass = interface(Ja_iClass)
    ['{BCF53D41-3C7E-4FF3-BE07-FCED58C79191}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_h; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/h')]
  Ja_h = interface(Ja_i)
    ['{040B7DA8-B07F-436D-8B25-5DE5293F00A1}']
  end;
  TJa_h = class(TJavaGenericImport<Ja_hClass, Ja_h>) end;

  Ja_jClass = interface(IJavaClass)
    ['{5CDA0E9E-C57D-4308-B0E1-95F6A170736E}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/j')]
  Ja_j = interface(IJavaInstance)
    ['{5068C446-875E-4DF0-A202-62D5F7B19D4C}']
  end;
  TJa_j = class(TJavaGenericImport<Ja_jClass, Ja_j>) end;

  Ja_kClass = interface(Ja_iClass)
    ['{F379F04D-B4EE-4281-A1D5-C7ABB3615A01}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_k; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/k')]
  Ja_k = interface(Ja_i)
    ['{5C534464-6A37-4063-A622-EFEB058EAE86}']
  end;
  TJa_k = class(TJavaGenericImport<Ja_kClass, Ja_k>) end;

  Ja_lClass = interface(Ja_iClass)
    ['{E228FC07-A3BE-4D43-A698-5BA705BF3827}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_l; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/l')]
  Ja_l = interface(Ja_i)
    ['{DEBE404D-F474-43CB-ACB6-3DA6FFFF9F12}']
  end;
  TJa_l = class(TJavaGenericImport<Ja_lClass, Ja_l>) end;

  Jb_aClass = interface(JObjectClass)
    ['{C3403572-AF93-409B-ADB8-C5DA7DA47516}']
    {class} function a(P1: Jreflect_Type): Jlang_Class; cdecl; overload;//Deprecated
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/a/b/a')]
  Jb_a = interface(JObject)
    ['{DB0835A7-FAF5-4020-BF04-94DDEE4DF2B1}']
  end;
  TJb_a = class(TJavaGenericImport<Jb_aClass, Jb_a>) end;

  Jcore_HttpExceptionClass = interface(JExceptionClass)
    ['{CC5C1403-6D70-4A18-B461-1305A54A680D}']
    {class} function _GetNETWORK_AUTH_ERROR: Integer; cdecl;
    {class} function _GetNETWORK_CONNECTION_EXCEPTION: Integer; cdecl;
    {class} function _GetNETWORK_DNS_ERROR: Integer; cdecl;
    {class} function _GetNETWORK_IO_EXCEPTION: Integer; cdecl;
    {class} function _GetNETWORK_SCHEDULE_ERROR: Integer; cdecl;
    {class} function _GetNETWORK_SERVER_EXCEPTION: Integer; cdecl;
    {class} function _GetNETWORK_SOCKET_EXCEPTION: Integer; cdecl;
    {class} function _GetNETWORK_SSL_EXCEPTION: Integer; cdecl;
    {class} function _GetNETWORK_UNAVAILABLE: Integer; cdecl;
    {class} function _GetNETWORK_UNKNOWN_ERROR: Integer; cdecl;
    {class} function init(P1: JString): Jcore_HttpException; cdecl; overload;
    {class} function init(P1: JInteger; P2: JString): Jcore_HttpException; cdecl; overload;
    {class} property NETWORK_AUTH_ERROR: Integer read _GetNETWORK_AUTH_ERROR;
    {class} property NETWORK_CONNECTION_EXCEPTION: Integer read _GetNETWORK_CONNECTION_EXCEPTION;
    {class} property NETWORK_DNS_ERROR: Integer read _GetNETWORK_DNS_ERROR;
    {class} property NETWORK_IO_EXCEPTION: Integer read _GetNETWORK_IO_EXCEPTION;
    {class} property NETWORK_SCHEDULE_ERROR: Integer read _GetNETWORK_SCHEDULE_ERROR;
    {class} property NETWORK_SERVER_EXCEPTION: Integer read _GetNETWORK_SERVER_EXCEPTION;
    {class} property NETWORK_SOCKET_EXCEPTION: Integer read _GetNETWORK_SOCKET_EXCEPTION;
    {class} property NETWORK_SSL_EXCEPTION: Integer read _GetNETWORK_SSL_EXCEPTION;
    {class} property NETWORK_UNAVAILABLE: Integer read _GetNETWORK_UNAVAILABLE;
    {class} property NETWORK_UNKNOWN_ERROR: Integer read _GetNETWORK_UNKNOWN_ERROR;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/HttpException')]
  Jcore_HttpException = interface(JException)
    ['{D1DE0FA6-F296-4A94-AAA5-F76E63971B65}']
    function getCode: Integer; cdecl;
    function getMsg: JString; cdecl;
  end;
  TJcore_HttpException = class(TJavaGenericImport<Jcore_HttpExceptionClass, Jcore_HttpException>) end;

  JHttpUrlHeaderClass = interface(JSerializableClass)
    ['{A44A1138-C87B-4602-A8CD-55E65C69B940}']
    {class} function getHead(P1: JString): JString; cdecl;//Deprecated
    {class} function getHeaders: JMap; cdecl;//Deprecated
    {class} function init: JHttpUrlHeader; cdecl;//Deprecated
    {class} procedure setHead(P1: JString; P2: JString); cdecl;//Deprecated
    {class} procedure setHeaders(P1: JMap); cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/HttpUrlHeader')]
  JHttpUrlHeader = interface(JSerializable)
    ['{25EC8E4F-5B26-4310-9F11-D4D77968CAB9}']
  end;
  TJHttpUrlHeader = class(TJavaGenericImport<JHttpUrlHeaderClass, JHttpUrlHeader>) end;

  JRpcExceptionClass = interface(JRuntimeExceptionClass)
    ['{2D4B3926-4AF3-4F42-918C-8C1E55750E7E}']
    {class} function getCode: Integer; cdecl;//Deprecated
    {class} function getMsg: JString; cdecl;//Deprecated
    {class} function getOperationType: JString; cdecl;//Deprecated
    {class} function init(P1: JString): JRpcException; cdecl; overload;//Deprecated
    {class} function init(P1: JInteger; P2: JThrowable): JRpcException; cdecl; overload;//Deprecated
    {class} function init(P1: JInteger; P2: JString): JRpcException; cdecl; overload;//Deprecated
    {class} function init(P1: JInteger; P2: JString; P3: JThrowable): JRpcException; cdecl; overload;//Deprecated
    {class} procedure setOperationType(P1: JString); cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/RpcException')]
  JRpcException = interface(JRuntimeException)
    ['{048EBE7A-C8FE-4A36-A497-3468F87F19A7}']
  end;
  TJRpcException = class(TJavaGenericImport<JRpcExceptionClass, JRpcException>) end;

  JvClass = interface(IJavaClass)
    ['{00913673-C45A-4575-9C03-113FDAE052F4}']
    {class} function a: JObject; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/v')]
  Jv = interface(IJavaInstance)
    ['{559CC000-9694-4450-87CE-5706C10AF8C8}']
  end;
  TJv = class(TJavaGenericImport<JvClass, Jv>) end;

  Jcore_aClass = interface(JvClass)
    ['{2AF77FBE-1B73-4D18-B8E1-AE369686E930}']
    {class} function init(P1: JMethod; P2: Integer; P3: JString; P4: TJavaArray<Byte>; P5: JString; P6: Boolean): Jcore_a; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/a')]
  Jcore_a = interface(Jv)
    ['{433F3D5D-A5AF-437A-9702-DB69E7BBA40C}']
    function _Getb: TJavaArray<Byte>; cdecl;
    function _Getc: JString; cdecl;
    function _Getd: Integer; cdecl;
    function _Gete: JString; cdecl;
    function _Getf: Boolean; cdecl;
    property b: TJavaArray<Byte> read _Getb;
    property c: JString read _Getc;
    property d: Integer read _Getd;
    property e: JString read _Gete;
    property f: Boolean read _Getf;
  end;
  TJcore_a = class(TJavaGenericImport<Jcore_aClass, Jcore_a>) end;

  Jcore_a_cClass = interface(IJavaClass)
    ['{0680654E-998F-45E1-B8E0-0027AAF1FE25}']
    {class} function a: JObject; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/a/c')]
  Jcore_a_c = interface(IJavaInstance)
    ['{651F3B1C-E255-4B3D-873B-F2EB42F65A2A}']
  end;
  TJcore_a_c = class(TJavaGenericImport<Jcore_a_cClass, Jcore_a_c>) end;

  Jcore_a_aClass = interface(Jcore_a_cClass)
    ['{D67C467B-DA8F-44DC-8EE3-C4D57BF601E7}']
    {class} function init(P1: Jreflect_Type; P2: TJavaArray<Byte>): Jcore_a_a; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/a/a')]
  Jcore_a_a = interface(Jcore_a_c)
    ['{A1B7D4A8-3C6A-4CF0-9CB5-B1F32A5400E5}']
    function _Getb: TJavaArray<Byte>; cdecl;
    property b: TJavaArray<Byte> read _Getb;
  end;
  TJcore_a_a = class(TJavaGenericImport<Jcore_a_aClass, Jcore_a_a>) end;

  Jcore_a_fClass = interface(IJavaClass)
    ['{31D9A22F-3C7E-4423-A9A0-7A072A822579}']
    {class} function a: TJavaArray<Byte>; cdecl; overload;//Deprecated
    {class} procedure a(P1: JObject); cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/a/f')]
  Jcore_a_f = interface(IJavaInstance)
    ['{21A776EB-DA97-4A31-8F77-2742A578F62F}']
  end;
  TJcore_a_f = class(TJavaGenericImport<Jcore_a_fClass, Jcore_a_f>) end;

  Jcore_a_bClass = interface(Jcore_a_fClass)
    ['{09EE5263-5844-4354-877B-387E4B187D12}']
    {class} function init(P1: JString; P2: JObject): Jcore_a_b; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/a/b')]
  Jcore_a_b = interface(Jcore_a_f)
    ['{6D06CCFC-0D99-479D-A01A-187CFEA47984}']
    function _Getb: JObject; cdecl;
    property b: JObject read _Getb;
  end;
  TJcore_a_b = class(TJavaGenericImport<Jcore_a_bClass, Jcore_a_b>) end;

  Jcore_a_dClass = interface(Jcore_a_aClass)
    ['{2C63E871-F9D1-4312-81EA-8CF7B0E3CB5D}']
    {class} function a: JObject; cdecl;//Deprecated
    {class} function init(P1: Jreflect_Type; P2: TJavaArray<Byte>): Jcore_a_d; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/a/d')]
  Jcore_a_d = interface(Jcore_a_a)
    ['{C728C7EF-A315-446D-99D8-26C10F8B7C28}']
  end;
  TJcore_a_d = class(TJavaGenericImport<Jcore_a_dClass, Jcore_a_d>) end;

  Jcore_a_eClass = interface(Jcore_a_bClass)
    ['{452CE4F9-FF27-463D-A095-0885BBCBA9B2}']
    {class} function a: TJavaArray<Byte>; cdecl; overload;//Deprecated
    {class} procedure a(P1: JObject); cdecl; overload;//Deprecated
    {class} function init(P1: Integer; P2: JString; P3: JObject): Jcore_a_e; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/a/e')]
  Jcore_a_e = interface(Jcore_a_b)
    ['{50E55CBE-350D-41F3-8303-5A4965EB56F0}']
  end;
  TJcore_a_e = class(TJavaGenericImport<Jcore_a_eClass, Jcore_a_e>) end;

  JaaClass = interface(JObjectClass)
    ['{6B2A835B-EA0F-4B81-B74D-C86EFE1C487A}']
    {class} function a: JString; cdecl; overload;//Deprecated
    {class} procedure a(P1: JString); cdecl; overload;//Deprecated
    {class} function b: JList; cdecl;//Deprecated
    {class} function c: Boolean; cdecl;//Deprecated
    {class} function init: Jaa; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/aa')]
  Jaa = interface(JObject)
    ['{DC05E183-7B72-4F9B-8ECE-8A52D2C24868}']
  end;
  TJaa = class(TJavaGenericImport<JaaClass, Jaa>) end;

  JabClass = interface(IJavaClass)
    ['{21277B57-2C09-46BC-B837-37649FA1C1CB}']
    {class} function a(P1: Jt): JFuture; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/ab')]
  Jab = interface(IJavaInstance)
    ['{7BD3A333-433F-4D89-9ABD-D676B0938757}']
  end;
  TJab = class(TJavaGenericImport<JabClass, Jab>) end;

  JacClass = interface(IJavaClass)
    ['{3AFBD0FC-3CDD-42FF-AEBF-58A31833CEED}']
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/ac')]
  Jac = interface(IJavaInstance)
    ['{87DA54EC-F1B1-40BD-BDC8-2F8F7AFFFCBC}']
  end;
  TJac = class(TJavaGenericImport<JacClass, Jac>) end;

  JHttpRequestRetryHandlerClass = interface(IJavaClass)
    ['{B403C5C7-95AC-48E6-9F32-FE0EF330235F}']
    {class} function retryRequest(exception: JIOException; executionCount: Integer; context: JHttpContext): Boolean; cdecl;
  end;

  [JavaSignature('org/apache/http/client/HttpRequestRetryHandler')]
  JHttpRequestRetryHandler = interface(IJavaInstance)
    ['{52DE82C7-6B53-417A-9FF6-5A38D0EF13F6}']
  end;
  TJHttpRequestRetryHandler = class(TJavaGenericImport<JHttpRequestRetryHandlerClass, JHttpRequestRetryHandler>) end;

  Jcore_adClass = interface(JHttpRequestRetryHandlerClass)
    ['{62DD5DFC-7599-4818-A699-67047CFE19D2}']
    {class} function init: Jcore_ad; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/ad')]
  Jcore_ad = interface(JHttpRequestRetryHandler)
    ['{2E521FB8-B2BB-44B6-854B-0BABB6DC2957}']
    function retryRequest(P1: JIOException; P2: Integer; P3: JHttpContext): Boolean; cdecl;
  end;
  TJcore_ad = class(TJavaGenericImport<Jcore_adClass, Jcore_ad>) end;

  JHttpClientClass = interface(IJavaClass)
    ['{1518970D-DC32-430A-9928-1CB003312A3D}']
    {class} function execute(request: JHttpUriRequest): JHttpResponse; cdecl; overload;
    {class} function execute(request: JHttpUriRequest; responseHandler: JResponseHandler): JObject; cdecl; overload;
    {class} function execute(request: JHttpUriRequest; responseHandler: JResponseHandler; context: JHttpContext): JObject; cdecl; overload;
    {class} function execute(target: JHttpHost; request: JHttpRequest; responseHandler: JResponseHandler): JObject; cdecl; overload;
  end;

  [JavaSignature('org/apache/http/client/HttpClient')]
  JHttpClient = interface(IJavaInstance)
    ['{D6C5F348-AEB8-4054-86A8-9A0800B017BF}']
    function execute(request: JHttpUriRequest; context: JHttpContext): JHttpResponse; cdecl; overload;
    function execute(target: JHttpHost; request: JHttpRequest): JHttpResponse; cdecl; overload;
    function execute(target: JHttpHost; request: JHttpRequest; context: JHttpContext): JHttpResponse; cdecl; overload;
    function execute(target: JHttpHost; request: JHttpRequest; responseHandler: JResponseHandler; context: JHttpContext): JObject; cdecl; overload;
    function getConnectionManager: JClientConnectionManager; cdecl;
    //function getParams: JHttpParams; cdecl;
  end;
  TJHttpClient = class(TJavaGenericImport<JHttpClientClass, JHttpClient>) end;

  Jcore_bClass = interface(JHttpClientClass)
    ['{41D40643-A91C-4A38-94CB-7EDCEDA4F9DC}']
    {class} function _Geta: Int64; cdecl;
    {class} function a: JHttpRequestInterceptor; cdecl; overload;
    {class} function a(P1: JHttpUriRequest): JString; cdecl; overload;
    {class} function a(P1: Jcore_b): Jb_b; cdecl; overload;
    {class} function a(P1: TJavaArray<Byte>): JAbstractHttpEntity; cdecl; overload;
    {class} function a(P1: JHttpEntity): JInputStream; cdecl; overload;
    {class} function a(P1: JString): Jcore_b; cdecl; overload;
    {class} procedure a(P1: JHttpRequest); cdecl; overload;
    {class} function b(P1: JString): Int64; cdecl; overload;
    {class} procedure b(P1: JHttpRequest); cdecl; overload;
    {class} property a: Int64 read _Geta;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/b')]
  Jcore_b = interface(JHttpClient)
    ['{C02AA9F8-77E5-4AEB-AD03-2B25DEBED121}']
    procedure a(P1: JHttpRequestRetryHandler); cdecl; overload;
    function execute(P1: JHttpUriRequest): JHttpResponse; cdecl; overload;
    function execute(P1: JHttpUriRequest; P2: JResponseHandler): JObject; cdecl; overload;
    function execute(P1: JHttpHost; P2: JHttpRequest): JHttpResponse; cdecl; overload;
    function execute(P1: JHttpUriRequest; P2: JHttpContext): JHttpResponse; cdecl; overload;
    function execute(P1: JHttpHost; P2: JHttpRequest; P3: JHttpContext): JHttpResponse; cdecl; overload;
    function execute(P1: JHttpUriRequest; P2: JResponseHandler; P3: JHttpContext): JObject; cdecl; overload;
    function execute(P1: JHttpHost; P2: JHttpRequest; P3: JResponseHandler): JObject; cdecl; overload;
    function execute(P1: JHttpHost; P2: JHttpRequest; P3: JResponseHandler; P4: JHttpContext): JObject; cdecl; overload;
    function getConnectionManager: JClientConnectionManager; cdecl;
    //function getParams: JHttpParams; cdecl;
  end;
  TJcore_b = class(TJavaGenericImport<Jcore_bClass, Jcore_b>) end;

  JHttpRequestInterceptorClass = interface(IJavaClass)
    ['{AC693EDF-C357-4395-A727-8080798F14F3}']
  end;

  [JavaSignature('org/apache/http/HttpRequestInterceptor')]
  JHttpRequestInterceptor = interface(IJavaInstance)
    ['{7D05F1C1-6494-4FD9-B00C-3C3561CB101E}']
    procedure process(request: JHttpRequest; context: JHttpContext); cdecl;
  end;
  TJHttpRequestInterceptor = class(TJavaGenericImport<JHttpRequestInterceptorClass, JHttpRequestInterceptor>) end;

  Jcore_b_aClass = interface(JHttpRequestInterceptorClass)
    ['{137E4B5E-63FF-4A37-BFBC-64A3305C69BB}']
    {class} function init(P1: Jcore_b; P2: Byte): Jcore_b_a; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/b$a')]
  Jcore_b_a = interface(JHttpRequestInterceptor)
    ['{56E1A6DA-BE2B-40B9-B60A-D7762F57A420}']
    procedure process(P1: JHttpRequest; P2: JHttpContext); cdecl;
  end;
  TJcore_b_a = class(TJavaGenericImport<Jcore_b_aClass, Jcore_b_a>) end;

  Jb_bClass = interface(JObjectClass)
    ['{901AE9E5-267D-4F9A-8B9C-C055B6F1FDF0}']
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/b$b')]
  Jb_b = interface(JObject)
    ['{6F31450D-1E50-4196-8808-B83917BCBDF5}']
  end;
  TJb_b = class(TJavaGenericImport<Jb_bClass, Jb_b>) end;

  Jcore_cClass = interface(JHttpRequestInterceptorClass)
    ['{9A02BE86-FD6C-4789-AAC6-8AD474F6A26B}']
    {class} procedure process(P1: JHttpRequest; P2: JHttpContext); cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/c')]
  Jcore_c = interface(JHttpRequestInterceptor)
    ['{25172D82-BB57-4549-AFAB-B2B19BE3AAFF}']
  end;
  TJcore_c = class(TJavaGenericImport<Jcore_cClass, Jcore_c>) end;

  JAbstractHttpClientClass = interface(JObjectClass)
    ['{AD945AB5-E3FC-4A26-A03B-6DF66BFFCDE3}']
    {class} procedure addRequestInterceptor(itcp: JHttpRequestInterceptor); cdecl; overload;//Deprecated
    {class} procedure addRequestInterceptor(itcp: JHttpRequestInterceptor; index: Integer); cdecl; overload;//Deprecated
    {class} procedure clearResponseInterceptors; cdecl;//Deprecated
    {class} function execute(request: JHttpUriRequest): JHttpResponse; cdecl; overload;//Deprecated
    {class} function execute(request: JHttpUriRequest; context: JHttpContext): JHttpResponse; cdecl; overload;//Deprecated
    {class} function execute(request: JHttpUriRequest; responseHandler: JResponseHandler; context: JHttpContext): JObject; cdecl; overload;
    {class} function execute(target: JHttpHost; request: JHttpRequest; responseHandler: JResponseHandler): JObject; cdecl; overload;
    {class} function execute(target: JHttpHost; request: JHttpRequest; responseHandler: JResponseHandler; context: JHttpContext): JObject; cdecl; overload;
    {class} function getConnectionReuseStrategy: JConnectionReuseStrategy; cdecl;
    {class} function getCookieSpecs: JCookieSpecRegistry; cdecl;
    {class} function getCookieStore: JCookieStore; cdecl;
    {class} function getProxyAuthenticationHandler: JAuthenticationHandler; cdecl;
    {class} function getRedirectHandler: JRedirectHandler; cdecl;
    {class} function getRequestExecutor: JHttpRequestExecutor; cdecl;
    {class} function getResponseInterceptorCount: Integer; cdecl;
    {class} function getRoutePlanner: JHttpRoutePlanner; cdecl;
    {class} function getTargetAuthenticationHandler: JAuthenticationHandler; cdecl;
    {class} procedure removeResponseInterceptorByClass(clazz: Jlang_Class); cdecl;//Deprecated
    {class} procedure setAuthSchemes(authSchemeRegistry: JAuthSchemeRegistry); cdecl;//Deprecated
    {class} procedure setCookieSpecs(cookieSpecRegistry: JCookieSpecRegistry); cdecl;//Deprecated
    {class} procedure setKeepAliveStrategy(keepAliveStrategy: JConnectionKeepAliveStrategy); cdecl;//Deprecated
    {class} //procedure setParams(params: JHttpParams); cdecl;//Deprecated
    {class} procedure setProxyAuthenticationHandler(proxyAuthHandler: JAuthenticationHandler); cdecl;//Deprecated
    {class} procedure setTargetAuthenticationHandler(targetAuthHandler: JAuthenticationHandler); cdecl;//Deprecated
    {class} procedure setUserTokenHandler(userTokenHandler: JUserTokenHandler); cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/impl/client/AbstractHttpClient')]
  JAbstractHttpClient = interface(JObject)
    ['{1D643550-B548-4E03-8F8E-50B16162D05F}']
    procedure addResponseInterceptor(itcp: JHttpResponseInterceptor); cdecl; overload;//Deprecated
    procedure addResponseInterceptor(itcp: JHttpResponseInterceptor; index: Integer); cdecl; overload;//Deprecated
    procedure clearRequestInterceptors; cdecl;//Deprecated
    function execute(target: JHttpHost; request: JHttpRequest): JHttpResponse; cdecl; overload;
    function execute(target: JHttpHost; request: JHttpRequest; context: JHttpContext): JHttpResponse; cdecl; overload;
    function execute(request: JHttpUriRequest; responseHandler: JResponseHandler): JObject; cdecl; overload;
    function getAuthSchemes: JAuthSchemeRegistry; cdecl;
    function getConnectionKeepAliveStrategy: JConnectionKeepAliveStrategy; cdecl;
    function getConnectionManager: JClientConnectionManager; cdecl;
    function getCredentialsProvider: JCredentialsProvider; cdecl;
    function getHttpRequestRetryHandler: JHttpRequestRetryHandler; cdecl;
    //function getParams: JHttpParams; cdecl;
    function getRequestInterceptor(index: Integer): JHttpRequestInterceptor; cdecl;
    function getRequestInterceptorCount: Integer; cdecl;
    function getResponseInterceptor(index: Integer): JHttpResponseInterceptor; cdecl;
    function getUserTokenHandler: JUserTokenHandler; cdecl;//Deprecated
    procedure removeRequestInterceptorByClass(clazz: Jlang_Class); cdecl;//Deprecated
    procedure setCookieStore(cookieStore: JCookieStore); cdecl;//Deprecated
    procedure setCredentialsProvider(credsProvider: JCredentialsProvider); cdecl;//Deprecated
    procedure setHttpRequestRetryHandler(retryHandler: JHttpRequestRetryHandler); cdecl;//Deprecated
    procedure setRedirectHandler(redirectHandler: JRedirectHandler); cdecl;//Deprecated
    procedure setReuseStrategy(reuseStrategy: JConnectionReuseStrategy); cdecl;//Deprecated
    procedure setRoutePlanner(routePlanner: JHttpRoutePlanner); cdecl;//Deprecated
  end;
  TJAbstractHttpClient = class(TJavaGenericImport<JAbstractHttpClientClass, JAbstractHttpClient>) end;

  JDefaultHttpClientClass = interface(JAbstractHttpClientClass)
    ['{383EFA2F-3248-4CAA-AA02-B899B41E9871}']
    {class} //function init(conman: JClientConnectionManager; params: JHttpParams): JDefaultHttpClient; cdecl; overload;//Deprecated
    {class} //function init(params: JHttpParams): JDefaultHttpClient; cdecl; overload;//Deprecated
    {class} function init: JDefaultHttpClient; cdecl; overload;//Deprecated
  end;

  [JavaSignature('org/apache/http/impl/client/DefaultHttpClient')]
  JDefaultHttpClient = interface(JAbstractHttpClient)
    ['{AA8EEF9F-1825-44AF-B12E-368C6984C2F4}']
  end;
  TJDefaultHttpClient = class(TJavaGenericImport<JDefaultHttpClientClass, JDefaultHttpClient>) end;

  Jcore_dClass = interface(JDefaultHttpClientClass)
    ['{7D18A826-16FC-412D-95F4-6B07FC6AF20B}']
    {class} //function init(P1: Jcore_b; P2: JClientConnectionManager; P3: JHttpParams): Jcore_d; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/d')]
  Jcore_d = interface(JDefaultHttpClient)
    ['{0B650DAE-384B-43CC-93FC-F75D1241E409}']
    function createConnectionKeepAliveStrategy: JConnectionKeepAliveStrategy; cdecl;
    function createHttpContext: JHttpContext; cdecl;
    function createHttpProcessor: JBasicHttpProcessor; cdecl;
    function createRedirectHandler: JRedirectHandler; cdecl;
  end;
  TJcore_d = class(TJavaGenericImport<Jcore_dClass, Jcore_d>) end;

  JDefaultRedirectHandlerClass = interface(JObjectClass)
    ['{306A4D9D-8D8E-49FB-A9FE-A61611A28FB6}']
    {class} function init: JDefaultRedirectHandler; cdecl;//Deprecated
    {class} function getLocationURI(response: JHttpResponse; context: JHttpContext): JURI; cdecl;
    {class} function isRedirectRequested(response: JHttpResponse; context: JHttpContext): Boolean; cdecl;
  end;

  [JavaSignature('org/apache/http/impl/client/DefaultRedirectHandler')]
  JDefaultRedirectHandler = interface(JObject)
    ['{6F5C4D13-49CC-4066-A2CB-735773D393A1}']
  end;
  TJDefaultRedirectHandler = class(TJavaGenericImport<JDefaultRedirectHandlerClass, JDefaultRedirectHandler>) end;

  Jcore_eClass = interface(JDefaultRedirectHandlerClass)
    ['{754FC187-639D-4A0A-8179-522059917CF4}']
    {class} function init(P1: Jcore_d): Jcore_e; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/e')]
  Jcore_e = interface(JDefaultRedirectHandler)
    ['{429EC2D4-B5FA-4D0F-B0A9-119FD061AD05}']
    function _Getb: Jcore_d; cdecl;
    function isRedirectRequested(P1: JHttpResponse; P2: JHttpContext): Boolean; cdecl;
    property b: Jcore_d read _Getb;
  end;
  TJcore_e = class(TJavaGenericImport<Jcore_eClass, Jcore_e>) end;

  JConnectionKeepAliveStrategyClass = interface(IJavaClass)
    ['{EB448F9B-4A6B-49B8-9BCA-9A907DE72D64}']
  end;

  [JavaSignature('org/apache/http/conn/ConnectionKeepAliveStrategy')]
  JConnectionKeepAliveStrategy = interface(IJavaInstance)
    ['{25479F70-1E68-4437-B78D-EECCC6FBC3EA}']
    function getKeepAliveDuration(response: JHttpResponse; context: JHttpContext): Int64; cdecl;
  end;
  TJConnectionKeepAliveStrategy = class(TJavaGenericImport<JConnectionKeepAliveStrategyClass, JConnectionKeepAliveStrategy>) end;

  Jcore_fClass = interface(JConnectionKeepAliveStrategyClass)
    ['{176A3FD8-87C0-49C3-B7C7-1C04308AF51B}']
    {class} function init(P1: Jcore_d): Jcore_f; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/f')]
  Jcore_f = interface(JConnectionKeepAliveStrategy)
    ['{D133BC4C-81D0-461B-8661-579C2A90A0E2}']
    function getKeepAliveDuration(P1: JHttpResponse; P2: JHttpContext): Int64; cdecl;
  end;
  TJcore_f = class(TJavaGenericImport<Jcore_fClass, Jcore_f>) end;

  Jcore_gClass = interface(IJavaClass)
    ['{DA462C8E-ADCE-4341-A987-52C6C4960963}']
    {class} function a: JString; cdecl;//Deprecated
    {class} function b: Jab; cdecl;//Deprecated
    {class} function c: Jaa; cdecl;//Deprecated
    {class} function d: Boolean; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/g')]
  Jcore_g = interface(IJavaInstance)
    ['{23B51343-97D9-46C3-A3DA-1CAE81D9C149}']
  end;
  TJcore_g = class(TJavaGenericImport<Jcore_gClass, Jcore_g>) end;

  Jcore_wClass = interface(JObjectClass)
    ['{B0089B98-4A7C-42C5-87D6-D7129976C968}']
    {class} function a(P1: Jlang_Class; P2: Jaa): JObject; cdecl;//Deprecated
    {class} function init: Jcore_w; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/w')]
  Jcore_w = interface(JObject)
    ['{3174DB2D-DB43-4B87-B207-3894FFF57402}']
  end;
  TJcore_w = class(TJavaGenericImport<Jcore_wClass, Jcore_w>) end;

  Jcore_hClass = interface(Jcore_wClass)
    ['{1307B170-53CE-4302-8E3E-32DD2FAA4626}']
    {class} function a(P1: Jlang_Class; P2: Jaa): JObject; cdecl; overload;//Deprecated
    {class} function init(P1: JContext): Jcore_h; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/h')]
  Jcore_h = interface(Jcore_w)
    ['{FC40A208-0425-46BB-B629-112BCAD4EC86}']
  end;
  TJcore_h = class(TJavaGenericImport<Jcore_hClass, Jcore_h>) end;

  Jcore_iClass = interface(Jcore_gClass)
    ['{91A6DF27-190A-4836-96E9-D0E338E2C19F}']
    {class} function init(P1: Jcore_h; P2: Jaa): Jcore_i; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/i')]
  Jcore_i = interface(Jcore_g)
    ['{4D6E9C9C-3CBE-4CA4-A3A5-BCA3A3BBDE23}']
    function _Getb: Jcore_h; cdecl;
    function a: JString; cdecl;
    function b: Jab; cdecl;
    function c: Jaa; cdecl;
    function d: Boolean; cdecl;
    property b: Jcore_h read _Getb;
  end;
  TJcore_i = class(TJavaGenericImport<Jcore_iClass, Jcore_i>) end;

  Jcore_jClass = interface(Jcore_aClass)
    ['{4CD1A5D4-BDF3-4227-AC1A-7ECD65014280}']
    {class} function a: JObject; cdecl;//Deprecated
    {class} function init(P1: Jcore_g; P2: JMethod; P3: Integer; P4: JString; P5: TJavaArray<Byte>; P6: Boolean): Jcore_j; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/j')]
  Jcore_j = interface(Jcore_a)
    ['{DBA8BC7D-1C07-42FD-9AB8-0240D9911C36}']
  end;
  TJcore_j = class(TJavaGenericImport<Jcore_jClass, Jcore_j>) end;

  Jcore_kClass = interface(JObjectClass)
    ['{12DA9D67-D06A-4D9D-AA19-1799B0CABF30}']
    {class} function a(P1: JString): Int64; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/k')]
  Jcore_k = interface(JObject)
    ['{90F74E0F-BB34-40CD-8C29-96D3D9F9C0C8}']
  end;
  TJcore_k = class(TJavaGenericImport<Jcore_kClass, Jcore_k>) end;

  Jk_aClass = interface(JObjectClass)
    ['{3EDA42B8-72D9-4467-B968-E1FFF5507152}']
    {class} function init(P1: Integer; P2: Integer; P3: Integer): Jk_a; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/k$a')]
  Jk_a = interface(JObject)
    ['{7F91D286-ECBC-424C-9B67-3D3139EFCE9E}']
    function _Getb: Integer; cdecl;
    function _Getc: Integer; cdecl;
    property b: Integer read _Getb;
    property c: Integer read _Getc;
  end;
  TJk_a = class(TJavaGenericImport<Jk_aClass, Jk_a>) end;

  Jcore_lClass = interface(JabClass)
    ['{60F15222-2456-4882-8D5C-E015F83634B2}']
    {class} function a(P1: JContext): Jcore_l; cdecl; overload;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/l')]
  Jcore_l = interface(Jab)
    ['{886C8361-101A-4D42-B35A-CB36835F5822}']
    function a: Jcore_b; cdecl; overload;
    procedure a(P1: Int64); cdecl; overload;
    function a(P1: Jt): JFuture; cdecl; overload;
    procedure b(P1: Int64); cdecl;
    procedure c(P1: Int64); cdecl;
  end;
  TJcore_l = class(TJavaGenericImport<Jcore_lClass, Jcore_l>) end;

  JFutureTaskClass = interface(JObjectClass)
    ['{933001EB-A47E-462A-A272-FBCD4DD2EA0F}']
    {class} function init(callable: JCallable): JFutureTask; cdecl; overload;//Deprecated
    {class} function init(runnable: JRunnable; result: JObject): JFutureTask; cdecl; overload;//Deprecated
    {class} function &get(timeout: Int64; unit_: JTimeUnit): JObject; cdecl; overload;
    {class} function isCancelled: Boolean; cdecl;
  end;

  [JavaSignature('java/util/concurrent/FutureTask')]
  JFutureTask = interface(JObject)
    ['{456B6C2A-2B64-4D69-B899-D7093B2D2A18}']
    function cancel(mayInterruptIfRunning: Boolean): Boolean; cdecl;
    function &get: JObject; cdecl; overload;
    function isDone: Boolean; cdecl;//Deprecated
    procedure run; cdecl;//Deprecated
  end;
  TJFutureTask = class(TJavaGenericImport<JFutureTaskClass, JFutureTask>) end;

  Jcore_mClass = interface(JFutureTaskClass)
    ['{D9DD635C-D487-41DB-8372-C9D12945F0B6}']
    {class} function init(P1: Jcore_l; P2: JCallable; P3: Jq): Jcore_m; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/m')]
  Jcore_m = interface(JFutureTask)
    ['{D60966BF-A17D-44FA-93C4-AAB864573C0E}']
    function _Getb: Jcore_l; cdecl;
    procedure done; cdecl;
    property b: Jcore_l read _Getb;
  end;
  TJcore_m = class(TJavaGenericImport<Jcore_mClass, Jcore_m>) end;

  Jcore_nClass = interface(JThreadFactoryClass)
    ['{A13EB348-E84B-4A97-830A-88B1DC12AD55}']
    {class} function newThread(P1: JRunnable): JThread; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/n')]
  Jcore_n = interface(JThreadFactory)
    ['{E632A14E-48A8-4B8E-90A9-92FFAFBCB1B5}']
  end;
  TJcore_n = class(TJavaGenericImport<Jcore_nClass, Jcore_n>) end;

  JtClass = interface(JObjectClass)
    ['{DB463AE8-4929-46F3-89F0-94C1F0F18E01}']
    {class} function init: Jt; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/t')]
  Jt = interface(JObject)
    ['{A2C03811-76CC-4AAB-839F-12EFF8A56D4B}']
    function f: Jac; cdecl;
    procedure g; cdecl;
    function h: Boolean; cdecl;
  end;
  TJt = class(TJavaGenericImport<JtClass, Jt>) end;

  Jcore_oClass = interface(JtClass)
    ['{ED2B7506-5AB4-426B-812C-D39E50629E91}']
    {class} function a: JString; cdecl; overload;//Deprecated
    {class} procedure a(P1: JString); cdecl; overload;//Deprecated
    {class} procedure a(P1: JHeader); cdecl; overload;//Deprecated
    {class} procedure a(P1: TJavaArray<Byte>); cdecl; overload;//Deprecated
    {class} procedure a(P1: Boolean); cdecl; overload;//Deprecated
    {class} procedure a(P1: JString; P2: JString); cdecl; overload;//Deprecated
    {class} function b: TJavaArray<Byte>; cdecl; overload;//Deprecated
    {class} function b(P1: JString): JString; cdecl; overload;//Deprecated
    {class} function c: JString; cdecl;//Deprecated
    {class} function d: JArrayList; cdecl;//Deprecated
    {class} function e: Boolean; cdecl;//Deprecated
    {class} function equals(P1: JObject): Boolean; cdecl;//Deprecated
    {class} function hashCode: Integer; cdecl;//Deprecated
    {class} function init(P1: JString): Jcore_o; cdecl;//Deprecated
    {class} function toString: JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/o')]
  Jcore_o = interface(Jt)
    ['{EA4C91D4-774D-4D70-83FC-8CA5F0BE9F34}']
  end;
  TJcore_o = class(TJavaGenericImport<Jcore_oClass, Jcore_o>) end;

  JuClass = interface(JObjectClass)
    ['{D70BFC35-6A80-4781-804A-A9254B7151C8}']
    {class} function init: Ju; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/u')]
  Ju = interface(JObject)
    ['{8CFF1155-CB80-4833-840C-6FF2187C4F13}']
    function _Getb: JString; cdecl;
    function b: TJavaArray<Byte>; cdecl; overload;
    procedure b(P1: JString); cdecl; overload;
    property b: JString read _Getb;
  end;
  TJu = class(TJavaGenericImport<JuClass, Ju>) end;

  JpClass = interface(JuClass)
    ['{42DBD1B3-B9E7-4306-AAB4-D4AE6AD43E8B}']
    {class} function a: JHttpUrlHeader; cdecl; overload;//Deprecated
    {class} procedure a(P1: Int64); cdecl; overload;//Deprecated
    {class} procedure a(P1: JString); cdecl; overload;//Deprecated
    {class} procedure b(P1: Int64); cdecl;//Deprecated
    {class} function init(P1: JHttpUrlHeader; P2: Integer; P3: JString; P4: TJavaArray<Byte>): Jp; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/p')]
  Jp = interface(Ju)
    ['{F8AC062D-651C-4741-AB84-FA97A83860BD}']
  end;
  TJp = class(TJavaGenericImport<JpClass, Jp>) end;

  JqClass = interface(JCallableClass)
    ['{209DCC80-8048-49BB-ADD7-721EECE0C2BE}']
    {class} function init(P1: Jcore_l; P2: Jcore_o): Jq; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/q')]
  Jq = interface(JCallable)
    ['{649429AD-1CC7-45F9-8A88-6249DCA087EC}']
    function _Getb: JContext; cdecl;
    function _Getc: Jcore_o; cdecl;
    function _Getd: JString; cdecl;
    function a: Jcore_o; cdecl;
    function call: JObject; cdecl;
    property b: JContext read _Getb;
    property c: Jcore_o read _Getc;
    property d: JString read _Getd;
  end;
  TJq = class(TJavaGenericImport<JqClass, Jq>) end;

  Jcore_rClass = interface(JObjectClass)
    ['{3A4C9FBC-FAF1-4479-AE13-8AC5C0A13191}']
    {class} procedure a(P1: JCloseable); cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/r')]
  Jcore_r = interface(JObject)
    ['{908376FD-07E4-4810-BFC9-9E28AE4FDFF9}']
  end;
  TJcore_r = class(TJavaGenericImport<Jcore_rClass, Jcore_r>) end;

  JsClass = interface(JObjectClass)
    ['{75A9357A-1AD5-4F20-979A-1B664C299EEA}']
    {class} function a(P1: JContext): Boolean; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/s')]
  Js = interface(JObject)
    ['{7C55BDC8-B931-4F59-A3D1-A8FD616BE75E}']
  end;
  TJs = class(TJavaGenericImport<JsClass, Js>) end;

  JxClass = interface(JObjectClass)
    ['{2144B871-123B-4F55-8CC1-95A06766DB3A}']
    {class} function a: Jcore_g; cdecl; overload;//Deprecated
    {class} function a(P1: Jlang_Class): JObject; cdecl; overload;//Deprecated
    {class} function init(P1: Jcore_g): Jx; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/x')]
  Jx = interface(JObject)
    ['{29DB828B-C6CB-47D4-A8DF-DBEEEF66087E}']
  end;
  TJx = class(TJavaGenericImport<JxClass, Jx>) end;

  JInvocationHandlerClass = interface(IJavaClass)
    ['{6A007CA5-3D80-4B09-9FFC-B88E3C887FB2}']
  end;

  [JavaSignature('java/lang/reflect/InvocationHandler')]
  JInvocationHandler = interface(IJavaInstance)
    ['{C23EFD3B-082E-4C1E-8E2C-BA2AD7C6F02D}']
    function invoke(proxy: JObject; method: JMethod; args: TJavaObjectArray<JObject>): JObject; cdecl;
  end;
  TJInvocationHandler = class(TJavaGenericImport<JInvocationHandlerClass, JInvocationHandler>) end;

  JyClass = interface(JInvocationHandlerClass)
    ['{1913C381-5816-44B3-81F6-09BBE1F2D8C4}']
    {class} function init(P1: Jcore_g; P2: Jlang_Class; P3: Jz): Jy; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/y')]
  Jy = interface(JInvocationHandler)
    ['{FD4B40EA-E942-44FB-B248-DCAFD1DDD103}']
    function _Getb: Jlang_Class; cdecl;
    function _Getc: Jz; cdecl;
    function invoke(P1: JObject; P2: JMethod; P3: TJavaObjectArray<JObject>): JObject; cdecl;
    property b: Jlang_Class read _Getb;
    property c: Jz read _Getc;
  end;
  TJy = class(TJavaGenericImport<JyClass, Jy>) end;

  JzClass = interface(JObjectClass)
    ['{66AE66E9-C318-4E84-BA7C-BFC9311BD8E3}']
    {class} function a(P1: JMethod; P2: TJavaObjectArray<JObject>): JObject; cdecl;//Deprecated
    {class} function init(P1: Jx): Jz; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/z')]
  Jz = interface(JObject)
    ['{104F02DF-0517-469F-B551-ADFABF79A797}']
  end;
  TJz = class(TJavaGenericImport<JzClass, Jz>) end;

  Japmobilesecuritysdk_a_aClass = interface(JObjectClass)
    ['{F37BF5F0-6F59-482D-A1EE-51E8A4DF3DF3}']
    {class} function a(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function a(P1: JMap): Integer; cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JString): JString; cdecl; overload;//Deprecated
    {class} function init(P1: JContext): Japmobilesecuritysdk_a_a; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/a/a')]
  Japmobilesecuritysdk_a_a = interface(JObject)
    ['{F1D465AC-9689-487E-B2FD-7794D8DFEE9C}']
  end;
  TJapmobilesecuritysdk_a_a = class(TJavaGenericImport<Japmobilesecuritysdk_a_aClass, Japmobilesecuritysdk_a_a>) end;

  Japmobilesecuritysdk_b_aClass = interface(JObjectClass)
    ['{A0573669-28BC-493A-A38C-C822E055C72E}']
    {class} function a: Japmobilesecuritysdk_b_a; cdecl; overload;//Deprecated
    {class} procedure a(P1: Integer); cdecl; overload;//Deprecated
    {class} function b: Integer; cdecl;//Deprecated
    {class} function c: JString; cdecl;//Deprecated
    {class} function init: Japmobilesecuritysdk_b_a; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/b/a')]
  Japmobilesecuritysdk_b_a = interface(JObject)
    ['{D5ED96CF-D511-4A14-A179-A61B1003319B}']
  end;
  TJapmobilesecuritysdk_b_a = class(TJavaGenericImport<Japmobilesecuritysdk_b_aClass, Japmobilesecuritysdk_b_a>) end;

  Jc_aClass = interface(JObjectClass)
    ['{72543BA2-588F-4157-9AA9-F274270721CC}']
    {class} procedure a(P1: JThrowable); cdecl; overload;//Deprecated
    {class} procedure a(P1: JString); cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: JString; P3: JString; P4: JString); cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/c/a')]
  Jc_a = interface(JObject)
    ['{324E1246-9459-4A09-BD0C-AF81534F1D32}']
  end;
  TJc_a = class(TJavaGenericImport<Jc_aClass, Jc_a>) end;

  Jd_aClass = interface(JObjectClass)
    ['{FCC4A381-1504-4104-8294-B6257467D10A}']
    {class} function a(P1: JContext; P2: JMap): JMap; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/d/a')]
  Jd_a = interface(JObject)
    ['{478186C6-76A6-4959-992D-C81E056D0AEB}']
  end;
  TJd_a = class(TJavaGenericImport<Jd_aClass, Jd_a>) end;

  Jd_bClass = interface(JObjectClass)
    ['{B6BFDBC3-D41D-40C2-AD87-D758776976DF}']
    {class} function a(P1: JContext; P2: JMap): JMap; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/d/b')]
  Jd_b = interface(JObject)
    ['{B62550F7-23EC-4B0A-B979-4441C0630B6D}']
  end;
  TJd_b = class(TJavaGenericImport<Jd_bClass, Jd_b>) end;

  Jd_cClass = interface(JObjectClass)
    ['{51EDD722-617E-43D4-9F11-497980E7B8FC}']
    {class} function a(P1: JContext): JMap; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/d/c')]
  Jd_c = interface(JObject)
    ['{61D44336-0A94-4CA4-8E18-9D7ECA1245FA}']
  end;
  TJd_c = class(TJavaGenericImport<Jd_cClass, Jd_c>) end;

  Jd_dClass = interface(JObjectClass)
    ['{30628190-C17A-459C-B156-9B84BF0EA02B}']
    {class} function a(P1: JContext): JMap; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/d/d')]
  Jd_d = interface(JObject)
    ['{84623449-0A20-4420-8933-231555D9446E}']
  end;
  TJd_d = class(TJavaGenericImport<Jd_dClass, Jd_d>) end;

  Jd_eClass = interface(JObjectClass)
    ['{48FB2908-EE82-41A4-8328-D20013176FD7}']
    {class} procedure a; cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JMap): JMap; cdecl; overload;//Deprecated
    {class} function b(P1: JContext; P2: JMap): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/d/e')]
  Jd_e = interface(JObject)
    ['{7CBB8164-A128-442A-BC30-AB5E60914DBD}']
  end;
  TJd_e = class(TJavaGenericImport<Jd_eClass, Jd_e>) end;

  Je_aClass = interface(JObjectClass)
    ['{F8042B29-C16B-4D3D-AC6E-1A09BD3FFD3A}']
    {class} function a: JString; cdecl;//Deprecated
    {class} function b: JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/e/a')]
  Je_a = interface(JObject)
    ['{FD8C1E91-308B-45B8-AE75-DE77C85029B3}']
  end;
  TJe_a = class(TJavaGenericImport<Je_aClass, Je_a>) end;

  Jf_aClass = interface(JObjectClass)
    ['{B1973223-217B-4307-AEFE-8769D0978E55}']
    {class} procedure a; cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext); cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: Jf_b); cdecl; overload;//Deprecated
    {class} function b: Jf_b; cdecl; overload;//Deprecated
    {class} function b(P1: JContext): Jf_b; cdecl; overload;//Deprecated
    {class} function c(P1: JContext): Jf_b; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/a')]
  Jf_a = interface(JObject)
    ['{86F9E95B-CA37-44A7-9186-454CC8326E29}']
  end;
  TJf_a = class(TJavaGenericImport<Jf_aClass, Jf_a>) end;

  Jf_bClass = interface(JObjectClass)
    ['{6D563791-C8A5-43CD-9AA7-2D749C7FD885}']
    {class} function a: JString; cdecl;//Deprecated
    {class} function b: JString; cdecl;//Deprecated
    {class} function c: JString; cdecl;//Deprecated
    {class} function init(P1: JString; P2: JString; P3: JString): Jf_b; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/b')]
  Jf_b = interface(JObject)
    ['{CC803E61-BC20-4970-B630-3E150897B376}']
  end;
  TJf_b = class(TJavaGenericImport<Jf_bClass, Jf_b>) end;

  Jf_cClass = interface(JObjectClass)
    ['{ECBB2C3D-8E0D-40AA-97B4-6019AD33A17E}']
    {class} function a: JString; cdecl;//Deprecated
    {class} function b: JString; cdecl;//Deprecated
    {class} function c: JString; cdecl;//Deprecated
    {class} function d: JString; cdecl;//Deprecated
    {class} function e: JString; cdecl;//Deprecated
    {class} function init(P1: JString; P2: JString; P3: JString; P4: JString; P5: JString): Jf_c; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/c')]
  Jf_c = interface(JObject)
    ['{EFAA3EFF-7555-45D7-A2F0-69B7C342671D}']
  end;
  TJf_c = class(TJavaGenericImport<Jf_cClass, Jf_c>) end;

  Jf_dClass = interface(JObjectClass)
    ['{023B2566-EEC5-4F90-ACD2-3F6023D9E5AE}']
    {class} procedure a; cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext); cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: Jf_c); cdecl; overload;//Deprecated
    {class} function b: Jf_c; cdecl; overload;//Deprecated
    {class} function b(P1: JContext): Jf_c; cdecl; overload;//Deprecated
    {class} function c(P1: JContext): Jf_c; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/d')]
  Jf_d = interface(JObject)
    ['{5EDED553-4A03-482C-8D89-5ABEA3DDCB32}']
  end;
  TJf_d = class(TJavaGenericImport<Jf_dClass, Jf_d>) end;

  Jf_eClass = interface(JObjectClass)
    ['{75D16F55-F5B6-458E-B046-83189D1FB0F6}']
    {class} function a(P1: JContext): Jf_f; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/e')]
  Jf_e = interface(JObject)
    ['{C68EF219-CE81-4C8D-9EFE-0385447354BD}']
  end;
  TJf_e = class(TJavaGenericImport<Jf_eClass, Jf_e>) end;

  Jf_fClass = interface(JObjectClass)
    ['{EFBD5DD9-B612-4197-B43A-C0193CEB67E0}']
    {class} function a: JString; cdecl; overload;//Deprecated
    {class} procedure a(P1: JString); cdecl; overload;//Deprecated
    {class} function b: JString; cdecl; overload;//Deprecated
    {class} procedure b(P1: JString); cdecl; overload;//Deprecated
    {class} function c: JString; cdecl; overload;//Deprecated
    {class} procedure c(P1: JString); cdecl; overload;//Deprecated
    {class} function d: JString; cdecl; overload;//Deprecated
    {class} procedure d(P1: JString); cdecl; overload;//Deprecated
    {class} function e: JString; cdecl; overload;//Deprecated
    {class} procedure e(P1: JString); cdecl; overload;//Deprecated
    {class} function init: Jf_f; cdecl; overload;//Deprecated
    {class} function init(P1: JString; P2: JString; P3: JString; P4: JString; P5: JString): Jf_f; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/f')]
  Jf_f = interface(JObject)
    ['{4E842BE4-FC63-41BD-8935-2BD2096EFFA5}']
  end;
  TJf_f = class(TJavaGenericImport<Jf_fClass, Jf_f>) end;

  Jf_gClass = interface(JObjectClass)
    ['{37A8D7D7-651A-4E3A-8C16-DA91C675F1FA}']
    {class} procedure a; cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext); cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JString): JString; cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: JString; P3: JString); cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/g')]
  Jf_g = interface(JObject)
    ['{63151975-76A7-4287-9A67-64E191A9DBDC}']
  end;
  TJf_g = class(TJavaGenericImport<Jf_gClass, Jf_g>) end;

  Jf_hClass = interface(JObjectClass)
    ['{70BEF3E7-7415-4B7C-9709-61F0BA6A7FFF}']
    {class} function a(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: Boolean); cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: JString); cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: JString; P3: Int64); cdecl; overload;//Deprecated
    {class} function b(P1: JContext): Boolean; cdecl; overload;//Deprecated
    {class} procedure b(P1: JContext; P2: JString); cdecl; overload;//Deprecated
    {class} function c(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function c(P1: JContext; P2: JString): Int64; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/h')]
  Jf_h = interface(JObject)
    ['{6B0FFACF-864C-4829-8A1C-0179E67BA1F8}']
  end;
  TJf_h = class(TJavaGenericImport<Jf_hClass, Jf_h>) end;

  Jf_iClass = interface(JObjectClass)
    ['{78E68835-786E-40BB-A0C8-AF9255D45B63}']
    {class} procedure a; cdecl; overload;//Deprecated
    {class} procedure a(P1: Jf_c); cdecl; overload;//Deprecated
    {class} procedure a(P1: Jf_b); cdecl; overload;//Deprecated
    {class} function a(P1: JString): JString; cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JString): Boolean; cdecl; overload;//Deprecated
    {class} procedure a(P1: JString; P2: JString); cdecl; overload;//Deprecated
    {class} function b: JString; cdecl; overload;//Deprecated
    {class} procedure b(P1: JString); cdecl; overload;//Deprecated
    {class} function c: JString; cdecl; overload;//Deprecated
    {class} procedure c(P1: JString); cdecl; overload;//Deprecated
    {class} function d: JString; cdecl; overload;//Deprecated
    {class} procedure d(P1: JString); cdecl; overload;//Deprecated
    {class} function e: JString; cdecl; overload;//Deprecated
    {class} procedure e(P1: JString); cdecl; overload;//Deprecated
    {class} function f: JString; cdecl; overload;//Deprecated
    {class} procedure f(P1: JString); cdecl; overload;//Deprecated
    {class} function g: Jf_c; cdecl;//Deprecated
    {class} procedure h; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/i')]
  Jf_i = interface(JObject)
    ['{3A364C8B-62F4-4DFB-9B77-DAEDFB308E30}']
  end;
  TJf_i = class(TJavaGenericImport<Jf_iClass, Jf_i>) end;

  JAPSecuritySdkClass = interface(JObjectClass)
    ['{07CFF90F-19B4-40C6-9CF9-8E41DB947C39}']
    {class} function getApdidToken: JString; cdecl;//Deprecated
    {class} function getInstance(P1: JContext): JAPSecuritySdk; cdecl;//Deprecated
    {class} function getSdkName: JString; cdecl;//Deprecated
    {class} function getSdkVersion: JString; cdecl;//Deprecated
    {class} function getTokenResult: JAPSecuritySdk_TokenResult; cdecl;//Deprecated
    {class} function getUtdid(P1: JContext): JString; cdecl;//Deprecated
    {class} procedure initToken(P1: Integer; P2: JMap; P3: JAPSecuritySdk_InitResultListener); cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/face/APSecuritySdk')]
  JAPSecuritySdk = interface(JObject)
    ['{F2F36D3A-0BDE-4205-AE47-12E09698950E}']
  end;
  TJAPSecuritySdk = class(TJavaGenericImport<JAPSecuritySdkClass, JAPSecuritySdk>) end;

  JAPSecuritySdk_1Class = interface(JRunnableClass)
    ['{795EB560-A87A-475C-9E8B-3EE151D9A7C7}']
    {class} function init(P1: JAPSecuritySdk; P2: JMap; P3: JAPSecuritySdk_InitResultListener): JAPSecuritySdk_1; cdecl;
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/face/APSecuritySdk$1')]
  JAPSecuritySdk_1 = interface(JRunnable)
    ['{2F4C0034-B0B4-4D68-9EE8-AD215C0D15A6}']
    function _Getb: JAPSecuritySdk_InitResultListener; cdecl;
    function _Getc: JAPSecuritySdk; cdecl;
    procedure run; cdecl;
    property b: JAPSecuritySdk_InitResultListener read _Getb;
    property c: JAPSecuritySdk read _Getc;
  end;
  TJAPSecuritySdk_1 = class(TJavaGenericImport<JAPSecuritySdk_1Class, JAPSecuritySdk_1>) end;

  JAPSecuritySdk_InitResultListenerClass = interface(IJavaClass)
    ['{E2A41046-FFD3-4B54-BB33-1A0E0F5867BE}']
    {class} procedure onResult(P1: JAPSecuritySdk_TokenResult); cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/face/APSecuritySdk$InitResultListener')]
  JAPSecuritySdk_InitResultListener = interface(IJavaInstance)
    ['{631C5164-EEE6-4B80-88AD-3D82B1F7423A}']
  end;
  TJAPSecuritySdk_InitResultListener = class(TJavaGenericImport<JAPSecuritySdk_InitResultListenerClass, JAPSecuritySdk_InitResultListener>) end;

  JAPSecuritySdk_TokenResultClass = interface(JObjectClass)
    ['{7F90CEA0-6DB9-4C49-B625-520A8231D218}']
    {class} function _GetapdidToken: JString; cdecl;
    {class} function init(P1: JAPSecuritySdk): JAPSecuritySdk_TokenResult; cdecl;
    {class} property apdidToken: JString read _GetapdidToken;
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/face/APSecuritySdk$TokenResult')]
  JAPSecuritySdk_TokenResult = interface(JObject)
    ['{7A359AD8-F8E8-48DC-9353-1A534AAFDC09}']
    function _Geta: JAPSecuritySdk; cdecl;
    function _Getapdid: JString; cdecl;
    function _GetclientKey: JString; cdecl;
    function _GetumidToken: JString; cdecl;
    property a: JAPSecuritySdk read _Geta;
    property apdid: JString read _Getapdid;
    property clientKey: JString read _GetclientKey;
    property umidToken: JString read _GetumidToken;
  end;
  TJAPSecuritySdk_TokenResult = class(TJavaGenericImport<JAPSecuritySdk_TokenResultClass, JAPSecuritySdk_TokenResult>) end;

  JEnvModeConfigClass = interface(JObjectClass)
    ['{34244198-C0BE-490B-83EC-86504E1571A4}']
    {class} function _GetENVIRONMENT_AAA: Integer; cdecl;
    {class} function _GetENVIRONMENT_DAILY: Integer; cdecl;
    {class} function _GetENVIRONMENT_ONLINE: Integer; cdecl;
    {class} function _GetENVIRONMENT_PRE: Integer; cdecl;
    {class} function _GetENVIRONMENT_SIT: Integer; cdecl;
    {class} function init: JEnvModeConfig; cdecl;
    {class} property ENVIRONMENT_AAA: Integer read _GetENVIRONMENT_AAA;
    {class} property ENVIRONMENT_DAILY: Integer read _GetENVIRONMENT_DAILY;
    {class} property ENVIRONMENT_ONLINE: Integer read _GetENVIRONMENT_ONLINE;
    {class} property ENVIRONMENT_PRE: Integer read _GetENVIRONMENT_PRE;
    {class} property ENVIRONMENT_SIT: Integer read _GetENVIRONMENT_SIT;
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/face/EnvModeConfig')]
  JEnvModeConfig = interface(JObject)
    ['{ED0A5AFB-047D-4A39-A517-A06906355EFE}']
  end;
  TJEnvModeConfig = class(TJavaGenericImport<JEnvModeConfigClass, JEnvModeConfig>) end;

  Jg_aClass = interface(JObjectClass)
    ['{B9202446-06DD-43BB-A254-AFDB6F7E6444}']
    {class} function a(P1: JString; P2: JString): JString; cdecl; overload;//Deprecated
    {class} procedure a(P1: JString; P2: JString; P3: JString); cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JString; P3: JString): JString; cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: JString; P3: JString; P4: JString); cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/g/a')]
  Jg_a = interface(JObject)
    ['{7CAFEE3E-F7B1-463F-98F8-3E11141F0E4A}']
  end;
  TJg_a = class(TJavaGenericImport<Jg_aClass, Jg_a>) end;

  Jg_bClass = interface(JObjectClass)
    ['{A8DB61CE-2617-47E6-BDAE-D04D4AF14BA8}']
    {class} function a: Jg_b; cdecl; overload;//Deprecated
    {class} procedure a(P1: JRunnable); cdecl; overload;//Deprecated
    {class} function init: Jg_b; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/g/b')]
  Jg_b = interface(JObject)
    ['{D5AB92D3-AF12-4CB4-B2B9-9122972D8527}']
  end;
  TJg_b = class(TJavaGenericImport<Jg_bClass, Jg_b>) end;

  Jg_cClass = interface(JRunnableClass)
    ['{4FD3DCFC-F23D-4DC3-BE97-17591F3DD494}']
    {class} function init(P1: Jg_b): Jg_c; cdecl;
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/g/c')]
  Jg_c = interface(JRunnable)
    ['{6F2BD15E-3246-4AA8-97CE-FB16005CD29C}']
    procedure run; cdecl;
  end;
  TJg_c = class(TJavaGenericImport<Jg_cClass, Jg_c>) end;

  Ja_a_a_aClass = interface(JObjectClass)
    ['{1B73EE23-A7DB-45E9-B924-B65BA8126D4D}']
    {class} function a: JFile; cdecl; overload;//Deprecated
    {class} function a(P1: JThrowable): JString; cdecl; overload;//Deprecated
    {class} function a(P1: JString): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JString; P2: JString): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JMap; P2: JString; P3: JString): JString; cdecl; overload;//Deprecated
    {class} function b(P1: JString): Boolean; cdecl; overload;//Deprecated
    {class} function b(P1: JString; P2: JString): JString; cdecl; overload;//Deprecated
    {class} function c(P1: JString): JString; cdecl;//Deprecated
    {class} function d(P1: JString): JString; cdecl;//Deprecated
    {class} function e(P1: JString): JString; cdecl;//Deprecated
    {class} function f(P1: JString): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/a/a')]
  Ja_a_a_a = interface(JObject)
    ['{4B230CA9-388F-4FFD-9663-9A2530D6BDE2}']
  end;
  TJa_a_a_a = class(TJavaGenericImport<Ja_a_a_aClass, Ja_a_a_a>) end;

  Ja_a_a_a_aClass = interface(JObjectClass)
    ['{F5A99F8B-A089-463D-80C3-C7E6457C826B}']
    {class} function a(P1: JString): TJavaArray<Byte>; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/a/a/a')]
  Ja_a_a_a_a = interface(JObject)
    ['{1A1C7342-6B2C-42A9-89A7-5FB036FB8C47}']
  end;
  TJa_a_a_a_a = class(TJavaGenericImport<Ja_a_a_a_aClass, Ja_a_a_a_a>) end;

  Ja_a_bClass = interface(JObjectClass)
    ['{476CAD21-39D0-46FF-8B84-41AE4F2FE7B8}']
    {class} function a(P1: JString): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/a/a/b')]
  Ja_a_b = interface(JObject)
    ['{359E6759-77CB-45B9-9A5E-948E98B0F61F}']
  end;
  TJa_a_b = class(TJavaGenericImport<Ja_a_bClass, Ja_a_b>) end;

  Ja_a_cClass = interface(JObjectClass)
    ['{92992E03-F2B4-45A9-9F39-12124A6C120F}']
    {class} function a: JString; cdecl; overload;//Deprecated
    {class} function a(P1: JString; P2: JString): JString; cdecl; overload;//Deprecated
    {class} function b(P1: JString; P2: JString): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/a/a/c')]
  Ja_a_c = interface(JObject)
    ['{7E19D787-560C-422C-B02B-984C03E16AA0}']
  end;
  TJa_a_c = class(TJavaGenericImport<Ja_a_cClass, Ja_a_c>) end;

  Ja_a_a_bClass = interface(JObjectClass)
    ['{F8E67476-5CE5-419D-BD63-9D270EDEB34C}']
    {class} function a(P1: JString; P2: JString): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/a/b')]
  Ja_a_a_b = interface(JObject)
    ['{8ACA7334-E481-4003-B7B2-55FE0D29A651}']
  end;
  TJa_a_a_b = class(TJavaGenericImport<Ja_a_a_bClass, Ja_a_a_b>) end;

  Ja_b_aClass = interface(JObjectClass)
    ['{66A6442D-6B18-4370-BB5A-C9CC17F1A0AC}']
    {class} function a: Ja_b_a; cdecl; overload;//Deprecated
    {class} function a(P1: JContext): JString; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/b/a')]
  Ja_b_a = interface(JObject)
    ['{1E9BA860-92EE-4D5E-902B-56A8FE7D9FC7}']
  end;
  TJa_b_a = class(TJavaGenericImport<Ja_b_aClass, Ja_b_a>) end;

  Ja_b_bClass = interface(JObjectClass)
    ['{5F55A502-A203-4B8A-BC1F-F4B4DDF8CC9A}']
    {class} function a: Ja_b_b; cdecl; overload;//Deprecated
    {class} function a(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function b: JString; cdecl; overload;//Deprecated
    {class} function b(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function c: JString; cdecl; overload;//Deprecated
    {class} function c(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function d: JString; cdecl; overload;//Deprecated
    {class} function d(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function e: JString; cdecl; overload;//Deprecated
    {class} function e(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function f: JString; cdecl; overload;//Deprecated
    {class} function f(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function g: JString; cdecl; overload;//Deprecated
    {class} function g(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function h: JString; cdecl; overload;//Deprecated
    {class} function h(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function i: JString; cdecl; overload;//Deprecated
    {class} function i(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function j: JString; cdecl; overload;//Deprecated
    {class} function j(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function k: JString; cdecl; overload;//Deprecated
    {class} function k(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function l: JString; cdecl; overload;//Deprecated
    {class} function l(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function m: JString; cdecl; overload;//Deprecated
    {class} function m(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function n: JString; cdecl; overload;//Deprecated
    {class} function n(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function o: JString; cdecl; overload;//Deprecated
    {class} function o(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function p: JString; cdecl; overload;//Deprecated
    {class} function p(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function q: JString; cdecl; overload;//Deprecated
    {class} function q(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function r: JString; cdecl; overload;//Deprecated
    {class} function r(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function s: JString; cdecl; overload;//Deprecated
    {class} function s(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function t: JString; cdecl; overload;//Deprecated
    {class} function t(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function u: JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/b/b')]
  Ja_b_b = interface(JObject)
    ['{E62103EC-99F9-4134-81E3-805AB9C017C4}']
  end;
  TJa_b_b = class(TJavaGenericImport<Ja_b_bClass, Ja_b_b>) end;

  Jb_cClass = interface(JFileFilterClass)
    ['{D27FE25E-5CB2-4A8F-AD5F-9A2B7574F184}']
    {class} function init(P1: Ja_b_b): Jb_c; cdecl;
  end;

  [JavaSignature('com/alipay/b/a/a/b/c')]
  Jb_c = interface(JFileFilter)
    ['{8299A6B5-2927-4E8D-8BE4-59662C55EE1F}']
    function accept(P1: JFile): Boolean; cdecl;
  end;
  TJb_c = class(TJavaGenericImport<Jb_cClass, Jb_c>) end;

  Jb_dClass = interface(JObjectClass)
    ['{DFB2FDC9-11C9-49D8-A634-F305446CF0EE}']
    {class} function a: Jb_d; cdecl; overload;//Deprecated
    {class} function a(P1: JContext): Boolean; cdecl; overload;//Deprecated
    {class} function b: JString; cdecl;//Deprecated
    {class} function c: Boolean; cdecl;//Deprecated
    {class} function d: JString; cdecl;//Deprecated
    {class} function e: JString; cdecl;//Deprecated
    {class} function f: JString; cdecl;//Deprecated
    {class} function g: JString; cdecl;//Deprecated
    {class} function h: JString; cdecl;//Deprecated
    {class} function i: JString; cdecl;//Deprecated
    {class} function j: JString; cdecl;//Deprecated
    {class} function k: JString; cdecl;//Deprecated
    {class} function l: JString; cdecl;//Deprecated
    {class} function m: JString; cdecl;//Deprecated
    {class} function n: JString; cdecl;//Deprecated
    {class} function o: JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/b/d')]
  Jb_d = interface(JObject)
    ['{CCEF547C-AD52-4774-B73D-C5175F64E00E}']
  end;
  TJb_d = class(TJavaGenericImport<Jb_dClass, Jb_d>) end;

  Ja_c_aClass = interface(IJavaClass)
    ['{C40C5D64-6A56-4CFE-A55B-4E0BCAEC7644}']
    {class} function a(P1: JString): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JDeviceDataReportRequest): JDeviceDataReportResult; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/c/a')]
  Ja_c_a = interface(IJavaInstance)
    ['{1C96F2F2-D3F4-4325-85B5-ED5DA3A4872E}']
  end;
  TJa_c_a = class(TJavaGenericImport<Ja_c_aClass, Ja_c_a>) end;

  Jc_a_aClass = interface(JObjectClass)
    ['{18813CF6-3A61-4394-87F7-730A5D729A65}']
    {class} function _Geta: Boolean; cdecl;
    {class} function init: Jc_a_a; cdecl;
    {class} property a: Boolean read _Geta;
  end;

  [JavaSignature('com/alipay/b/a/a/c/a/a')]
  Jc_a_a = interface(JObject)
    ['{A9EAC790-49F7-4244-BF4D-9B0C499946B2}']
    function _Getb: JString; cdecl;
    property b: JString read _Getb;
  end;
  TJc_a_a = class(TJavaGenericImport<Jc_a_aClass, Jc_a_a>) end;

  Jc_a_bClass = interface(Jc_a_aClass)
    ['{F4E0B7B3-3608-4EC1-8DD0-0E18AADE7870}']
    {class} function _Getc: JString; cdecl;
    {class} function init: Jc_a_b; cdecl;
    {class} property c: JString read _Getc;
  end;

  [JavaSignature('com/alipay/b/a/a/c/a/b')]
  Jc_a_b = interface(Jc_a_a)
    ['{A26E1B1F-80A2-42DF-AE5C-0F7336FD55E2}']
    function _Getd: JString; cdecl;
    function _Gete: JString; cdecl;
    function _Getf: JString; cdecl;
    function _Getg: JString; cdecl;
    function _Geth: JString; cdecl;
    function _Geti: JString; cdecl;
    function _Getj: JString; cdecl;
    property d: JString read _Getd;
    property e: JString read _Gete;
    property f: JString read _Getf;
    property g: JString read _Getg;
    property h: JString read _Geth;
    property i: JString read _Geti;
    property j: JString read _Getj;
  end;
  TJc_a_b = class(TJavaGenericImport<Jc_a_bClass, Jc_a_b>) end;

  Jc_a_cClass = interface(JObjectClass)
    ['{B1FDF5D1-C147-4CEE-ABF4-A44926A3B6F5}']
    {class} function a: JString; cdecl; overload;//Deprecated
    {class} procedure a(P1: JString); cdecl; overload;//Deprecated
    {class} procedure a(P1: JMap); cdecl; overload;//Deprecated
    {class} function b: JString; cdecl; overload;//Deprecated
    {class} procedure b(P1: JString); cdecl; overload;//Deprecated
    {class} function c: JString; cdecl; overload;//Deprecated
    {class} procedure c(P1: JString); cdecl; overload;//Deprecated
    {class} function d: JString; cdecl; overload;//Deprecated
    {class} procedure d(P1: JString); cdecl; overload;//Deprecated
    {class} function e: JString; cdecl; overload;//Deprecated
    {class} procedure e(P1: JString); cdecl; overload;//Deprecated
    {class} function f: JString; cdecl; overload;//Deprecated
    {class} procedure f(P1: JString); cdecl; overload;//Deprecated
    {class} function g: JString; cdecl; overload;//Deprecated
    {class} procedure g(P1: JString); cdecl; overload;//Deprecated
    {class} function h: JString; cdecl;//Deprecated
    {class} function i: JMap; cdecl;//Deprecated
    {class} function init: Jc_a_c; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/c/a/c')]
  Jc_a_c = interface(JObject)
    ['{4DF93953-491C-49ED-AA57-65394C452E91}']
  end;
  TJc_a_c = class(TJavaGenericImport<Jc_a_cClass, Jc_a_c>) end;

  Jc_bClass = interface(Ja_c_aClass)
    ['{EF03C143-54BE-4309-A924-9B4C48ABBD93}']
    {class} function a(P1: JString): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JDeviceDataReportRequest): JDeviceDataReportResult; cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JString): Jc_b; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/c/b')]
  Jc_b = interface(Ja_c_a)
    ['{250D4A3A-21F0-4E86-BE5A-15F9FF492F77}']
  end;
  TJc_b = class(TJavaGenericImport<Jc_bClass, Jc_b>) end;

  Jc_b_aClass = interface(IJavaClass)
    ['{CC5C31C1-CEAC-4A31-85B1-795F55D6D35D}']
    {class} function a(P1: JString): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: Jc_a_c): Jc_a_b; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/c/b/a')]
  Jc_b_a = interface(IJavaInstance)
    ['{2A8FBFB5-9E67-4692-9793-668618BDD281}']
  end;
  TJc_b_a = class(TJavaGenericImport<Jc_b_aClass, Jc_b_a>) end;

  Jc_b_bClass = interface(Jc_b_aClass)
    ['{58B78F95-177E-406B-A65B-0E286A91D265}']
    {class} function a(P1: JString): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: Jc_a_c): Jc_a_b; cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JString): Jc_b_a; cdecl; overload;//Deprecated
    {class} function init: Jc_b_b; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/c/b/b')]
  Jc_b_b = interface(Jc_b_a)
    ['{DE6D848B-7F6D-42F2-ABB1-0935E06AF211}']
  end;
  TJc_b_b = class(TJavaGenericImport<Jc_b_bClass, Jc_b_b>) end;

  Jc_cClass = interface(JRunnableClass)
    ['{593519AC-164F-46FF-9B1A-945008624F4F}']
    {class} function init(P1: Jc_b; P2: JDeviceDataReportRequest): Jc_c; cdecl;
  end;

  [JavaSignature('com/alipay/b/a/a/c/c')]
  Jc_c = interface(JRunnable)
    ['{02C3999B-6E66-4840-9DFB-EB9CC6A5DB48}']
    function _Getb: Jc_b; cdecl;
    procedure run; cdecl;
    property b: Jc_b read _Getb;
  end;
  TJc_c = class(TJavaGenericImport<Jc_cClass, Jc_c>) end;

  Jc_dClass = interface(JObjectClass)
    ['{396C2884-4F21-41BD-B2D2-F8A7E2C06BE9}']
    {class} function a(P1: JContext; P2: JString): Jc_b_a; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/c/d')]
  Jc_d = interface(JObject)
    ['{FEA0AFE5-EBC5-4D76-B733-C804E02A3558}']
  end;
  TJc_d = class(TJavaGenericImport<Jc_dClass, Jc_d>) end;

  Ja_d_aClass = interface(JObjectClass)
    ['{634369ED-196A-4377-B69F-A267296D39AC}']
    {class} function a(P1: JString): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/d/a')]
  Ja_d_a = interface(JObject)
    ['{3299577F-8AD0-45BD-BECA-0A60525052A4}']
  end;
  TJa_d_a = class(TJavaGenericImport<Ja_d_aClass, Ja_d_a>) end;

  Ja_d_bClass = interface(JObjectClass)
    ['{2A572441-04F0-4C3B-95A9-2BD60F3FB980}']
    {class} function a: Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JString): JString; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/d/b')]
  Ja_d_b = interface(JObject)
    ['{1916C80D-0748-4CE6-B6A5-E173A1D31AF3}']
  end;
  TJa_d_b = class(TJavaGenericImport<Ja_d_bClass, Ja_d_b>) end;

  Ja_d_cClass = interface(JObjectClass)
    ['{4EB940D8-F58A-4210-9113-9272024EB44B}']
    {class} procedure a(P1: JContext; P2: JString; P3: JMap); cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JString; P3: JString; P4: JString): JString; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/d/c')]
  Ja_d_c = interface(JObject)
    ['{F26D6714-54D1-4F03-9609-466B1B0EFCBC}']
  end;
  TJa_d_c = class(TJavaGenericImport<Ja_d_cClass, Ja_d_c>) end;

  Ja_e_aClass = interface(JObjectClass)
    ['{39019470-CC76-4F14-BB64-E490347879C5}']
    {class} function init(P1: JString; P2: JString; P3: JString; P4: JString; P5: JString; P6: JString; P7: JString): Ja_e_a; cdecl;//Deprecated
    {class} function toString: JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/e/a')]
  Ja_e_a = interface(JObject)
    ['{DD1925A7-A62D-4E6E-BB76-BF871FEA4D8F}']
  end;
  TJa_e_a = class(TJavaGenericImport<Ja_e_aClass, Ja_e_a>) end;

  Je_bClass = interface(JObjectClass)
    ['{CDD66F2B-63FA-45C1-A200-6A3FC9B37C11}']
    {class} procedure a; cdecl; overload;//Deprecated
    {class} function init(P1: JString; P2: Jc_b_a): Je_b; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/e/b')]
  Je_b = interface(JObject)
    ['{E6747602-30ED-42DC-9A5C-1D5757FC2596}']
  end;
  TJe_b = class(TJavaGenericImport<Je_bClass, Je_b>) end;

  Je_cClass = interface(JRunnableClass)
    ['{83061A20-EADD-4AF1-B905-531783E91263}']
    {class} function init(P1: Je_b): Je_c; cdecl;
  end;

  [JavaSignature('com/alipay/b/a/a/e/c')]
  Je_c = interface(JRunnable)
    ['{3687530E-2A39-4485-AC1C-E20263E69728}']
    procedure run; cdecl;
  end;
  TJe_c = class(TJavaGenericImport<Je_cClass, Je_c>) end;

  Je_dClass = interface(JObjectClass)
    ['{40AD1247-067E-423F-8A25-395B78C4D86D}']
    {class} procedure a(P1: JThrowable); cdecl; overload;//Deprecated
    {class} procedure a(P1: JString); cdecl; overload;//Deprecated
    {class} procedure a(P1: JString; P2: JString; P3: JString); cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/e/d')]
  Je_d = interface(JObject)
    ['{C6FE5BD0-896D-4F56-8EB5-BF453B7CEDFC}']
  end;
  TJe_d = class(TJavaGenericImport<Je_dClass, Je_d>) end;

  JOperationTypeClass = interface(JAnnotationClass)
    ['{0521C6AF-8EED-413C-A5DE-A817BF5CCF98}']
    {class} function value: JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/mobile/framework/service/annotation/OperationType')]
  JOperationType = interface(JAnnotation)
    ['{97F3A6E1-7A01-46FF-B652-45CF4F8C6E6E}']
  end;
  TJOperationType = class(TJavaGenericImport<JOperationTypeClass, JOperationType>) end;

  JResetCookieClass = interface(JAnnotationClass)
    ['{E30536BE-193B-4E1D-A02C-2E3E178B6B28}']
  end;

  [JavaSignature('com/alipay/mobile/framework/service/annotation/ResetCookie')]
  JResetCookie = interface(JAnnotation)
    ['{93090071-A411-4517-A5BE-F604A524715C}']
  end;
  TJResetCookie = class(TJavaGenericImport<JResetCookieClass, JResetCookie>) end;

  JUpdateDeviceInfoClass = interface(JAnnotationClass)
    ['{800FD95A-9E46-4DC8-A66C-A34FF4766111}']
  end;

  [JavaSignature('com/alipay/mobile/framework/service/annotation/UpdateDeviceInfo')]
  JUpdateDeviceInfo = interface(JAnnotation)
    ['{36113D85-9BB1-43CB-BF28-4804D0BA1DB7}']
  end;
  TJUpdateDeviceInfo = class(TJavaGenericImport<JUpdateDeviceInfoClass, JUpdateDeviceInfo>) end;

  JSecurityClientMobileClass = interface(JObjectClass)
    ['{A54A455C-8532-475A-B610-FECCD2005DE5}']
    {class} function GetApdid(P1: JContext; P2: JMap): JString; cdecl;//Deprecated
    {class} function init: JSecurityClientMobile; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/mobilesecuritysdk/face/SecurityClientMobile')]
  JSecurityClientMobile = interface(JObject)
    ['{CCA6A6EB-E9A7-4B20-8D05-6DA3DEFF966A}']
  end;
  TJSecurityClientMobile = class(TJavaGenericImport<JSecurityClientMobileClass, JSecurityClientMobile>) end;

  JBugTrackMessageServiceClass = interface(IJavaClass)
    ['{34AFEC3A-5A5C-496F-877B-64B0538C6A78}']
    {class} function logCollect(P1: JString): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/deviceFp/BugTrackMessageService')]
  JBugTrackMessageService = interface(IJavaInstance)
    ['{E1EE52AC-DD57-4EC7-9755-9519A67DFAD3}']
  end;
  TJBugTrackMessageService = class(TJavaGenericImport<JBugTrackMessageServiceClass, JBugTrackMessageService>) end;

  JAppListCmdServiceClass = interface(IJavaClass)
    ['{4537DA14-05EC-48D0-8DBD-6F20A4A8DA0F}']
    {class} function getAppListCmd(P1: JAppListCmdRequest): JAppListCmdResult; cdecl;//Deprecated
    {class} function reGetAppListCmd(P1: JAppListCmdRequest): JAppListCmdResult; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/AppListCmdService')]
  JAppListCmdService = interface(IJavaInstance)
    ['{C3C25450-324E-45CF-BD74-5E35B4B1D2D8}']
  end;
  TJAppListCmdService = class(TJavaGenericImport<JAppListCmdServiceClass, JAppListCmdService>) end;

  JDeviceDataReportServiceClass = interface(IJavaClass)
    ['{D625EBF8-1F65-4E44-A178-37E07F4BD0C7}']
    {class} function getAppList(P1: JString): JAppListResult; cdecl;//Deprecated
    {class} function reportStaticData(P1: JDeviceDataReportRequest): JDeviceDataReportResult; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/DeviceDataReportService')]
  JDeviceDataReportService = interface(IJavaInstance)
    ['{C6F73BD8-875D-4B47-8380-50F895325135}']
  end;
  TJDeviceDataReportService = class(TJavaGenericImport<JDeviceDataReportServiceClass, JDeviceDataReportService>) end;

  JAppListCmdRequestClass = interface(JSerializableClass)
    ['{C3DC1D87-7D79-469A-BDBD-8D49756D7ECF}']
    {class} function _Getos: JString; cdecl;
    {class} function init: JAppListCmdRequest; cdecl;
    {class} property os: JString read _Getos;
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/request/AppListCmdRequest')]
  JAppListCmdRequest = interface(JSerializable)
    ['{76090AF6-2CA9-4417-BD0A-C2556D1E9A11}']
    function _Getapdid: JString; cdecl;
    function _Getapplist: JString; cdecl;
    function _Gettoken: JString; cdecl;
    function _GetuserId: JString; cdecl;
    property apdid: JString read _Getapdid;
    property applist: JString read _Getapplist;
    property token: JString read _Gettoken;
    property userId: JString read _GetuserId;
  end;
  TJAppListCmdRequest = class(TJavaGenericImport<JAppListCmdRequestClass, JAppListCmdRequest>) end;

  JDeviceDataReportRequestClass = interface(JSerializableClass)
    ['{C49473C7-6E0E-4A53-B529-DA3802F7FC0A}']
    {class} function _Getos: JString; cdecl;
    {class} function init: JDeviceDataReportRequest; cdecl;
    {class} property os: JString read _Getos;
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/request/DeviceDataReportRequest')]
  JDeviceDataReportRequest = interface(JSerializable)
    ['{7047C84D-C354-4AE2-9D40-1661BD61D679}']
    function _Getapdid: JString; cdecl;
    function _GetdataMap: JMap; cdecl;
    function _GetlastTime: JString; cdecl;
    function _GetpriApdid: JString; cdecl;
    function _GetpubApdid: JString; cdecl;
    function _Gettoken: JString; cdecl;
    function _GetumidToken: JString; cdecl;
    function _Getversion: JString; cdecl;
    property apdid: JString read _Getapdid;
    property dataMap: JMap read _GetdataMap;
    property lastTime: JString read _GetlastTime;
    property priApdid: JString read _GetpriApdid;
    property pubApdid: JString read _GetpubApdid;
    property token: JString read _Gettoken;
    property umidToken: JString read _GetumidToken;
    property version: JString read _Getversion;
  end;
  TJDeviceDataReportRequest = class(TJavaGenericImport<JDeviceDataReportRequestClass, JDeviceDataReportRequest>) end;

  JBaseResultClass = interface(JSerializableClass)
    ['{FCEE1347-9834-432A-A6F0-52CDED09DA53}']
    {class} function _Getsuccess: Boolean; cdecl;
    {class} function init: JBaseResult; cdecl;
    {class} property success: Boolean read _Getsuccess;
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/result/BaseResult')]
  JBaseResult = interface(JSerializable)
    ['{AD489043-9CC2-4348-9F4E-320FDB32A726}']
    function _GetresultCode: JString; cdecl;
    property resultCode: JString read _GetresultCode;
  end;
  TJBaseResult = class(TJavaGenericImport<JBaseResultClass, JBaseResult>) end;

  JAppListResultClass = interface(JBaseResultClass)
    ['{3CA64A42-1ED2-4CBE-B1B3-7A138914274D}']
    {class} function _GetappListVer: JString; cdecl;
    {class} function init: JAppListResult; cdecl;
    {class} property appListVer: JString read _GetappListVer;
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/result/AppListResult')]
  JAppListResult = interface(JBaseResult)
    ['{9E4805EF-07A3-42D9-AE98-FBBB4954DE8F}']
    function _GetappListData: JString; cdecl;
    property appListData: JString read _GetappListData;
  end;
  TJAppListResult = class(TJavaGenericImport<JAppListResultClass, JAppListResult>) end;

  JAppListCmdResultClass = interface(JAppListResultClass)
    ['{AC32C6FF-61B8-4DEA-8F2D-2609253689FC}']
    {class} function _GetneedRetry: Boolean; cdecl;
    {class} function init: JAppListCmdResult; cdecl;
    {class} property needRetry: Boolean read _GetneedRetry;
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/result/AppListCmdResult')]
  JAppListCmdResult = interface(JAppListResult)
    ['{5109EB6F-B4CF-4040-8175-D801AFEE63A1}']
  end;
  TJAppListCmdResult = class(TJavaGenericImport<JAppListCmdResultClass, JAppListCmdResult>) end;

  JDeviceDataReportResultClass = interface(JBaseResultClass)
    ['{BC280121-1047-4284-BE40-E4C741869965}']
    {class} function _Getapdid: JString; cdecl;
    {class} function init: JDeviceDataReportResult; cdecl;
    {class} property apdid: JString read _Getapdid;
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/result/DeviceDataReportResult')]
  JDeviceDataReportResult = interface(JBaseResult)
    ['{E3D48A24-CFC2-4C2F-AF25-FE19C2DB49BE}']
    function _GetappListVer: JString; cdecl;
    function _GetbugTrackSwitch: JString; cdecl;
    function _GetcurrentTime: JString; cdecl;
    function _Gettoken: JString; cdecl;
    function _Getversion: JString; cdecl;
    function _GetvkeySwitch: JString; cdecl;
    property appListVer: JString read _GetappListVer;
    property bugTrackSwitch: JString read _GetbugTrackSwitch;
    property currentTime: JString read _GetcurrentTime;
    property token: JString read _Gettoken;
    property version: JString read _Getversion;
    property vkeySwitch: JString read _GetvkeySwitch;
  end;
  TJDeviceDataReportResult = class(TJavaGenericImport<JDeviceDataReportResultClass, JDeviceDataReportResult>) end;

  JAidManagerClass = interface(JObjectClass)
    ['{04244716-A5CC-452E-94A9-BEB66A972297}']
    {class} function getInstance(P1: JContext): JAidManager; cdecl;//Deprecated
    {class} function getValue(P1: JString; P2: JString; P3: JString): JString; cdecl;//Deprecated
    {class} procedure requestAid(P1: JString; P2: JString; P3: JString; P4: JAidCallback); cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/aid/AidManager')]
  JAidManager = interface(JObject)
    ['{D049CF76-35DF-4F7D-AC18-D12845D376D0}']
  end;
  TJAidManager = class(TJavaGenericImport<JAidManagerClass, JAidManager>) end;

  JAidRequesterClass = interface(JObjectClass)
    ['{DF888233-D22E-4680-9069-72F4629B1412}']
    {class} function getInstance(P1: JContext): JAidRequester; cdecl;//Deprecated
    {class} function init(P1: JContext): JAidRequester; cdecl;//Deprecated
    {class} function postRest(P1: JString; P2: JString; P3: JString; P4: JString): JString; cdecl;//Deprecated
    {class} procedure postRestAsync(P1: JString; P2: JString; P3: JString; P4: JString; P5: JAidCallback); cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/aid/AidRequester')]
  JAidRequester = interface(JObject)
    ['{F49085E9-1573-4829-8B02-B4798CB34126}']
  end;
  TJAidRequester = class(TJavaGenericImport<JAidRequesterClass, JAidRequester>) end;

  JAidRequester_PostRestThreadClass = interface(JThreadClass)
    ['{E581C7DD-F246-4ADB-A376-93C03DDA5700}']
    {class} function init(P1: JAidRequester; P2: JHttpPost): JAidRequester_PostRestThread; cdecl; overload;
    {class} function init(P1: JAidRequester; P2: JHttpPost; P3: JAidCallback; P4: JString; P5: JString; P6: JString): JAidRequester_PostRestThread; cdecl; overload;
  end;

  [JavaSignature('com/ta/utdid2/aid/AidRequester$PostRestThread')]
  JAidRequester_PostRestThread = interface(JThread)
    ['{3C7144FF-428D-46FD-BBEA-D84B76CE1102}']
    function _GetmAppName: JString; cdecl;
    function _GetmCallback: JAidCallback; cdecl;
    function _GetmOldAid: JString; cdecl;
    function _GetmRspLine: JString; cdecl;
    function _GetmToken: JString; cdecl;
    function _GetthisClass: JAidRequester; cdecl;
    function getResponseLine: JString; cdecl;
    procedure run; cdecl;
    property mAppName: JString read _GetmAppName;
    property mCallback: JAidCallback read _GetmCallback;
    property mOldAid: JString read _GetmOldAid;
    property mRspLine: JString read _GetmRspLine;
    property mToken: JString read _GetmToken;
    property thisClass: JAidRequester read _GetthisClass;
  end;
  TJAidRequester_PostRestThread = class(TJavaGenericImport<JAidRequester_PostRestThreadClass, JAidRequester_PostRestThread>) end;

  JAidStorageControllerClass = interface(JObjectClass)
    ['{FFDB9509-AA96-46A4-8A13-08467F35BD4C}']
    {class} function getAidGenTimeFromSP(P1: JContext; P2: JString; P3: JString): Int64; cdecl;//Deprecated
    {class} function getAidValueFromSP(P1: JContext; P2: JString; P3: JString): JString; cdecl;//Deprecated
    {class} function init: JAidStorageController; cdecl;//Deprecated
    {class} procedure setAidValueToSP(P1: JContext; P2: JString; P3: JString; P4: JString); cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/aid/AidStorageController')]
  JAidStorageController = interface(JObject)
    ['{4741034C-EF44-4B29-837F-7B5C16606346}']
  end;
  TJAidStorageController = class(TJavaGenericImport<JAidStorageControllerClass, JAidStorageController>) end;

  JAESUtilsClass = interface(JObjectClass)
    ['{09B85EB6-F6A0-40E9-9851-04F7AFE2D608}']
    {class} function _GetTAG: JString; cdecl;
    {class} function _Gett: TJavaArray<Byte>; cdecl;
    {class} function decrypt(P1: JString; P2: JString): JString; cdecl;
    {class} function encrypt(P1: JString; P2: JString): JString; cdecl;
    {class} function fromHex(P1: JString): JString; cdecl;
    {class} function init: JAESUtils; cdecl;
    {class} function toByte(P1: JString): TJavaArray<Byte>; cdecl;
    {class} function toHex(P1: TJavaArray<Byte>): JString; cdecl; overload;
    {class} function toHex(P1: JString): JString; cdecl; overload;
    {class} property TAG: JString read _GetTAG;
    {class} property t: TJavaArray<Byte> read _Gett;
  end;

  [JavaSignature('com/ta/utdid2/android/utils/AESUtils')]
  JAESUtils = interface(JObject)
    ['{C2DF7B82-8D74-41C4-8E8C-2FDF64EDDEA0}']
  end;
  TJAESUtils = class(TJavaGenericImport<JAESUtilsClass, JAESUtils>) end;

  Jutils_Base64Class = interface(JObjectClass)
    ['{C77871AD-4AD8-44C3-9D15-9E012915AB82}']
    {class} function _GetAssertionsDisabled: Boolean; cdecl;
    {class} function _GetCRLF: Integer; cdecl;
    {class} function _GetDEFAULT: Integer; cdecl;
    {class} function _GetNO_CLOSE: Integer; cdecl;
    {class} function _GetNO_PADDING: Integer; cdecl;
    {class} function _GetNO_WRAP: Integer; cdecl;
    {class} function _GetURL_SAFE: Integer; cdecl;
    {class} function decode(P1: TJavaArray<Byte>; P2: Integer): TJavaArray<Byte>; cdecl; overload;
    {class} function decode(P1: JString; P2: Integer): TJavaArray<Byte>; cdecl; overload;
    {class} function decode(P1: TJavaArray<Byte>; P2: Integer; P3: Integer; P4: Integer): TJavaArray<Byte>; cdecl; overload;
    {class} function encode(P1: TJavaArray<Byte>; P2: Integer): TJavaArray<Byte>; cdecl; overload;
    {class} function encode(P1: TJavaArray<Byte>; P2: Integer; P3: Integer; P4: Integer): TJavaArray<Byte>; cdecl; overload;
    {class} function encodeToString(P1: TJavaArray<Byte>; P2: Integer): JString; cdecl; overload;
    {class} function encodeToString(P1: TJavaArray<Byte>; P2: Integer; P3: Integer; P4: Integer): JString; cdecl; overload;
    {class} property AssertionsDisabled: Boolean read _GetAssertionsDisabled;
    {class} property CRLF: Integer read _GetCRLF;
    {class} property DEFAULT: Integer read _GetDEFAULT;
    {class} property NO_CLOSE: Integer read _GetNO_CLOSE;
    {class} property NO_PADDING: Integer read _GetNO_PADDING;
    {class} property NO_WRAP: Integer read _GetNO_WRAP;
    {class} property URL_SAFE: Integer read _GetURL_SAFE;
  end;

  [JavaSignature('com/ta/utdid2/android/utils/Base64')]
  Jutils_Base64 = interface(JObject)
    ['{973D30BB-0B0E-4470-9522-2BF1D35C9DEB}']
  end;
  TJutils_Base64 = class(TJavaGenericImport<Jutils_Base64Class, Jutils_Base64>) end;

  JBase64_CoderClass = interface(JObjectClass)
    ['{D4128C35-73E9-4C1D-993C-322EB7DE2475}']
    {class} function _Getoutput: TJavaArray<Byte>; cdecl;
    {class} function init: JBase64_Coder; cdecl;
    {class} property output: TJavaArray<Byte> read _Getoutput;
  end;

  [JavaSignature('com/ta/utdid2/android/utils/Base64$Coder')]
  JBase64_Coder = interface(JObject)
    ['{87B19DF2-A58D-4B15-B83B-186795BA5996}']
    function _Getop: Integer; cdecl;
    function maxOutputSize(P1: Integer): Integer; cdecl;
    function process(P1: TJavaArray<Byte>; P2: Integer; P3: Integer; P4: Boolean): Boolean; cdecl;
    property op: Integer read _Getop;
  end;
  TJBase64_Coder = class(TJavaGenericImport<JBase64_CoderClass, JBase64_Coder>) end;

  JBase64_DecoderClass = interface(JBase64_CoderClass)
    ['{8605DF3F-C783-4CE8-BF64-1988423B8BB2}']
    {class} function init(P1: Integer; P2: TJavaArray<Byte>): JBase64_Decoder; cdecl;//Deprecated
    {class} function maxOutputSize(P1: Integer): Integer; cdecl;//Deprecated
    {class} function process(P1: TJavaArray<Byte>; P2: Integer; P3: Integer; P4: Boolean): Boolean; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/android/utils/Base64$Decoder')]
  JBase64_Decoder = interface(JBase64_Coder)
    ['{95CC5BA6-5D4C-4EEA-916C-75ACF7195492}']
  end;
  TJBase64_Decoder = class(TJavaGenericImport<JBase64_DecoderClass, JBase64_Decoder>) end;

  JBase64_EncoderClass = interface(JBase64_CoderClass)
    ['{AE97BB61-7135-454E-A603-DF3D8C4B623B}']
    {class} function _GetAssertionsDisabled: Boolean; cdecl;
    {class} function _GetLINE_GROUPS: Integer; cdecl;
    {class} function init(P1: Integer; P2: TJavaArray<Byte>): JBase64_Encoder; cdecl;
    {class} property AssertionsDisabled: Boolean read _GetAssertionsDisabled;
    {class} property LINE_GROUPS: Integer read _GetLINE_GROUPS;
  end;

  [JavaSignature('com/ta/utdid2/android/utils/Base64$Encoder')]
  JBase64_Encoder = interface(JBase64_Coder)
    ['{A532D535-CFF0-4806-A8AC-07F0D064DCB3}']
    function _Getdo_cr: Boolean; cdecl;
    function _Getdo_newline: Boolean; cdecl;
    function _Getdo_padding: Boolean; cdecl;
    function _GettailLen: Integer; cdecl;
    function maxOutputSize(P1: Integer): Integer; cdecl;
    function process(P1: TJavaArray<Byte>; P2: Integer; P3: Integer; P4: Boolean): Boolean; cdecl;
    property do_cr: Boolean read _Getdo_cr;
    property do_newline: Boolean read _Getdo_newline;
    property do_padding: Boolean read _Getdo_padding;
    property tailLen: Integer read _GettailLen;
  end;
  TJBase64_Encoder = class(TJavaGenericImport<JBase64_EncoderClass, JBase64_Encoder>) end;

  JBase64HelperClass = interface(JObjectClass)
    ['{A30CFF0D-7CC5-4ADE-AEB9-E34C366879B1}']
    {class} function encodeToString(P1: TJavaArray<Byte>; P2: Integer): JString; cdecl;//Deprecated
    {class} function init: JBase64Helper; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/android/utils/Base64Helper')]
  JBase64Helper = interface(JObject)
    ['{E0DDDBF9-5BD2-4580-AEDB-699120318325}']
  end;
  TJBase64Helper = class(TJavaGenericImport<JBase64HelperClass, JBase64Helper>) end;

  Jutils_DebugUtilsClass = interface(JObjectClass)
    ['{1F9FFF4A-D4E0-4882-8199-04E7B8183BA9}']
    {class} function _GetDBG: Boolean; cdecl;
    {class} function &get(P1: JString): JString; cdecl;
    {class} function getInt(P1: JString; P2: Integer): Integer; cdecl;
    {class} function init: Jutils_DebugUtils; cdecl;
    {class} property DBG: Boolean read _GetDBG;
  end;

  [JavaSignature('com/ta/utdid2/android/utils/DebugUtils')]
  Jutils_DebugUtils = interface(JObject)
    ['{0490C164-767F-4D7D-BF04-510C73EA014B}']
  end;
  TJutils_DebugUtils = class(TJavaGenericImport<Jutils_DebugUtilsClass, Jutils_DebugUtils>) end;

  JIntUtilsClass = interface(JObjectClass)
    ['{770CC10F-11DB-4503-8B19-E6E9C276BE0E}']
    {class} function getBytes(P1: Integer): TJavaArray<Byte>; cdecl; overload;//Deprecated
    {class} function getBytes(P1: TJavaArray<Byte>; P2: Integer): TJavaArray<Byte>; cdecl; overload;//Deprecated
    {class} function init: JIntUtils; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/android/utils/IntUtils')]
  JIntUtils = interface(JObject)
    ['{DECED3D4-063F-45CF-BF5A-BB55C249273F}']
  end;
  TJIntUtils = class(TJavaGenericImport<JIntUtilsClass, JIntUtils>) end;

  JNetworkUtilsClass = interface(JObjectClass)
    ['{80FDEF09-71AD-4A04-9EEE-A567669606DF}']
    {class} function _GetDEFAULT_WIFI_ADDRESS: JString; cdecl;
    {class} function _GetWIFI: JString; cdecl;
    {class} function getConnManager(P1: JContext): JConnectivityManager; cdecl;
    {class} function getNetworkState(P1: JContext): TJavaObjectArray<JString>; cdecl;
    {class} function getWifiAddress(P1: JContext): JString; cdecl;
    {class} function getWifiIpAddress(P1: JContext): JString; cdecl;
    {class} function init: JNetworkUtils; cdecl;
    {class} function isConnected(P1: JContext): Boolean; cdecl;
    {class} function isConnectedToWeakNetwork(P1: JContext): Boolean; cdecl;
    {class} function isWifi(P1: JContext): Boolean; cdecl;
    {class} property DEFAULT_WIFI_ADDRESS: JString read _GetDEFAULT_WIFI_ADDRESS;
    {class} property WIFI: JString read _GetWIFI;
  end;

  [JavaSignature('com/ta/utdid2/android/utils/NetworkUtils')]
  JNetworkUtils = interface(JObject)
    ['{9087C662-8D03-49FC-82C6-AA8483C6BA41}']
  end;
  TJNetworkUtils = class(TJavaGenericImport<JNetworkUtilsClass, JNetworkUtils>) end;

  JPhoneInfoUtilsClass = interface(JObjectClass)
    ['{FEA7C571-9C47-4799-9346-F9B772FD8186}']
    {class} function getImei(P1: JContext): JString; cdecl;//Deprecated
    {class} function getImsi(P1: JContext): JString; cdecl;//Deprecated
    {class} function getUniqueID: JString; cdecl;//Deprecated
    {class} function init: JPhoneInfoUtils; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/android/utils/PhoneInfoUtils')]
  JPhoneInfoUtils = interface(JObject)
    ['{6DA38057-6773-4B6F-9BE3-FADDA86F6C60}']
  end;
  TJPhoneInfoUtils = class(TJavaGenericImport<JPhoneInfoUtilsClass, JPhoneInfoUtils>) end;

  JSharedPreferenceHelperClass = interface(JObjectClass)
    ['{0783C49D-F782-4F1E-910C-AFA32CA102D6}']
    {class} procedure apply(P1: JSharedPreferences_Editor); cdecl;//Deprecated
    {class} function init: JSharedPreferenceHelper; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/android/utils/SharedPreferenceHelper')]
  JSharedPreferenceHelper = interface(JObject)
    ['{75D83034-420B-4D29-B29A-E46B5E7FE275}']
  end;
  TJSharedPreferenceHelper = class(TJavaGenericImport<JSharedPreferenceHelperClass, JSharedPreferenceHelper>) end;

  JStringUtilsClass = interface(JObjectClass)
    ['{FFF30908-BCB8-40FC-9A8E-AB30733151DC}']
    {class} function convertObjectToString(P1: JObject): JString; cdecl;//Deprecated
    {class} function hashCode(P1: JString): Integer; cdecl;//Deprecated
    {class} function init: JStringUtils; cdecl;//Deprecated
    {class} function isEmpty(P1: JString): Boolean; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/android/utils/StringUtils')]
  JStringUtils = interface(JObject)
    ['{C3A68936-BA92-4821-9B91-A441772C2594}']
  end;
  TJStringUtils = class(TJavaGenericImport<JStringUtilsClass, JStringUtils>) end;

  JSystemUtilsClass = interface(JObjectClass)
    ['{BAA26794-ECFE-444C-8C73-27C9358075FB}']
    {class} function getAppLabel(P1: JContext): JString; cdecl;//Deprecated
    {class} function getCpuInfo: JString; cdecl;//Deprecated
    {class} function getRootFolder(P1: JString): JFile; cdecl;//Deprecated
    {class} function getSystemVersion: Integer; cdecl;//Deprecated
    {class} function init: JSystemUtils; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/android/utils/SystemUtils')]
  JSystemUtils = interface(JObject)
    ['{2E7115B5-A331-4509-9C1F-35AD5BA3F0F0}']
  end;
  TJSystemUtils = class(TJavaGenericImport<JSystemUtilsClass, JSystemUtils>) end;

  Jutils_TimeUtilsClass = interface(JObjectClass)
    ['{E70A705C-4D4D-488C-9A09-6F256CBEA046}']
    {class} function _GetTAG: JString; cdecl;
    {class} function _GetTOTAL_M_S_ONE_DAY: Integer; cdecl;
    {class} function init: Jutils_TimeUtils; cdecl;
    {class} function isUpToDate(P1: Int64; P2: Integer): Boolean; cdecl;
    {class} property TAG: JString read _GetTAG;
    {class} property TOTAL_M_S_ONE_DAY: Integer read _GetTOTAL_M_S_ONE_DAY;
  end;

  [JavaSignature('com/ta/utdid2/android/utils/TimeUtils')]
  Jutils_TimeUtils = interface(JObject)
    ['{06E43E9F-AAFB-42B6-A9DE-500B88B850DE}']
  end;
  TJutils_TimeUtils = class(TJavaGenericImport<Jutils_TimeUtilsClass, Jutils_TimeUtils>) end;

  JFastXmlSerializerClass = interface(JXmlSerializerClass)
    ['{78C92895-99CC-4DEA-80BD-53CC79A0DFCD}']
    {class} function attribute(P1: JString; P2: JString; P3: JString): JXmlSerializer; cdecl;//Deprecated
    {class} procedure cdsect(P1: JString); cdecl;//Deprecated
    {class} procedure comment(P1: JString); cdecl;//Deprecated
    {class} procedure docdecl(P1: JString); cdecl;//Deprecated
    {class} procedure endDocument; cdecl;//Deprecated
    {class} function endTag(P1: JString; P2: JString): JXmlSerializer; cdecl;//Deprecated
    {class} procedure entityRef(P1: JString); cdecl;//Deprecated
    {class} procedure flush; cdecl;//Deprecated
    {class} function getDepth: Integer; cdecl;//Deprecated
    {class} function getFeature(P1: JString): Boolean; cdecl;//Deprecated
    {class} function getName: JString; cdecl;//Deprecated
    {class} function getNamespace: JString; cdecl;//Deprecated
    {class} function getPrefix(P1: JString; P2: Boolean): JString; cdecl;//Deprecated
    {class} function getProperty(P1: JString): JObject; cdecl;//Deprecated
    {class} procedure ignorableWhitespace(P1: JString); cdecl;//Deprecated
    {class} procedure processingInstruction(P1: JString); cdecl;//Deprecated
    {class} procedure setFeature(P1: JString; P2: Boolean); cdecl;//Deprecated
    {class} procedure setOutput(P1: JWriter); cdecl; overload;//Deprecated
    {class} procedure setOutput(P1: JOutputStream; P2: JString); cdecl; overload;//Deprecated
    {class} procedure setPrefix(P1: JString; P2: JString); cdecl;//Deprecated
    {class} procedure setProperty(P1: JString; P2: JObject); cdecl;//Deprecated
    {class} procedure startDocument(P1: JString; P2: JBoolean); cdecl;//Deprecated
    {class} function startTag(P1: JString; P2: JString): JXmlSerializer; cdecl;//Deprecated
    {class} function text(P1: JString): JXmlSerializer; cdecl; overload;//Deprecated
    {class} function text(P1: TJavaArray<Char>; P2: Integer; P3: Integer): JXmlSerializer; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/core/persistent/FastXmlSerializer')]
  JFastXmlSerializer = interface(JXmlSerializer)
    ['{C23A8D17-404D-4115-A8D5-0AD35A805ACE}']
  end;
  TJFastXmlSerializer = class(TJavaGenericImport<JFastXmlSerializerClass, JFastXmlSerializer>) end;

  JMySharedPreferencesClass = interface(IJavaClass)
    ['{3096B488-9A68-4CCB-A0A1-E2B8B8985403}']
    {class} function checkFile: Boolean; cdecl;//Deprecated
    {class} function &contains(P1: JString): Boolean; cdecl;//Deprecated
    {class} function edit: JMySharedPreferences_MyEditor; cdecl;//Deprecated
    {class} function getAll: JMap; cdecl;//Deprecated
    {class} function getBoolean(P1: JString; P2: Boolean): Boolean; cdecl;//Deprecated
    {class} function getFloat(P1: JString; P2: Single): Single; cdecl;//Deprecated
    {class} function getInt(P1: JString; P2: Integer): Integer; cdecl;//Deprecated
    {class} function getLong(P1: JString; P2: Int64): Int64; cdecl;//Deprecated
    {class} function getString(P1: JString; P2: JString): JString; cdecl;//Deprecated
    {class} procedure registerOnSharedPreferenceChangeListener(P1: JMySharedPreferences_OnSharedPreferenceChangeListener); cdecl;//Deprecated
    {class} procedure unregisterOnSharedPreferenceChangeListener(P1: JMySharedPreferences_OnSharedPreferenceChangeListener); cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/core/persistent/MySharedPreferences')]
  JMySharedPreferences = interface(IJavaInstance)
    ['{658292D8-6C51-4693-BBBD-7CE7209207B8}']
  end;
  TJMySharedPreferences = class(TJavaGenericImport<JMySharedPreferencesClass, JMySharedPreferences>) end;

  JMySharedPreferences_MyEditorClass = interface(IJavaClass)
    ['{B09F7DB9-65AB-4C48-973C-3BE10A80D8C5}']
    {class} function clear: JMySharedPreferences_MyEditor; cdecl;//Deprecated
    {class} function commit: Boolean; cdecl;//Deprecated
    {class} function putBoolean(P1: JString; P2: Boolean): JMySharedPreferences_MyEditor; cdecl;//Deprecated
    {class} function putFloat(P1: JString; P2: Single): JMySharedPreferences_MyEditor; cdecl;//Deprecated
    {class} function putInt(P1: JString; P2: Integer): JMySharedPreferences_MyEditor; cdecl;//Deprecated
    {class} function putLong(P1: JString; P2: Int64): JMySharedPreferences_MyEditor; cdecl;//Deprecated
    {class} function putString(P1: JString; P2: JString): JMySharedPreferences_MyEditor; cdecl;//Deprecated
    {class} function remove(P1: JString): JMySharedPreferences_MyEditor; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/core/persistent/MySharedPreferences$MyEditor')]
  JMySharedPreferences_MyEditor = interface(IJavaInstance)
    ['{81E60435-8DB9-4671-A6C4-02E0C640A1EB}']
  end;
  TJMySharedPreferences_MyEditor = class(TJavaGenericImport<JMySharedPreferences_MyEditorClass, JMySharedPreferences_MyEditor>) end;

  JMySharedPreferences_OnSharedPreferenceChangeListenerClass = interface(IJavaClass)
    ['{55CA9C37-945B-4CA0-B4DE-3E1D386DFDA7}']
    {class} procedure onSharedPreferenceChanged(P1: JMySharedPreferences; P2: JString); cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/core/persistent/MySharedPreferences$OnSharedPreferenceChangeListener')]
  JMySharedPreferences_OnSharedPreferenceChangeListener = interface(IJavaInstance)
    ['{D55AB233-CC66-4CAD-BDB4-2BC67B493DE8}']
  end;
  TJMySharedPreferences_OnSharedPreferenceChangeListener = class(TJavaGenericImport<JMySharedPreferences_OnSharedPreferenceChangeListenerClass, JMySharedPreferences_OnSharedPreferenceChangeListener>) end;

  JPersistentConfigurationClass = interface(JObjectClass)
    ['{73BA3E19-8FE9-486A-A4AF-ED59FF245B8F}']
    {class} procedure clear; cdecl;//Deprecated
    {class} function commit: Boolean; cdecl;//Deprecated
    {class} function getAll: JMap; cdecl;//Deprecated
    {class} function getBoolean(P1: JString): Boolean; cdecl;//Deprecated
    {class} function getFloat(P1: JString): Single; cdecl;//Deprecated
    {class} function getInt(P1: JString): Integer; cdecl;//Deprecated
    {class} function getLong(P1: JString): Int64; cdecl;//Deprecated
    {class} function getString(P1: JString): JString; cdecl;//Deprecated
    {class} function init(P1: JContext; P2: JString; P3: JString; P4: Boolean; P5: Boolean): JPersistentConfiguration; cdecl;//Deprecated
    {class} procedure putBoolean(P1: JString; P2: Boolean); cdecl;//Deprecated
    {class} procedure putFloat(P1: JString; P2: Single); cdecl;//Deprecated
    {class} procedure putInt(P1: JString; P2: Integer); cdecl;//Deprecated
    {class} procedure putLong(P1: JString; P2: Int64); cdecl;//Deprecated
    {class} procedure putString(P1: JString; P2: JString); cdecl;//Deprecated
    {class} procedure reload; cdecl;//Deprecated
    {class} procedure remove(P1: JString); cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/core/persistent/PersistentConfiguration')]
  JPersistentConfiguration = interface(JObject)
    ['{2F6C31A8-DE21-41C6-AE34-AF91BE1563A0}']
  end;
  TJPersistentConfiguration = class(TJavaGenericImport<JPersistentConfigurationClass, JPersistentConfiguration>) end;

  JTransactionXMLFileClass = interface(JObjectClass)
    ['{7D34A53F-9DC4-40E6-8D64-A225D3986AE7}']
    {class} function _GetMODE_PRIVATE: Integer; cdecl;
    {class} function _GetMODE_WORLD_READABLE: Integer; cdecl;
    {class} function _GetMODE_WORLD_WRITEABLE: Integer; cdecl;
    {class} function init(P1: JString): JTransactionXMLFile; cdecl;
    {class} property MODE_PRIVATE: Integer read _GetMODE_PRIVATE;
    {class} property MODE_WORLD_READABLE: Integer read _GetMODE_WORLD_READABLE;
    {class} property MODE_WORLD_WRITEABLE: Integer read _GetMODE_WORLD_WRITEABLE;
  end;

  [JavaSignature('com/ta/utdid2/core/persistent/TransactionXMLFile')]
  JTransactionXMLFile = interface(JObject)
    ['{15EDB4A3-9C41-40C9-A942-239B5BD9CEAF}']
    function getMySharedPreferences(P1: JString; P2: Integer): JMySharedPreferences; cdecl;
  end;
  TJTransactionXMLFile = class(TJavaGenericImport<JTransactionXMLFileClass, JTransactionXMLFile>) end;

  JTransactionXMLFile_MySharedPreferencesImplClass = interface(JMySharedPreferencesClass)
    ['{77B48AB7-47F8-40BD-B4C7-E872D7A6928E}']
    {class} function checkFile: Boolean; cdecl;//Deprecated
    {class} function &contains(P1: JString): Boolean; cdecl;//Deprecated
    {class} function edit: JMySharedPreferences_MyEditor; cdecl;//Deprecated
    {class} function getAll: JMap; cdecl;//Deprecated
    {class} function getBoolean(P1: JString; P2: Boolean): Boolean; cdecl;//Deprecated
    {class} function getFloat(P1: JString; P2: Single): Single; cdecl;//Deprecated
    {class} function getInt(P1: JString; P2: Integer): Integer; cdecl;//Deprecated
    {class} function getLong(P1: JString; P2: Int64): Int64; cdecl;//Deprecated
    {class} function getString(P1: JString; P2: JString): JString; cdecl;//Deprecated
    {class} function hasFileChanged: Boolean; cdecl;//Deprecated
    {class} procedure registerOnSharedPreferenceChangeListener(P1: JMySharedPreferences_OnSharedPreferenceChangeListener); cdecl;//Deprecated
    {class} procedure replace(P1: JMap); cdecl;//Deprecated
    {class} procedure setHasChange(P1: Boolean); cdecl;//Deprecated
    {class} procedure unregisterOnSharedPreferenceChangeListener(P1: JMySharedPreferences_OnSharedPreferenceChangeListener); cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/core/persistent/TransactionXMLFile$MySharedPreferencesImpl')]
  JTransactionXMLFile_MySharedPreferencesImpl = interface(JMySharedPreferences)
    ['{A4C8A6CC-1323-4B93-B171-84F3AEF68223}']
  end;
  TJTransactionXMLFile_MySharedPreferencesImpl = class(TJavaGenericImport<JTransactionXMLFile_MySharedPreferencesImplClass, JTransactionXMLFile_MySharedPreferencesImpl>) end;

  JMySharedPreferencesImpl_EditorImplClass = interface(JMySharedPreferences_MyEditorClass)
    ['{A0F7BC80-302E-4795-9F34-CC9558A94505}']
    {class} function init(P1: JTransactionXMLFile_MySharedPreferencesImpl): JMySharedPreferencesImpl_EditorImpl; cdecl;
  end;

  [JavaSignature('com/ta/utdid2/core/persistent/TransactionXMLFile$MySharedPreferencesImpl$EditorImpl')]
  JMySharedPreferencesImpl_EditorImpl = interface(JMySharedPreferences_MyEditor)
    ['{7FFF1137-3BBE-4851-BFB7-16A2D86FB6EB}']
    function clear: JMySharedPreferences_MyEditor; cdecl;
    function commit: Boolean; cdecl;
    function putBoolean(P1: JString; P2: Boolean): JMySharedPreferences_MyEditor; cdecl;
    function putFloat(P1: JString; P2: Single): JMySharedPreferences_MyEditor; cdecl;
    function putInt(P1: JString; P2: Integer): JMySharedPreferences_MyEditor; cdecl;
    function putLong(P1: JString; P2: Int64): JMySharedPreferences_MyEditor; cdecl;
    function putString(P1: JString; P2: JString): JMySharedPreferences_MyEditor; cdecl;
    function remove(P1: JString): JMySharedPreferences_MyEditor; cdecl;
  end;
  TJMySharedPreferencesImpl_EditorImpl = class(TJavaGenericImport<JMySharedPreferencesImpl_EditorImplClass, JMySharedPreferencesImpl_EditorImpl>) end;

  JXmlUtilsClass = interface(JObjectClass)
    ['{F41B4C88-3752-4CBF-8B42-6CBDE12EB000}']
    {class} procedure beginDocument(P1: JXmlPullParser; P2: JString); cdecl;//Deprecated
    {class} function convertValueToBoolean(P1: JCharSequence; P2: Boolean): Boolean; cdecl;//Deprecated
    {class} function convertValueToInt(P1: JCharSequence; P2: Integer): Integer; cdecl;//Deprecated
    {class} function convertValueToList(P1: JCharSequence; P2: TJavaObjectArray<JString>; P3: Integer): Integer; cdecl;//Deprecated
    {class} function convertValueToUnsignedInt(P1: JString; P2: Integer): Integer; cdecl;//Deprecated
    {class} procedure nextElement(P1: JXmlPullParser); cdecl;//Deprecated
    {class} function parseUnsignedIntAttribute(P1: JCharSequence): Integer; cdecl;//Deprecated
    {class} function readListXml(P1: JInputStream): JArrayList; cdecl;//Deprecated
    {class} function readMapXml(P1: JInputStream): JHashMap; cdecl;//Deprecated
    {class} function readThisIntArrayXml(P1: JXmlPullParser; P2: JString; P3: TJavaObjectArray<JString>): TJavaArray<Integer>; cdecl;//Deprecated
    {class} function readThisListXml(P1: JXmlPullParser; P2: JString; P3: TJavaObjectArray<JString>): JArrayList; cdecl;//Deprecated
    {class} function readThisMapXml(P1: JXmlPullParser; P2: JString; P3: TJavaObjectArray<JString>): JHashMap; cdecl;//Deprecated
    {class} function readValueXml(P1: JXmlPullParser; P2: TJavaObjectArray<JString>): JObject; cdecl;//Deprecated
    {class} procedure skipCurrentTag(P1: JXmlPullParser); cdecl;//Deprecated
    {class} procedure writeByteArrayXml(P1: TJavaArray<Byte>; P2: JString; P3: JXmlSerializer); cdecl;//Deprecated
    {class} procedure writeIntArrayXml(P1: TJavaArray<Integer>; P2: JString; P3: JXmlSerializer); cdecl;//Deprecated
    {class} procedure writeListXml(P1: JList; P2: JOutputStream); cdecl; overload;//Deprecated
    {class} procedure writeListXml(P1: JList; P2: JString; P3: JXmlSerializer); cdecl; overload;//Deprecated
    {class} procedure writeMapXml(P1: JMap; P2: JOutputStream); cdecl; overload;//Deprecated
    {class} procedure writeMapXml(P1: JMap; P2: JString; P3: JXmlSerializer); cdecl; overload;//Deprecated
    {class} procedure writeValueXml(P1: JObject; P2: JString; P3: JXmlSerializer); cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/core/persistent/XmlUtils')]
  JXmlUtils = interface(JObject)
    ['{D79E9038-72D4-4F8B-A513-7EBC21EB4AE2}']
  end;
  TJXmlUtils = class(TJavaGenericImport<JXmlUtilsClass, JXmlUtils>) end;

  JDeviceClass = interface(JObjectClass)
    ['{7AB941EE-78D6-4BA7-B681-677905DED2FD}']
    {class} function getDeviceId: JString; cdecl;//Deprecated
    {class} function getImei: JString; cdecl;//Deprecated
    {class} function getImsi: JString; cdecl;//Deprecated
    {class} function getUtdid: JString; cdecl;//Deprecated
    {class} function init: JDevice; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/device/Device')]
  JDevice = interface(JObject)
    ['{9F333004-7404-4C39-8575-605660C8407B}']
  end;
  TJDevice = class(TJavaGenericImport<JDeviceClass, JDevice>) end;

  JDeviceInfoClass = interface(JObjectClass)
    ['{98520297-688B-4ED7-94CB-16543AA08E51}']
    {class} function _GetCREATE_DEVICE_METADATA_LOCK: JObject; cdecl;
    {class} function _GetUTDID_VERSION_CODE: Byte; cdecl;
    {class} function getDevice(P1: JContext): JDevice; cdecl;
    {class} function getMetadataCheckSum(P1: JDevice): Int64; cdecl;
    {class} function init: JDeviceInfo; cdecl;
    {class} property CREATE_DEVICE_METADATA_LOCK: JObject read _GetCREATE_DEVICE_METADATA_LOCK;
    {class} property UTDID_VERSION_CODE: Byte read _GetUTDID_VERSION_CODE;
  end;

  [JavaSignature('com/ta/utdid2/device/DeviceInfo')]
  JDeviceInfo = interface(JObject)
    ['{EA042690-0D39-452D-B1D6-0DBD54E65931}']
  end;
  TJDeviceInfo = class(TJavaGenericImport<JDeviceInfoClass, JDeviceInfo>) end;

  JUTDeviceClass = interface(JObjectClass)
    ['{FF1D0654-3898-4F58-8796-0AC46DCF1BD6}']
    {class} function getUtdid(P1: JContext): JString; cdecl;//Deprecated
    {class} function init: JUTDevice; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/device/UTDevice')]
  JUTDevice = interface(JObject)
    ['{008A2F49-E03C-46F9-9271-8F02538B7FBA}']
  end;
  TJUTDevice = class(TJavaGenericImport<JUTDeviceClass, JUTDevice>) end;

  JUTUtdidClass = interface(JObjectClass)
    ['{4420B993-CB6B-4C49-BB0A-012676223689}']
    {class} function _GetUM_SETTINGS_STORAGE_NEW: JString; cdecl;
    {class} function init(P1: JContext): JUTUtdid; cdecl;
    {class} function instance(P1: JContext): JUTUtdid; cdecl;
    {class} property UM_SETTINGS_STORAGE_NEW: JString read _GetUM_SETTINGS_STORAGE_NEW;
  end;

  [JavaSignature('com/ta/utdid2/device/UTUtdid')]
  JUTUtdid = interface(JObject)
    ['{141CBA3C-CC0F-4F10-AD1F-95BCBA6914BC}']
    function getValue: JString; cdecl;
  end;
  TJUTUtdid = class(TJavaGenericImport<JUTUtdidClass, JUTUtdid>) end;

  JUTUtdidHelperClass = interface(JObjectClass)
    ['{C5CD17D5-F130-42F8-8265-B50DE22ED399}']
    {class} function dePack(P1: JString): JString; cdecl;//Deprecated
    {class} function generateRandomUTDID: JString; cdecl;//Deprecated
    {class} function init: JUTUtdidHelper; cdecl;//Deprecated
    {class} function pack(P1: TJavaArray<Byte>): JString; cdecl;//Deprecated
    {class} function packUtdidStr(P1: JString): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/device/UTUtdidHelper')]
  JUTUtdidHelper = interface(JObject)
    ['{6741351F-EC7B-4995-AF95-B5A645BD5DB0}']
  end;
  TJUTUtdidHelper = class(TJavaGenericImport<JUTUtdidHelperClass, JUTUtdidHelper>) end;

  JUTUtdidHelper2Class = interface(JObjectClass)
    ['{515F20EA-2FC3-40D1-A89B-3709E4D60B81}']
    {class} function dePack(P1: JString): JString; cdecl;//Deprecated
    {class} function dePackWithBase64(P1: JString): JString; cdecl;//Deprecated
    {class} function init: JUTUtdidHelper2; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/device/UTUtdidHelper2')]
  JUTUtdidHelper2 = interface(JObject)
    ['{B71C7268-FF06-407F-A1C6-D5EA2A4E59BF}']
  end;
  TJUTUtdidHelper2 = class(TJavaGenericImport<JUTUtdidHelper2Class, JUTUtdidHelper2>) end;

  JAidCallbackClass = interface(IJavaClass)
    ['{6940D9D7-C652-4BF5-929A-5A23503FB336}']
    {class} procedure onAidEventChanged(P1: Integer; P2: JString); cdecl;//Deprecated
  end;

  [JavaSignature('com/ut/device/AidCallback')]
  JAidCallback = interface(IJavaInstance)
    ['{C1BDE83F-75A6-493B-AA7C-22275DAC3C3E}']
  end;
  TJAidCallback = class(TJavaGenericImport<JAidCallbackClass, JAidCallback>) end;

  JAidConstantsClass = interface(JObjectClass)
    ['{87D2E752-8791-487C-B845-91D7B2E178E1}']
    {class} function _GetEVENT_NETWORK_ERROR: Integer; cdecl;
    {class} function _GetEVENT_REQUEST_FAILED: Integer; cdecl;
    {class} function _GetEVENT_REQUEST_STARTED: Integer; cdecl;
    {class} function _GetEVENT_REQUEST_SUCCESS: Integer; cdecl;
    {class} function init: JAidConstants; cdecl;
    {class} property EVENT_NETWORK_ERROR: Integer read _GetEVENT_NETWORK_ERROR;
    {class} property EVENT_REQUEST_FAILED: Integer read _GetEVENT_REQUEST_FAILED;
    {class} property EVENT_REQUEST_STARTED: Integer read _GetEVENT_REQUEST_STARTED;
    {class} property EVENT_REQUEST_SUCCESS: Integer read _GetEVENT_REQUEST_SUCCESS;
  end;

  [JavaSignature('com/ut/device/AidConstants')]
  JAidConstants = interface(JObject)
    ['{E2B88B15-22C0-4EBA-A672-3EA652A02187}']
  end;
  TJAidConstants = class(TJavaGenericImport<JAidConstantsClass, JAidConstants>) end;

  Jdevice_UTDeviceClass = interface(JObjectClass)
    ['{76A24B59-D5C6-4F8B-B3E8-5BA714C348E7}']
    {class} function getAid(P1: JString; P2: JString; P3: JContext): JString; cdecl;//Deprecated
    {class} procedure getAidAsync(P1: JString; P2: JString; P3: JContext; P4: JAidCallback); cdecl;//Deprecated
    {class} function getUtdid(P1: JContext): JString; cdecl;//Deprecated
    {class} function init: Jdevice_UTDevice; cdecl;//Deprecated
  end;

  [JavaSignature('com/ut/device/UTDevice')]
  Jdevice_UTDevice = interface(JObject)
    ['{BDA5BCFB-9DD3-4A3A-B912-AE63BA155CBC}']
  end;
  TJdevice_UTDevice = class(TJavaGenericImport<Jdevice_UTDeviceClass, Jdevice_UTDevice>) end;

  // java.lang.StringBuffer
  // java.lang.StringBuilder
  JAbstractSequentialListClass = interface(JAbstractListClass)
    ['{A92E28C4-6D5E-4DA2-86CA-DDC42618E862}']
    {class} procedure add(location: Integer; object_: JObject); cdecl;
    {class} function addAll(location: Integer; collection: JCollection): Boolean; cdecl;
    {class} function remove(location: Integer): JObject; cdecl;
    {class} function &set(location: Integer; object_: JObject): JObject; cdecl;
  end;

  [JavaSignature('java/util/AbstractSequentialList')]
  JAbstractSequentialList = interface(JAbstractList)
    ['{9348F5BB-85A6-4522-98D0-532EC8CC3CD5}']
    function &get(location: Integer): JObject; cdecl;
    function iterator: JIterator; cdecl;
    function listIterator(location: Integer): JListIterator; cdecl;
  end;
  TJAbstractSequentialList = class(TJavaGenericImport<JAbstractSequentialListClass, JAbstractSequentialList>) end;

  JLinkedListClass = interface(JAbstractSequentialListClass)
    ['{6993E6FF-7348-469B-8AAA-54A5EAD78369}']
    {class} function init: JLinkedList; cdecl; overload;//Deprecated
    {class} function init(collection: JCollection): JLinkedList; cdecl; overload;//Deprecated
    {class} function addAll(collection: JCollection): Boolean; cdecl; overload;
    {class} procedure addFirst(object_: JObject); cdecl;
    {class} procedure addLast(object_: JObject); cdecl;
    {class} function descendingIterator: JIterator; cdecl;
    {class} function element: JObject; cdecl;
    {class} function &get(location: Integer): JObject; cdecl;
    {class} function lastIndexOf(object_: JObject): Integer; cdecl;
    {class} function listIterator(location: Integer): JListIterator; cdecl;
    {class} function offer(o: JObject): Boolean; cdecl;
    {class} function peekFirst: JObject; cdecl;//Deprecated
    {class} function peekLast: JObject; cdecl;//Deprecated
    {class} function poll: JObject; cdecl;//Deprecated
    {class} procedure push(e: JObject); cdecl;//Deprecated
    {class} function remove(location: Integer): JObject; cdecl; overload;//Deprecated
    {class} function remove(object_: JObject): Boolean; cdecl; overload;//Deprecated
    {class} function removeFirstOccurrence(o: JObject): Boolean; cdecl;//Deprecated
    {class} function removeLast: JObject; cdecl;//Deprecated
    {class} function removeLastOccurrence(o: JObject): Boolean; cdecl;//Deprecated
    {class} function toArray(contents: TJavaObjectArray<JObject>): TJavaObjectArray<JObject>; cdecl; overload;//Deprecated
  end;

  [JavaSignature('java/util/LinkedList')]
  JLinkedList = interface(JAbstractSequentialList)
    ['{4A635C54-7C6B-4707-B3D9-880FF84F8084}']
    procedure add(location: Integer; object_: JObject); cdecl; overload;
    function add(object_: JObject): Boolean; cdecl; overload;
    function addAll(location: Integer; collection: JCollection): Boolean; cdecl; overload;
    procedure clear; cdecl;
    function clone: JObject; cdecl;
    function &contains(object_: JObject): Boolean; cdecl;
    function getFirst: JObject; cdecl;
    function getLast: JObject; cdecl;
    function indexOf(object_: JObject): Integer; cdecl;
    function offerFirst(e: JObject): Boolean; cdecl;//Deprecated
    function offerLast(e: JObject): Boolean; cdecl;//Deprecated
    function peek: JObject; cdecl;//Deprecated
    function pollFirst: JObject; cdecl;//Deprecated
    function pollLast: JObject; cdecl;//Deprecated
    function pop: JObject; cdecl;//Deprecated
    function remove: JObject; cdecl; overload;//Deprecated
    function removeFirst: JObject; cdecl;//Deprecated
    function &set(location: Integer; object_: JObject): JObject; cdecl;//Deprecated
    function size: Integer; cdecl;//Deprecated
    function toArray: TJavaObjectArray<JObject>; cdecl; overload;//Deprecated
  end;
  TJLinkedList = class(TJavaGenericImport<JLinkedListClass, JLinkedList>) end;

  JConnectionReuseStrategyClass = interface(IJavaClass)
    ['{44668B66-6645-4B14-878C-999BCBBDD45B}']
  end;

  [JavaSignature('org/apache/http/ConnectionReuseStrategy')]
  JConnectionReuseStrategy = interface(IJavaInstance)
    ['{E2039F21-FF38-475B-B61C-11C4A7919CAA}']
    function keepAlive(response: JHttpResponse; context: JHttpContext): Boolean; cdecl;
  end;
  TJConnectionReuseStrategy = class(TJavaGenericImport<JConnectionReuseStrategyClass, JConnectionReuseStrategy>) end;

  JHeaderClass = interface(IJavaClass)
    ['{589CF2B2-75D2-4C63-A335-1AD6F4F7BF29}']
    {class} function getValue: JString; cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/Header')]
  JHeader = interface(IJavaInstance)
    ['{1545C3CE-B97A-46E3-AF15-FF98E8457C5D}']
    function getElements: TJavaObjectArray<JHeaderElement>; cdecl;//Deprecated
    function getName: JString; cdecl;//Deprecated
  end;
  TJHeader = class(TJavaGenericImport<JHeaderClass, JHeader>) end;

  JHeaderElementClass = interface(IJavaClass)
    ['{FD42BB66-0F92-4D58-A313-B39DA3700197}']
    {class} function getName: JString; cdecl;//Deprecated
    {class} function getParameterCount: Integer; cdecl;//Deprecated
    {class} function getParameters: TJavaObjectArray<JNameValuePair>; cdecl;//Deprecated
    {class} function getValue: JString; cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/HeaderElement')]
  JHeaderElement = interface(IJavaInstance)
    ['{1E662490-4240-48E0-894A-CD657EFC7711}']
    function getParameter(index: Integer): JNameValuePair; cdecl;//Deprecated
    function getParameterByName(name: JString): JNameValuePair; cdecl;//Deprecated
  end;
  TJHeaderElement = class(TJavaGenericImport<JHeaderElementClass, JHeaderElement>) end;

  JHeaderIteratorClass = interface(JIteratorClass)
    ['{570A2BB6-F91F-4289-BA9B-81DC99E9E622}']
  end;

  [JavaSignature('org/apache/http/HeaderIterator')]
  JHeaderIterator = interface(JIterator)
    ['{69615D53-6AB0-43BC-9E7B-B3EF6ADDE8C3}']
    function hasNext: Boolean; cdecl;//Deprecated
    function nextHeader: JHeader; cdecl;//Deprecated
  end;
  TJHeaderIterator = class(TJavaGenericImport<JHeaderIteratorClass, JHeaderIterator>) end;

  JHttpConnectionClass = interface(IJavaClass)
    ['{C53297C2-FCCC-4112-BE4C-4A748C779A37}']
    {class} function isOpen: Boolean; cdecl;
    {class} function isStale: Boolean; cdecl;
    {class} procedure setSocketTimeout(timeout: Integer); cdecl;
  end;

  [JavaSignature('org/apache/http/HttpConnection')]
  JHttpConnection = interface(IJavaInstance)
    ['{D9CF496A-43F1-4CAB-AE8C-0BB91D68B07F}']
    procedure close; cdecl;
    function getMetrics: JHttpConnectionMetrics; cdecl;
    function getSocketTimeout: Integer; cdecl;
    procedure shutdown; cdecl;//Deprecated
  end;
  TJHttpConnection = class(TJavaGenericImport<JHttpConnectionClass, JHttpConnection>) end;

  JHttpClientConnectionClass = interface(JHttpConnectionClass)
    ['{262D8E40-A3D7-4A3B-9118-0B20C42B3501}']
    {class} procedure flush; cdecl;//Deprecated
    {class} function isResponseAvailable(timeout: Integer): Boolean; cdecl;//Deprecated
    {class} procedure receiveResponseEntity(response: JHttpResponse); cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/HttpClientConnection')]
  JHttpClientConnection = interface(JHttpConnection)
    ['{7D23A414-2C9F-45D6-9A98-88629A619D1F}']
    function receiveResponseHeader: JHttpResponse; cdecl;
    procedure sendRequestEntity(request: JHttpEntityEnclosingRequest); cdecl;
    procedure sendRequestHeader(request: JHttpRequest); cdecl;
  end;
  TJHttpClientConnection = class(TJavaGenericImport<JHttpClientConnectionClass, JHttpClientConnection>) end;

  JHttpConnectionMetricsClass = interface(IJavaClass)
    ['{BBC2B8E7-16A1-4CFF-BFF2-2F35F77A6D6C}']
    {class} function getMetric(metricName: JString): JObject; cdecl;//Deprecated
    {class} function getReceivedBytesCount: Int64; cdecl;//Deprecated
    {class} procedure reset; cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/HttpConnectionMetrics')]
  JHttpConnectionMetrics = interface(IJavaInstance)
    ['{EF972B75-57BA-4CAC-A4A4-E68C390763C4}']
    function getRequestCount: Int64; cdecl;//Deprecated
    function getResponseCount: Int64; cdecl;//Deprecated
    function getSentBytesCount: Int64; cdecl;//Deprecated
  end;
  TJHttpConnectionMetrics = class(TJavaGenericImport<JHttpConnectionMetricsClass, JHttpConnectionMetrics>) end;

  JHttpEntityClass = interface(IJavaClass)
    ['{F5B7ED25-9187-4F24-8E48-16EC24834C00}']
    {class} procedure consumeContent; cdecl;//Deprecated
    {class} function getContentType: JHeader; cdecl;//Deprecated
    {class} function isChunked: Boolean; cdecl;//Deprecated
    {class} function isRepeatable: Boolean; cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/HttpEntity')]
  JHttpEntity = interface(IJavaInstance)
    ['{F1AFF91A-2BBF-4B08-84E1-7D5BF15559C0}']
    function getContent: JInputStream; cdecl;//Deprecated
    function getContentEncoding: JHeader; cdecl;//Deprecated
    function getContentLength: Int64; cdecl;//Deprecated
    function isStreaming: Boolean; cdecl;//Deprecated
    procedure writeTo(outstream: JOutputStream); cdecl;//Deprecated
  end;
  TJHttpEntity = class(TJavaGenericImport<JHttpEntityClass, JHttpEntity>) end;

  JHttpMessageClass = interface(IJavaClass)
    ['{769F5EF5-9771-4A6E-B142-B37A3FD1E352}']
    {class} function containsHeader(name: JString): Boolean; cdecl;//Deprecated
    {class} function getAllHeaders: TJavaObjectArray<JHeader>; cdecl;//Deprecated
    {class} function getFirstHeader(name: JString): JHeader; cdecl;//Deprecated
    {class} function getProtocolVersion: JProtocolVersion; cdecl;
    {class} function headerIterator: JHeaderIterator; cdecl; overload;
    {class} function headerIterator(name: JString): JHeaderIterator; cdecl; overload;
    {class} procedure setHeader(name: JString; value: JString); cdecl; overload;
    {class} procedure setHeaders(headers: TJavaObjectArray<JHeader>); cdecl;
    {class} //procedure setParams(params: JHttpParams); cdecl;
  end;

  [JavaSignature('org/apache/http/HttpMessage')]
  JHttpMessage = interface(IJavaInstance)
    ['{77BA2E48-2EA0-44E6-9B30-1FDE4206E6E2}']
    procedure addHeader(header: JHeader); cdecl; overload;//Deprecated
    procedure addHeader(name: JString; value: JString); cdecl; overload;//Deprecated
    function getHeaders(name: JString): TJavaObjectArray<JHeader>; cdecl;
    function getLastHeader(name: JString): JHeader; cdecl;
    //function getParams: JHttpParams; cdecl;
    procedure removeHeader(header: JHeader); cdecl;
    procedure removeHeaders(name: JString); cdecl;
    procedure setHeader(header: JHeader); cdecl; overload;
  end;
  TJHttpMessage = class(TJavaGenericImport<JHttpMessageClass, JHttpMessage>) end;

  JHttpRequestClass = interface(JHttpMessageClass)
    ['{1DBB6013-86AC-4303-9CE1-6EF0AE148C1F}']
  end;

  [JavaSignature('org/apache/http/HttpRequest')]
  JHttpRequest = interface(JHttpMessage)
    ['{71D33C58-D271-428D-8350-E0F5C90CF053}']
    function getRequestLine: JRequestLine; cdecl;//Deprecated
  end;
  TJHttpRequest = class(TJavaGenericImport<JHttpRequestClass, JHttpRequest>) end;

  JHttpEntityEnclosingRequestClass = interface(JHttpRequestClass)
    ['{EF750C00-E20C-4F55-A7EC-1210D7C62E10}']
    {class} function expectContinue: Boolean; cdecl;
    {class} function getEntity: JHttpEntity; cdecl;
    {class} procedure setEntity(entity: JHttpEntity); cdecl;
  end;

  [JavaSignature('org/apache/http/HttpEntityEnclosingRequest')]
  JHttpEntityEnclosingRequest = interface(JHttpRequest)
    ['{1CF37AC6-66EA-4673-803B-8D4FF8422B4E}']
  end;
  TJHttpEntityEnclosingRequest = class(TJavaGenericImport<JHttpEntityEnclosingRequestClass, JHttpEntityEnclosingRequest>) end;

  JHttpHostClass = interface(JObjectClass)
    ['{6AB208B8-533D-4292-B759-7D13B07ED3CB}']
    {class} function _GetDEFAULT_SCHEME_NAME: JString; cdecl;
    {class} function init(hostname: JString; port: Integer; scheme: JString): JHttpHost; cdecl; overload;//Deprecated
    {class} function init(hostname: JString; port: Integer): JHttpHost; cdecl; overload;//Deprecated
    {class} function init(hostname: JString): JHttpHost; cdecl; overload;//Deprecated
    {class} function init(httphost: JHttpHost): JHttpHost; cdecl; overload;//Deprecated
    {class} function getPort: Integer; cdecl;
    {class} function getSchemeName: JString; cdecl;
    {class} function hashCode: Integer; cdecl;
    {class} property DEFAULT_SCHEME_NAME: JString read _GetDEFAULT_SCHEME_NAME;
  end;

  [JavaSignature('org/apache/http/HttpHost')]
  JHttpHost = interface(JObject)
    ['{17C5E0CC-A973-473E-913B-32525005285D}']
    function clone: JObject; cdecl;
    function equals(obj: JObject): Boolean; cdecl;
    function getHostName: JString; cdecl;
    function toHostString: JString; cdecl;//Deprecated
    function toString: JString; cdecl;//Deprecated
    function toURI: JString; cdecl;//Deprecated
  end;
  TJHttpHost = class(TJavaGenericImport<JHttpHostClass, JHttpHost>) end;

  JHttpResponseClass = interface(JHttpMessageClass)
    ['{35967E10-7901-4C83-A54C-D0A8DBFE3EAB}']
    {class} procedure setEntity(entity: JHttpEntity); cdecl;
    {class} procedure setLocale(loc: JLocale); cdecl;
    {class} procedure setReasonPhrase(reason: JString); cdecl;
    {class} procedure setStatusLine(ver: JProtocolVersion; code: Integer; reason: JString); cdecl; overload;//Deprecated
  end;

  [JavaSignature('org/apache/http/HttpResponse')]
  JHttpResponse = interface(JHttpMessage)
    ['{B3288FCA-65A7-4CD0-BFFA-708987C7EC7F}']
    function getEntity: JHttpEntity; cdecl;
    function getLocale: JLocale; cdecl;
    function getStatusLine: JStatusLine; cdecl;
    procedure setStatusCode(code: Integer); cdecl;//Deprecated
    procedure setStatusLine(statusline: JStatusLine); cdecl; overload;//Deprecated
    procedure setStatusLine(ver: JProtocolVersion; code: Integer); cdecl; overload;//Deprecated
  end;
  TJHttpResponse = class(TJavaGenericImport<JHttpResponseClass, JHttpResponse>) end;

  JHttpResponseInterceptorClass = interface(IJavaClass)
    ['{ACF19767-82E9-4B27-A6BD-AAD6AE2A3C2C}']
  end;

  [JavaSignature('org/apache/http/HttpResponseInterceptor')]
  JHttpResponseInterceptor = interface(IJavaInstance)
    ['{41F11D4A-E795-407D-B113-55C759C49B05}']
    procedure process(response: JHttpResponse; context: JHttpContext); cdecl;
  end;
  TJHttpResponseInterceptor = class(TJavaGenericImport<JHttpResponseInterceptorClass, JHttpResponseInterceptor>) end;

  JNameValuePairClass = interface(IJavaClass)
    ['{F48E930D-87E4-4AD5-AABA-1A46559260F3}']
  end;

  [JavaSignature('org/apache/http/NameValuePair')]
  JNameValuePair = interface(IJavaInstance)
    ['{91756B16-E947-4BC6-A22E-4D27B91E5A2E}']
    function getName: JString; cdecl;
    function getValue: JString; cdecl;
  end;
  TJNameValuePair = class(TJavaGenericImport<JNameValuePairClass, JNameValuePair>) end;

  JProtocolVersionClass = interface(JObjectClass)
    ['{C56E5208-0D19-47D5-896B-3FDCE955DC5B}']
    {class} function init(protocol: JString; major: Integer; minor: Integer): JProtocolVersion; cdecl;//Deprecated
    {class} function clone: JObject; cdecl;
    {class} function getMajor: Integer; cdecl;
    {class} function getMinor: Integer; cdecl;
    {class} function getProtocol: JString; cdecl;
    {class} function isComparable(that: JProtocolVersion): Boolean; cdecl;//Deprecated
    {class} function lessEquals(version: JProtocolVersion): Boolean; cdecl;//Deprecated
    {class} function toString: JString; cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/ProtocolVersion')]
  JProtocolVersion = interface(JObject)
    ['{AF19280C-20EA-4C98-8656-AC6E14724D6B}']
    function compareToVersion(that: JProtocolVersion): Integer; cdecl;
    function equals(obj: JObject): Boolean; cdecl;
    function forVersion(major: Integer; minor: Integer): JProtocolVersion; cdecl;
    function greaterEquals(version: JProtocolVersion): Boolean; cdecl;//Deprecated
    function hashCode: Integer; cdecl;//Deprecated
  end;
  TJProtocolVersion = class(TJavaGenericImport<JProtocolVersionClass, JProtocolVersion>) end;

  JRequestLineClass = interface(IJavaClass)
    ['{0442D6CB-26E0-417E-A04B-75F61DE5DBF2}']
    {class} function getProtocolVersion: JProtocolVersion; cdecl;//Deprecated
    {class} function getUri: JString; cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/RequestLine')]
  JRequestLine = interface(IJavaInstance)
    ['{970ADDDF-CF27-4BDE-BB93-1D40E494805E}']
    function getMethod: JString; cdecl;//Deprecated
  end;
  TJRequestLine = class(TJavaGenericImport<JRequestLineClass, JRequestLine>) end;

  JStatusLineClass = interface(IJavaClass)
    ['{139B984C-CA35-45C5-AA3D-64E889A1295B}']
    {class} function getProtocolVersion: JProtocolVersion; cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/StatusLine')]
  JStatusLine = interface(IJavaInstance)
    ['{A055CBF8-6D7E-4C22-B4DC-73A675009C6C}']
    function getReasonPhrase: JString; cdecl;
    function getStatusCode: Integer; cdecl;
  end;
  TJStatusLine = class(TJavaGenericImport<JStatusLineClass, JStatusLine>) end;

  JAuthSchemeClass = interface(IJavaClass)
    ['{03F47518-A7C4-432F-9949-EA87941DAE0A}']
    {class} function authenticate(credentials: JCredentials; request: JHttpRequest): JHeader; cdecl;//Deprecated
    {class} function getParameter(name: JString): JString; cdecl;//Deprecated
    {class} function isConnectionBased: Boolean; cdecl;//Deprecated
    {class} procedure processChallenge(header: JHeader); cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/auth/AuthScheme')]
  JAuthScheme = interface(IJavaInstance)
    ['{3FF7DAAF-5116-42BA-BE4B-12CBED74A89A}']
    function getRealm: JString; cdecl;//Deprecated
    function getSchemeName: JString; cdecl;//Deprecated
    function isComplete: Boolean; cdecl;//Deprecated
  end;
  TJAuthScheme = class(TJavaGenericImport<JAuthSchemeClass, JAuthScheme>) end;

  JAuthSchemeFactoryClass = interface(IJavaClass)
    ['{89ADB9B6-238E-4706-A245-45131EECF1A6}']
  end;

  [JavaSignature('org/apache/http/auth/AuthSchemeFactory')]
  JAuthSchemeFactory = interface(IJavaInstance)
    ['{AB162B5F-B8DD-4EA9-8138-550AAAADA248}']
    //function newInstance(params: JHttpParams): JAuthScheme; cdecl;//Deprecated
  end;
  TJAuthSchemeFactory = class(TJavaGenericImport<JAuthSchemeFactoryClass, JAuthSchemeFactory>) end;

  JAuthSchemeRegistryClass = interface(JObjectClass)
    ['{F7A22118-354D-4E5F-9B0A-9FC6E41A6556}']
    {class} function init: JAuthSchemeRegistry; cdecl;//Deprecated
    {class} //function getAuthScheme(name: JString; params: JHttpParams): JAuthScheme; cdecl;//Deprecated
    {class} procedure unregister(name: JString); cdecl;
  end;

  [JavaSignature('org/apache/http/auth/AuthSchemeRegistry')]
  JAuthSchemeRegistry = interface(JObject)
    ['{DE9069CA-AEB7-4295-8145-67CDDD96E15E}']
    function getSchemeNames: JList; cdecl;
    procedure register(name: JString; factory: JAuthSchemeFactory); cdecl;
    procedure setItems(map: JMap); cdecl;
  end;
  TJAuthSchemeRegistry = class(TJavaGenericImport<JAuthSchemeRegistryClass, JAuthSchemeRegistry>) end;

  JAuthScopeClass = interface(JObjectClass)
    ['{FD111C1F-F6FC-49B5-83B2-9A4610557623}']
    {class} function _GetANY: JAuthScope; cdecl;
    {class} function _GetANY_HOST: JString; cdecl;
    {class} function _GetANY_PORT: Integer; cdecl;
    {class} function _GetANY_REALM: JString; cdecl;
    {class} function _GetANY_SCHEME: JString; cdecl;
    {class} function init(host: JString; port: Integer; realm: JString; scheme: JString): JAuthScope; cdecl; overload;//Deprecated
    {class} function init(host: JString; port: Integer; realm: JString): JAuthScope; cdecl; overload;//Deprecated
    {class} function init(host: JString; port: Integer): JAuthScope; cdecl; overload;//Deprecated
    {class} function init(authscope: JAuthScope): JAuthScope; cdecl; overload;//Deprecated
    {class} function equals(o: JObject): Boolean; cdecl;
    {class} function getHost: JString; cdecl;
    {class} function hashCode: Integer; cdecl;
    {class} function match(that: JAuthScope): Integer; cdecl;
    {class} function toString: JString; cdecl;
    {class} property ANY: JAuthScope read _GetANY;
    {class} property ANY_HOST: JString read _GetANY_HOST;
    {class} property ANY_PORT: Integer read _GetANY_PORT;
    {class} property ANY_REALM: JString read _GetANY_REALM;
    {class} property ANY_SCHEME: JString read _GetANY_SCHEME;
  end;

  [JavaSignature('org/apache/http/auth/AuthScope')]
  JAuthScope = interface(JObject)
    ['{CE42C955-6B70-441C-91FB-F333AD423178}']
    function getPort: Integer; cdecl;
    function getRealm: JString; cdecl;
    function getScheme: JString; cdecl;
  end;
  TJAuthScope = class(TJavaGenericImport<JAuthScopeClass, JAuthScope>) end;

  JCredentialsClass = interface(IJavaClass)
    ['{AEA60FCA-4E56-4CC7-A91C-571CD6EC1699}']
  end;

  [JavaSignature('org/apache/http/auth/Credentials')]
  JCredentials = interface(IJavaInstance)
    ['{C8B7E448-DF38-4362-AA3F-E41F58BCC586}']
    function getPassword: JString; cdecl;//Deprecated
    function getUserPrincipal: JPrincipal; cdecl;//Deprecated
  end;
  TJCredentials = class(TJavaGenericImport<JCredentialsClass, JCredentials>) end;

  JAuthenticationHandlerClass = interface(IJavaClass)
    ['{88103D6C-22BD-4AE5-BE64-36D728952706}']
    {class} function getChallenges(response: JHttpResponse; context: JHttpContext): JMap; cdecl;
  end;

  [JavaSignature('org/apache/http/client/AuthenticationHandler')]
  JAuthenticationHandler = interface(IJavaInstance)
    ['{3EE45546-6891-44F9-A918-E6642489DE87}']
    function isAuthenticationRequested(response: JHttpResponse; context: JHttpContext): Boolean; cdecl;
    function selectScheme(challenges: JMap; response: JHttpResponse; context: JHttpContext): JAuthScheme; cdecl;
  end;
  TJAuthenticationHandler = class(TJavaGenericImport<JAuthenticationHandlerClass, JAuthenticationHandler>) end;

  JCookieStoreClass = interface(IJavaClass)
    ['{73B1BAAE-58E0-4C99-BDEF-945F33AFFB09}']
    {class} procedure clear; cdecl;//Deprecated
    {class} function clearExpired(date: JDate): Boolean; cdecl;//Deprecated
    {class} function getCookies: JList; cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/client/CookieStore')]
  JCookieStore = interface(IJavaInstance)
    ['{25E4CBBC-2B70-432C-8460-A1970320562F}']
    procedure addCookie(cookie: JCookie); cdecl;//Deprecated
  end;
  TJCookieStore = class(TJavaGenericImport<JCookieStoreClass, JCookieStore>) end;

  JCredentialsProviderClass = interface(IJavaClass)
    ['{5B39FA61-D973-42F8-837F-12309CC1F0EA}']
    {class} function getCredentials(authscope: JAuthScope): JCredentials; cdecl;//Deprecated
    {class} procedure setCredentials(authscope: JAuthScope; credentials: JCredentials); cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/client/CredentialsProvider')]
  JCredentialsProvider = interface(IJavaInstance)
    ['{E92BBDB2-4532-4E85-BFC8-869D85FBDF4E}']
    procedure clear; cdecl;//Deprecated
  end;
  TJCredentialsProvider = class(TJavaGenericImport<JCredentialsProviderClass, JCredentialsProvider>) end;

  JRedirectHandlerClass = interface(IJavaClass)
    ['{2E4965F0-4A25-47D3-80DC-F05BE4E12969}']
  end;

  [JavaSignature('org/apache/http/client/RedirectHandler')]
  JRedirectHandler = interface(IJavaInstance)
    ['{B7B3DE33-EB89-4DDF-830A-4DA0871A64D6}']
    function getLocationURI(response: JHttpResponse; context: JHttpContext): JURI; cdecl;//Deprecated
    function isRedirectRequested(response: JHttpResponse; context: JHttpContext): Boolean; cdecl;//Deprecated
  end;
  TJRedirectHandler = class(TJavaGenericImport<JRedirectHandlerClass, JRedirectHandler>) end;

  JResponseHandlerClass = interface(IJavaClass)
    ['{1C871AF7-9B56-40F6-9AE6-F8CD552CCD20}']
  end;

  [JavaSignature('org/apache/http/client/ResponseHandler')]
  JResponseHandler = interface(IJavaInstance)
    ['{54D77D7D-70A7-41C2-840E-DFAA5D9BD8C3}']
    function handleResponse(response: JHttpResponse): JObject; cdecl;//Deprecated
  end;
  TJResponseHandler = class(TJavaGenericImport<JResponseHandlerClass, JResponseHandler>) end;

  JUserTokenHandlerClass = interface(IJavaClass)
    ['{77E9B776-AA70-47BA-99FE-D3DA5B62BD6A}']
  end;

  [JavaSignature('org/apache/http/client/UserTokenHandler')]
  JUserTokenHandler = interface(IJavaInstance)
    ['{D17A393B-8FB5-42DD-9047-7D76615A81B3}']
    function getUserToken(context: JHttpContext): JObject; cdecl;//Deprecated
  end;
  TJUserTokenHandler = class(TJavaGenericImport<JUserTokenHandlerClass, JUserTokenHandler>) end;

  JAbstractHttpMessageClass = interface(JObjectClass)
    ['{035FC0CD-8336-40F3-9912-F58B0589CA93}']
    {class} procedure addHeader(header: JHeader); cdecl; overload;//Deprecated
    {class} procedure addHeader(name: JString; value: JString); cdecl; overload;//Deprecated
    {class} function containsHeader(name: JString): Boolean; cdecl;//Deprecated
    {class} function getLastHeader(name: JString): JHeader; cdecl;//Deprecated
    {class} //function getParams: JHttpParams; cdecl;//Deprecated
    {class} function headerIterator: JHeaderIterator; cdecl; overload;//Deprecated
    {class} function headerIterator(name: JString): JHeaderIterator; cdecl; overload;//Deprecated
    {class} procedure removeHeader(header: JHeader); cdecl;//Deprecated
    {class} procedure setHeaders(headers: TJavaObjectArray<JHeader>); cdecl;//Deprecated
    {class} //procedure setParams(params: JHttpParams); cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/message/AbstractHttpMessage')]
  JAbstractHttpMessage = interface(JObject)
    ['{3E0C6F90-A105-41CD-B2FF-FEA4B5534770}']
    function getAllHeaders: TJavaObjectArray<JHeader>; cdecl;//Deprecated
    function getFirstHeader(name: JString): JHeader; cdecl;//Deprecated
    function getHeaders(name: JString): TJavaObjectArray<JHeader>; cdecl;//Deprecated
    procedure removeHeaders(name: JString); cdecl;//Deprecated
    procedure setHeader(header: JHeader); cdecl; overload;//Deprecated
    procedure setHeader(name: JString; value: JString); cdecl; overload;//Deprecated
  end;
  TJAbstractHttpMessage = class(TJavaGenericImport<JAbstractHttpMessageClass, JAbstractHttpMessage>) end;

  JHttpRequestBaseClass = interface(JAbstractHttpMessageClass)
    ['{D2B5D33F-9C02-4292-806C-044B825A7A3B}']
    {class} function init: JHttpRequestBase; cdecl;//Deprecated
    {class} procedure abort; cdecl;//Deprecated
    {class} function clone: JObject; cdecl;//Deprecated
    {class} function getURI: JURI; cdecl;//Deprecated
    {class} function isAborted: Boolean; cdecl;//Deprecated
    {class} procedure setConnectionRequest(connRequest: JClientConnectionRequest); cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/client/methods/HttpRequestBase')]
  JHttpRequestBase = interface(JAbstractHttpMessage)
    ['{1EB6D05C-503B-48CD-9D65-144383983C1C}']
    function getMethod: JString; cdecl;//Deprecated
    function getProtocolVersion: JProtocolVersion; cdecl;//Deprecated
    function getRequestLine: JRequestLine; cdecl;//Deprecated
    procedure setReleaseTrigger(releaseTrigger: JConnectionReleaseTrigger); cdecl;//Deprecated
    procedure setURI(uri: JURI); cdecl;//Deprecated
  end;
  TJHttpRequestBase = class(TJavaGenericImport<JHttpRequestBaseClass, JHttpRequestBase>) end;

  JHttpEntityEnclosingRequestBaseClass = interface(JHttpRequestBaseClass)
    ['{1A3667C1-ED66-4664-B770-FFFA2A909ACC}']
    {class} function init: JHttpEntityEnclosingRequestBase; cdecl;//Deprecated
    {class} function clone: JObject; cdecl;//Deprecated
    {class} function expectContinue: Boolean; cdecl;//Deprecated
    {class} function getEntity: JHttpEntity; cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/client/methods/HttpEntityEnclosingRequestBase')]
  JHttpEntityEnclosingRequestBase = interface(JHttpRequestBase)
    ['{CFDDE6AC-7E3B-4C30-9154-CF377A198D49}']
    procedure setEntity(entity: JHttpEntity); cdecl;//Deprecated
  end;
  TJHttpEntityEnclosingRequestBase = class(TJavaGenericImport<JHttpEntityEnclosingRequestBaseClass, JHttpEntityEnclosingRequestBase>) end;

  JHttpPostClass = interface(JHttpEntityEnclosingRequestBaseClass)
    ['{759D3B73-B39E-4ACA-A575-89D41E554C42}']
    {class} function _GetMETHOD_NAME: JString; cdecl;
    {class} function init: JHttpPost; cdecl; overload;//Deprecated
    {class} function init(uri: JURI): JHttpPost; cdecl; overload;//Deprecated
    {class} function init(uri: JString): JHttpPost; cdecl; overload;//Deprecated
    {class} property METHOD_NAME: JString read _GetMETHOD_NAME;
  end;

  [JavaSignature('org/apache/http/client/methods/HttpPost')]
  JHttpPost = interface(JHttpEntityEnclosingRequestBase)
    ['{CDB4CE90-B7E5-400B-A789-BB9EF0AB6357}']
    function getMethod: JString; cdecl;
  end;
  TJHttpPost = class(TJavaGenericImport<JHttpPostClass, JHttpPost>) end;

  JHttpUriRequestClass = interface(JHttpRequestClass)
    ['{03050ACF-CA74-4FC2-92D6-79EFC584A02C}']
    {class} procedure abort; cdecl;
  end;

  [JavaSignature('org/apache/http/client/methods/HttpUriRequest')]
  JHttpUriRequest = interface(JHttpRequest)
    ['{D6BF8DE6-6768-4F0C-A77C-26AE9A17CA59}']
    function getMethod: JString; cdecl;
    function getURI: JURI; cdecl;
    function isAborted: Boolean; cdecl;
  end;
  TJHttpUriRequest = class(TJavaGenericImport<JHttpUriRequestClass, JHttpUriRequest>) end;

  JClientConnectionManagerClass = interface(IJavaClass)
    ['{FC182A29-526D-42F0-BC95-57C53C61F77D}']
    {class} procedure closeIdleConnections(idletime: Int64; tunit: JTimeUnit); cdecl;
    {class} function getSchemeRegistry: JSchemeRegistry; cdecl;
    {class} procedure releaseConnection(conn: JManagedClientConnection; validDuration: Int64; timeUnit: JTimeUnit); cdecl;
  end;

  [JavaSignature('org/apache/http/conn/ClientConnectionManager')]
  JClientConnectionManager = interface(IJavaInstance)
    ['{13B8846B-8308-4399-AFD1-6EFB5208086C}']
    procedure closeExpiredConnections; cdecl;
    function requestConnection(route: JHttpRoute; state: JObject): JClientConnectionRequest; cdecl;//Deprecated
    procedure shutdown; cdecl;//Deprecated
  end;
  TJClientConnectionManager = class(TJavaGenericImport<JClientConnectionManagerClass, JClientConnectionManager>) end;

  JClientConnectionRequestClass = interface(IJavaClass)
    ['{2CD79E84-A871-4642-B841-366423B959B9}']
    {class} procedure abortRequest; cdecl;
  end;

  [JavaSignature('org/apache/http/conn/ClientConnectionRequest')]
  JClientConnectionRequest = interface(IJavaInstance)
    ['{EB1EA890-6DA7-4EBB-99A0-CBA0D6D6FE18}']
    function getConnection(timeout: Int64; tunit: JTimeUnit): JManagedClientConnection; cdecl;
  end;
  TJClientConnectionRequest = class(TJavaGenericImport<JClientConnectionRequestClass, JClientConnectionRequest>) end;

  JConnectionReleaseTriggerClass = interface(IJavaClass)
    ['{BAD42D0B-59F1-4260-9796-6FA670BEE76B}']
  end;

  [JavaSignature('org/apache/http/conn/ConnectionReleaseTrigger')]
  JConnectionReleaseTrigger = interface(IJavaInstance)
    ['{429EBF24-4506-405F-AFEC-5085AA2F0782}']
    procedure abortConnection; cdecl;
    procedure releaseConnection; cdecl;
  end;
  TJConnectionReleaseTrigger = class(TJavaGenericImport<JConnectionReleaseTriggerClass, JConnectionReleaseTrigger>) end;

  JManagedClientConnectionClass = interface(JConnectionReleaseTriggerClass)
    ['{FBA28C84-5C60-4702-A1D5-03FC08631327}']
    {class} function getSSLSession: JSSLSession; cdecl;
    {class} function getState: JObject; cdecl;
    {class} function isMarkedReusable: Boolean; cdecl;
    {class} //procedure open(route: JHttpRoute; context: JHttpContext; params: JHttpParams); cdecl;
    {class} procedure setIdleDuration(duration: Int64; unit_: JTimeUnit); cdecl;
    {class} procedure setState(state: JObject); cdecl;
  end;

  [JavaSignature('org/apache/http/conn/ManagedClientConnection')]
  JManagedClientConnection = interface(JConnectionReleaseTrigger)
    ['{790A6967-CE13-4A3B-9ED3-A26AEB2C28DB}']
    function getRoute: JHttpRoute; cdecl;
    function isSecure: Boolean; cdecl;
    //procedure layerProtocol(context: JHttpContext; params: JHttpParams); cdecl;
    procedure markReusable; cdecl;
    //procedure tunnelProxy(next: JHttpHost; secure: Boolean; params: JHttpParams); cdecl;//Deprecated
    //procedure tunnelTarget(secure: Boolean; params: JHttpParams); cdecl;//Deprecated
    procedure unmarkReusable; cdecl;//Deprecated
  end;
  TJManagedClientConnection = class(TJavaGenericImport<JManagedClientConnectionClass, JManagedClientConnection>) end;

  JHttpRouteClass = interface(JObjectClass)
    ['{9E6EB1EE-04BF-49FF-9285-F430A15C0560}']
    {class} function init(target: JHttpHost; local: JInetAddress; proxies: TJavaObjectArray<JHttpHost>; secure: Boolean; tunnelled: JRouteInfo_TunnelType; layered: JRouteInfo_LayerType): JHttpRoute; cdecl; overload;//Deprecated
    {class} function init(target: JHttpHost; local: JInetAddress; proxy: JHttpHost; secure: Boolean; tunnelled: JRouteInfo_TunnelType; layered: JRouteInfo_LayerType): JHttpRoute; cdecl; overload;//Deprecated
    {class} function init(target: JHttpHost; local: JInetAddress; secure: Boolean): JHttpRoute; cdecl; overload;//Deprecated
    {class} function init(target: JHttpHost): JHttpRoute; cdecl; overload;//Deprecated
    {class} function init(target: JHttpHost; local: JInetAddress; proxy: JHttpHost; secure: Boolean): JHttpRoute; cdecl; overload;//Deprecated
    {class} function clone: JObject; cdecl;
    {class} function getLayerType: JRouteInfo_LayerType; cdecl;
    {class} function getLocalAddress: JInetAddress; cdecl;
    {class} function hashCode: Integer; cdecl;
    {class} function isLayered: Boolean; cdecl;
    {class} function isSecure: Boolean; cdecl;
  end;

  [JavaSignature('org/apache/http/conn/routing/HttpRoute')]
  JHttpRoute = interface(JObject)
    ['{76E07FD3-8742-46A1-B862-80EB4F5748C8}']
    function equals(o: JObject): Boolean; cdecl;
    function getHopCount: Integer; cdecl;
    function getHopTarget(hop: Integer): JHttpHost; cdecl;
    function getProxyHost: JHttpHost; cdecl;
    function getTargetHost: JHttpHost; cdecl;
    function getTunnelType: JRouteInfo_TunnelType; cdecl;
    function isTunnelled: Boolean; cdecl;//Deprecated
    function toString: JString; cdecl;//Deprecated
  end;
  TJHttpRoute = class(TJavaGenericImport<JHttpRouteClass, JHttpRoute>) end;

  JHttpRoutePlannerClass = interface(IJavaClass)
    ['{18D8506A-3FAB-4003-9AE0-341A267AAF7E}']
  end;

  [JavaSignature('org/apache/http/conn/routing/HttpRoutePlanner')]
  JHttpRoutePlanner = interface(IJavaInstance)
    ['{D398A4DA-7744-4F4A-B5E9-8E99533B6BBF}']
    function determineRoute(target: JHttpHost; request: JHttpRequest; context: JHttpContext): JHttpRoute; cdecl;
  end;
  TJHttpRoutePlanner = class(TJavaGenericImport<JHttpRoutePlannerClass, JHttpRoutePlanner>) end;

  JRouteInfo_LayerTypeClass = interface(JEnumClass)
    ['{60048D75-EA8E-410F-88E0-1BD36C9A028C}']
    {class} function _GetLAYERED: JRouteInfo_LayerType; cdecl;
    {class} function _GetPLAIN: JRouteInfo_LayerType; cdecl;
    {class} function valueOf(name: JString): JRouteInfo_LayerType; cdecl;//Deprecated
    {class} function values: TJavaObjectArray<JRouteInfo_LayerType>; cdecl;//Deprecated
    {class} property LAYERED: JRouteInfo_LayerType read _GetLAYERED;
    {class} property PLAIN: JRouteInfo_LayerType read _GetPLAIN;
  end;

  [JavaSignature('org/apache/http/conn/routing/RouteInfo$LayerType')]
  JRouteInfo_LayerType = interface(JEnum)
    ['{C8F1AD6F-3575-42E0-8476-273A37A201F4}']
  end;
  TJRouteInfo_LayerType = class(TJavaGenericImport<JRouteInfo_LayerTypeClass, JRouteInfo_LayerType>) end;

  JRouteInfo_TunnelTypeClass = interface(JEnumClass)
    ['{28D7840F-39A6-4911-B716-86E718E766B6}']
    {class} function _GetPLAIN: JRouteInfo_TunnelType; cdecl;
    {class} function _GetTUNNELLED: JRouteInfo_TunnelType; cdecl;
    {class} function valueOf(name: JString): JRouteInfo_TunnelType; cdecl;//Deprecated
    {class} function values: TJavaObjectArray<JRouteInfo_TunnelType>; cdecl;//Deprecated
    {class} property PLAIN: JRouteInfo_TunnelType read _GetPLAIN;
    {class} property TUNNELLED: JRouteInfo_TunnelType read _GetTUNNELLED;
  end;

  [JavaSignature('org/apache/http/conn/routing/RouteInfo$TunnelType')]
  JRouteInfo_TunnelType = interface(JEnum)
    ['{F608BF71-A853-49EE-9592-0D829D50A201}']
  end;
  TJRouteInfo_TunnelType = class(TJavaGenericImport<JRouteInfo_TunnelTypeClass, JRouteInfo_TunnelType>) end;

  JSchemeClass = interface(JObjectClass)
    ['{635CDE67-A624-486C-9E6E-B6A8473B08BA}']
    {class} //function init(name: JString; factory: JSocketFactory; port: Integer): JScheme; cdecl;//Deprecated
    {class} function getDefaultPort: Integer; cdecl;
    {class} function getName: JString; cdecl;
    {class} //function getSocketFactory: JSocketFactory; cdecl;
    {class} function toString: JString; cdecl;
  end;

  [JavaSignature('org/apache/http/conn/scheme/Scheme')]
  JScheme = interface(JObject)
    ['{4AC448F9-BB4D-4DED-BB8E-9355A6C11CAC}']
    function equals(obj: JObject): Boolean; cdecl;
    function hashCode: Integer; cdecl;
    function isLayered: Boolean; cdecl;
    function resolvePort(port: Integer): Integer; cdecl;
  end;
  TJScheme = class(TJavaGenericImport<JSchemeClass, JScheme>) end;

  JSchemeRegistryClass = interface(JObjectClass)
    ['{C1ED374C-96B9-4496-9F3D-2BAB87B516A5}']
    {class} function init: JSchemeRegistry; cdecl;//Deprecated
    {class} function &get(name: JString): JScheme; cdecl;
    {class} function getScheme(name: JString): JScheme; cdecl; overload;
    {class} procedure setItems(map: JMap); cdecl;//Deprecated
    {class} function unregister(name: JString): JScheme; cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/conn/scheme/SchemeRegistry')]
  JSchemeRegistry = interface(JObject)
    ['{A984A32C-5289-4E06-93F3-44BA21B230C4}']
    function getScheme(host: JHttpHost): JScheme; cdecl; overload;//Deprecated
    function getSchemeNames: JList; cdecl;//Deprecated
    function register(sch: JScheme): JScheme; cdecl;//Deprecated
  end;
  TJSchemeRegistry = class(TJavaGenericImport<JSchemeRegistryClass, JSchemeRegistry>) end;

  JCookieClass = interface(IJavaClass)
    ['{E7050B1C-560A-44C1-8D16-7A4B462AD730}']
    {class} function getComment: JString; cdecl;//Deprecated
    {class} function getCommentURL: JString; cdecl;//Deprecated
    {class} function getDomain: JString; cdecl;//Deprecated
    {class} function getPorts: TJavaArray<Integer>; cdecl;//Deprecated
    {class} function getValue: JString; cdecl;//Deprecated
    {class} function getVersion: Integer; cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/cookie/Cookie')]
  JCookie = interface(IJavaInstance)
    ['{380B776E-27A5-4A2A-B789-430F13BF76DE}']
    function getExpiryDate: JDate; cdecl;//Deprecated
    function getName: JString; cdecl;//Deprecated
    function getPath: JString; cdecl;//Deprecated
    function isExpired(date: JDate): Boolean; cdecl;//Deprecated
    function isPersistent: Boolean; cdecl;//Deprecated
    function isSecure: Boolean; cdecl;//Deprecated
  end;
  TJCookie = class(TJavaGenericImport<JCookieClass, JCookie>) end;

  JCookieOriginClass = interface(JObjectClass)
    ['{42AB6407-775C-4087-BA49-446863354251}']
    {class} function init(host: JString; port: Integer; path: JString; secure: Boolean): JCookieOrigin; cdecl;//Deprecated
    {class} function getPath: JString; cdecl;
    {class} function getPort: Integer; cdecl;
    {class} function isSecure: Boolean; cdecl;
  end;

  [JavaSignature('org/apache/http/cookie/CookieOrigin')]
  JCookieOrigin = interface(JObject)
    ['{A4882607-5641-4AE3-87EE-404EE0E1AFBB}']
    function getHost: JString; cdecl;
    function toString: JString; cdecl;//Deprecated
  end;
  TJCookieOrigin = class(TJavaGenericImport<JCookieOriginClass, JCookieOrigin>) end;

  JCookieSpecClass = interface(IJavaClass)
    ['{E2391BED-B581-44A5-AE30-1A2F9C269D69}']
    {class} function match(cookie: JCookie; origin: JCookieOrigin): Boolean; cdecl;//Deprecated
    {class} function parse(header: JHeader; origin: JCookieOrigin): JList; cdecl;//Deprecated
    {class} procedure validate(cookie: JCookie; origin: JCookieOrigin); cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/cookie/CookieSpec')]
  JCookieSpec = interface(IJavaInstance)
    ['{0248E0DD-3AE4-4451-84E2-330818DD4C47}']
    function formatCookies(cookies: JList): JList; cdecl;//Deprecated
    function getVersion: Integer; cdecl;//Deprecated
    function getVersionHeader: JHeader; cdecl;//Deprecated
  end;
  TJCookieSpec = class(TJavaGenericImport<JCookieSpecClass, JCookieSpec>) end;

  JCookieSpecFactoryClass = interface(IJavaClass)
    ['{025662F3-0BAC-43C9-A03F-B978376A2F3D}']
    {class} //function newInstance(params: JHttpParams): JCookieSpec; cdecl;
  end;

  [JavaSignature('org/apache/http/cookie/CookieSpecFactory')]
  JCookieSpecFactory = interface(IJavaInstance)
    ['{843CD984-93ED-42FA-BBD3-0C6C4381F09F}']
  end;
  TJCookieSpecFactory = class(TJavaGenericImport<JCookieSpecFactoryClass, JCookieSpecFactory>) end;

  JCookieSpecRegistryClass = interface(JObjectClass)
    ['{F16CAFC2-EC46-4641-82D6-1A904E7C957F}']
    {class} function init: JCookieSpecRegistry; cdecl;//Deprecated
    {class} //function getCookieSpec(name: JString; params: JHttpParams): JCookieSpec; cdecl; overload;
    {class} procedure setItems(map: JMap); cdecl;
    {class} procedure unregister(id: JString); cdecl;
  end;

  [JavaSignature('org/apache/http/cookie/CookieSpecRegistry')]
  JCookieSpecRegistry = interface(JObject)
    ['{7AB205D7-2F8C-4272-9E10-02E4F51BE0AE}']
    function getCookieSpec(name: JString): JCookieSpec; cdecl; overload;
    function getSpecNames: JList; cdecl;
    procedure register(name: JString; factory: JCookieSpecFactory); cdecl;
  end;
  TJCookieSpecRegistry = class(TJavaGenericImport<JCookieSpecRegistryClass, JCookieSpecRegistry>) end;

  JAbstractHttpEntityClass = interface(JObjectClass)
    ['{9FDA815E-02E0-42FF-88AC-BA9B3465F38D}']
    {class} function isChunked: Boolean; cdecl;//Deprecated
    {class} procedure setChunked(b: Boolean); cdecl;//Deprecated
    {class} procedure setContentEncoding(contentEncoding: JHeader); cdecl; overload;//Deprecated
  end;

  [JavaSignature('org/apache/http/entity/AbstractHttpEntity')]
  JAbstractHttpEntity = interface(JObject)
    ['{A9495467-0B90-49C9-9604-E61DDF1C5798}']
    procedure consumeContent; cdecl;//Deprecated
    function getContentEncoding: JHeader; cdecl;//Deprecated
    function getContentType: JHeader; cdecl;//Deprecated
    procedure setContentEncoding(ceString: JString); cdecl; overload;
    procedure setContentType(contentType: JHeader); cdecl; overload;
    procedure setContentType(ctString: JString); cdecl; overload;
  end;
  TJAbstractHttpEntity = class(TJavaGenericImport<JAbstractHttpEntityClass, JAbstractHttpEntity>) end;

  JBasicHttpProcessorClass = interface(JObjectClass)
    ['{2D1EE7FA-6263-4FC4-9003-35172237B3DA}']
    {class} function init: JBasicHttpProcessor; cdecl;//Deprecated
    {class} procedure addInterceptor(interceptor: JHttpResponseInterceptor; index: Integer); cdecl; overload;//Deprecated
    {class} procedure addRequestInterceptor(itcp: JHttpRequestInterceptor); cdecl; overload;//Deprecated
    {class} procedure addRequestInterceptor(itcp: JHttpRequestInterceptor; index: Integer); cdecl; overload;//Deprecated
    {class} procedure addResponseInterceptor(itcp: JHttpResponseInterceptor; index: Integer); cdecl; overload;
    {class} procedure clearResponseInterceptors; cdecl;
    {class} function clone: JObject; cdecl;
    {class} function copy: JBasicHttpProcessor; cdecl;
    {class} function getResponseInterceptor(index: Integer): JHttpResponseInterceptor; cdecl;
    {class} function getResponseInterceptorCount: Integer; cdecl;
    {class} procedure process(request: JHttpRequest; context: JHttpContext); cdecl; overload;
    {class} procedure setInterceptors(list: JList); cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/protocol/BasicHttpProcessor')]
  JBasicHttpProcessor = interface(JObject)
    ['{D8FB41DF-77B2-4813-8FE1-B8731400C4EE}']
    procedure addInterceptor(interceptor: JHttpRequestInterceptor); cdecl; overload;//Deprecated
    procedure addInterceptor(interceptor: JHttpRequestInterceptor; index: Integer); cdecl; overload;//Deprecated
    procedure addInterceptor(interceptor: JHttpResponseInterceptor); cdecl; overload;//Deprecated
    procedure addResponseInterceptor(itcp: JHttpResponseInterceptor); cdecl; overload;
    procedure clearInterceptors; cdecl;
    procedure clearRequestInterceptors; cdecl;
    function getRequestInterceptor(index: Integer): JHttpRequestInterceptor; cdecl;
    function getRequestInterceptorCount: Integer; cdecl;
    procedure process(response: JHttpResponse; context: JHttpContext); cdecl; overload;//Deprecated
    procedure removeRequestInterceptorByClass(clazz: Jlang_Class); cdecl;//Deprecated
    procedure removeResponseInterceptorByClass(clazz: Jlang_Class); cdecl;//Deprecated
  end;
  TJBasicHttpProcessor = class(TJavaGenericImport<JBasicHttpProcessorClass, JBasicHttpProcessor>) end;

  JHttpContextClass = interface(IJavaClass)
    ['{7201EEAB-2CA1-49F7-8D1B-B136E0908F58}']
    {class} function _GetRESERVED_PREFIX: JString; cdecl;
    {class} function getAttribute(id: JString): JObject; cdecl;
    {class} property RESERVED_PREFIX: JString read _GetRESERVED_PREFIX;
  end;

  [JavaSignature('org/apache/http/protocol/HttpContext')]
  JHttpContext = interface(IJavaInstance)
    ['{7A5C3529-9406-4465-B56E-0827D1D1FD32}']
    function removeAttribute(id: JString): JObject; cdecl;
    procedure setAttribute(id: JString; obj: JObject); cdecl;
  end;
  TJHttpContext = class(TJavaGenericImport<JHttpContextClass, JHttpContext>) end;

  JHttpProcessorClass = interface(JHttpRequestInterceptorClass)
    ['{B6EB12DA-5D46-4C49-88DF-0B43E1FE2E11}']
  end;

  [JavaSignature('org/apache/http/protocol/HttpProcessor')]
  JHttpProcessor = interface(JHttpRequestInterceptor)
    ['{7D717389-A90C-454D-8FA1-88DBD2F204F2}']
  end;
  TJHttpProcessor = class(TJavaGenericImport<JHttpProcessorClass, JHttpProcessor>) end;

  JHttpRequestExecutorClass = interface(JObjectClass)
    ['{13BB5E0E-6965-4AD1-9A79-334BC0F0A3AD}']
    {class} function init: JHttpRequestExecutor; cdecl;//Deprecated
    {class} procedure postProcess(response: JHttpResponse; processor: JHttpProcessor; context: JHttpContext); cdecl;//Deprecated
    {class} procedure preProcess(request: JHttpRequest; processor: JHttpProcessor; context: JHttpContext); cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/protocol/HttpRequestExecutor')]
  JHttpRequestExecutor = interface(JObject)
    ['{8CD354C7-5544-4140-8929-BC56D5F85DAE}']
    function execute(request: JHttpRequest; conn: JHttpClientConnection; context: JHttpContext): JHttpResponse; cdecl;//Deprecated
  end;
  TJHttpRequestExecutor = class(TJavaGenericImport<JHttpRequestExecutorClass, JHttpRequestExecutor>) end;

  Jalipay_JSONExceptionClass = interface(JExceptionClass)
    ['{21D74A72-10FE-4DD5-BE52-F71A04FEA699}']
    {class} function getCause: JThrowable; cdecl;//Deprecated
    {class} function init(P1: JThrowable): Jalipay_JSONException; cdecl; overload;//Deprecated
    {class} function init(P1: JString): Jalipay_JSONException; cdecl; overload;//Deprecated
  end;

  [JavaSignature('org/json/alipay/JSONException')]
  Jalipay_JSONException = interface(JException)
    ['{0AC7DE45-A0F6-420F-9BF7-B1A934F5B8D5}']
  end;
  TJalipay_JSONException = class(TJavaGenericImport<Jalipay_JSONExceptionClass, Jalipay_JSONException>) end;

  Jalipay_aClass = interface(JObjectClass)
    ['{989F766E-A6F1-4110-B4E2-44B07708D9D9}']
    {class} function a: Integer; cdecl; overload;//Deprecated
    {class} function a(P1: Integer): JObject; cdecl; overload;//Deprecated
    {class} function init: Jalipay_a; cdecl; overload;//Deprecated
    {class} function init(P1: JObject): Jalipay_a; cdecl; overload;//Deprecated
    {class} function init(P1: Jalipay_c): Jalipay_a; cdecl; overload;//Deprecated
    {class} function init(P1: JString): Jalipay_a; cdecl; overload;//Deprecated
    {class} function init(P1: JCollection): Jalipay_a; cdecl; overload;//Deprecated
    {class} function toString: JString; cdecl;//Deprecated
  end;

  [JavaSignature('org/json/alipay/a')]
  Jalipay_a = interface(JObject)
    ['{E458B775-7B9C-466C-82CA-D36D62D7AA6D}']
  end;
  TJalipay_a = class(TJavaGenericImport<Jalipay_aClass, Jalipay_a>) end;

  Jalipay_bClass = interface(JObjectClass)
    ['{63C72C33-B64D-4C75-A964-958B382E070F}']
    {class} function _Geta: JObject; cdecl;
    {class} function a(P1: JObject): JString; cdecl; overload;
    {class} function c(P1: JString): JString; cdecl;
    {class} function init: Jalipay_b; cdecl; overload;
    {class} function init(P1: Jalipay_c): Jalipay_b; cdecl; overload;
    {class} function init(P1: JString): Jalipay_b; cdecl; overload;
    {class} function init(P1: JMap): Jalipay_b; cdecl; overload;
    {class} property a: JObject read _Geta;
  end;

  [JavaSignature('org/json/alipay/b')]
  Jalipay_b = interface(JObject)
    ['{F95C5DB7-3BB8-4692-B856-A328CA928884}']
    function a: JIterator; cdecl; overload;
    function a(P1: JString): JObject; cdecl; overload;
    function b(P1: JString): Boolean; cdecl;
    function toString: JString; cdecl;
  end;
  TJalipay_b = class(TJavaGenericImport<Jalipay_bClass, Jalipay_b>) end;

  Jalipay_b_aClass = interface(JObjectClass)
    ['{06487B3B-FB54-4683-A5CE-5112452F747D}']
    {class} function equals(P1: JObject): Boolean; cdecl;//Deprecated
    {class} function toString: JString; cdecl;//Deprecated
  end;

  [JavaSignature('org/json/alipay/b$a')]
  Jalipay_b_a = interface(JObject)
    ['{616356B1-1254-49BA-A831-0F2A3B3D5AEF}']
  end;
  TJalipay_b_a = class(TJavaGenericImport<Jalipay_b_aClass, Jalipay_b_a>) end;

  Jalipay_cClass = interface(JObjectClass)
    ['{AD4B8367-AFBA-4A53-AAC5-A140EED7F4E7}']
    {class} procedure a; cdecl; overload;//Deprecated
    {class} function a(P1: JString): Jalipay_JSONException; cdecl; overload;//Deprecated
    {class} function b: Char; cdecl;//Deprecated
    {class} function c: Char; cdecl;//Deprecated
    {class} function d: JObject; cdecl;//Deprecated
    {class} function init(P1: JString): Jalipay_c; cdecl;//Deprecated
    {class} function toString: JString; cdecl;//Deprecated
  end;

  [JavaSignature('org/json/alipay/c')]
  Jalipay_c = interface(JObject)
    ['{4B74E3DD-8AF8-49F4-9896-9DF771C2DA7E}']
  end;
  TJalipay_c = class(TJavaGenericImport<Jalipay_cClass, Jalipay_c>) end;

implementation

procedure RegisterTypes;
begin
  TRegTypes.RegisterType('Android.JNI.AliPay.JAccount', TypeInfo(Android.JNI.AliPay.JAccount));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_i', TypeInfo(Android.JNI.AliPay.Ja_i));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_a_a', TypeInfo(Android.JNI.AliPay.Ja_a_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_b', TypeInfo(Android.JNI.AliPay.Ja_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_c', TypeInfo(Android.JNI.AliPay.Ja_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_d', TypeInfo(Android.JNI.AliPay.Ja_d));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_e', TypeInfo(Android.JNI.AliPay.Ja_e));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_f', TypeInfo(Android.JNI.AliPay.Ja_f));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_g', TypeInfo(Android.JNI.AliPay.Ja_g));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_h', TypeInfo(Android.JNI.AliPay.Ja_h));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_j', TypeInfo(Android.JNI.AliPay.Ja_j));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_k', TypeInfo(Android.JNI.AliPay.Ja_k));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_l', TypeInfo(Android.JNI.AliPay.Ja_l));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jb_a', TypeInfo(Android.JNI.AliPay.Jb_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_HttpException', TypeInfo(Android.JNI.AliPay.Jcore_HttpException));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpUrlHeader', TypeInfo(Android.JNI.AliPay.JHttpUrlHeader));
  TRegTypes.RegisterType('Android.JNI.AliPay.JRpcException', TypeInfo(Android.JNI.AliPay.JRpcException));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jv', TypeInfo(Android.JNI.AliPay.Jv));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_a', TypeInfo(Android.JNI.AliPay.Jcore_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_a_c', TypeInfo(Android.JNI.AliPay.Jcore_a_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_a_a', TypeInfo(Android.JNI.AliPay.Jcore_a_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_a_f', TypeInfo(Android.JNI.AliPay.Jcore_a_f));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_a_b', TypeInfo(Android.JNI.AliPay.Jcore_a_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_a_d', TypeInfo(Android.JNI.AliPay.Jcore_a_d));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_a_e', TypeInfo(Android.JNI.AliPay.Jcore_a_e));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jaa', TypeInfo(Android.JNI.AliPay.Jaa));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jab', TypeInfo(Android.JNI.AliPay.Jab));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jac', TypeInfo(Android.JNI.AliPay.Jac));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpRequestRetryHandler', TypeInfo(Android.JNI.AliPay.JHttpRequestRetryHandler));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_ad', TypeInfo(Android.JNI.AliPay.Jcore_ad));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpClient', TypeInfo(Android.JNI.AliPay.JHttpClient));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_b', TypeInfo(Android.JNI.AliPay.Jcore_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpRequestInterceptor', TypeInfo(Android.JNI.AliPay.JHttpRequestInterceptor));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_b_a', TypeInfo(Android.JNI.AliPay.Jcore_b_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jb_b', TypeInfo(Android.JNI.AliPay.Jb_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_c', TypeInfo(Android.JNI.AliPay.Jcore_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAbstractHttpClient', TypeInfo(Android.JNI.AliPay.JAbstractHttpClient));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDefaultHttpClient', TypeInfo(Android.JNI.AliPay.JDefaultHttpClient));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_d', TypeInfo(Android.JNI.AliPay.Jcore_d));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDefaultRedirectHandler', TypeInfo(Android.JNI.AliPay.JDefaultRedirectHandler));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_e', TypeInfo(Android.JNI.AliPay.Jcore_e));
  TRegTypes.RegisterType('Android.JNI.AliPay.JConnectionKeepAliveStrategy', TypeInfo(Android.JNI.AliPay.JConnectionKeepAliveStrategy));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_f', TypeInfo(Android.JNI.AliPay.Jcore_f));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_g', TypeInfo(Android.JNI.AliPay.Jcore_g));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_w', TypeInfo(Android.JNI.AliPay.Jcore_w));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_h', TypeInfo(Android.JNI.AliPay.Jcore_h));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_i', TypeInfo(Android.JNI.AliPay.Jcore_i));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_j', TypeInfo(Android.JNI.AliPay.Jcore_j));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_k', TypeInfo(Android.JNI.AliPay.Jcore_k));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jk_a', TypeInfo(Android.JNI.AliPay.Jk_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_l', TypeInfo(Android.JNI.AliPay.Jcore_l));
  TRegTypes.RegisterType('Android.JNI.AliPay.JFutureTask', TypeInfo(Android.JNI.AliPay.JFutureTask));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_m', TypeInfo(Android.JNI.AliPay.Jcore_m));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_n', TypeInfo(Android.JNI.AliPay.Jcore_n));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jt', TypeInfo(Android.JNI.AliPay.Jt));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_o', TypeInfo(Android.JNI.AliPay.Jcore_o));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ju', TypeInfo(Android.JNI.AliPay.Ju));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jp', TypeInfo(Android.JNI.AliPay.Jp));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jq', TypeInfo(Android.JNI.AliPay.Jq));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_r', TypeInfo(Android.JNI.AliPay.Jcore_r));
  TRegTypes.RegisterType('Android.JNI.AliPay.Js', TypeInfo(Android.JNI.AliPay.Js));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jx', TypeInfo(Android.JNI.AliPay.Jx));
  TRegTypes.RegisterType('Android.JNI.AliPay.JInvocationHandler', TypeInfo(Android.JNI.AliPay.JInvocationHandler));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jy', TypeInfo(Android.JNI.AliPay.Jy));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jz', TypeInfo(Android.JNI.AliPay.Jz));
  TRegTypes.RegisterType('Android.JNI.AliPay.Japmobilesecuritysdk_a_a', TypeInfo(Android.JNI.AliPay.Japmobilesecuritysdk_a_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Japmobilesecuritysdk_b_a', TypeInfo(Android.JNI.AliPay.Japmobilesecuritysdk_b_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_a', TypeInfo(Android.JNI.AliPay.Jc_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jd_a', TypeInfo(Android.JNI.AliPay.Jd_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jd_b', TypeInfo(Android.JNI.AliPay.Jd_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jd_c', TypeInfo(Android.JNI.AliPay.Jd_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jd_d', TypeInfo(Android.JNI.AliPay.Jd_d));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jd_e', TypeInfo(Android.JNI.AliPay.Jd_e));
  TRegTypes.RegisterType('Android.JNI.AliPay.Je_a', TypeInfo(Android.JNI.AliPay.Je_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jf_a', TypeInfo(Android.JNI.AliPay.Jf_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jf_b', TypeInfo(Android.JNI.AliPay.Jf_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jf_c', TypeInfo(Android.JNI.AliPay.Jf_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jf_d', TypeInfo(Android.JNI.AliPay.Jf_d));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jf_e', TypeInfo(Android.JNI.AliPay.Jf_e));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jf_f', TypeInfo(Android.JNI.AliPay.Jf_f));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jf_g', TypeInfo(Android.JNI.AliPay.Jf_g));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jf_h', TypeInfo(Android.JNI.AliPay.Jf_h));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jf_i', TypeInfo(Android.JNI.AliPay.Jf_i));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAPSecuritySdk', TypeInfo(Android.JNI.AliPay.JAPSecuritySdk));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAPSecuritySdk_1', TypeInfo(Android.JNI.AliPay.JAPSecuritySdk_1));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAPSecuritySdk_InitResultListener', TypeInfo(Android.JNI.AliPay.JAPSecuritySdk_InitResultListener));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAPSecuritySdk_TokenResult', TypeInfo(Android.JNI.AliPay.JAPSecuritySdk_TokenResult));
  TRegTypes.RegisterType('Android.JNI.AliPay.JEnvModeConfig', TypeInfo(Android.JNI.AliPay.JEnvModeConfig));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jg_a', TypeInfo(Android.JNI.AliPay.Jg_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jg_b', TypeInfo(Android.JNI.AliPay.Jg_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jg_c', TypeInfo(Android.JNI.AliPay.Jg_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_a_a_a', TypeInfo(Android.JNI.AliPay.Ja_a_a_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_a_a_a_a', TypeInfo(Android.JNI.AliPay.Ja_a_a_a_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_a_b', TypeInfo(Android.JNI.AliPay.Ja_a_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_a_c', TypeInfo(Android.JNI.AliPay.Ja_a_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_a_a_b', TypeInfo(Android.JNI.AliPay.Ja_a_a_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_b_a', TypeInfo(Android.JNI.AliPay.Ja_b_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_b_b', TypeInfo(Android.JNI.AliPay.Ja_b_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jb_c', TypeInfo(Android.JNI.AliPay.Jb_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jb_d', TypeInfo(Android.JNI.AliPay.Jb_d));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_c_a', TypeInfo(Android.JNI.AliPay.Ja_c_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_a_a', TypeInfo(Android.JNI.AliPay.Jc_a_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_a_b', TypeInfo(Android.JNI.AliPay.Jc_a_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_a_c', TypeInfo(Android.JNI.AliPay.Jc_a_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_b', TypeInfo(Android.JNI.AliPay.Jc_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_b_a', TypeInfo(Android.JNI.AliPay.Jc_b_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_b_b', TypeInfo(Android.JNI.AliPay.Jc_b_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_c', TypeInfo(Android.JNI.AliPay.Jc_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_d', TypeInfo(Android.JNI.AliPay.Jc_d));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_d_a', TypeInfo(Android.JNI.AliPay.Ja_d_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_d_b', TypeInfo(Android.JNI.AliPay.Ja_d_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_d_c', TypeInfo(Android.JNI.AliPay.Ja_d_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_e_a', TypeInfo(Android.JNI.AliPay.Ja_e_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Je_b', TypeInfo(Android.JNI.AliPay.Je_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Je_c', TypeInfo(Android.JNI.AliPay.Je_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Je_d', TypeInfo(Android.JNI.AliPay.Je_d));
  TRegTypes.RegisterType('Android.JNI.AliPay.JOperationType', TypeInfo(Android.JNI.AliPay.JOperationType));
  TRegTypes.RegisterType('Android.JNI.AliPay.JResetCookie', TypeInfo(Android.JNI.AliPay.JResetCookie));
  TRegTypes.RegisterType('Android.JNI.AliPay.JUpdateDeviceInfo', TypeInfo(Android.JNI.AliPay.JUpdateDeviceInfo));
  TRegTypes.RegisterType('Android.JNI.AliPay.JSecurityClientMobile', TypeInfo(Android.JNI.AliPay.JSecurityClientMobile));
  TRegTypes.RegisterType('Android.JNI.AliPay.JBugTrackMessageService', TypeInfo(Android.JNI.AliPay.JBugTrackMessageService));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAppListCmdService', TypeInfo(Android.JNI.AliPay.JAppListCmdService));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDeviceDataReportService', TypeInfo(Android.JNI.AliPay.JDeviceDataReportService));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAppListCmdRequest', TypeInfo(Android.JNI.AliPay.JAppListCmdRequest));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDeviceDataReportRequest', TypeInfo(Android.JNI.AliPay.JDeviceDataReportRequest));
  TRegTypes.RegisterType('Android.JNI.AliPay.JBaseResult', TypeInfo(Android.JNI.AliPay.JBaseResult));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAppListResult', TypeInfo(Android.JNI.AliPay.JAppListResult));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAppListCmdResult', TypeInfo(Android.JNI.AliPay.JAppListCmdResult));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDeviceDataReportResult', TypeInfo(Android.JNI.AliPay.JDeviceDataReportResult));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAidManager', TypeInfo(Android.JNI.AliPay.JAidManager));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAidRequester', TypeInfo(Android.JNI.AliPay.JAidRequester));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAidRequester_PostRestThread', TypeInfo(Android.JNI.AliPay.JAidRequester_PostRestThread));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAidStorageController', TypeInfo(Android.JNI.AliPay.JAidStorageController));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAESUtils', TypeInfo(Android.JNI.AliPay.JAESUtils));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jutils_Base64', TypeInfo(Android.JNI.AliPay.Jutils_Base64));
  TRegTypes.RegisterType('Android.JNI.AliPay.JBase64_Coder', TypeInfo(Android.JNI.AliPay.JBase64_Coder));
  TRegTypes.RegisterType('Android.JNI.AliPay.JBase64_Decoder', TypeInfo(Android.JNI.AliPay.JBase64_Decoder));
  TRegTypes.RegisterType('Android.JNI.AliPay.JBase64_Encoder', TypeInfo(Android.JNI.AliPay.JBase64_Encoder));
  TRegTypes.RegisterType('Android.JNI.AliPay.JBase64Helper', TypeInfo(Android.JNI.AliPay.JBase64Helper));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jutils_DebugUtils', TypeInfo(Android.JNI.AliPay.Jutils_DebugUtils));
  TRegTypes.RegisterType('Android.JNI.AliPay.JIntUtils', TypeInfo(Android.JNI.AliPay.JIntUtils));
  TRegTypes.RegisterType('Android.JNI.AliPay.JNetworkUtils', TypeInfo(Android.JNI.AliPay.JNetworkUtils));
  TRegTypes.RegisterType('Android.JNI.AliPay.JPhoneInfoUtils', TypeInfo(Android.JNI.AliPay.JPhoneInfoUtils));
  TRegTypes.RegisterType('Android.JNI.AliPay.JSharedPreferenceHelper', TypeInfo(Android.JNI.AliPay.JSharedPreferenceHelper));
  TRegTypes.RegisterType('Android.JNI.AliPay.JStringUtils', TypeInfo(Android.JNI.AliPay.JStringUtils));
  TRegTypes.RegisterType('Android.JNI.AliPay.JSystemUtils', TypeInfo(Android.JNI.AliPay.JSystemUtils));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jutils_TimeUtils', TypeInfo(Android.JNI.AliPay.Jutils_TimeUtils));
  TRegTypes.RegisterType('Android.JNI.AliPay.JFastXmlSerializer', TypeInfo(Android.JNI.AliPay.JFastXmlSerializer));
  TRegTypes.RegisterType('Android.JNI.AliPay.JMySharedPreferences', TypeInfo(Android.JNI.AliPay.JMySharedPreferences));
  TRegTypes.RegisterType('Android.JNI.AliPay.JMySharedPreferences_MyEditor', TypeInfo(Android.JNI.AliPay.JMySharedPreferences_MyEditor));
  TRegTypes.RegisterType('Android.JNI.AliPay.JMySharedPreferences_OnSharedPreferenceChangeListener', TypeInfo(Android.JNI.AliPay.JMySharedPreferences_OnSharedPreferenceChangeListener));
  TRegTypes.RegisterType('Android.JNI.AliPay.JPersistentConfiguration', TypeInfo(Android.JNI.AliPay.JPersistentConfiguration));
  TRegTypes.RegisterType('Android.JNI.AliPay.JTransactionXMLFile', TypeInfo(Android.JNI.AliPay.JTransactionXMLFile));
  TRegTypes.RegisterType('Android.JNI.AliPay.JTransactionXMLFile_MySharedPreferencesImpl', TypeInfo(Android.JNI.AliPay.JTransactionXMLFile_MySharedPreferencesImpl));
  TRegTypes.RegisterType('Android.JNI.AliPay.JMySharedPreferencesImpl_EditorImpl', TypeInfo(Android.JNI.AliPay.JMySharedPreferencesImpl_EditorImpl));
  TRegTypes.RegisterType('Android.JNI.AliPay.JXmlUtils', TypeInfo(Android.JNI.AliPay.JXmlUtils));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDevice', TypeInfo(Android.JNI.AliPay.JDevice));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDeviceInfo', TypeInfo(Android.JNI.AliPay.JDeviceInfo));
  TRegTypes.RegisterType('Android.JNI.AliPay.JUTDevice', TypeInfo(Android.JNI.AliPay.JUTDevice));
  TRegTypes.RegisterType('Android.JNI.AliPay.JUTUtdid', TypeInfo(Android.JNI.AliPay.JUTUtdid));
  TRegTypes.RegisterType('Android.JNI.AliPay.JUTUtdidHelper', TypeInfo(Android.JNI.AliPay.JUTUtdidHelper));
  TRegTypes.RegisterType('Android.JNI.AliPay.JUTUtdidHelper2', TypeInfo(Android.JNI.AliPay.JUTUtdidHelper2));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAidCallback', TypeInfo(Android.JNI.AliPay.JAidCallback));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAidConstants', TypeInfo(Android.JNI.AliPay.JAidConstants));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jdevice_UTDevice', TypeInfo(Android.JNI.AliPay.Jdevice_UTDevice));
  //TRegTypes.RegisterType('Android.JNI.AliPay.JStringBuffer', TypeInfo(Android.JNI.AliPay.JStringBuffer));
  //TRegTypes.RegisterType('Android.JNI.AliPay.JStringBuilder', TypeInfo(Android.JNI.AliPay.JStringBuilder));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAbstractSequentialList', TypeInfo(Android.JNI.AliPay.JAbstractSequentialList));
  TRegTypes.RegisterType('Android.JNI.AliPay.JLinkedList', TypeInfo(Android.JNI.AliPay.JLinkedList));
  TRegTypes.RegisterType('Android.JNI.AliPay.JConnectionReuseStrategy', TypeInfo(Android.JNI.AliPay.JConnectionReuseStrategy));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHeader', TypeInfo(Android.JNI.AliPay.JHeader));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHeaderElement', TypeInfo(Android.JNI.AliPay.JHeaderElement));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHeaderIterator', TypeInfo(Android.JNI.AliPay.JHeaderIterator));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpConnection', TypeInfo(Android.JNI.AliPay.JHttpConnection));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpClientConnection', TypeInfo(Android.JNI.AliPay.JHttpClientConnection));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpConnectionMetrics', TypeInfo(Android.JNI.AliPay.JHttpConnectionMetrics));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpEntity', TypeInfo(Android.JNI.AliPay.JHttpEntity));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpMessage', TypeInfo(Android.JNI.AliPay.JHttpMessage));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpRequest', TypeInfo(Android.JNI.AliPay.JHttpRequest));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpEntityEnclosingRequest', TypeInfo(Android.JNI.AliPay.JHttpEntityEnclosingRequest));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpHost', TypeInfo(Android.JNI.AliPay.JHttpHost));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpResponse', TypeInfo(Android.JNI.AliPay.JHttpResponse));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpResponseInterceptor', TypeInfo(Android.JNI.AliPay.JHttpResponseInterceptor));
  TRegTypes.RegisterType('Android.JNI.AliPay.JNameValuePair', TypeInfo(Android.JNI.AliPay.JNameValuePair));
  TRegTypes.RegisterType('Android.JNI.AliPay.JProtocolVersion', TypeInfo(Android.JNI.AliPay.JProtocolVersion));
  TRegTypes.RegisterType('Android.JNI.AliPay.JRequestLine', TypeInfo(Android.JNI.AliPay.JRequestLine));
  TRegTypes.RegisterType('Android.JNI.AliPay.JStatusLine', TypeInfo(Android.JNI.AliPay.JStatusLine));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAuthScheme', TypeInfo(Android.JNI.AliPay.JAuthScheme));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAuthSchemeFactory', TypeInfo(Android.JNI.AliPay.JAuthSchemeFactory));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAuthSchemeRegistry', TypeInfo(Android.JNI.AliPay.JAuthSchemeRegistry));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAuthScope', TypeInfo(Android.JNI.AliPay.JAuthScope));
  TRegTypes.RegisterType('Android.JNI.AliPay.JCredentials', TypeInfo(Android.JNI.AliPay.JCredentials));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAuthenticationHandler', TypeInfo(Android.JNI.AliPay.JAuthenticationHandler));
  TRegTypes.RegisterType('Android.JNI.AliPay.JCookieStore', TypeInfo(Android.JNI.AliPay.JCookieStore));
  TRegTypes.RegisterType('Android.JNI.AliPay.JCredentialsProvider', TypeInfo(Android.JNI.AliPay.JCredentialsProvider));
  TRegTypes.RegisterType('Android.JNI.AliPay.JRedirectHandler', TypeInfo(Android.JNI.AliPay.JRedirectHandler));
  TRegTypes.RegisterType('Android.JNI.AliPay.JResponseHandler', TypeInfo(Android.JNI.AliPay.JResponseHandler));
  TRegTypes.RegisterType('Android.JNI.AliPay.JUserTokenHandler', TypeInfo(Android.JNI.AliPay.JUserTokenHandler));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAbstractHttpMessage', TypeInfo(Android.JNI.AliPay.JAbstractHttpMessage));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpRequestBase', TypeInfo(Android.JNI.AliPay.JHttpRequestBase));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpEntityEnclosingRequestBase', TypeInfo(Android.JNI.AliPay.JHttpEntityEnclosingRequestBase));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpPost', TypeInfo(Android.JNI.AliPay.JHttpPost));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpUriRequest', TypeInfo(Android.JNI.AliPay.JHttpUriRequest));
  TRegTypes.RegisterType('Android.JNI.AliPay.JClientConnectionManager', TypeInfo(Android.JNI.AliPay.JClientConnectionManager));
  TRegTypes.RegisterType('Android.JNI.AliPay.JClientConnectionRequest', TypeInfo(Android.JNI.AliPay.JClientConnectionRequest));
  TRegTypes.RegisterType('Android.JNI.AliPay.JConnectionReleaseTrigger', TypeInfo(Android.JNI.AliPay.JConnectionReleaseTrigger));
  TRegTypes.RegisterType('Android.JNI.AliPay.JManagedClientConnection', TypeInfo(Android.JNI.AliPay.JManagedClientConnection));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpRoute', TypeInfo(Android.JNI.AliPay.JHttpRoute));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpRoutePlanner', TypeInfo(Android.JNI.AliPay.JHttpRoutePlanner));
  TRegTypes.RegisterType('Android.JNI.AliPay.JRouteInfo_LayerType', TypeInfo(Android.JNI.AliPay.JRouteInfo_LayerType));
  TRegTypes.RegisterType('Android.JNI.AliPay.JRouteInfo_TunnelType', TypeInfo(Android.JNI.AliPay.JRouteInfo_TunnelType));
  TRegTypes.RegisterType('Android.JNI.AliPay.JScheme', TypeInfo(Android.JNI.AliPay.JScheme));
  TRegTypes.RegisterType('Android.JNI.AliPay.JSchemeRegistry', TypeInfo(Android.JNI.AliPay.JSchemeRegistry));
  TRegTypes.RegisterType('Android.JNI.AliPay.JCookie', TypeInfo(Android.JNI.AliPay.JCookie));
  TRegTypes.RegisterType('Android.JNI.AliPay.JCookieOrigin', TypeInfo(Android.JNI.AliPay.JCookieOrigin));
  TRegTypes.RegisterType('Android.JNI.AliPay.JCookieSpec', TypeInfo(Android.JNI.AliPay.JCookieSpec));
  TRegTypes.RegisterType('Android.JNI.AliPay.JCookieSpecFactory', TypeInfo(Android.JNI.AliPay.JCookieSpecFactory));
  TRegTypes.RegisterType('Android.JNI.AliPay.JCookieSpecRegistry', TypeInfo(Android.JNI.AliPay.JCookieSpecRegistry));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAbstractHttpEntity', TypeInfo(Android.JNI.AliPay.JAbstractHttpEntity));
  TRegTypes.RegisterType('Android.JNI.AliPay.JBasicHttpProcessor', TypeInfo(Android.JNI.AliPay.JBasicHttpProcessor));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpContext', TypeInfo(Android.JNI.AliPay.JHttpContext));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpProcessor', TypeInfo(Android.JNI.AliPay.JHttpProcessor));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpRequestExecutor', TypeInfo(Android.JNI.AliPay.JHttpRequestExecutor));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jalipay_JSONException', TypeInfo(Android.JNI.AliPay.Jalipay_JSONException));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jalipay_a', TypeInfo(Android.JNI.AliPay.Jalipay_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jalipay_b', TypeInfo(Android.JNI.AliPay.Jalipay_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jalipay_b_a', TypeInfo(Android.JNI.AliPay.Jalipay_b_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jalipay_c', TypeInfo(Android.JNI.AliPay.Jalipay_c));
end;

initialization
  RegisterTypes;
end.

