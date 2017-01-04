
unit Android.JNI.AliPay;

interface

uses
  Androidapi.JNIBridge,
  Androidapi.JNI.GraphicsContentViewText,
  Androidapi.JNI.Java.Net,
  Androidapi.JNI.Java.Security,
  Androidapi.JNI.JavaUtil,
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
  JRpcCaller = interface;//com.alipay.android.phone.mrpc.core.RpcCaller
  JAbstractRpcCaller = interface;//com.alipay.android.phone.mrpc.core.AbstractRpcCaller
  JHttpClient = interface;//org.apache.http.client.HttpClient
  Jcore_AndroidHttpClient = interface;//com.alipay.android.phone.mrpc.core.AndroidHttpClient
  JHttpRequestInterceptor = interface;//org.apache.http.HttpRequestInterceptor
  Jcore_AndroidHttpClient_1 = interface;//com.alipay.android.phone.mrpc.core.AndroidHttpClient$1
  JAbstractHttpClient = interface;//org.apache.http.impl.client.AbstractHttpClient
  JDefaultHttpClient = interface;//org.apache.http.impl.client.DefaultHttpClient
  Jcore_AndroidHttpClient_2 = interface;//com.alipay.android.phone.mrpc.core.AndroidHttpClient$2
  JDefaultRedirectHandler = interface;//org.apache.http.impl.client.DefaultRedirectHandler
  J2_1 = interface;//com.alipay.android.phone.mrpc.core.AndroidHttpClient$2$1
  JConnectionKeepAliveStrategy = interface;//org.apache.http.conn.ConnectionKeepAliveStrategy
  J2_2 = interface;//com.alipay.android.phone.mrpc.core.AndroidHttpClient$2$2
  Jcore_AndroidHttpClient_CurlLogger = interface;//com.alipay.android.phone.mrpc.core.AndroidHttpClient$CurlLogger
  Jcore_AndroidHttpClient_LoggingConfiguration = interface;//com.alipay.android.phone.mrpc.core.AndroidHttpClient$LoggingConfiguration
  JCharArrayBuffers = interface;//com.alipay.android.phone.mrpc.core.CharArrayBuffers
  Jcore_Config = interface;//com.alipay.android.phone.mrpc.core.Config
  JRpcClient = interface;//com.alipay.android.phone.mrpc.core.RpcClient
  JDefaultRpcClient = interface;//com.alipay.android.phone.mrpc.core.DefaultRpcClient
  JDefaultRpcClient_1 = interface;//com.alipay.android.phone.mrpc.core.DefaultRpcClient$1
  JHeaders = interface;//com.alipay.android.phone.mrpc.core.Headers
  JHeaders_HeaderCallback = interface;//com.alipay.android.phone.mrpc.core.Headers$HeaderCallback
  JHttpCaller = interface;//com.alipay.android.phone.mrpc.core.HttpCaller
  Jcore_HttpDateTime = interface;//com.alipay.android.phone.mrpc.core.HttpDateTime
  Jcore_HttpDateTime_TimeOfDay = interface;//com.alipay.android.phone.mrpc.core.HttpDateTime$TimeOfDay
  Jcore_HttpException = interface;//com.alipay.android.phone.mrpc.core.HttpException
  JTransport = interface;//com.alipay.android.phone.mrpc.core.Transport
  JHttpManager = interface;//com.alipay.android.phone.mrpc.core.HttpManager
  JFutureTask = interface;//java.util.concurrent.FutureTask
  JHttpManager_1 = interface;//com.alipay.android.phone.mrpc.core.HttpManager$1
  JHttpManager_2 = interface;//com.alipay.android.phone.mrpc.core.HttpManager$2
  JHttpUrlHeader = interface;//com.alipay.android.phone.mrpc.core.HttpUrlHeader
  JRequest = interface;//com.alipay.android.phone.mrpc.core.Request
  JHttpUrlRequest = interface;//com.alipay.android.phone.mrpc.core.HttpUrlRequest
  JResponse = interface;//com.alipay.android.phone.mrpc.core.Response
  JHttpUrlResponse = interface;//com.alipay.android.phone.mrpc.core.HttpUrlResponse
  JHttpWorker = interface;//com.alipay.android.phone.mrpc.core.HttpWorker
  JIOUtil = interface;//com.alipay.android.phone.mrpc.core.IOUtil
  JMiscUtils = interface;//com.alipay.android.phone.mrpc.core.MiscUtils
  Jcore_NetworkUtils = interface;//com.alipay.android.phone.mrpc.core.NetworkUtils
  JRpcException = interface;//com.alipay.android.phone.mrpc.core.RpcException
  JRpcException_ErrorCode = interface;//com.alipay.android.phone.mrpc.core.RpcException$ErrorCode
  JRpcFactory = interface;//com.alipay.android.phone.mrpc.core.RpcFactory
  JInvocationHandler = interface;//java.lang.reflect.InvocationHandler
  JRpcInvocationHandler = interface;//com.alipay.android.phone.mrpc.core.RpcInvocationHandler
  JRpcInvoker = interface;//com.alipay.android.phone.mrpc.core.RpcInvoker
  JRpcParams = interface;//com.alipay.android.phone.mrpc.core.RpcParams
  JThreadUtil = interface;//com.alipay.android.phone.mrpc.core.ThreadUtil
  JTransportCallback = interface;//com.alipay.android.phone.mrpc.core.TransportCallback
  JHttpRequestRetryHandler = interface;//org.apache.http.client.HttpRequestRetryHandler
  JZHttpRequestRetryHandler = interface;//com.alipay.android.phone.mrpc.core.ZHttpRequestRetryHandler
  JDeserializer = interface;//com.alipay.android.phone.mrpc.core.gwprotocol.Deserializer
  JAbstractDeserializer = interface;//com.alipay.android.phone.mrpc.core.gwprotocol.AbstractDeserializer
  JSerializer = interface;//com.alipay.android.phone.mrpc.core.gwprotocol.Serializer
  JAbstractSerializer = interface;//com.alipay.android.phone.mrpc.core.gwprotocol.AbstractSerializer
  JJsonDeserializer = interface;//com.alipay.android.phone.mrpc.core.gwprotocol.JsonDeserializer
  JJsonSerializer = interface;//com.alipay.android.phone.mrpc.core.gwprotocol.JsonSerializer
  Japmobilesecuritysdk_a_a = interface;//com.alipay.apmobilesecuritysdk.a.a
  Japmobilesecuritysdk_b_a = interface;//com.alipay.apmobilesecuritysdk.b.a
  Jc_a = interface;//com.alipay.apmobilesecuritysdk.c.a
  Jc_b = interface;//com.alipay.apmobilesecuritysdk.c.b
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
  Jb_b = interface;//com.alipay.b.a.a.b.b
  Jb_c = interface;//com.alipay.b.a.a.b.c
  Jb_d = interface;//com.alipay.b.a.a.b.d
  Ja_c_a = interface;//com.alipay.b.a.a.c.a
  Jc_a_a = interface;//com.alipay.b.a.a.c.a.a
  Jc_a_b = interface;//com.alipay.b.a.a.c.a.b
  Jc_a_c = interface;//com.alipay.b.a.a.c.a.c
  Jc_a_d = interface;//com.alipay.b.a.a.c.a.d
  Ja_c_b = interface;//com.alipay.b.a.a.c.b
  Jc_b_a = interface;//com.alipay.b.a.a.c.b.a
  Jc_b_b = interface;//com.alipay.b.a.a.c.b.b
  Jc_c = interface;//com.alipay.b.a.a.c.c
  Jc_d = interface;//com.alipay.b.a.a.c.d
  Ja_d_a = interface;//com.alipay.b.a.a.d.a
  Ja_d_b = interface;//com.alipay.b.a.a.d.b
  Ja_d_c = interface;//com.alipay.b.a.a.d.c
  Ja_d_d = interface;//com.alipay.b.a.a.d.d
  Ja_e_a = interface;//com.alipay.b.a.a.e.a
  Je_b = interface;//com.alipay.b.a.a.e.b
  Je_c = interface;//com.alipay.b.a.a.e.c
  Je_d = interface;//com.alipay.b.a.a.e.d
  JOperationType = interface;//com.alipay.mobile.framework.service.annotation.OperationType
  JResetCookie = interface;//com.alipay.mobile.framework.service.annotation.ResetCookie
  JUpdateDeviceInfo = interface;//com.alipay.mobile.framework.service.annotation.UpdateDeviceInfo
  JSecurityClientMobile = interface;//com.alipay.mobilesecuritysdk.face.SecurityClientMobile
  JBugTrackMessageService = interface;//com.alipay.tscenter.biz.rpc.deviceFp.BugTrackMessageService
  JDataReportService = interface;//com.alipay.tscenter.biz.rpc.report.general.DataReportService
  JDataReportRequest = interface;//com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest
  JDataReportResult = interface;//com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult
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
  JByteArrayBuffer = interface;//org.apache.http.util.ByteArrayBuffer
  JCharArrayBuffer = interface;//org.apache.http.util.CharArrayBuffer
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
    ['{EC93777C-9987-42D9-9B0B-2B21015B904E}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/i')]
  Ja_i = interface(IJavaInstance)
    ['{E5A43B86-902C-490C-8A6A-E38D96F94B1F}']
  end;
  TJa_i = class(TJavaGenericImport<Ja_iClass, Ja_i>) end;

  Ja_a_aClass = interface(Ja_iClass)
    ['{08940A27-7C8E-484E-8781-9B0560947C98}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_a_a; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/a')]
  Ja_a_a = interface(Ja_i)
    ['{4F629409-A606-4082-A4FF-4F6F35DF6C07}']
  end;
  TJa_a_a = class(TJavaGenericImport<Ja_a_aClass, Ja_a_a>) end;

  Ja_bClass = interface(Ja_iClass)
    ['{1187AFAF-4F8C-4522-8327-1DB8741B4FF3}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_b; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/b')]
  Ja_b = interface(Ja_i)
    ['{743ED6F0-919C-4336-B28F-BFA7489A269B}']
  end;
  TJa_b = class(TJavaGenericImport<Ja_bClass, Ja_b>) end;

  Ja_cClass = interface(Ja_iClass)
    ['{034EF210-4056-497A-86AC-471834BDA90C}']
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_c; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/c')]
  Ja_c = interface(Ja_i)
    ['{8C4C77CE-97F5-4960-A038-CCD6EE67A196}']
  end;
  TJa_c = class(TJavaGenericImport<Ja_cClass, Ja_c>) end;

  Ja_dClass = interface(Ja_iClass)
    ['{8CCAEDF5-0B18-4B98-954E-AF537405F4C5}']
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_d; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/d')]
  Ja_d = interface(Ja_i)
    ['{D016600A-121D-4DB5-A34D-FE6581ED206E}']
  end;
  TJa_d = class(TJavaGenericImport<Ja_dClass, Ja_d>) end;

  Ja_eClass = interface(JObjectClass)
    ['{7B39F25C-AD4A-46FF-BF50-02EEAA24F44E}']
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;
    {class} function a(P1: JString; P2: Jreflect_Type): JObject; cdecl; overload;
  end;

  [JavaSignature('com/alipay/a/a/e')]
  Ja_e = interface(JObject)
    ['{0A5F3407-E1A4-4317-B16F-6756633F3BC9}']
  end;
  TJa_e = class(TJavaGenericImport<Ja_eClass, Ja_e>) end;

  Ja_fClass = interface(JObjectClass)
    ['{A94B7151-91C9-4B6F-9078-38C1593C93D2}']
    {class} function a(P1: JObject): JString; cdecl;//Deprecated
    {class} function b(P1: JObject): JObject; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/f')]
  Ja_f = interface(JObject)
    ['{8A0A75C7-FF28-489E-A0B9-A27136ACFB22}']
  end;
  TJa_f = class(TJavaGenericImport<Ja_fClass, Ja_f>) end;

  Ja_gClass = interface(Ja_iClass)
    ['{D2442937-B42C-492F-B48B-2F50B920DC93}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_g; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/g')]
  Ja_g = interface(Ja_i)
    ['{0C6CF252-74D2-4C86-A627-FDC9CF83AC6E}']
  end;
  TJa_g = class(TJavaGenericImport<Ja_gClass, Ja_g>) end;

  Ja_hClass = interface(Ja_iClass)
    ['{A9E5C0C9-BFB6-457F-92AC-E9302CB819F9}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_h; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/h')]
  Ja_h = interface(Ja_i)
    ['{FD1A0907-358B-47C4-8AC5-64ECC7FE154E}']
  end;
  TJa_h = class(TJavaGenericImport<Ja_hClass, Ja_h>) end;

  Ja_jClass = interface(IJavaClass)
    ['{4DCA0E66-E324-4711-9A75-9A0CC22785B3}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/j')]
  Ja_j = interface(IJavaInstance)
    ['{812F64F2-0B26-44E3-8311-EC59F70FAF78}']
  end;
  TJa_j = class(TJavaGenericImport<Ja_jClass, Ja_j>) end;

  Ja_kClass = interface(Ja_iClass)
    ['{82278725-300D-4388-984E-BBF8401EA604}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_k; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/k')]
  Ja_k = interface(Ja_i)
    ['{E6B04AB3-B344-4A77-81BB-A512377B343F}']
  end;
  TJa_k = class(TJavaGenericImport<Ja_kClass, Ja_k>) end;

  Ja_lClass = interface(Ja_iClass)
    ['{8265BC5F-294C-4D6C-94B7-04337B76202B}']
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JObject): JObject; cdecl; overload;//Deprecated
    {class} function a(P1: JObject; P2: Jreflect_Type): JObject; cdecl; overload;//Deprecated
    {class} function init: Ja_l; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/a/a/l')]
  Ja_l = interface(Ja_i)
    ['{AA2960BB-44E3-4445-8DE5-0F84385A6E6A}']
  end;
  TJa_l = class(TJavaGenericImport<Ja_lClass, Ja_l>) end;

  Jb_aClass = interface(JObjectClass)
    ['{AD746224-C612-4F96-BEA8-3D16DFDE4AA6}']
    {class} function a(P1: Jreflect_Type): Jlang_Class; cdecl; overload;//Deprecated
    {class} function a(P1: Jlang_Class): Boolean; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/a/b/a')]
  Jb_a = interface(JObject)
    ['{4B38FAA2-EFE4-4009-BEA9-A6EC5F8D2BA6}']
  end;
  TJb_a = class(TJavaGenericImport<Jb_aClass, Jb_a>) end;

  JRpcCallerClass = interface(IJavaClass)
    ['{1C429CBF-2123-47E8-A713-3F28877239BC}']
    {class} function call: JObject; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/RpcCaller')]
  JRpcCaller = interface(IJavaInstance)
    ['{0AE76C58-86D9-4921-9DAC-78910B85955B}']
  end;
  TJRpcCaller = class(TJavaGenericImport<JRpcCallerClass, JRpcCaller>) end;

  JAbstractRpcCallerClass = interface(JRpcCallerClass)
    ['{2B5CD7FB-525B-4B7F-8E49-0D1E526F6695}']
    {class} function init(P1: JMethod; P2: Integer; P3: JString; P4: TJavaArray<Byte>; P5: JString; P6: Boolean): JAbstractRpcCaller; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/AbstractRpcCaller')]
  JAbstractRpcCaller = interface(JRpcCaller)
    ['{9F48393C-BFE2-41CC-A743-157E0C63EFF7}']
    function _GetmContentType: JString; cdecl;
    function _GetmId: Integer; cdecl;
    function _GetmOperationType: JString; cdecl;
    function _GetmReqData: TJavaArray<Byte>; cdecl;
    function _GetmResetCookie: Boolean; cdecl;
    property mContentType: JString read _GetmContentType;
    property mId: Integer read _GetmId;
    property mOperationType: JString read _GetmOperationType;
    property mReqData: TJavaArray<Byte> read _GetmReqData;
    property mResetCookie: Boolean read _GetmResetCookie;
  end;
  TJAbstractRpcCaller = class(TJavaGenericImport<JAbstractRpcCallerClass, JAbstractRpcCaller>) end;

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

  Jcore_AndroidHttpClientClass = interface(JHttpClientClass)
    ['{73EB9AF0-8B76-467D-9E99-B75FB5ED780A}']
    {class} function _GetDEFAULT_SYNC_MIN_GZIP_BYTES: Int64; cdecl;
    {class} function getCompressedEntity(P1: TJavaArray<Byte>; P2: JContentResolver): JAbstractHttpEntity; cdecl;
    {class} function getMinGzipSize(P1: JContentResolver): Int64; cdecl;
    {class} function getUngzippedContent(P1: JHttpEntity): JInputStream; cdecl;
    {class} procedure modifyRequestToAcceptGzipResponse(P1: JHttpRequest); cdecl;
    {class} procedure modifyRequestToKeepAlive(P1: JHttpRequest); cdecl;
    {class} function newInstance(P1: JString): Jcore_AndroidHttpClient; cdecl; overload;
    {class} function newInstance(P1: JString; P2: JContext): Jcore_AndroidHttpClient; cdecl; overload;
    {class} function parseDate(P1: JString): Int64; cdecl;
    {class} property DEFAULT_SYNC_MIN_GZIP_BYTES: Int64 read _GetDEFAULT_SYNC_MIN_GZIP_BYTES;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/AndroidHttpClient')]
  Jcore_AndroidHttpClient = interface(JHttpClient)
    ['{F6DC9894-2053-4B86-9AA6-B752963D61CE}']
    procedure close; cdecl;
    procedure disableCurlLogging; cdecl;
    procedure enableCurlLogging(P1: JString; P2: Integer); cdecl;
    function execute(P1: JHttpUriRequest): JHttpResponse; cdecl; overload;
    function execute(P1: JHttpUriRequest; P2: JHttpContext): JHttpResponse; cdecl; overload;
    function execute(P1: JHttpUriRequest; P2: JResponseHandler): JObject; cdecl; overload;
    function execute(P1: JHttpHost; P2: JHttpRequest): JHttpResponse; cdecl; overload;
    function execute(P1: JHttpHost; P2: JHttpRequest; P3: JHttpContext): JHttpResponse; cdecl; overload;
    function execute(P1: JHttpUriRequest; P2: JResponseHandler; P3: JHttpContext): JObject; cdecl; overload;
    function execute(P1: JHttpHost; P2: JHttpRequest; P3: JResponseHandler): JObject; cdecl; overload;
    function execute(P1: JHttpHost; P2: JHttpRequest; P3: JResponseHandler; P4: JHttpContext): JObject; cdecl; overload;
    function getConnectionManager: JClientConnectionManager; cdecl;
    //function getParams: JHttpParams; cdecl;
    procedure setHttpRequestRetryHandler(P1: JHttpRequestRetryHandler); cdecl;
  end;
  TJcore_AndroidHttpClient = class(TJavaGenericImport<Jcore_AndroidHttpClientClass, Jcore_AndroidHttpClient>) end;

  JHttpRequestInterceptorClass = interface(IJavaClass)
    ['{AC693EDF-C357-4395-A727-8080798F14F3}']
  end;

  [JavaSignature('org/apache/http/HttpRequestInterceptor')]
  JHttpRequestInterceptor = interface(IJavaInstance)
    ['{7D05F1C1-6494-4FD9-B00C-3C3561CB101E}']
    procedure process(request: JHttpRequest; context: JHttpContext); cdecl;
  end;
  TJHttpRequestInterceptor = class(TJavaGenericImport<JHttpRequestInterceptorClass, JHttpRequestInterceptor>) end;

  Jcore_AndroidHttpClient_1Class = interface(JHttpRequestInterceptorClass)
    ['{03E6C5AD-CE4D-4647-86A0-B937957A1C8B}']
    {class} procedure process(P1: JHttpRequest; P2: JHttpContext); cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/AndroidHttpClient$1')]
  Jcore_AndroidHttpClient_1 = interface(JHttpRequestInterceptor)
    ['{B53F7B1B-7DA6-48AE-88FF-2B7258184EE5}']
  end;
  TJcore_AndroidHttpClient_1 = class(TJavaGenericImport<Jcore_AndroidHttpClient_1Class, Jcore_AndroidHttpClient_1>) end;

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

  Jcore_AndroidHttpClient_2Class = interface(JDefaultHttpClientClass)
    ['{C51D13C9-EED3-4584-B7E7-F7BF19677ABF}']
    {class} //function init(P1: Jcore_AndroidHttpClient; P2: JClientConnectionManager; P3: JHttpParams): Jcore_AndroidHttpClient_2; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/AndroidHttpClient$2')]
  Jcore_AndroidHttpClient_2 = interface(JDefaultHttpClient)
    ['{37C5EAC9-1837-46D6-9E1D-82F856239F94}']
    function createConnectionKeepAliveStrategy: JConnectionKeepAliveStrategy; cdecl;
    function createHttpContext: JHttpContext; cdecl;
    function createHttpProcessor: JBasicHttpProcessor; cdecl;
    function createRedirectHandler: JRedirectHandler; cdecl;
  end;
  TJcore_AndroidHttpClient_2 = class(TJavaGenericImport<Jcore_AndroidHttpClient_2Class, Jcore_AndroidHttpClient_2>) end;

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

  J2_1Class = interface(JDefaultRedirectHandlerClass)
    ['{27BEF0E0-F259-46BB-B8EE-18E683088BE1}']
    {class} function init(P1: Jcore_AndroidHttpClient_2): J2_1; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/AndroidHttpClient$2$1')]
  J2_1 = interface(JDefaultRedirectHandler)
    ['{70B24001-CBFF-48CC-896E-087331E88992}']
    function _GetthisClass: Jcore_AndroidHttpClient_2; cdecl;
    function isRedirectRequested(P1: JHttpResponse; P2: JHttpContext): Boolean; cdecl;
    property thisClass: Jcore_AndroidHttpClient_2 read _GetthisClass;
  end;
  TJ2_1 = class(TJavaGenericImport<J2_1Class, J2_1>) end;

  JConnectionKeepAliveStrategyClass = interface(IJavaClass)
    ['{EB448F9B-4A6B-49B8-9BCA-9A907DE72D64}']
  end;

  [JavaSignature('org/apache/http/conn/ConnectionKeepAliveStrategy')]
  JConnectionKeepAliveStrategy = interface(IJavaInstance)
    ['{25479F70-1E68-4437-B78D-EECCC6FBC3EA}']
    function getKeepAliveDuration(response: JHttpResponse; context: JHttpContext): Int64; cdecl;
  end;
  TJConnectionKeepAliveStrategy = class(TJavaGenericImport<JConnectionKeepAliveStrategyClass, JConnectionKeepAliveStrategy>) end;

  J2_2Class = interface(JConnectionKeepAliveStrategyClass)
    ['{6506AD3F-40CE-4521-9056-EEA5EE9CDEDB}']
    {class} function init(P1: Jcore_AndroidHttpClient_2): J2_2; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/AndroidHttpClient$2$2')]
  J2_2 = interface(JConnectionKeepAliveStrategy)
    ['{F23D2F12-E726-4088-B9F7-AE79CC0704BC}']
    function getKeepAliveDuration(P1: JHttpResponse; P2: JHttpContext): Int64; cdecl;
  end;
  TJ2_2 = class(TJavaGenericImport<J2_2Class, J2_2>) end;

  Jcore_AndroidHttpClient_CurlLoggerClass = interface(JHttpRequestInterceptorClass)
    ['{1B771FCC-53C2-4950-8F7D-13E31943F3C9}']
    {class} function init(P1: Jcore_AndroidHttpClient; P2: Jcore_AndroidHttpClient_1): Jcore_AndroidHttpClient_CurlLogger; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/AndroidHttpClient$CurlLogger')]
  Jcore_AndroidHttpClient_CurlLogger = interface(JHttpRequestInterceptor)
    ['{E862D608-F613-4D2D-B0B7-8897AC660674}']
    procedure process(P1: JHttpRequest; P2: JHttpContext); cdecl;
  end;
  TJcore_AndroidHttpClient_CurlLogger = class(TJavaGenericImport<Jcore_AndroidHttpClient_CurlLoggerClass, Jcore_AndroidHttpClient_CurlLogger>) end;

  Jcore_AndroidHttpClient_LoggingConfigurationClass = interface(JObjectClass)
    ['{DDB1A3D8-A804-442C-B3F4-A72095B9310F}']
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/AndroidHttpClient$LoggingConfiguration')]
  Jcore_AndroidHttpClient_LoggingConfiguration = interface(JObject)
    ['{A86A6632-575F-4674-96E4-F8BAE1760F59}']
  end;
  TJcore_AndroidHttpClient_LoggingConfiguration = class(TJavaGenericImport<Jcore_AndroidHttpClient_LoggingConfigurationClass, Jcore_AndroidHttpClient_LoggingConfiguration>) end;

  JCharArrayBuffersClass = interface(JObjectClass)
    ['{1E185DC8-4F6F-406E-A903-5FE5C640F4D2}']
    {class} function containsIgnoreCaseTrimmed(P1: JCharArrayBuffer; P2: Integer; P3: JString): Boolean; cdecl;
    {class} function init: JCharArrayBuffers; cdecl;
    {class} function setLowercaseIndexOf(P1: JCharArrayBuffer; P2: Integer): Integer; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/CharArrayBuffers')]
  JCharArrayBuffers = interface(JObject)
    ['{7321087D-2CD1-4DC0-8091-95972A9FF254}']
  end;
  TJCharArrayBuffers = class(TJavaGenericImport<JCharArrayBuffersClass, JCharArrayBuffers>) end;

  Jcore_ConfigClass = interface(IJavaClass)
    ['{BAE0C303-FEBB-43F3-A46E-EECB0A595DB4}']
    {class} function getApplicationContext: JContext; cdecl;//Deprecated
    {class} function getRpcParams: JRpcParams; cdecl;//Deprecated
    {class} function getTransport: JTransport; cdecl;//Deprecated
    {class} function getUrl: JString; cdecl;//Deprecated
    {class} function isGzip: Boolean; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/Config')]
  Jcore_Config = interface(IJavaInstance)
    ['{35BAB20C-34A7-4700-B6B3-D35F97F09A02}']
  end;
  TJcore_Config = class(TJavaGenericImport<Jcore_ConfigClass, Jcore_Config>) end;

  JRpcClientClass = interface(JObjectClass)
    ['{9AD8E7B8-6A3E-4F3A-A17B-8C61599E8980}']
    {class} function getRpcProxy(P1: Jlang_Class; P2: JRpcParams): JObject; cdecl;//Deprecated
    {class} function init: JRpcClient; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/RpcClient')]
  JRpcClient = interface(JObject)
    ['{B3405C0F-79E1-4EC3-AE6C-90DE607FB92B}']
  end;
  TJRpcClient = class(TJavaGenericImport<JRpcClientClass, JRpcClient>) end;

  JDefaultRpcClientClass = interface(JRpcClientClass)
    ['{D04BBBDD-42C9-4783-BF03-AE7CF0D0653E}']
    {class} function getRpcProxy(P1: Jlang_Class; P2: JRpcParams): JObject; cdecl;//Deprecated
    {class} function init(P1: JContext): JDefaultRpcClient; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/DefaultRpcClient')]
  JDefaultRpcClient = interface(JRpcClient)
    ['{A9E456B3-6A4B-4724-B837-0D2ED65D8CF1}']
  end;
  TJDefaultRpcClient = class(TJavaGenericImport<JDefaultRpcClientClass, JDefaultRpcClient>) end;

  JDefaultRpcClient_1Class = interface(Jcore_ConfigClass)
    ['{081772FA-8E9D-483D-B04B-65E94DAE6544}']
    {class} function init(P1: JDefaultRpcClient; P2: JRpcParams): JDefaultRpcClient_1; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/DefaultRpcClient$1')]
  JDefaultRpcClient_1 = interface(Jcore_Config)
    ['{AD0C5597-F47D-47F2-9491-C2412CCE3AAC}']
    function _GetthisClass: JDefaultRpcClient; cdecl;
    function getApplicationContext: JContext; cdecl;
    function getRpcParams: JRpcParams; cdecl;
    function getTransport: JTransport; cdecl;
    function getUrl: JString; cdecl;
    function isGzip: Boolean; cdecl;
    property thisClass: JDefaultRpcClient read _GetthisClass;
  end;
  TJDefaultRpcClient_1 = class(TJavaGenericImport<JDefaultRpcClient_1Class, JDefaultRpcClient_1>) end;

  JHeadersClass = interface(JObjectClass)
    ['{8D8736F4-C724-4259-80E0-9E591D171F26}']
    {class} function _GetACCEPT_RANGES: JString; cdecl;
    {class} function _GetCACHE_CONTROL: JString; cdecl;
    {class} function _GetCONN_CLOSE: Integer; cdecl;
    {class} function _GetCONN_DIRECTIVE: JString; cdecl;
    {class} function _GetCONN_KEEP_ALIVE: Integer; cdecl;
    {class} function _GetCONTENT_DISPOSITION: JString; cdecl;
    {class} function _GetCONTENT_ENCODING: JString; cdecl;
    {class} function _GetCONTENT_LEN: JString; cdecl;
    {class} function _GetCONTENT_TYPE: JString; cdecl;
    {class} function _GetETAG: JString; cdecl;
    {class} function _GetEXPIRES: JString; cdecl;
    {class} function _GetLAST_MODIFIED: JString; cdecl;
    {class} function _GetLOCATION: JString; cdecl;
    {class} function _GetNO_CONN_TYPE: Integer; cdecl;
    {class} function _GetNO_CONTENT_LENGTH: Int64; cdecl;
    {class} function _GetNO_TRANSFER_ENCODING: Int64; cdecl;
    {class} function _GetPRAGMA: JString; cdecl;
    {class} function _GetPROXY_AUTHENTICATE: JString; cdecl;
    {class} function _GetPROXY_CONNECTION: JString; cdecl;
    {class} function _GetREFRESH: JString; cdecl;
    {class} function _GetSET_COOKIE: JString; cdecl;
    {class} function _GetTRANSFER_ENCODING: JString; cdecl;
    {class} function _GetWWW_AUTHENTICATE: JString; cdecl;
    {class} function _GetX_PERMITTED_CROSS_DOMAIN_POLICIES: JString; cdecl;
    {class} function init: JHeaders; cdecl;
    {class} property ACCEPT_RANGES: JString read _GetACCEPT_RANGES;
    {class} property CACHE_CONTROL: JString read _GetCACHE_CONTROL;
    {class} property CONN_CLOSE: Integer read _GetCONN_CLOSE;
    {class} property CONN_DIRECTIVE: JString read _GetCONN_DIRECTIVE;
    {class} property CONN_KEEP_ALIVE: Integer read _GetCONN_KEEP_ALIVE;
    {class} property CONTENT_DISPOSITION: JString read _GetCONTENT_DISPOSITION;
    {class} property CONTENT_ENCODING: JString read _GetCONTENT_ENCODING;
    {class} property CONTENT_LEN: JString read _GetCONTENT_LEN;
    {class} property CONTENT_TYPE: JString read _GetCONTENT_TYPE;
    {class} property ETAG: JString read _GetETAG;
    {class} property EXPIRES: JString read _GetEXPIRES;
    {class} property LAST_MODIFIED: JString read _GetLAST_MODIFIED;
    {class} property LOCATION: JString read _GetLOCATION;
    {class} property NO_CONN_TYPE: Integer read _GetNO_CONN_TYPE;
    {class} property NO_CONTENT_LENGTH: Int64 read _GetNO_CONTENT_LENGTH;
    {class} property NO_TRANSFER_ENCODING: Int64 read _GetNO_TRANSFER_ENCODING;
    {class} property PRAGMA: JString read _GetPRAGMA;
    {class} property PROXY_AUTHENTICATE: JString read _GetPROXY_AUTHENTICATE;
    {class} property PROXY_CONNECTION: JString read _GetPROXY_CONNECTION;
    {class} property REFRESH: JString read _GetREFRESH;
    {class} property SET_COOKIE: JString read _GetSET_COOKIE;
    {class} property TRANSFER_ENCODING: JString read _GetTRANSFER_ENCODING;
    {class} property WWW_AUTHENTICATE: JString read _GetWWW_AUTHENTICATE;
    {class} property X_PERMITTED_CROSS_DOMAIN_POLICIES: JString read _GetX_PERMITTED_CROSS_DOMAIN_POLICIES;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/Headers')]
  JHeaders = interface(JObject)
    ['{9F6C5716-3DD8-495A-9EAB-4375A53A852F}']
    function getAcceptRanges: JString; cdecl;
    function getCacheControl: JString; cdecl;
    function getConnectionType: Integer; cdecl;
    function getContentDisposition: JString; cdecl;
    function getContentEncoding: JString; cdecl;
    function getContentLength: Int64; cdecl;
    function getContentType: JString; cdecl;
    function getEtag: JString; cdecl;
    function getExpires: JString; cdecl;
    procedure getHeaders(P1: JHeaders_HeaderCallback); cdecl;
    function getLastModified: JString; cdecl;
    function getLocation: JString; cdecl;
    function getPragma: JString; cdecl;
    function getProxyAuthenticate: JString; cdecl;
    function getRefresh: JString; cdecl;
    function getSetCookie: JArrayList; cdecl;
    function getTransferEncoding: Int64; cdecl;
    function getWwwAuthenticate: JString; cdecl;
    function getXPermittedCrossDomainPolicies: JString; cdecl;
    procedure parseHeader(P1: JCharArrayBuffer); cdecl;
    procedure setAcceptRanges(P1: JString); cdecl;
    procedure setCacheControl(P1: JString); cdecl;
    procedure setContentDisposition(P1: JString); cdecl;
    procedure setContentEncoding(P1: JString); cdecl;
    procedure setContentLength(P1: Int64); cdecl;
    procedure setContentType(P1: JString); cdecl;
    procedure setEtag(P1: JString); cdecl;
    procedure setExpires(P1: JString); cdecl;
    procedure setLastModified(P1: JString); cdecl;
    procedure setLocation(P1: JString); cdecl;
    procedure setProxyAuthenticate(P1: JString); cdecl;
    procedure setWwwAuthenticate(P1: JString); cdecl;
    procedure setXPermittedCrossDomainPolicies(P1: JString); cdecl;
  end;
  TJHeaders = class(TJavaGenericImport<JHeadersClass, JHeaders>) end;

  JHeaders_HeaderCallbackClass = interface(IJavaClass)
    ['{B8E70B7F-B898-46E8-953B-06A4D212CEAF}']
    {class} procedure header(P1: JString; P2: JString); cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/Headers$HeaderCallback')]
  JHeaders_HeaderCallback = interface(IJavaInstance)
    ['{E54A3738-1BCD-4F9F-84EC-74D1E089D26B}']
  end;
  TJHeaders_HeaderCallback = class(TJavaGenericImport<JHeaders_HeaderCallbackClass, JHeaders_HeaderCallback>) end;

  JHttpCallerClass = interface(JAbstractRpcCallerClass)
    ['{FD0EE9FC-7488-4D78-B2CB-EC39C07771A5}']
    {class} function call: JObject; cdecl;//Deprecated
    {class} function init(P1: Jcore_Config; P2: JMethod; P3: Integer; P4: JString; P5: TJavaArray<Byte>; P6: Boolean): JHttpCaller; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/HttpCaller')]
  JHttpCaller = interface(JAbstractRpcCaller)
    ['{E59C6EC6-E70B-45A9-A313-432FAAF4F083}']
  end;
  TJHttpCaller = class(TJavaGenericImport<JHttpCallerClass, JHttpCaller>) end;

  Jcore_HttpDateTimeClass = interface(JObjectClass)
    ['{9B7AC089-E9DA-4058-B2D4-E6885BEEA40D}']
    {class} function init: Jcore_HttpDateTime; cdecl;//Deprecated
    {class} function parse(P1: JString): Int64; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/HttpDateTime')]
  Jcore_HttpDateTime = interface(JObject)
    ['{6632028B-BDF5-4CBD-BABE-55B8401A8E41}']
  end;
  TJcore_HttpDateTime = class(TJavaGenericImport<Jcore_HttpDateTimeClass, Jcore_HttpDateTime>) end;

  Jcore_HttpDateTime_TimeOfDayClass = interface(JObjectClass)
    ['{58F174BB-DE4E-4E90-BDBE-FECF46CAEA9F}']
    {class} function init(P1: Integer; P2: Integer; P3: Integer): Jcore_HttpDateTime_TimeOfDay; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/HttpDateTime$TimeOfDay')]
  Jcore_HttpDateTime_TimeOfDay = interface(JObject)
    ['{259200C5-CEAE-4C4D-92F8-8D6A7D82C754}']
    function _Getminute: Integer; cdecl;
    function _Getsecond: Integer; cdecl;
    property minute: Integer read _Getminute;
    property second: Integer read _Getsecond;
  end;
  TJcore_HttpDateTime_TimeOfDay = class(TJavaGenericImport<Jcore_HttpDateTime_TimeOfDayClass, Jcore_HttpDateTime_TimeOfDay>) end;

  Jcore_HttpExceptionClass = interface(JExceptionClass)
    ['{6C3D992C-90BF-4875-82A4-13F5B1093324}']
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
    ['{894D9AFF-17C5-4E2B-BB6E-C32B0A9C86DF}']
    function getCode: Integer; cdecl;
    function getMsg: JString; cdecl;
  end;
  TJcore_HttpException = class(TJavaGenericImport<Jcore_HttpExceptionClass, Jcore_HttpException>) end;

  JTransportClass = interface(IJavaClass)
    ['{5874B6BB-3BFC-4B0B-B5B7-68F9A93066A0}']
    {class} function execute(P1: JRequest): JFuture; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/Transport')]
  JTransport = interface(IJavaInstance)
    ['{7A07F8AA-B4C6-4413-B4AF-4436A794DCF5}']
  end;
  TJTransport = class(TJavaGenericImport<JTransportClass, JTransport>) end;

  JHttpManagerClass = interface(JTransportClass)
    ['{D5B169C5-D0E6-4F5F-8147-5539FE45F7CB}']
    {class} function _GetTAG: JString; cdecl;
    {class} function getInstance(P1: JContext): JHttpManager; cdecl;
    {class} function init(P1: JContext): JHttpManager; cdecl;
    {class} property TAG: JString read _GetTAG;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/HttpManager')]
  JHttpManager = interface(JTransport)
    ['{128180FF-283D-494F-9437-3F74DC73ADD9}']
    function _GetmContext: JContext; cdecl;
    procedure addConnectTime(P1: Int64); cdecl;
    procedure addDataSize(P1: Int64); cdecl;
    procedure addSocketTime(P1: Int64); cdecl;
    procedure close; cdecl;
    function dumpPerf: JString; cdecl;
    function execute(P1: JRequest): JFuture; cdecl;
    function generateWorker(P1: JHttpUrlRequest): JHttpWorker; cdecl;
    function getAverageConnectTime: Int64; cdecl;
    function getAverageSpeed: Int64; cdecl;
    function getHttpClient: Jcore_AndroidHttpClient; cdecl;
    property mContext: JContext read _GetmContext;
  end;
  TJHttpManager = class(TJavaGenericImport<JHttpManagerClass, JHttpManager>) end;

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

  JHttpManager_1Class = interface(JFutureTaskClass)
    ['{0543A57F-4B50-485C-A3CA-96E12F0EE8E6}']
    {class} function init(P1: JHttpManager; P2: JCallable; P3: JHttpWorker): JHttpManager_1; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/HttpManager$1')]
  JHttpManager_1 = interface(JFutureTask)
    ['{26301052-BE75-44A8-BF71-064A13914DF6}']
    function _GetthisClass: JHttpManager; cdecl;
    procedure done; cdecl;
    property thisClass: JHttpManager read _GetthisClass;
  end;
  TJHttpManager_1 = class(TJavaGenericImport<JHttpManager_1Class, JHttpManager_1>) end;

  JHttpManager_2Class = interface(JThreadFactoryClass)
    ['{68E68C0E-BA82-4946-B746-8B5A3A3527F7}']
    {class} function newThread(P1: JRunnable): JThread; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/HttpManager$2')]
  JHttpManager_2 = interface(JThreadFactory)
    ['{0690AEEA-121A-474C-A6CF-FB612B30B9B9}']
  end;
  TJHttpManager_2 = class(TJavaGenericImport<JHttpManager_2Class, JHttpManager_2>) end;

  JHttpUrlHeaderClass = interface(JSerializableClass)
    ['{5AFFA03F-B4AD-4BDC-B45F-D44268FE4F64}']
    {class} function getHead(P1: JString): JString; cdecl;//Deprecated
    {class} function getHeaders: JMap; cdecl;//Deprecated
    {class} function init: JHttpUrlHeader; cdecl;//Deprecated
    {class} procedure setHead(P1: JString; P2: JString); cdecl;//Deprecated
    {class} procedure setHeaders(P1: JMap); cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/HttpUrlHeader')]
  JHttpUrlHeader = interface(JSerializable)
    ['{6C9C77D1-A9F8-48C6-9ED2-004865FA69AA}']
  end;
  TJHttpUrlHeader = class(TJavaGenericImport<JHttpUrlHeaderClass, JHttpUrlHeader>) end;

  JRequestClass = interface(JObjectClass)
    ['{89700945-902C-4346-ADF6-2EFD68F1987D}']
    {class} function init: JRequest; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/Request')]
  JRequest = interface(JObject)
    ['{EBBE45A4-85F6-41A4-9CFA-2D82DCA6CC8D}']
    procedure cancel; cdecl;
    function getCallback: JTransportCallback; cdecl;
    function isCanceled: Boolean; cdecl;
    procedure setTransportCallback(P1: JTransportCallback); cdecl;
  end;
  TJRequest = class(TJavaGenericImport<JRequestClass, JRequest>) end;

  JHttpUrlRequestClass = interface(JRequestClass)
    ['{6984A494-392E-4F59-9B1B-9AF635AA2904}']
    {class} procedure addHeader(P1: JHeader); cdecl;//Deprecated
    {class} procedure addTags(P1: JString; P2: JString); cdecl;//Deprecated
    {class} function equals(P1: JObject): Boolean; cdecl;//Deprecated
    {class} function getContentType: JString; cdecl;//Deprecated
    {class} function getHeaders: JArrayList; cdecl;//Deprecated
    {class} function getKey: JString; cdecl;//Deprecated
    {class} function getReqData: TJavaArray<Byte>; cdecl;//Deprecated
    {class} function getTag(P1: JString): JString; cdecl;//Deprecated
    {class} function getUrl: JString; cdecl;//Deprecated
    {class} function hashCode: Integer; cdecl;//Deprecated
    {class} function init(P1: JString): JHttpUrlRequest; cdecl; overload;//Deprecated
    {class} function init(P1: JString; P2: TJavaArray<Byte>; P3: JArrayList; P4: JHashMap): JHttpUrlRequest; cdecl; overload;//Deprecated
    {class} function isResetCookie: Boolean; cdecl;//Deprecated
    {class} procedure setContentType(P1: JString); cdecl;//Deprecated
    {class} procedure setHeaders(P1: JArrayList); cdecl;//Deprecated
    {class} procedure setReqData(P1: TJavaArray<Byte>); cdecl;//Deprecated
    {class} procedure setResetCookie(P1: Boolean); cdecl;//Deprecated
    {class} procedure setTags(P1: JMap); cdecl;//Deprecated
    {class} function setUrl(P1: JString): JString; cdecl;//Deprecated
    {class} function toString: JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/HttpUrlRequest')]
  JHttpUrlRequest = interface(JRequest)
    ['{12301DC5-B3A5-46F9-A692-C6761CB5731C}']
  end;
  TJHttpUrlRequest = class(TJavaGenericImport<JHttpUrlRequestClass, JHttpUrlRequest>) end;

  JResponseClass = interface(JObjectClass)
    ['{ABDCD389-0B69-42E4-97A9-26646072CCE3}']
    {class} function init: JResponse; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/Response')]
  JResponse = interface(JObject)
    ['{962FBE3C-53F2-4466-BB28-70921F9D5CCC}']
    function _GetmContentType: JString; cdecl;
    function getContentType: JString; cdecl;
    function getResData: TJavaArray<Byte>; cdecl;
    procedure setContentType(P1: JString); cdecl;
    procedure setResData(P1: TJavaArray<Byte>); cdecl;
    property mContentType: JString read _GetmContentType;
  end;
  TJResponse = class(TJavaGenericImport<JResponseClass, JResponse>) end;

  JHttpUrlResponseClass = interface(JResponseClass)
    ['{FF33B06A-7AC9-4407-9034-E5A5139D1D0B}']
    {class} function getCharset: JString; cdecl;//Deprecated
    {class} function getCode: Integer; cdecl;//Deprecated
    {class} function getCreateTime: Int64; cdecl;//Deprecated
    {class} function getHeader: JHttpUrlHeader; cdecl;//Deprecated
    {class} function getMsg: JString; cdecl;//Deprecated
    {class} function getPeriod: Int64; cdecl;//Deprecated
    {class} function init(P1: JHttpUrlHeader; P2: Integer; P3: JString; P4: TJavaArray<Byte>): JHttpUrlResponse; cdecl;//Deprecated
    {class} procedure setCharset(P1: JString); cdecl;//Deprecated
    {class} procedure setCreateTime(P1: Int64); cdecl;//Deprecated
    {class} procedure setHeader(P1: JHttpUrlHeader); cdecl;//Deprecated
    {class} procedure setPeriod(P1: Int64); cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/HttpUrlResponse')]
  JHttpUrlResponse = interface(JResponse)
    ['{C7D8708E-FB95-44EA-AEF6-5F5F32D30F74}']
  end;
  TJHttpUrlResponse = class(TJavaGenericImport<JHttpUrlResponseClass, JHttpUrlResponse>) end;

  JHttpWorkerClass = interface(JCallableClass)
    ['{6B565687-F4EC-40B2-8536-7BAE34FBDA71}']
    {class} function init(P1: JHttpManager; P2: JHttpUrlRequest): JHttpWorker; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/HttpWorker')]
  JHttpWorker = interface(JCallable)
    ['{EE2D2660-5F2A-4851-BC53-BD05B5AAFFF0}']
    function _GetmContext: JContext; cdecl;
    function _GetmRequest: JHttpUrlRequest; cdecl;
    function _GetmUrl: JString; cdecl;
    function call: JResponse; cdecl;
    procedure fillResponse(P1: JHttpUrlResponse; P2: JHttpResponse); cdecl;
    function getContentType(P1: JString): JHashMap; cdecl;
    function getHeaders: JArrayList; cdecl;
    function getPeriod(P1: JHttpResponse): Int64; cdecl;
    function getPostData: JAbstractHttpEntity; cdecl;
    function getRequest: JHttpUrlRequest; cdecl;
    function getUri: JURI; cdecl;
    function handleResponse(P1: JHttpResponse; P2: Integer; P3: JString): JResponse; cdecl;
    function handleResponseHeader(P1: JHttpResponse): JHttpUrlHeader; cdecl;
    function parserMaxage(P1: TJavaObjectArray<JString>): Int64; cdecl;
    function processResponse(P1: JHttpResponse; P2: JHttpUrlRequest): JResponse; cdecl;
    function willHandleOtherCode(P1: Integer; P2: JString): Boolean; cdecl;
    procedure writeData(P1: JHttpEntity; P2: Int64; P3: JOutputStream); cdecl;
    property mContext: JContext read _GetmContext;
    property mRequest: JHttpUrlRequest read _GetmRequest;
    property mUrl: JString read _GetmUrl;
  end;
  TJHttpWorker = class(TJavaGenericImport<JHttpWorkerClass, JHttpWorker>) end;

  JIOUtilClass = interface(JObjectClass)
    ['{0C3717EF-F204-4A97-ABDE-5AD10625A526}']
    {class} function InputStreamToByte(P1: JInputStream): TJavaArray<Byte>; cdecl;//Deprecated
    {class} procedure closeStream(P1: JCloseable); cdecl;//Deprecated
    {class} function convertStreamToString(P1: JInputStream): JString; cdecl;//Deprecated
    {class} function fileToByte(P1: JFile): TJavaArray<Byte>; cdecl;//Deprecated
    {class} function init: JIOUtil; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/IOUtil')]
  JIOUtil = interface(JObject)
    ['{14A7F2A9-0CAF-4962-BF8E-D449F0983861}']
  end;
  TJIOUtil = class(TJavaGenericImport<JIOUtilClass, JIOUtil>) end;

  JMiscUtilsClass = interface(JObjectClass)
    ['{F1AC4A41-0C69-4560-829C-09EF4C3313B6}']
    {class} function _GetRC_PACKAGE_NAME: JString; cdecl;
    {class} function init: JMiscUtils; cdecl;
    {class} function isDebugger(P1: JContext): Boolean; cdecl;
    {class} property RC_PACKAGE_NAME: JString read _GetRC_PACKAGE_NAME;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/MiscUtils')]
  JMiscUtils = interface(JObject)
    ['{695C574E-6E20-41AD-AF69-5F4369DFF45E}']
  end;
  TJMiscUtils = class(TJavaGenericImport<JMiscUtilsClass, JMiscUtils>) end;

  Jcore_NetworkUtilsClass = interface(JObjectClass)
    ['{8B2982D1-242F-4DD6-8C61-E0B302C683B7}']
    {class} function _GetNETWORK_TYPE_2G: Integer; cdecl;
    {class} function _GetNETWORK_TYPE_3G_4G: Integer; cdecl;
    {class} function _GetNETWORK_TYPE_INVALID: Integer; cdecl;
    {class} function _GetNETWORK_TYPE_LTE: Integer; cdecl;
    {class} function _GetNETWORK_TYPE_WIFI: Integer; cdecl;
    {class} function getActiveNetworkInfo(P1: JContext): JNetworkInfo; cdecl;
    {class} function getNetType(P1: JContext): Integer; cdecl;
    {class} function getNetworkType(P1: JContext): Integer; cdecl;
    {class} function getProxy(P1: JContext): JHttpHost; cdecl;
    {class} function init: Jcore_NetworkUtils; cdecl;
    {class} function isNetworkAvailable(P1: JContext): Boolean; cdecl;
    {class} property NETWORK_TYPE_2G: Integer read _GetNETWORK_TYPE_2G;
    {class} property NETWORK_TYPE_3G_4G: Integer read _GetNETWORK_TYPE_3G_4G;
    {class} property NETWORK_TYPE_INVALID: Integer read _GetNETWORK_TYPE_INVALID;
    {class} property NETWORK_TYPE_LTE: Integer read _GetNETWORK_TYPE_LTE;
    {class} property NETWORK_TYPE_WIFI: Integer read _GetNETWORK_TYPE_WIFI;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/NetworkUtils')]
  Jcore_NetworkUtils = interface(JObject)
    ['{2B6D380B-17A6-412F-9428-41AD539F03B0}']
  end;
  TJcore_NetworkUtils = class(TJavaGenericImport<Jcore_NetworkUtilsClass, Jcore_NetworkUtils>) end;

  JRpcExceptionClass = interface(JRuntimeExceptionClass)
    ['{6A891B33-3C20-4E75-9E6D-5D7CDEEA7FDE}']
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
    ['{3FF10BDE-986A-4898-9A00-C5CAB4CBED6C}']
  end;
  TJRpcException = class(TJavaGenericImport<JRpcExceptionClass, JRpcException>) end;

  JRpcException_ErrorCodeClass = interface(IJavaClass)
    ['{E0EFE002-80B5-4963-821E-ACE7A09D6966}']
    {class} function _GetCLIENT_DESERIALIZER_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_HANDLE_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_INTERUPTED_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_LOGIN_FAIL_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_NETWORK_AUTH_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_NETWORK_CACHE_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_NETWORK_CONNECTION_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_NETWORK_DNS_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_NETWORK_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_NETWORK_SCHEDULE_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_NETWORK_SERVER_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_NETWORK_SOCKET_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_NETWORK_SSL_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_NETWORK_UNAVAILABLE_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_TRANSPORT_UNAVAILABAL_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_UNKNOWN_ERROR: Integer; cdecl;
    {class} function _GetCLIENT_USER_CHANGE_ERROR: Integer; cdecl;
    {class} function _GetOK: Integer; cdecl;
    {class} function _GetSERVER_BIZEXCEPTION: Integer; cdecl;
    {class} function _GetSERVER_CREATEPROXYERROR: Integer; cdecl;
    {class} function _GetSERVER_ILLEGALACCESS: Integer; cdecl;
    {class} function _GetSERVER_ILLEGALARGUMENT: Integer; cdecl;
    {class} function _GetSERVER_INVOKEEXCEEDLIMIT: Integer; cdecl;
    {class} function _GetSERVER_JSONPARSEREXCEPTION: Integer; cdecl;
    {class} function _GetSERVER_METHODNOTFOUND: Integer; cdecl;
    {class} function _GetSERVER_OPERATIONTYPEMISSED: Integer; cdecl;
    {class} function _GetSERVER_PARAMMISSING: Integer; cdecl;
    {class} function _GetSERVER_PERMISSIONDENY: Integer; cdecl;
    {class} function _GetSERVER_REMOTEACCESSEXCEPTION: Integer; cdecl;
    {class} function _GetSERVER_REQUESTDATAMISSED: Integer; cdecl;
    {class} function _GetSERVER_REQUESTTIMEOUT: Integer; cdecl;
    {class} function _GetSERVER_SERVICENOTFOUND: Integer; cdecl;
    {class} function _GetSERVER_SESSIONSTATUS: Integer; cdecl;
    {class} function _GetSERVER_UNKNOWERROR: Integer; cdecl;
    {class} function _GetSERVER_VALUEINVALID: Integer; cdecl;
    {class} property CLIENT_DESERIALIZER_ERROR: Integer read _GetCLIENT_DESERIALIZER_ERROR;
    {class} property CLIENT_HANDLE_ERROR: Integer read _GetCLIENT_HANDLE_ERROR;
    {class} property CLIENT_INTERUPTED_ERROR: Integer read _GetCLIENT_INTERUPTED_ERROR;
    {class} property CLIENT_LOGIN_FAIL_ERROR: Integer read _GetCLIENT_LOGIN_FAIL_ERROR;
    {class} property CLIENT_NETWORK_AUTH_ERROR: Integer read _GetCLIENT_NETWORK_AUTH_ERROR;
    {class} property CLIENT_NETWORK_CACHE_ERROR: Integer read _GetCLIENT_NETWORK_CACHE_ERROR;
    {class} property CLIENT_NETWORK_CONNECTION_ERROR: Integer read _GetCLIENT_NETWORK_CONNECTION_ERROR;
    {class} property CLIENT_NETWORK_DNS_ERROR: Integer read _GetCLIENT_NETWORK_DNS_ERROR;
    {class} property CLIENT_NETWORK_ERROR: Integer read _GetCLIENT_NETWORK_ERROR;
    {class} property CLIENT_NETWORK_SCHEDULE_ERROR: Integer read _GetCLIENT_NETWORK_SCHEDULE_ERROR;
    {class} property CLIENT_NETWORK_SERVER_ERROR: Integer read _GetCLIENT_NETWORK_SERVER_ERROR;
    {class} property CLIENT_NETWORK_SOCKET_ERROR: Integer read _GetCLIENT_NETWORK_SOCKET_ERROR;
    {class} property CLIENT_NETWORK_SSL_ERROR: Integer read _GetCLIENT_NETWORK_SSL_ERROR;
    {class} property CLIENT_NETWORK_UNAVAILABLE_ERROR: Integer read _GetCLIENT_NETWORK_UNAVAILABLE_ERROR;
    {class} property CLIENT_TRANSPORT_UNAVAILABAL_ERROR: Integer read _GetCLIENT_TRANSPORT_UNAVAILABAL_ERROR;
    {class} property CLIENT_UNKNOWN_ERROR: Integer read _GetCLIENT_UNKNOWN_ERROR;
    {class} property CLIENT_USER_CHANGE_ERROR: Integer read _GetCLIENT_USER_CHANGE_ERROR;
    {class} property OK: Integer read _GetOK;
    {class} property SERVER_BIZEXCEPTION: Integer read _GetSERVER_BIZEXCEPTION;
    {class} property SERVER_CREATEPROXYERROR: Integer read _GetSERVER_CREATEPROXYERROR;
    {class} property SERVER_ILLEGALACCESS: Integer read _GetSERVER_ILLEGALACCESS;
    {class} property SERVER_ILLEGALARGUMENT: Integer read _GetSERVER_ILLEGALARGUMENT;
    {class} property SERVER_INVOKEEXCEEDLIMIT: Integer read _GetSERVER_INVOKEEXCEEDLIMIT;
    {class} property SERVER_JSONPARSEREXCEPTION: Integer read _GetSERVER_JSONPARSEREXCEPTION;
    {class} property SERVER_METHODNOTFOUND: Integer read _GetSERVER_METHODNOTFOUND;
    {class} property SERVER_OPERATIONTYPEMISSED: Integer read _GetSERVER_OPERATIONTYPEMISSED;
    {class} property SERVER_PARAMMISSING: Integer read _GetSERVER_PARAMMISSING;
    {class} property SERVER_PERMISSIONDENY: Integer read _GetSERVER_PERMISSIONDENY;
    {class} property SERVER_REMOTEACCESSEXCEPTION: Integer read _GetSERVER_REMOTEACCESSEXCEPTION;
    {class} property SERVER_REQUESTDATAMISSED: Integer read _GetSERVER_REQUESTDATAMISSED;
    {class} property SERVER_REQUESTTIMEOUT: Integer read _GetSERVER_REQUESTTIMEOUT;
    {class} property SERVER_SERVICENOTFOUND: Integer read _GetSERVER_SERVICENOTFOUND;
    {class} property SERVER_SESSIONSTATUS: Integer read _GetSERVER_SESSIONSTATUS;
    {class} property SERVER_UNKNOWERROR: Integer read _GetSERVER_UNKNOWERROR;
    {class} property SERVER_VALUEINVALID: Integer read _GetSERVER_VALUEINVALID;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/RpcException$ErrorCode')]
  JRpcException_ErrorCode = interface(IJavaInstance)
    ['{170DFC44-977E-46E0-A3DD-4763A3A93383}']
  end;
  TJRpcException_ErrorCode = class(TJavaGenericImport<JRpcException_ErrorCodeClass, JRpcException_ErrorCode>) end;

  JRpcFactoryClass = interface(JObjectClass)
    ['{FBCA4C21-2644-4C52-8E79-5D94AB15DDC2}']
    {class} function getConfig: Jcore_Config; cdecl;//Deprecated
    {class} function getRpcProxy(P1: Jlang_Class): JObject; cdecl;//Deprecated
    {class} function init(P1: Jcore_Config): JRpcFactory; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/RpcFactory')]
  JRpcFactory = interface(JObject)
    ['{6E86A9E8-892E-4EBE-820E-C96D00F4F82D}']
  end;
  TJRpcFactory = class(TJavaGenericImport<JRpcFactoryClass, JRpcFactory>) end;

  JInvocationHandlerClass = interface(IJavaClass)
    ['{6A007CA5-3D80-4B09-9FFC-B88E3C887FB2}']
  end;

  [JavaSignature('java/lang/reflect/InvocationHandler')]
  JInvocationHandler = interface(IJavaInstance)
    ['{C23EFD3B-082E-4C1E-8E2C-BA2AD7C6F02D}']
    function invoke(proxy: JObject; method: JMethod; args: TJavaObjectArray<JObject>): JObject; cdecl;
  end;
  TJInvocationHandler = class(TJavaGenericImport<JInvocationHandlerClass, JInvocationHandler>) end;

  JRpcInvocationHandlerClass = interface(JInvocationHandlerClass)
    ['{5C3E60DA-1B26-49BA-A51F-78715E83350B}']
    {class} function init(P1: Jcore_Config; P2: Jlang_Class; P3: JRpcInvoker): JRpcInvocationHandler; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/RpcInvocationHandler')]
  JRpcInvocationHandler = interface(JInvocationHandler)
    ['{9648F2B2-E724-4313-B8B5-25FC789AF09D}']
    function _GetmClazz: Jlang_Class; cdecl;
    function _GetmRpcInvoker: JRpcInvoker; cdecl;
    function invoke(P1: JObject; P2: JMethod; P3: TJavaObjectArray<JObject>): JObject; cdecl;
    property mClazz: Jlang_Class read _GetmClazz;
    property mRpcInvoker: JRpcInvoker read _GetmRpcInvoker;
  end;
  TJRpcInvocationHandler = class(TJavaGenericImport<JRpcInvocationHandlerClass, JRpcInvocationHandler>) end;

  JRpcInvokerClass = interface(JObjectClass)
    ['{9295940C-7CB7-4A4E-9D72-4760275253D2}']
    {class} procedure addProtocolArgs(P1: JString; P2: JObject); cdecl;//Deprecated
    {class} procedure batchBegin; cdecl;//Deprecated
    {class} function batchCommit: JFutureTask; cdecl;//Deprecated
    {class} function getDeserializer(P1: Jreflect_Type; P2: TJavaArray<Byte>): JDeserializer; cdecl;//Deprecated
    {class} function getSerializer(P1: Integer; P2: JString; P3: TJavaObjectArray<JObject>): JSerializer; cdecl;//Deprecated
    {class} function getTransport(P1: JMethod; P2: Integer; P3: JString; P4: TJavaArray<Byte>; P5: Boolean): JRpcCaller; cdecl;//Deprecated
    {class} function init(P1: JRpcFactory): JRpcInvoker; cdecl;//Deprecated
    {class} function invoke(P1: JObject; P2: Jlang_Class; P3: JMethod; P4: TJavaObjectArray<JObject>): JObject; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/RpcInvoker')]
  JRpcInvoker = interface(JObject)
    ['{486FCCFA-DAEA-4674-9C46-4EFAF533AA79}']
  end;
  TJRpcInvoker = class(TJavaGenericImport<JRpcInvokerClass, JRpcInvoker>) end;

  JRpcParamsClass = interface(JObjectClass)
    ['{C3B3F373-E8B0-471D-93D0-AE484B8F6EF6}']
    {class} function getGwUrl: JString; cdecl;//Deprecated
    {class} function getHeaders: JList; cdecl;//Deprecated
    {class} function init: JRpcParams; cdecl;//Deprecated
    {class} function isGzip: Boolean; cdecl;//Deprecated
    {class} procedure setGwUrl(P1: JString); cdecl;//Deprecated
    {class} procedure setGzip(P1: Boolean); cdecl;//Deprecated
    {class} procedure setHeaders(P1: JList); cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/RpcParams')]
  JRpcParams = interface(JObject)
    ['{1041BEFA-A84E-4E6B-A87B-6C1F29114D97}']
  end;
  TJRpcParams = class(TJavaGenericImport<JRpcParamsClass, JRpcParams>) end;

  JThreadUtilClass = interface(JObjectClass)
    ['{F452A222-B369-4D5F-818A-A024A03E9E1A}']
    {class} function checkMainThread: Boolean; cdecl;//Deprecated
    {class} function init: JThreadUtil; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/ThreadUtil')]
  JThreadUtil = interface(JObject)
    ['{718D76FA-41CE-4369-A31B-A2EB310E4A7F}']
  end;
  TJThreadUtil = class(TJavaGenericImport<JThreadUtilClass, JThreadUtil>) end;

  JTransportCallbackClass = interface(IJavaClass)
    ['{7E207201-A760-49CE-9ACC-FA51343656EB}']
    {class} procedure onCancelled(P1: JRequest); cdecl;//Deprecated
    {class} procedure onFailed(P1: JRequest; P2: Integer; P3: JString); cdecl;//Deprecated
    {class} procedure onPostExecute(P1: JRequest; P2: JResponse); cdecl;//Deprecated
    {class} procedure onPreExecute(P1: JRequest); cdecl;//Deprecated
    {class} procedure onProgressUpdate(P1: JRequest; P2: Double); cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/TransportCallback')]
  JTransportCallback = interface(IJavaInstance)
    ['{A203A6AF-8DE8-4CE4-9FD2-5FB27EA8932E}']
  end;
  TJTransportCallback = class(TJavaGenericImport<JTransportCallbackClass, JTransportCallback>) end;

  JHttpRequestRetryHandlerClass = interface(IJavaClass)
    ['{B403C5C7-95AC-48E6-9F32-FE0EF330235F}']
    {class} function retryRequest(exception: JIOException; executionCount: Integer; context: JHttpContext): Boolean; cdecl;
  end;

  [JavaSignature('org/apache/http/client/HttpRequestRetryHandler')]
  JHttpRequestRetryHandler = interface(IJavaInstance)
    ['{52DE82C7-6B53-417A-9FF6-5A38D0EF13F6}']
  end;
  TJHttpRequestRetryHandler = class(TJavaGenericImport<JHttpRequestRetryHandlerClass, JHttpRequestRetryHandler>) end;

  JZHttpRequestRetryHandlerClass = interface(JHttpRequestRetryHandlerClass)
    ['{9755AE38-4849-4CFA-A763-312ADB8F7BB9}']
    {class} function init: JZHttpRequestRetryHandler; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/ZHttpRequestRetryHandler')]
  JZHttpRequestRetryHandler = interface(JHttpRequestRetryHandler)
    ['{A82BF35C-FDD2-4273-B64E-DACF21D8D2DE}']
    function retryRequest(P1: JIOException; P2: Integer; P3: JHttpContext): Boolean; cdecl;
  end;
  TJZHttpRequestRetryHandler = class(TJavaGenericImport<JZHttpRequestRetryHandlerClass, JZHttpRequestRetryHandler>) end;

  JDeserializerClass = interface(IJavaClass)
    ['{1FC36C14-CF64-4255-859C-8C357735135B}']
    {class} function parser: JObject; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/gwprotocol/Deserializer')]
  JDeserializer = interface(IJavaInstance)
    ['{AFCA2F6F-EDE0-4613-8A08-C0EC6DC2F4E9}']
  end;
  TJDeserializer = class(TJavaGenericImport<JDeserializerClass, JDeserializer>) end;

  JAbstractDeserializerClass = interface(JDeserializerClass)
    ['{FA7657F8-AB1F-4D6B-B351-0B53CA6A08DB}']
    {class} function init(P1: Jreflect_Type; P2: TJavaArray<Byte>): JAbstractDeserializer; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/gwprotocol/AbstractDeserializer')]
  JAbstractDeserializer = interface(JDeserializer)
    ['{631002C3-DDEF-4B92-85F3-ADA8238762A8}']
    function _GetmData: TJavaArray<Byte>; cdecl;
    property mData: TJavaArray<Byte> read _GetmData;
  end;
  TJAbstractDeserializer = class(TJavaGenericImport<JAbstractDeserializerClass, JAbstractDeserializer>) end;

  JSerializerClass = interface(IJavaClass)
    ['{1871B165-F769-4617-82FC-902A57B79B97}']
    {class} function packet: TJavaArray<Byte>; cdecl;//Deprecated
    {class} procedure setExtParam(P1: JObject); cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/gwprotocol/Serializer')]
  JSerializer = interface(IJavaInstance)
    ['{EE334F5C-0010-4649-A7E9-94BB4DD48E99}']
  end;
  TJSerializer = class(TJavaGenericImport<JSerializerClass, JSerializer>) end;

  JAbstractSerializerClass = interface(JSerializerClass)
    ['{8DF68162-56EB-4277-98AD-E4C89B740422}']
    {class} function init(P1: JString; P2: JObject): JAbstractSerializer; cdecl;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/gwprotocol/AbstractSerializer')]
  JAbstractSerializer = interface(JSerializer)
    ['{3728F5A5-CDE1-4D06-96DD-94A42DADB291}']
    function _GetmParams: JObject; cdecl;
    property mParams: JObject read _GetmParams;
  end;
  TJAbstractSerializer = class(TJavaGenericImport<JAbstractSerializerClass, JAbstractSerializer>) end;

  JJsonDeserializerClass = interface(JAbstractDeserializerClass)
    ['{CADA3A7E-736F-4724-A0B4-316F28D5579D}']
    {class} function init(P1: Jreflect_Type; P2: TJavaArray<Byte>): JJsonDeserializer; cdecl;//Deprecated
    {class} function parser: JObject; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/gwprotocol/JsonDeserializer')]
  JJsonDeserializer = interface(JAbstractDeserializer)
    ['{284E9375-5C50-46A8-A9DB-80881F64C7D5}']
  end;
  TJJsonDeserializer = class(TJavaGenericImport<JJsonDeserializerClass, JJsonDeserializer>) end;

  JJsonSerializerClass = interface(JAbstractSerializerClass)
    ['{7BB7BD1F-BEE2-48AE-89F1-78D7148F7BFA}']
    {class} function _GetVERSION: JString; cdecl;
    {class} function init(P1: Integer; P2: JString; P3: JObject): JJsonSerializer; cdecl;
    {class} property VERSION: JString read _GetVERSION;
  end;

  [JavaSignature('com/alipay/android/phone/mrpc/core/gwprotocol/JsonSerializer')]
  JJsonSerializer = interface(JAbstractSerializer)
    ['{799A8EE7-5A06-457C-A4FA-0F652B2AD313}']
    function getId: Integer; cdecl;
    function packet: TJavaArray<Byte>; cdecl;
    procedure setExtParam(P1: JObject); cdecl;
    procedure setId(P1: Integer); cdecl;
  end;
  TJJsonSerializer = class(TJavaGenericImport<JJsonSerializerClass, JJsonSerializer>) end;

  Japmobilesecuritysdk_a_aClass = interface(JObjectClass)
    ['{C91F780F-37E9-47A5-A4F3-213235DD1307}']
    {class} function a(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} function a(P1: JMap): Integer; cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JString): JString; cdecl; overload;//Deprecated
    {class} function init(P1: JContext): Japmobilesecuritysdk_a_a; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/a/a')]
  Japmobilesecuritysdk_a_a = interface(JObject)
    ['{3B7C7449-1E61-4613-ABE9-758C447A1169}']
  end;
  TJapmobilesecuritysdk_a_a = class(TJavaGenericImport<Japmobilesecuritysdk_a_aClass, Japmobilesecuritysdk_a_a>) end;

  Japmobilesecuritysdk_b_aClass = interface(JObjectClass)
    ['{BE17F234-8D76-47F2-9987-470CF8A1D1AA}']
    {class} function a: Japmobilesecuritysdk_b_a; cdecl; overload;//Deprecated
    {class} procedure a(P1: Integer); cdecl; overload;//Deprecated
    {class} function b: Integer; cdecl;//Deprecated
    {class} function c: JString; cdecl;//Deprecated
    {class} function init: Japmobilesecuritysdk_b_a; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/b/a')]
  Japmobilesecuritysdk_b_a = interface(JObject)
    ['{223CDA6E-6DA3-43CF-8709-3AC5ED546887}']
  end;
  TJapmobilesecuritysdk_b_a = class(TJavaGenericImport<Japmobilesecuritysdk_b_aClass, Japmobilesecuritysdk_b_a>) end;

  Jc_aClass = interface(JObjectClass)
    ['{A1074CAE-7B82-48EA-A3BD-328473BF16A0}']
    {class} procedure a(P1: JThrowable); cdecl; overload;//Deprecated
    {class} procedure a(P1: JString); cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: JString; P3: JString; P4: JString); cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/c/a')]
  Jc_a = interface(JObject)
    ['{697DB9F6-27CC-4408-BB0A-888CC42E0989}']
  end;
  TJc_a = class(TJavaGenericImport<Jc_aClass, Jc_a>) end;

  Jc_bClass = interface(JObjectClass)
    ['{A9144AD3-9C48-4596-B652-0EE8F438398E}']
    {class} function init: Jc_b; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/c/b')]
  Jc_b = interface(JObject)
    ['{9A0C30DB-FE32-4004-9AB2-52E112A2CF3E}']
  end;
  TJc_b = class(TJavaGenericImport<Jc_bClass, Jc_b>) end;

  Jd_aClass = interface(JObjectClass)
    ['{20427709-B442-4CE9-9F2B-EE9F248828E6}']
    {class} function a(P1: JContext; P2: JMap): JMap; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/d/a')]
  Jd_a = interface(JObject)
    ['{B4479F50-AFE3-48F2-B883-FF049C77B891}']
  end;
  TJd_a = class(TJavaGenericImport<Jd_aClass, Jd_a>) end;

  Jd_bClass = interface(JObjectClass)
    ['{204914B9-0A64-49BC-8439-C948ECF9958B}']
    {class} function a(P1: JContext; P2: JMap): JMap; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/d/b')]
  Jd_b = interface(JObject)
    ['{375D1939-26E4-4D00-AA23-E0280A2BE6A8}']
  end;
  TJd_b = class(TJavaGenericImport<Jd_bClass, Jd_b>) end;

  Jd_cClass = interface(JObjectClass)
    ['{FFD228EB-BBDD-4CA1-BA4A-84AB6603C611}']
    {class} function a(P1: JContext): JMap; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/d/c')]
  Jd_c = interface(JObject)
    ['{EE170850-B1A4-4B7D-80F5-CF1B12A00F87}']
  end;
  TJd_c = class(TJavaGenericImport<Jd_cClass, Jd_c>) end;

  Jd_dClass = interface(JObjectClass)
    ['{EF08EA4D-A02D-451A-A7B0-4170FB7279A4}']
    {class} function a: JMap; cdecl; overload;//Deprecated
    {class} function a(P1: JContext): JMap; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/d/d')]
  Jd_d = interface(JObject)
    ['{B693BC12-6914-40BB-9099-80936074058A}']
  end;
  TJd_d = class(TJavaGenericImport<Jd_dClass, Jd_d>) end;

  Jd_eClass = interface(JObjectClass)
    ['{E33F86F4-57B2-486C-97FD-49C0C7853FB8}']
    {class} procedure a; cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JMap): JMap; cdecl; overload;//Deprecated
    {class} function b(P1: JContext; P2: JMap): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/d/e')]
  Jd_e = interface(JObject)
    ['{C7E8ACD9-EE53-41C5-8D69-FBC683DCEC95}']
  end;
  TJd_e = class(TJavaGenericImport<Jd_eClass, Jd_e>) end;

  Je_aClass = interface(JObjectClass)
    ['{A97F37B1-B3B9-42F0-B336-BE4B57071C87}']
    {class} function a: JString; cdecl;//Deprecated
    {class} function b: JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/e/a')]
  Je_a = interface(JObject)
    ['{71D57DE0-6566-4B5E-9DBA-B31EB8A7BB56}']
  end;
  TJe_a = class(TJavaGenericImport<Je_aClass, Je_a>) end;

  Jf_aClass = interface(JObjectClass)
    ['{13050921-63A4-4F9B-91FD-F29A1CBAFABA}']
    {class} procedure a; cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext); cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: Jf_b); cdecl; overload;//Deprecated
    {class} function b: Jf_b; cdecl; overload;//Deprecated
    {class} function b(P1: JContext): Jf_b; cdecl; overload;//Deprecated
    {class} function c(P1: JContext): Jf_b; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/a')]
  Jf_a = interface(JObject)
    ['{F76C8E66-6679-4672-B55E-C08531271197}']
  end;
  TJf_a = class(TJavaGenericImport<Jf_aClass, Jf_a>) end;

  Jf_bClass = interface(JObjectClass)
    ['{9507240B-0499-4D16-88F6-DC4D74272405}']
    {class} function a: JString; cdecl;//Deprecated
    {class} function b: JString; cdecl;//Deprecated
    {class} function c: JString; cdecl;//Deprecated
    {class} function init(P1: JString; P2: JString; P3: JString): Jf_b; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/b')]
  Jf_b = interface(JObject)
    ['{A7A7CB4D-B5C8-4803-9B74-A1EF2A516C73}']
  end;
  TJf_b = class(TJavaGenericImport<Jf_bClass, Jf_b>) end;

  Jf_cClass = interface(JObjectClass)
    ['{B387123D-9243-4915-B0D0-BFB836BAAF49}']
    {class} function a: JString; cdecl;//Deprecated
    {class} function b: JString; cdecl;//Deprecated
    {class} function c: JString; cdecl;//Deprecated
    {class} function d: JString; cdecl;//Deprecated
    {class} function e: JString; cdecl;//Deprecated
    {class} function init(P1: JString; P2: JString; P3: JString; P4: JString; P5: JString): Jf_c; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/c')]
  Jf_c = interface(JObject)
    ['{D36D3DFD-2617-4043-AFA1-2DEF93B30E6B}']
  end;
  TJf_c = class(TJavaGenericImport<Jf_cClass, Jf_c>) end;

  Jf_dClass = interface(JObjectClass)
    ['{8C2CC8E9-5955-429A-ADC4-39E85E7A6855}']
    {class} procedure a; cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext); cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: Jf_c); cdecl; overload;//Deprecated
    {class} function b: Jf_c; cdecl; overload;//Deprecated
    {class} function b(P1: JContext): Jf_c; cdecl; overload;//Deprecated
    {class} function c(P1: JContext): Jf_c; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/d')]
  Jf_d = interface(JObject)
    ['{45DC9CE5-DEE4-4FB7-B56A-543DFBF9869F}']
  end;
  TJf_d = class(TJavaGenericImport<Jf_dClass, Jf_d>) end;

  Jf_eClass = interface(JObjectClass)
    ['{FAEF61FB-A60A-40E7-A7F5-00C325BBB7D2}']
    {class} function a(P1: JContext): Jf_f; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/e')]
  Jf_e = interface(JObject)
    ['{0BC16BBF-5636-4A79-A3CE-D5361346F0BA}']
  end;
  TJf_e = class(TJavaGenericImport<Jf_eClass, Jf_e>) end;

  Jf_fClass = interface(JObjectClass)
    ['{3E28B190-B2F9-4DDD-8661-DA841E72A9AD}']
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
    ['{53872548-82E7-430A-AECD-21A79D3A08D3}']
  end;
  TJf_f = class(TJavaGenericImport<Jf_fClass, Jf_f>) end;

  Jf_gClass = interface(JObjectClass)
    ['{6DD5F371-36E3-4262-884B-578750F5AC3F}']
    {class} procedure a; cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext); cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JString): JString; cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: JString; P3: JString); cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/g')]
  Jf_g = interface(JObject)
    ['{1C817CB4-EB7E-421F-B5DB-6FAA577D45F4}']
  end;
  TJf_g = class(TJavaGenericImport<Jf_gClass, Jf_g>) end;

  Jf_hClass = interface(JObjectClass)
    ['{2061B550-C478-434F-A480-4757C3AC8636}']
    {class} function a(P1: JContext): Int64; cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: Boolean); cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: JString); cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: JString; P3: Int64); cdecl; overload;//Deprecated
    {class} function b(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} procedure b(P1: JContext; P2: JString); cdecl; overload;//Deprecated
    {class} function c(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} procedure c(P1: JContext; P2: JString); cdecl; overload;//Deprecated
    {class} function d(P1: JContext): Boolean; cdecl; overload;//Deprecated
    {class} procedure d(P1: JContext; P2: JString); cdecl; overload;//Deprecated
    {class} function e(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} procedure e(P1: JContext; P2: JString); cdecl; overload;//Deprecated
    {class} function f(P1: JContext): JString; cdecl; overload;//Deprecated
    {class} procedure f(P1: JContext; P2: JString); cdecl; overload;//Deprecated
    {class} function g(P1: JContext; P2: JString): Int64; cdecl;//Deprecated
    {class} function init: Jf_h; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/f/h')]
  Jf_h = interface(JObject)
    ['{CFC4389D-7597-42BF-8043-ED5C2488E2A7}']
  end;
  TJf_h = class(TJavaGenericImport<Jf_hClass, Jf_h>) end;

  Jf_iClass = interface(JObjectClass)
    ['{98FA4B40-D099-4FEF-8AD9-2597D675ADAA}']
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
    ['{DB36BAF6-9528-4A42-96F7-432464649FA1}']
  end;
  TJf_i = class(TJavaGenericImport<Jf_iClass, Jf_i>) end;

  JAPSecuritySdkClass = interface(JObjectClass)
    ['{5EBAD7D1-BBB3-42F7-9A50-163F5C88DE7F}']
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
    ['{9A418597-6499-4831-9014-DBDD20C7918A}']
  end;
  TJAPSecuritySdk = class(TJavaGenericImport<JAPSecuritySdkClass, JAPSecuritySdk>) end;

  JAPSecuritySdk_1Class = interface(JRunnableClass)
    ['{EEFECE69-CD20-449B-9851-7E0EAADD4F9A}']
    {class} function init(P1: JAPSecuritySdk; P2: JMap; P3: JAPSecuritySdk_InitResultListener): JAPSecuritySdk_1; cdecl;
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/face/APSecuritySdk$1')]
  JAPSecuritySdk_1 = interface(JRunnable)
    ['{67D1B887-BF72-4759-AABF-A65CF5CE94C4}']
    function _Getb: JAPSecuritySdk_InitResultListener; cdecl;
    function _Getc: JAPSecuritySdk; cdecl;
    procedure run; cdecl;
    property b: JAPSecuritySdk_InitResultListener read _Getb;
    property c: JAPSecuritySdk read _Getc;
  end;
  TJAPSecuritySdk_1 = class(TJavaGenericImport<JAPSecuritySdk_1Class, JAPSecuritySdk_1>) end;

  JAPSecuritySdk_InitResultListenerClass = interface(IJavaClass)
    ['{4DC3AF4A-78B0-4D12-B997-FB8C87A53471}']
    {class} procedure onResult(P1: JAPSecuritySdk_TokenResult); cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/face/APSecuritySdk$InitResultListener')]
  JAPSecuritySdk_InitResultListener = interface(IJavaInstance)
    ['{02C9B0A5-06EB-4649-B5D5-5C9C9BADF45A}']
  end;
  TJAPSecuritySdk_InitResultListener = class(TJavaGenericImport<JAPSecuritySdk_InitResultListenerClass, JAPSecuritySdk_InitResultListener>) end;

  JAPSecuritySdk_TokenResultClass = interface(JObjectClass)
    ['{77BBD280-AEE8-4EA7-A75E-9A9BF95F787A}']
    {class} function _GetapdidToken: JString; cdecl;
    {class} function init(P1: JAPSecuritySdk): JAPSecuritySdk_TokenResult; cdecl;
    {class} property apdidToken: JString read _GetapdidToken;
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/face/APSecuritySdk$TokenResult')]
  JAPSecuritySdk_TokenResult = interface(JObject)
    ['{E8B42878-7ED6-45A5-8E77-215C5458B1FC}']
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
    ['{93CC833F-33F6-4ED1-8CC4-3D317B1F8E83}']
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
    ['{BC62937E-CABE-4D0D-B930-1A0BC6FEBCF8}']
  end;
  TJEnvModeConfig = class(TJavaGenericImport<JEnvModeConfigClass, JEnvModeConfig>) end;

  Jg_aClass = interface(JObjectClass)
    ['{5B974D10-B8D1-4B69-9F88-3B1FCE623ACB}']
    {class} function a(P1: JString; P2: JString): JString; cdecl; overload;//Deprecated
    {class} procedure a(P1: JString; P2: JString; P3: JString); cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JString; P3: JString): JString; cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: JString; P3: JString; P4: JString); cdecl; overload;//Deprecated
    {class} function init: Jg_a; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/g/a')]
  Jg_a = interface(JObject)
    ['{4C40F23E-D109-4B93-BD1B-E7096903AC33}']
  end;
  TJg_a = class(TJavaGenericImport<Jg_aClass, Jg_a>) end;

  Jg_bClass = interface(JObjectClass)
    ['{46366D22-B787-4228-99B1-0F4A4A343A56}']
    {class} function a: Jg_b; cdecl; overload;//Deprecated
    {class} procedure a(P1: JRunnable); cdecl; overload;//Deprecated
    {class} function init: Jg_b; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/g/b')]
  Jg_b = interface(JObject)
    ['{14EE70B6-3C89-4349-8F6B-BF4B9CC2852D}']
  end;
  TJg_b = class(TJavaGenericImport<Jg_bClass, Jg_b>) end;

  Jg_cClass = interface(JRunnableClass)
    ['{693D0555-D683-4106-BA03-B80E0061A691}']
    {class} function init(P1: Jg_b): Jg_c; cdecl;
  end;

  [JavaSignature('com/alipay/apmobilesecuritysdk/g/c')]
  Jg_c = interface(JRunnable)
    ['{2818684D-646E-4A06-AB04-2136B43EA347}']
    procedure run; cdecl;
  end;
  TJg_c = class(TJavaGenericImport<Jg_cClass, Jg_c>) end;

  Ja_a_a_aClass = interface(JObjectClass)
    ['{6BE63C9D-186E-4DF9-A4A8-81F209F6008A}']
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
    ['{1441AF73-FF06-4E92-9671-338BA3A867E4}']
  end;
  TJa_a_a_a = class(TJavaGenericImport<Ja_a_a_aClass, Ja_a_a_a>) end;

  Ja_a_a_a_aClass = interface(JObjectClass)
    ['{9F332342-F66C-40BC-A5CF-95C1CDF52AA2}']
    {class} function a(P1: JString): TJavaArray<Byte>; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/a/a/a')]
  Ja_a_a_a_a = interface(JObject)
    ['{5E0CB842-B72A-432C-8C6D-E4762B703C41}']
  end;
  TJa_a_a_a_a = class(TJavaGenericImport<Ja_a_a_a_aClass, Ja_a_a_a_a>) end;

  Ja_a_bClass = interface(JObjectClass)
    ['{E23839E4-A14E-4577-8423-0D2747C5C647}']
    {class} function a(P1: JString): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/a/a/b')]
  Ja_a_b = interface(JObject)
    ['{FABC4787-4032-4D29-9A0E-4CAE3D6CD070}']
  end;
  TJa_a_b = class(TJavaGenericImport<Ja_a_bClass, Ja_a_b>) end;

  Ja_a_cClass = interface(JObjectClass)
    ['{90775D5C-B534-4C67-98A1-DBF7F7E4D8B2}']
    {class} function a: JString; cdecl; overload;//Deprecated
    {class} function a(P1: JString; P2: JString): JString; cdecl; overload;//Deprecated
    {class} function b(P1: JString; P2: JString): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/a/a/c')]
  Ja_a_c = interface(JObject)
    ['{A2B7F8D1-EEDA-488C-BA56-94BD688EAC29}']
  end;
  TJa_a_c = class(TJavaGenericImport<Ja_a_cClass, Ja_a_c>) end;

  Ja_a_a_bClass = interface(JObjectClass)
    ['{43FFF9EA-EA3A-4FE3-A243-FA097126F4B0}']
    {class} function a(P1: JString; P2: JString): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/a/b')]
  Ja_a_a_b = interface(JObject)
    ['{E5267C4F-D872-4B5F-87C6-D2331BD7519E}']
  end;
  TJa_a_a_b = class(TJavaGenericImport<Ja_a_a_bClass, Ja_a_a_b>) end;

  Ja_b_aClass = interface(JObjectClass)
    ['{8A0D549A-230B-442B-B343-33A45A377962}']
    {class} function a: Ja_b_a; cdecl; overload;//Deprecated
    {class} function a(P1: JContext): JString; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/b/a')]
  Ja_b_a = interface(JObject)
    ['{2F16508F-2111-406A-AF90-1BB6792E230D}']
  end;
  TJa_b_a = class(TJavaGenericImport<Ja_b_aClass, Ja_b_a>) end;

  Jb_bClass = interface(JObjectClass)
    ['{BABD44AB-261F-48C8-AF16-015791AE9AB5}']
    {class} function a: Jb_b; cdecl; overload;//Deprecated
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
  Jb_b = interface(JObject)
    ['{8544D94A-3411-46D8-A610-FBEA7C4DF6C3}']
  end;
  TJb_b = class(TJavaGenericImport<Jb_bClass, Jb_b>) end;

  Jb_cClass = interface(JFileFilterClass)
    ['{C665F386-BCF3-4E1F-9869-782B29609B36}']
    {class} function init(P1: Jb_b): Jb_c; cdecl;
  end;

  [JavaSignature('com/alipay/b/a/a/b/c')]
  Jb_c = interface(JFileFilter)
    ['{41C911A3-D5A1-4841-976E-7B70E21F38C1}']
    function accept(P1: JFile): Boolean; cdecl;
  end;
  TJb_c = class(TJavaGenericImport<Jb_cClass, Jb_c>) end;

  Jb_dClass = interface(JObjectClass)
    ['{A97CCA51-66F0-48D5-B367-1B3B01A709C0}']
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
    ['{6A1B943F-3EC8-4AE3-9CC4-9457CB5C1574}']
  end;
  TJb_d = class(TJavaGenericImport<Jb_dClass, Jb_d>) end;

  Ja_c_aClass = interface(IJavaClass)
    ['{49541CAB-2551-4154-B702-09456931DD74}']
    {class} function a(P1: JString): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JDataReportRequest): JDataReportResult; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/c/a')]
  Ja_c_a = interface(IJavaInstance)
    ['{CE9346D4-FA43-4C57-A437-426D1B6671BE}']
  end;
  TJa_c_a = class(TJavaGenericImport<Ja_c_aClass, Ja_c_a>) end;

  Jc_a_aClass = interface(JObjectClass)
    ['{65ACA88A-6D93-4126-AD89-9B7CF9F44512}']
    {class} function _Geta: Boolean; cdecl;
    {class} function init: Jc_a_a; cdecl;
    {class} property a: Boolean read _Geta;
  end;

  [JavaSignature('com/alipay/b/a/a/c/a/a')]
  Jc_a_a = interface(JObject)
    ['{119DBA55-2499-4C8A-A82D-9C6E03E32ACE}']
    function _Getb: JString; cdecl;
    property b: JString read _Getb;
  end;
  TJc_a_a = class(TJavaGenericImport<Jc_a_aClass, Jc_a_a>) end;

  Jc_a_bClass = interface(JObjectClass)
    ['{2D848936-4CCE-4892-97AF-CA367E8BCE90}']
    {class} function a(P1: JDataReportResult): Jc_a_c; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/c/a/b')]
  Jc_a_b = interface(JObject)
    ['{838B20EF-5766-4AEC-992A-BE5BCACF455A}']
  end;
  TJc_a_b = class(TJavaGenericImport<Jc_a_bClass, Jc_a_b>) end;

  Jc_a_cClass = interface(Jc_a_aClass)
    ['{B2F6FE41-A1D1-4676-A7EA-B7C3ED891391}']
    {class} function _Getc: JString; cdecl;
    {class} function init: Jc_a_c; cdecl;
    {class} property c: JString read _Getc;
  end;

  [JavaSignature('com/alipay/b/a/a/c/a/c')]
  Jc_a_c = interface(Jc_a_a)
    ['{4E950D8F-7413-45E8-A251-95A01CD2D4AC}']
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
  TJc_a_c = class(TJavaGenericImport<Jc_a_cClass, Jc_a_c>) end;

  Jc_a_dClass = interface(JObjectClass)
    ['{335256F0-2B93-4945-A0A9-9415EE75AD90}']
    {class} function a: JString; cdecl; overload;//Deprecated
    {class} procedure a(P1: JString); cdecl; overload;//Deprecated
    {class} procedure a(P1: JMap); cdecl; overload;//Deprecated
    {class} function b: JString; cdecl; overload;//Deprecated
    {class} procedure b(P1: JString); cdecl; overload;//Deprecated
    {class} function c: JString; cdecl; overload;//Deprecated
    {class} procedure c(P1: JString); cdecl; overload;//Deprecated
    {class} function d: JString; cdecl; overload;//Deprecated
    {class} procedure d(P1: JString); cdecl; overload;//Deprecated
    {class} function e: JMap; cdecl; overload;//Deprecated
    {class} procedure e(P1: JString); cdecl; overload;//Deprecated
    {class} function f: JString; cdecl; overload;//Deprecated
    {class} procedure f(P1: JString); cdecl; overload;//Deprecated
    {class} procedure g(P1: JString); cdecl;//Deprecated
    {class} procedure h(P1: JString); cdecl;//Deprecated
    {class} function init: Jc_a_d; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/c/a/d')]
  Jc_a_d = interface(JObject)
    ['{A5E4CDFC-9FD0-46F3-BB27-8FD935D912DB}']
  end;
  TJc_a_d = class(TJavaGenericImport<Jc_a_dClass, Jc_a_d>) end;

  Ja_c_bClass = interface(Ja_c_aClass)
    ['{456EAB2E-374D-431A-871E-ACB8FA811508}']
    {class} function a(P1: JString): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JDataReportRequest): JDataReportResult; cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JString): Ja_c_b; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/c/b')]
  Ja_c_b = interface(Ja_c_a)
    ['{05F54B7A-6C6C-4A9A-B86E-3F2E69818B79}']
  end;
  TJa_c_b = class(TJavaGenericImport<Ja_c_bClass, Ja_c_b>) end;

  Jc_b_aClass = interface(IJavaClass)
    ['{347B16D5-D246-4AF5-B43F-845592909B23}']
    {class} function a(P1: JString): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: Jc_a_d): Jc_a_c; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/c/b/a')]
  Jc_b_a = interface(IJavaInstance)
    ['{09DD154B-6EE6-4BA8-9A9D-66DB7177E4EC}']
  end;
  TJc_b_a = class(TJavaGenericImport<Jc_b_aClass, Jc_b_a>) end;

  Jc_b_bClass = interface(Jc_b_aClass)
    ['{5DA3F993-29F1-43CB-A826-760C19829B06}']
    {class} function a(P1: JString): Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: Jc_a_d): Jc_a_c; cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JString): Jc_b_a; cdecl; overload;//Deprecated
    {class} function init: Jc_b_b; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/c/b/b')]
  Jc_b_b = interface(Jc_b_a)
    ['{8F309520-FFD6-4D86-8781-EE509CCF6EBD}']
  end;
  TJc_b_b = class(TJavaGenericImport<Jc_b_bClass, Jc_b_b>) end;

  Jc_cClass = interface(JRunnableClass)
    ['{939FDF03-57AD-470E-B080-24FDC9744B0A}']
    {class} function init(P1: Ja_c_b; P2: JDataReportRequest): Jc_c; cdecl;
  end;

  [JavaSignature('com/alipay/b/a/a/c/c')]
  Jc_c = interface(JRunnable)
    ['{2DABF99C-E4DD-42DF-83E1-98723B7F7A17}']
    function _Getb: Ja_c_b; cdecl;
    procedure run; cdecl;
    property b: Ja_c_b read _Getb;
  end;
  TJc_c = class(TJavaGenericImport<Jc_cClass, Jc_c>) end;

  Jc_dClass = interface(JObjectClass)
    ['{6384E990-C002-4B29-952C-76903E0913EE}']
    {class} function a(P1: JContext; P2: JString): Jc_b_a; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/c/d')]
  Jc_d = interface(JObject)
    ['{B57E4431-3BE8-4895-9755-EAAFA29ADB41}']
  end;
  TJc_d = class(TJavaGenericImport<Jc_dClass, Jc_d>) end;

  Ja_d_aClass = interface(JObjectClass)
    ['{29933F3A-E42E-4CA7-862A-991C5D646A74}']
    {class} function a(P1: JContext; P2: JString; P3: JString): JString; cdecl; overload;//Deprecated
    {class} procedure a(P1: JContext; P2: JString; P3: JString; P4: JString); cdecl; overload;//Deprecated
    {class} function init: Ja_d_a; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/d/a')]
  Ja_d_a = interface(JObject)
    ['{B3177AB6-5481-45FC-B396-77596BE7199A}']
  end;
  TJa_d_a = class(TJavaGenericImport<Ja_d_aClass, Ja_d_a>) end;

  Ja_d_bClass = interface(JObjectClass)
    ['{D8B12404-FE9D-4A02-837A-4E5CB466775C}']
    {class} function a(P1: JString): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/d/b')]
  Ja_d_b = interface(JObject)
    ['{459A3810-D645-4375-A759-106C716BE248}']
  end;
  TJa_d_b = class(TJavaGenericImport<Ja_d_bClass, Ja_d_b>) end;

  Ja_d_cClass = interface(JObjectClass)
    ['{08AFC329-1465-4FCB-A09D-9EEDAAE4869B}']
    {class} function a: Boolean; cdecl; overload;//Deprecated
    {class} function a(P1: JString): JString; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/d/c')]
  Ja_d_c = interface(JObject)
    ['{CCEFEA37-D25A-4E8E-87E4-C154A398F510}']
  end;
  TJa_d_c = class(TJavaGenericImport<Ja_d_cClass, Ja_d_c>) end;

  Ja_d_dClass = interface(JObjectClass)
    ['{C7AFF9B2-87CD-4945-8EBB-37EE59D82224}']
    {class} procedure a(P1: JContext; P2: JString; P3: JMap); cdecl; overload;//Deprecated
    {class} function a(P1: JContext; P2: JString; P3: JString; P4: JString): JString; cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/d/d')]
  Ja_d_d = interface(JObject)
    ['{1B503505-4AA9-4756-BBB8-697EC1B4B3FD}']
  end;
  TJa_d_d = class(TJavaGenericImport<Ja_d_dClass, Ja_d_d>) end;

  Ja_e_aClass = interface(JObjectClass)
    ['{CD49ABEA-53BA-49EA-9F73-160873080982}']
    {class} function init(P1: JString; P2: JString; P3: JString; P4: JString; P5: JString; P6: JString; P7: JString): Ja_e_a; cdecl;//Deprecated
    {class} function toString: JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/e/a')]
  Ja_e_a = interface(JObject)
    ['{6389F6BA-D622-4C70-B108-25C896887C33}']
  end;
  TJa_e_a = class(TJavaGenericImport<Ja_e_aClass, Ja_e_a>) end;

  Je_bClass = interface(JObjectClass)
    ['{3EEAF256-EB05-4CF7-8F48-DCC04ED57C87}']
    {class} procedure a; cdecl; overload;//Deprecated
    {class} function init(P1: JString; P2: Jc_b_a): Je_b; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/e/b')]
  Je_b = interface(JObject)
    ['{C7EA47E9-055D-407A-A25C-42F57ACC396D}']
  end;
  TJe_b = class(TJavaGenericImport<Je_bClass, Je_b>) end;

  Je_cClass = interface(JRunnableClass)
    ['{0EA593C6-5673-48A6-90BA-796D10255AE3}']
    {class} function init(P1: Je_b): Je_c; cdecl;
  end;

  [JavaSignature('com/alipay/b/a/a/e/c')]
  Je_c = interface(JRunnable)
    ['{180FE9D3-D22B-4A34-9DA0-5F6F5D0C20F8}']
    procedure run; cdecl;
  end;
  TJe_c = class(TJavaGenericImport<Je_cClass, Je_c>) end;

  Je_dClass = interface(JObjectClass)
    ['{EC800639-6E46-4766-80EF-83842E4302A6}']
    {class} procedure a(P1: JThrowable); cdecl; overload;//Deprecated
    {class} procedure a(P1: JString); cdecl; overload;//Deprecated
    {class} procedure a(P1: JString; P2: JString; P3: JString); cdecl; overload;//Deprecated
  end;

  [JavaSignature('com/alipay/b/a/a/e/d')]
  Je_d = interface(JObject)
    ['{9D3D875C-8304-4BD7-9072-3F2898541AE1}']
  end;
  TJe_d = class(TJavaGenericImport<Je_dClass, Je_d>) end;

  JOperationTypeClass = interface(JAnnotationClass)
    ['{CC8DBD65-EB43-4BFD-B92C-3BE4847A8D29}']
    {class} function value: JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/mobile/framework/service/annotation/OperationType')]
  JOperationType = interface(JAnnotation)
    ['{4EA7F4DA-4F33-4094-B4BB-2F46FC7EF0ED}']
  end;
  TJOperationType = class(TJavaGenericImport<JOperationTypeClass, JOperationType>) end;

  JResetCookieClass = interface(JAnnotationClass)
    ['{E61D366A-E1E3-423B-A5A3-26703DED82B7}']
  end;

  [JavaSignature('com/alipay/mobile/framework/service/annotation/ResetCookie')]
  JResetCookie = interface(JAnnotation)
    ['{427D8408-08FA-4734-89C9-729A91A26DAD}']
  end;
  TJResetCookie = class(TJavaGenericImport<JResetCookieClass, JResetCookie>) end;

  JUpdateDeviceInfoClass = interface(JAnnotationClass)
    ['{C29DCC0D-988A-4B54-B98F-7494BB1E05E6}']
  end;

  [JavaSignature('com/alipay/mobile/framework/service/annotation/UpdateDeviceInfo')]
  JUpdateDeviceInfo = interface(JAnnotation)
    ['{84DDDCCD-6EA8-49EA-9E09-80FA95A519F5}']
  end;
  TJUpdateDeviceInfo = class(TJavaGenericImport<JUpdateDeviceInfoClass, JUpdateDeviceInfo>) end;

  JSecurityClientMobileClass = interface(JObjectClass)
    ['{FA41811B-2587-4ACF-8D20-0E6D69247118}']
    {class} function GetApdid(P1: JContext; P2: JMap): JString; cdecl;//Deprecated
    {class} function init: JSecurityClientMobile; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/mobilesecuritysdk/face/SecurityClientMobile')]
  JSecurityClientMobile = interface(JObject)
    ['{91A5FEC8-F31E-438E-A728-6147AAA699FE}']
  end;
  TJSecurityClientMobile = class(TJavaGenericImport<JSecurityClientMobileClass, JSecurityClientMobile>) end;

  JBugTrackMessageServiceClass = interface(IJavaClass)
    ['{CA343617-D10A-42B8-9C32-E284C1090B32}']
    {class} function logCollect(P1: JString): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/deviceFp/BugTrackMessageService')]
  JBugTrackMessageService = interface(IJavaInstance)
    ['{8852EDA2-03B7-4F7E-80C6-84BA0403E82C}']
  end;
  TJBugTrackMessageService = class(TJavaGenericImport<JBugTrackMessageServiceClass, JBugTrackMessageService>) end;

  JDataReportServiceClass = interface(IJavaClass)
    ['{5E69D0D3-3EF8-4F6B-8C59-D34F6D184B1C}']
    {class} function reportData(P1: JDataReportRequest): JDataReportResult; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/report/general/DataReportService')]
  JDataReportService = interface(IJavaInstance)
    ['{C8C667CD-7A4D-42F7-9171-C86554378751}']
  end;
  TJDataReportService = class(TJavaGenericImport<JDataReportServiceClass, JDataReportService>) end;

  JDataReportRequestClass = interface(JSerializableClass)
    ['{B67EC962-629D-47B2-966B-D733174B75C1}']
    {class} function _GetbizType: JString; cdecl;
    {class} function init: JDataReportRequest; cdecl;
    {class} property bizType: JString read _GetbizType;
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/report/general/model/DataReportRequest')]
  JDataReportRequest = interface(JSerializable)
    ['{5BD33A2C-96AF-434A-9804-AA316BF85CEE}']
    function _GetbizData: JMap; cdecl;
    function _GetdeviceData: JMap; cdecl;
    function _Getos: JString; cdecl;
    function _GetrpcVersion: JString; cdecl;
    property bizData: JMap read _GetbizData;
    property deviceData: JMap read _GetdeviceData;
    property os: JString read _Getos;
    property rpcVersion: JString read _GetrpcVersion;
  end;
  TJDataReportRequest = class(TJavaGenericImport<JDataReportRequestClass, JDataReportRequest>) end;

  JDataReportResultClass = interface(JSerializableClass)
    ['{C644957B-C355-4CD4-A6A8-E0187411AD0E}']
    {class} function _Getsuccess: Boolean; cdecl;
    {class} function init: JDataReportResult; cdecl;
    {class} property success: Boolean read _Getsuccess;
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/report/general/model/DataReportResult')]
  JDataReportResult = interface(JSerializable)
    ['{06F58597-5F02-4F32-96B4-0F31F9090F86}']
    function _GetresultCode: JString; cdecl;
    function _GetresultData: JMap; cdecl;
    property resultCode: JString read _GetresultCode;
    property resultData: JMap read _GetresultData;
  end;
  TJDataReportResult = class(TJavaGenericImport<JDataReportResultClass, JDataReportResult>) end;

  JAppListCmdServiceClass = interface(IJavaClass)
    ['{C257DE4A-4167-4BC1-97F3-04551057A6DF}']
    {class} function getAppListCmd(P1: JAppListCmdRequest): JAppListCmdResult; cdecl;//Deprecated
    {class} function reGetAppListCmd(P1: JAppListCmdRequest): JAppListCmdResult; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/AppListCmdService')]
  JAppListCmdService = interface(IJavaInstance)
    ['{3BFDCD00-100F-4350-AF48-88508D8D24C5}']
  end;
  TJAppListCmdService = class(TJavaGenericImport<JAppListCmdServiceClass, JAppListCmdService>) end;

  JDeviceDataReportServiceClass = interface(IJavaClass)
    ['{19003D6D-3F0A-4F2A-B9DE-50660D71E0DC}']
    {class} function getAppList(P1: JString): JAppListResult; cdecl;//Deprecated
    {class} function reportStaticData(P1: JDeviceDataReportRequest): JDeviceDataReportResult; cdecl;//Deprecated
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/DeviceDataReportService')]
  JDeviceDataReportService = interface(IJavaInstance)
    ['{851D1B69-82D4-4563-835B-7D63FFDB597F}']
  end;
  TJDeviceDataReportService = class(TJavaGenericImport<JDeviceDataReportServiceClass, JDeviceDataReportService>) end;

  JAppListCmdRequestClass = interface(JSerializableClass)
    ['{07F383AD-477F-44D5-878F-F9DA700D0594}']
    {class} function _Getos: JString; cdecl;
    {class} function init: JAppListCmdRequest; cdecl;
    {class} property os: JString read _Getos;
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/request/AppListCmdRequest')]
  JAppListCmdRequest = interface(JSerializable)
    ['{EF15A765-BB31-44FC-B978-EF71365940CB}']
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
    ['{73F6D8CD-6F11-4A5F-A596-6DA14A15E21C}']
    {class} function _Getos: JString; cdecl;
    {class} function init: JDeviceDataReportRequest; cdecl;
    {class} property os: JString read _Getos;
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/request/DeviceDataReportRequest')]
  JDeviceDataReportRequest = interface(JSerializable)
    ['{27A7DBC4-BC86-48DF-A674-BDDD2EDD2D0F}']
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
    ['{5B8B751F-1D2A-49A6-BDE5-09F1AB27D614}']
    {class} function _Getsuccess: Boolean; cdecl;
    {class} function init: JBaseResult; cdecl;
    {class} property success: Boolean read _Getsuccess;
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/result/BaseResult')]
  JBaseResult = interface(JSerializable)
    ['{C0BE5E49-CDE7-42FA-BE56-116ABA05C863}']
    function _GetresultCode: JString; cdecl;
    property resultCode: JString read _GetresultCode;
  end;
  TJBaseResult = class(TJavaGenericImport<JBaseResultClass, JBaseResult>) end;

  JAppListResultClass = interface(JBaseResultClass)
    ['{B4EEB9E4-94BC-47CD-B439-6167596F5A6F}']
    {class} function _GetappListVer: JString; cdecl;
    {class} function init: JAppListResult; cdecl;
    {class} property appListVer: JString read _GetappListVer;
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/result/AppListResult')]
  JAppListResult = interface(JBaseResult)
    ['{B9168D47-32ED-4C38-BFCF-7C47A854CC6C}']
    function _GetappListData: JString; cdecl;
    property appListData: JString read _GetappListData;
  end;
  TJAppListResult = class(TJavaGenericImport<JAppListResultClass, JAppListResult>) end;

  JAppListCmdResultClass = interface(JAppListResultClass)
    ['{B3425B7F-BEE4-4716-89F2-2B88476AE878}']
    {class} function _GetneedRetry: Boolean; cdecl;
    {class} function init: JAppListCmdResult; cdecl;
    {class} property needRetry: Boolean read _GetneedRetry;
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/result/AppListCmdResult')]
  JAppListCmdResult = interface(JAppListResult)
    ['{906DF8C9-02C9-46E3-BB7B-1FD67EF98B0B}']
  end;
  TJAppListCmdResult = class(TJavaGenericImport<JAppListCmdResultClass, JAppListCmdResult>) end;

  JDeviceDataReportResultClass = interface(JBaseResultClass)
    ['{0D4BA34E-07E9-4BB2-8BD9-07313BBBADE0}']
    {class} function _Getapdid: JString; cdecl;
    {class} function init: JDeviceDataReportResult; cdecl;
    {class} property apdid: JString read _Getapdid;
  end;

  [JavaSignature('com/alipay/tscenter/biz/rpc/vkeydfp/result/DeviceDataReportResult')]
  JDeviceDataReportResult = interface(JBaseResult)
    ['{4E6E2DF6-886C-4E8B-9ABF-E95556E55927}']
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
    ['{B0050162-7C93-4B97-9C38-936235B580CB}']
    {class} function getInstance(P1: JContext): JAidManager; cdecl;//Deprecated
    {class} function getValue(P1: JString; P2: JString; P3: JString): JString; cdecl;//Deprecated
    {class} procedure requestAid(P1: JString; P2: JString; P3: JString; P4: JAidCallback); cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/aid/AidManager')]
  JAidManager = interface(JObject)
    ['{FF97B34D-C51F-4A7A-B02F-D3CEBEF0A337}']
  end;
  TJAidManager = class(TJavaGenericImport<JAidManagerClass, JAidManager>) end;

  JAidRequesterClass = interface(JObjectClass)
    ['{6E156744-2CFE-4D9E-9229-C218A8997291}']
    {class} function getInstance(P1: JContext): JAidRequester; cdecl;//Deprecated
    {class} function init(P1: JContext): JAidRequester; cdecl;//Deprecated
    {class} function postRest(P1: JString; P2: JString; P3: JString; P4: JString): JString; cdecl;//Deprecated
    {class} procedure postRestAsync(P1: JString; P2: JString; P3: JString; P4: JString; P5: JAidCallback); cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/aid/AidRequester')]
  JAidRequester = interface(JObject)
    ['{00CF76FE-2B85-4112-9B80-FCC5B15DF423}']
  end;
  TJAidRequester = class(TJavaGenericImport<JAidRequesterClass, JAidRequester>) end;

  JAidRequester_PostRestThreadClass = interface(JThreadClass)
    ['{1DE71A15-6D06-4B93-B135-6B6F3EB8C97E}']
    {class} function init(P1: JAidRequester; P2: JHttpPost): JAidRequester_PostRestThread; cdecl; overload;
    {class} function init(P1: JAidRequester; P2: JHttpPost; P3: JAidCallback; P4: JString; P5: JString; P6: JString): JAidRequester_PostRestThread; cdecl; overload;
  end;

  [JavaSignature('com/ta/utdid2/aid/AidRequester$PostRestThread')]
  JAidRequester_PostRestThread = interface(JThread)
    ['{B02D0ECD-8CE3-4C8D-9D95-4A8BEE5CDEF5}']
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
    ['{16641458-B689-4E79-9E7F-0E71064CA9E0}']
    {class} function getAidGenTimeFromSP(P1: JContext; P2: JString; P3: JString): Int64; cdecl;//Deprecated
    {class} function getAidValueFromSP(P1: JContext; P2: JString; P3: JString): JString; cdecl;//Deprecated
    {class} function init: JAidStorageController; cdecl;//Deprecated
    {class} procedure setAidValueToSP(P1: JContext; P2: JString; P3: JString; P4: JString); cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/aid/AidStorageController')]
  JAidStorageController = interface(JObject)
    ['{CCA96F7B-DD28-4085-96A5-19EB6B3C3D39}']
  end;
  TJAidStorageController = class(TJavaGenericImport<JAidStorageControllerClass, JAidStorageController>) end;

  JAESUtilsClass = interface(JObjectClass)
    ['{1F92ABE9-9EA9-4C0C-A7B5-D90E1AA8E4C5}']
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
    ['{54D9941E-6EF6-47B4-82DE-9AD21C9389C3}']
  end;
  TJAESUtils = class(TJavaGenericImport<JAESUtilsClass, JAESUtils>) end;

  Jutils_Base64Class = interface(JObjectClass)
    ['{4486DFDF-4760-4A9B-B9E1-45E7451533A6}']
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
    ['{1E035533-D4B9-4A87-9E1E-26AD7432D414}']
  end;
  TJutils_Base64 = class(TJavaGenericImport<Jutils_Base64Class, Jutils_Base64>) end;

  JBase64_CoderClass = interface(JObjectClass)
    ['{A4648892-A227-462F-8B27-F2EDEB8DEB50}']
    {class} function _Getoutput: TJavaArray<Byte>; cdecl;
    {class} function init: JBase64_Coder; cdecl;
    {class} property output: TJavaArray<Byte> read _Getoutput;
  end;

  [JavaSignature('com/ta/utdid2/android/utils/Base64$Coder')]
  JBase64_Coder = interface(JObject)
    ['{D6ACF272-87F1-470D-B432-FDA639A2B3D1}']
    function _Getop: Integer; cdecl;
    function maxOutputSize(P1: Integer): Integer; cdecl;
    function process(P1: TJavaArray<Byte>; P2: Integer; P3: Integer; P4: Boolean): Boolean; cdecl;
    property op: Integer read _Getop;
  end;
  TJBase64_Coder = class(TJavaGenericImport<JBase64_CoderClass, JBase64_Coder>) end;

  JBase64_DecoderClass = interface(JBase64_CoderClass)
    ['{3390D742-36B2-4C91-9109-B390FFFB59F9}']
    {class} function init(P1: Integer; P2: TJavaArray<Byte>): JBase64_Decoder; cdecl;//Deprecated
    {class} function maxOutputSize(P1: Integer): Integer; cdecl;//Deprecated
    {class} function process(P1: TJavaArray<Byte>; P2: Integer; P3: Integer; P4: Boolean): Boolean; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/android/utils/Base64$Decoder')]
  JBase64_Decoder = interface(JBase64_Coder)
    ['{F7AE409B-6937-4734-A6C5-301CCF6CAEC3}']
  end;
  TJBase64_Decoder = class(TJavaGenericImport<JBase64_DecoderClass, JBase64_Decoder>) end;

  JBase64_EncoderClass = interface(JBase64_CoderClass)
    ['{EA8E0A94-E06F-44D0-807C-5FAFCF84AC8C}']
    {class} function _GetAssertionsDisabled: Boolean; cdecl;
    {class} function _GetLINE_GROUPS: Integer; cdecl;
    {class} function init(P1: Integer; P2: TJavaArray<Byte>): JBase64_Encoder; cdecl;
    {class} property AssertionsDisabled: Boolean read _GetAssertionsDisabled;
    {class} property LINE_GROUPS: Integer read _GetLINE_GROUPS;
  end;

  [JavaSignature('com/ta/utdid2/android/utils/Base64$Encoder')]
  JBase64_Encoder = interface(JBase64_Coder)
    ['{B7ADD8A3-21C5-4B0E-B67E-4B05506270EC}']
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
    ['{44365966-BBE6-4E62-9EC1-CF501ACEB194}']
    {class} function encodeToString(P1: TJavaArray<Byte>; P2: Integer): JString; cdecl;//Deprecated
    {class} function init: JBase64Helper; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/android/utils/Base64Helper')]
  JBase64Helper = interface(JObject)
    ['{659EE408-12DF-4C44-AD7F-B33546293F50}']
  end;
  TJBase64Helper = class(TJavaGenericImport<JBase64HelperClass, JBase64Helper>) end;

  Jutils_DebugUtilsClass = interface(JObjectClass)
    ['{39C1E445-CEE3-4C07-A3D4-DD9DBDD93A9D}']
    {class} function _GetDBG: Boolean; cdecl;
    {class} function &get(P1: JString): JString; cdecl;
    {class} function getInt(P1: JString; P2: Integer): Integer; cdecl;
    {class} function init: Jutils_DebugUtils; cdecl;
    {class} property DBG: Boolean read _GetDBG;
  end;

  [JavaSignature('com/ta/utdid2/android/utils/DebugUtils')]
  Jutils_DebugUtils = interface(JObject)
    ['{A05B623A-C99D-4AC1-9C64-043245D27D0B}']
  end;
  TJutils_DebugUtils = class(TJavaGenericImport<Jutils_DebugUtilsClass, Jutils_DebugUtils>) end;

  JIntUtilsClass = interface(JObjectClass)
    ['{4613CA53-BD28-40E6-BF64-C7AD3024D081}']
    {class} function getBytes(P1: Integer): TJavaArray<Byte>; cdecl; overload;//Deprecated
    {class} function getBytes(P1: TJavaArray<Byte>; P2: Integer): TJavaArray<Byte>; cdecl; overload;//Deprecated
    {class} function init: JIntUtils; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/android/utils/IntUtils')]
  JIntUtils = interface(JObject)
    ['{6559FDDA-47E3-4CCC-B9E7-775E660F0DEA}']
  end;
  TJIntUtils = class(TJavaGenericImport<JIntUtilsClass, JIntUtils>) end;

  JNetworkUtilsClass = interface(JObjectClass)
    ['{A270F4B8-F1FF-4D96-9B17-724E90CCE8F0}']
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
    ['{6FE8DD62-7E77-4076-B924-3B1B60D20406}']
  end;
  TJNetworkUtils = class(TJavaGenericImport<JNetworkUtilsClass, JNetworkUtils>) end;

  JPhoneInfoUtilsClass = interface(JObjectClass)
    ['{4B90EC30-700E-46D8-B62A-BAB5B2ADBEAA}']
    {class} function getImei(P1: JContext): JString; cdecl;//Deprecated
    {class} function getImsi(P1: JContext): JString; cdecl;//Deprecated
    {class} function getUniqueID: JString; cdecl;//Deprecated
    {class} function init: JPhoneInfoUtils; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/android/utils/PhoneInfoUtils')]
  JPhoneInfoUtils = interface(JObject)
    ['{3B5BF4F5-48E2-4270-AECC-5308817724BB}']
  end;
  TJPhoneInfoUtils = class(TJavaGenericImport<JPhoneInfoUtilsClass, JPhoneInfoUtils>) end;

  JSharedPreferenceHelperClass = interface(JObjectClass)
    ['{6336537B-D179-4C32-9D63-BC41831E7A8B}']
    {class} procedure apply(P1: JSharedPreferences_Editor); cdecl;//Deprecated
    {class} function init: JSharedPreferenceHelper; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/android/utils/SharedPreferenceHelper')]
  JSharedPreferenceHelper = interface(JObject)
    ['{C88D2B54-41BF-418A-8754-5115873D58EF}']
  end;
  TJSharedPreferenceHelper = class(TJavaGenericImport<JSharedPreferenceHelperClass, JSharedPreferenceHelper>) end;

  JStringUtilsClass = interface(JObjectClass)
    ['{C6158269-925B-4F02-AAC4-EED1C7EC9271}']
    {class} function convertObjectToString(P1: JObject): JString; cdecl;//Deprecated
    {class} function hashCode(P1: JString): Integer; cdecl;//Deprecated
    {class} function init: JStringUtils; cdecl;//Deprecated
    {class} function isEmpty(P1: JString): Boolean; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/android/utils/StringUtils')]
  JStringUtils = interface(JObject)
    ['{A71E8499-8D65-4519-8AA8-DD12293D55BB}']
  end;
  TJStringUtils = class(TJavaGenericImport<JStringUtilsClass, JStringUtils>) end;

  JSystemUtilsClass = interface(JObjectClass)
    ['{6765BE37-A6B4-41B5-B0F5-25FDBB5A30A7}']
    {class} function getAppLabel(P1: JContext): JString; cdecl;//Deprecated
    {class} function getCpuInfo: JString; cdecl;//Deprecated
    {class} function getRootFolder(P1: JString): JFile; cdecl;//Deprecated
    {class} function getSystemVersion: Integer; cdecl;//Deprecated
    {class} function init: JSystemUtils; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/android/utils/SystemUtils')]
  JSystemUtils = interface(JObject)
    ['{5A39D18E-242E-4881-8589-FE2945A687F0}']
  end;
  TJSystemUtils = class(TJavaGenericImport<JSystemUtilsClass, JSystemUtils>) end;

  Jutils_TimeUtilsClass = interface(JObjectClass)
    ['{C28BEE27-B658-4C94-9F45-706E9B8EE355}']
    {class} function _GetTAG: JString; cdecl;
    {class} function _GetTOTAL_M_S_ONE_DAY: Integer; cdecl;
    {class} function init: Jutils_TimeUtils; cdecl;
    {class} function isUpToDate(P1: Int64; P2: Integer): Boolean; cdecl;
    {class} property TAG: JString read _GetTAG;
    {class} property TOTAL_M_S_ONE_DAY: Integer read _GetTOTAL_M_S_ONE_DAY;
  end;

  [JavaSignature('com/ta/utdid2/android/utils/TimeUtils')]
  Jutils_TimeUtils = interface(JObject)
    ['{97213E81-CB16-4432-8D64-35D4408B37E9}']
  end;
  TJutils_TimeUtils = class(TJavaGenericImport<Jutils_TimeUtilsClass, Jutils_TimeUtils>) end;

  JFastXmlSerializerClass = interface(JXmlSerializerClass)
    ['{C53FC63C-1462-4C85-889E-A7EEBBCFA4A1}']
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
    ['{559933D1-28A8-4148-8FC8-112957CEEC58}']
  end;
  TJFastXmlSerializer = class(TJavaGenericImport<JFastXmlSerializerClass, JFastXmlSerializer>) end;

  JMySharedPreferencesClass = interface(IJavaClass)
    ['{178BFC14-9B2A-4E36-80D9-12DB00E50172}']
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
    ['{F62AEAF3-5191-41C0-8BD8-D28206A7383C}']
  end;
  TJMySharedPreferences = class(TJavaGenericImport<JMySharedPreferencesClass, JMySharedPreferences>) end;

  JMySharedPreferences_MyEditorClass = interface(IJavaClass)
    ['{6D0D5CF3-5DB2-431D-BDBE-66857656B8CC}']
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
    ['{4E4FFC4D-53A6-428E-834C-B861907E0B29}']
  end;
  TJMySharedPreferences_MyEditor = class(TJavaGenericImport<JMySharedPreferences_MyEditorClass, JMySharedPreferences_MyEditor>) end;

  JMySharedPreferences_OnSharedPreferenceChangeListenerClass = interface(IJavaClass)
    ['{01B2BDEC-86CC-4D86-8CB6-2F5ECBECC719}']
    {class} procedure onSharedPreferenceChanged(P1: JMySharedPreferences; P2: JString); cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/core/persistent/MySharedPreferences$OnSharedPreferenceChangeListener')]
  JMySharedPreferences_OnSharedPreferenceChangeListener = interface(IJavaInstance)
    ['{AD178ED6-5E5C-4490-90B0-365874406CBA}']
  end;
  TJMySharedPreferences_OnSharedPreferenceChangeListener = class(TJavaGenericImport<JMySharedPreferences_OnSharedPreferenceChangeListenerClass, JMySharedPreferences_OnSharedPreferenceChangeListener>) end;

  JPersistentConfigurationClass = interface(JObjectClass)
    ['{02916C2F-BC47-4CC1-AA39-EDF97142370E}']
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
    ['{A15AC631-1E73-44C8-8551-ED7F359433A6}']
  end;
  TJPersistentConfiguration = class(TJavaGenericImport<JPersistentConfigurationClass, JPersistentConfiguration>) end;

  JTransactionXMLFileClass = interface(JObjectClass)
    ['{5453903B-5A08-473D-8F20-3E976F70CA60}']
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
    ['{09E516DD-FF3A-4944-9312-B526B206D55D}']
    function getMySharedPreferences(P1: JString; P2: Integer): JMySharedPreferences; cdecl;
  end;
  TJTransactionXMLFile = class(TJavaGenericImport<JTransactionXMLFileClass, JTransactionXMLFile>) end;

  JTransactionXMLFile_MySharedPreferencesImplClass = interface(JMySharedPreferencesClass)
    ['{D5F3056F-D3D6-4FB5-841D-C3199C23D4CE}']
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
    ['{FB390023-0E7C-4D3C-861A-83615FEAA7F0}']
  end;
  TJTransactionXMLFile_MySharedPreferencesImpl = class(TJavaGenericImport<JTransactionXMLFile_MySharedPreferencesImplClass, JTransactionXMLFile_MySharedPreferencesImpl>) end;

  JMySharedPreferencesImpl_EditorImplClass = interface(JMySharedPreferences_MyEditorClass)
    ['{B89F20AD-4F73-4627-BAB4-581E28E50A85}']
    {class} function init(P1: JTransactionXMLFile_MySharedPreferencesImpl): JMySharedPreferencesImpl_EditorImpl; cdecl;
  end;

  [JavaSignature('com/ta/utdid2/core/persistent/TransactionXMLFile$MySharedPreferencesImpl$EditorImpl')]
  JMySharedPreferencesImpl_EditorImpl = interface(JMySharedPreferences_MyEditor)
    ['{9DA29498-23A6-4F2D-BC2B-17B1A575A331}']
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
    ['{FDB7CDD1-552A-49D6-8847-E00EA8BB056A}']
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
    ['{3249602B-9AD7-49FD-A165-EAF0F8250251}']
  end;
  TJXmlUtils = class(TJavaGenericImport<JXmlUtilsClass, JXmlUtils>) end;

  JDeviceClass = interface(JObjectClass)
    ['{04AACC0A-F041-453F-AB57-B479BDC148B6}']
    {class} function getDeviceId: JString; cdecl;//Deprecated
    {class} function getImei: JString; cdecl;//Deprecated
    {class} function getImsi: JString; cdecl;//Deprecated
    {class} function getUtdid: JString; cdecl;//Deprecated
    {class} function init: JDevice; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/device/Device')]
  JDevice = interface(JObject)
    ['{417557F2-634B-4198-BA47-49858E305DD5}']
  end;
  TJDevice = class(TJavaGenericImport<JDeviceClass, JDevice>) end;

  JDeviceInfoClass = interface(JObjectClass)
    ['{B031293C-8C01-4790-B659-4ECB1EF19759}']
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
    ['{194A3744-10F6-47F4-AA83-C6D877C2731A}']
  end;
  TJDeviceInfo = class(TJavaGenericImport<JDeviceInfoClass, JDeviceInfo>) end;

  JUTDeviceClass = interface(JObjectClass)
    ['{FB678D0F-F006-490C-AD10-1270B78CA257}']
    {class} function getUtdid(P1: JContext): JString; cdecl;//Deprecated
    {class} function init: JUTDevice; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/device/UTDevice')]
  JUTDevice = interface(JObject)
    ['{49246B5D-F52F-4CEB-8790-759EB03FFE7F}']
  end;
  TJUTDevice = class(TJavaGenericImport<JUTDeviceClass, JUTDevice>) end;

  JUTUtdidClass = interface(JObjectClass)
    ['{8AAC4245-759B-4657-8F25-5DFCF9B871F4}']
    {class} function _GetUM_SETTINGS_STORAGE_NEW: JString; cdecl;
    {class} function init(P1: JContext): JUTUtdid; cdecl;
    {class} function instance(P1: JContext): JUTUtdid; cdecl;
    {class} property UM_SETTINGS_STORAGE_NEW: JString read _GetUM_SETTINGS_STORAGE_NEW;
  end;

  [JavaSignature('com/ta/utdid2/device/UTUtdid')]
  JUTUtdid = interface(JObject)
    ['{7E348ADC-B37D-4ED0-9E4C-96F507CE047B}']
    function getValue: JString; cdecl;
  end;
  TJUTUtdid = class(TJavaGenericImport<JUTUtdidClass, JUTUtdid>) end;

  JUTUtdidHelperClass = interface(JObjectClass)
    ['{D1E251BA-186A-42CE-A9BC-DC89E9B244DA}']
    {class} function dePack(P1: JString): JString; cdecl;//Deprecated
    {class} function generateRandomUTDID: JString; cdecl;//Deprecated
    {class} function init: JUTUtdidHelper; cdecl;//Deprecated
    {class} function pack(P1: TJavaArray<Byte>): JString; cdecl;//Deprecated
    {class} function packUtdidStr(P1: JString): JString; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/device/UTUtdidHelper')]
  JUTUtdidHelper = interface(JObject)
    ['{11ACB926-98AC-457C-A11E-FC76C6982AA2}']
  end;
  TJUTUtdidHelper = class(TJavaGenericImport<JUTUtdidHelperClass, JUTUtdidHelper>) end;

  JUTUtdidHelper2Class = interface(JObjectClass)
    ['{8A881728-E481-412F-931C-657542CEF6AB}']
    {class} function dePack(P1: JString): JString; cdecl;//Deprecated
    {class} function dePackWithBase64(P1: JString): JString; cdecl;//Deprecated
    {class} function init: JUTUtdidHelper2; cdecl;//Deprecated
  end;

  [JavaSignature('com/ta/utdid2/device/UTUtdidHelper2')]
  JUTUtdidHelper2 = interface(JObject)
    ['{E9885093-0ACB-4391-BBA6-225659252479}']
  end;
  TJUTUtdidHelper2 = class(TJavaGenericImport<JUTUtdidHelper2Class, JUTUtdidHelper2>) end;

  JAidCallbackClass = interface(IJavaClass)
    ['{8D63D32D-C7D3-4EF4-B9F3-82E9E1A62CD8}']
    {class} procedure onAidEventChanged(P1: Integer; P2: JString); cdecl;//Deprecated
  end;

  [JavaSignature('com/ut/device/AidCallback')]
  JAidCallback = interface(IJavaInstance)
    ['{DC0A815E-B5A8-4FA2-BD53-F4C74A0BAF11}']
  end;
  TJAidCallback = class(TJavaGenericImport<JAidCallbackClass, JAidCallback>) end;

  JAidConstantsClass = interface(JObjectClass)
    ['{3B4473FF-F87D-4473-8C35-7EB67030636D}']
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
    ['{377B696C-8B31-414F-A047-77E5CE3E21DC}']
  end;
  TJAidConstants = class(TJavaGenericImport<JAidConstantsClass, JAidConstants>) end;

  Jdevice_UTDeviceClass = interface(JObjectClass)
    ['{03EB0A05-B124-4C21-B54A-C9F5B75D19D0}']
    {class} function getAid(P1: JString; P2: JString; P3: JContext): JString; cdecl;//Deprecated
    {class} procedure getAidAsync(P1: JString; P2: JString; P3: JContext; P4: JAidCallback); cdecl;//Deprecated
    {class} function getUtdid(P1: JContext): JString; cdecl;//Deprecated
    {class} function init: Jdevice_UTDevice; cdecl;//Deprecated
  end;

  [JavaSignature('com/ut/device/UTDevice')]
  Jdevice_UTDevice = interface(JObject)
    ['{804079CF-C844-4468-BAC9-5B2A7596DD18}']
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

  JByteArrayBufferClass = interface(JObjectClass)
    ['{A0037B0E-7130-4A66-92EA-1FF16812B7DA}']
    {class} function init(capacity: Integer): JByteArrayBuffer; cdecl;//Deprecated
    {class} procedure append(b: TJavaArray<Byte>; off: Integer; len: Integer); cdecl; overload;//Deprecated
    {class} procedure append(b: Integer); cdecl; overload;//Deprecated
    {class} procedure append(b: TJavaArray<Char>; off: Integer; len: Integer); cdecl; overload;//Deprecated
    {class} function capacity: Integer; cdecl;//Deprecated
    {class} procedure clear; cdecl;//Deprecated
    {class} function isEmpty: Boolean; cdecl;//Deprecated
    {class} function toByteArray: TJavaArray<Byte>; cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/util/ByteArrayBuffer')]
  JByteArrayBuffer = interface(JObject)
    ['{1F62E17E-E9D2-44E0-8DCB-F3D6FF056886}']
    procedure append(b: JCharArrayBuffer; off: Integer; len: Integer); cdecl; overload;//Deprecated
    function buffer: TJavaArray<Byte>; cdecl;//Deprecated
    function byteAt(i: Integer): Integer; cdecl;//Deprecated
    function isFull: Boolean; cdecl;//Deprecated
    function length: Integer; cdecl;//Deprecated
    procedure setLength(len: Integer); cdecl;//Deprecated
  end;
  TJByteArrayBuffer = class(TJavaGenericImport<JByteArrayBufferClass, JByteArrayBuffer>) end;

  JCharArrayBufferClass = interface(JObjectClass)
    ['{96629A0E-3877-4D5A-8214-06CF0B9201FE}']
    {class} function init(capacity: Integer): JCharArrayBuffer; cdecl;//Deprecated
    {class} procedure append(b: JCharArrayBuffer; off: Integer; len: Integer); cdecl; overload;
    {class} procedure append(b: JCharArrayBuffer); cdecl; overload;
    {class} procedure append(ch: Char); cdecl; overload;
    {class} procedure append(obj: JObject); cdecl; overload;
    {class} function buffer: TJavaArray<Char>; cdecl;
    {class} function capacity: Integer; cdecl;
    {class} function indexOf(ch: Integer; beginIndex: Integer; endIndex: Integer): Integer; cdecl; overload;//Deprecated
    {class} function indexOf(ch: Integer): Integer; cdecl; overload;//Deprecated
    {class} function isEmpty: Boolean; cdecl;//Deprecated
    {class} procedure setLength(len: Integer); cdecl;//Deprecated
    {class} function substring(beginIndex: Integer; endIndex: Integer): JString; cdecl;//Deprecated
    {class} function substringTrimmed(beginIndex: Integer; endIndex: Integer): JString; cdecl;//Deprecated
  end;

  [JavaSignature('org/apache/http/util/CharArrayBuffer')]
  JCharArrayBuffer = interface(JObject)
    ['{8F77F86B-6F54-48D8-BF37-1E8F6A6A2E15}']
    procedure append(b: TJavaArray<Char>; off: Integer; len: Integer); cdecl; overload;
    procedure append(str: JString); cdecl; overload;
    procedure append(b: TJavaArray<Byte>; off: Integer; len: Integer); cdecl; overload;
    procedure append(b: JByteArrayBuffer; off: Integer; len: Integer); cdecl; overload;
    function charAt(i: Integer): Char; cdecl;//Deprecated
    procedure clear; cdecl;//Deprecated
    procedure ensureCapacity(required: Integer); cdecl;//Deprecated
    function isFull: Boolean; cdecl;//Deprecated
    function length: Integer; cdecl;//Deprecated
    function toCharArray: TJavaArray<Char>; cdecl;//Deprecated
    function toString: JString; cdecl;//Deprecated
  end;
  TJCharArrayBuffer = class(TJavaGenericImport<JCharArrayBufferClass, JCharArrayBuffer>) end;

  Jalipay_JSONExceptionClass = interface(JExceptionClass)
    ['{6C7E1C31-0A64-4E15-ADC4-F8CB5286F7DE}']
    {class} function getCause: JThrowable; cdecl;//Deprecated
    {class} function init(P1: JThrowable): Jalipay_JSONException; cdecl; overload;//Deprecated
    {class} function init(P1: JString): Jalipay_JSONException; cdecl; overload;//Deprecated
  end;

  [JavaSignature('org/json/alipay/JSONException')]
  Jalipay_JSONException = interface(JException)
    ['{3C691E71-2D5C-4D49-85F1-72DFC49FA130}']
  end;
  TJalipay_JSONException = class(TJavaGenericImport<Jalipay_JSONExceptionClass, Jalipay_JSONException>) end;

  Jalipay_aClass = interface(JObjectClass)
    ['{29733E96-4FEB-4E86-A899-D95827E42BAF}']
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
    ['{E40DC344-A8A4-4393-B935-ED797A8E8BFE}']
  end;
  TJalipay_a = class(TJavaGenericImport<Jalipay_aClass, Jalipay_a>) end;

  Jalipay_bClass = interface(JObjectClass)
    ['{B84FBD0D-C0FF-4C6C-99F2-6A7715EFD454}']
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
    ['{2A851289-61A4-40D1-8F88-7E380E9CCF96}']
    function a: JIterator; cdecl; overload;
    function a(P1: JString): JObject; cdecl; overload;
    function b(P1: JString): Boolean; cdecl;
    function toString: JString; cdecl;
  end;
  TJalipay_b = class(TJavaGenericImport<Jalipay_bClass, Jalipay_b>) end;

  Jalipay_b_aClass = interface(JObjectClass)
    ['{70BFADE5-B06B-4052-82E8-7A57913F3CBC}']
    {class} function equals(P1: JObject): Boolean; cdecl;//Deprecated
    {class} function toString: JString; cdecl;//Deprecated
  end;

  [JavaSignature('org/json/alipay/b$a')]
  Jalipay_b_a = interface(JObject)
    ['{0E4EFE60-9C4A-4508-9968-0B6EE4DFBDF3}']
  end;
  TJalipay_b_a = class(TJavaGenericImport<Jalipay_b_aClass, Jalipay_b_a>) end;

  Jalipay_cClass = interface(JObjectClass)
    ['{A9BEF94D-F7EC-4188-B2EF-8043D98CB40F}']
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
    ['{A6669AEB-84AD-4C33-B84B-DB80B6789369}']
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
  TRegTypes.RegisterType('Android.JNI.AliPay.JRpcCaller', TypeInfo(Android.JNI.AliPay.JRpcCaller));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAbstractRpcCaller', TypeInfo(Android.JNI.AliPay.JAbstractRpcCaller));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpClient', TypeInfo(Android.JNI.AliPay.JHttpClient));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_AndroidHttpClient', TypeInfo(Android.JNI.AliPay.Jcore_AndroidHttpClient));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpRequestInterceptor', TypeInfo(Android.JNI.AliPay.JHttpRequestInterceptor));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_AndroidHttpClient_1', TypeInfo(Android.JNI.AliPay.Jcore_AndroidHttpClient_1));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAbstractHttpClient', TypeInfo(Android.JNI.AliPay.JAbstractHttpClient));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDefaultHttpClient', TypeInfo(Android.JNI.AliPay.JDefaultHttpClient));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_AndroidHttpClient_2', TypeInfo(Android.JNI.AliPay.Jcore_AndroidHttpClient_2));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDefaultRedirectHandler', TypeInfo(Android.JNI.AliPay.JDefaultRedirectHandler));
  TRegTypes.RegisterType('Android.JNI.AliPay.J2_1', TypeInfo(Android.JNI.AliPay.J2_1));
  TRegTypes.RegisterType('Android.JNI.AliPay.JConnectionKeepAliveStrategy', TypeInfo(Android.JNI.AliPay.JConnectionKeepAliveStrategy));
  TRegTypes.RegisterType('Android.JNI.AliPay.J2_2', TypeInfo(Android.JNI.AliPay.J2_2));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_AndroidHttpClient_CurlLogger', TypeInfo(Android.JNI.AliPay.Jcore_AndroidHttpClient_CurlLogger));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_AndroidHttpClient_LoggingConfiguration', TypeInfo(Android.JNI.AliPay.Jcore_AndroidHttpClient_LoggingConfiguration));
  TRegTypes.RegisterType('Android.JNI.AliPay.JCharArrayBuffers', TypeInfo(Android.JNI.AliPay.JCharArrayBuffers));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_Config', TypeInfo(Android.JNI.AliPay.Jcore_Config));
  TRegTypes.RegisterType('Android.JNI.AliPay.JRpcClient', TypeInfo(Android.JNI.AliPay.JRpcClient));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDefaultRpcClient', TypeInfo(Android.JNI.AliPay.JDefaultRpcClient));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDefaultRpcClient_1', TypeInfo(Android.JNI.AliPay.JDefaultRpcClient_1));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHeaders', TypeInfo(Android.JNI.AliPay.JHeaders));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHeaders_HeaderCallback', TypeInfo(Android.JNI.AliPay.JHeaders_HeaderCallback));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpCaller', TypeInfo(Android.JNI.AliPay.JHttpCaller));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_HttpDateTime', TypeInfo(Android.JNI.AliPay.Jcore_HttpDateTime));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_HttpDateTime_TimeOfDay', TypeInfo(Android.JNI.AliPay.Jcore_HttpDateTime_TimeOfDay));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_HttpException', TypeInfo(Android.JNI.AliPay.Jcore_HttpException));
  TRegTypes.RegisterType('Android.JNI.AliPay.JTransport', TypeInfo(Android.JNI.AliPay.JTransport));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpManager', TypeInfo(Android.JNI.AliPay.JHttpManager));
  TRegTypes.RegisterType('Android.JNI.AliPay.JFutureTask', TypeInfo(Android.JNI.AliPay.JFutureTask));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpManager_1', TypeInfo(Android.JNI.AliPay.JHttpManager_1));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpManager_2', TypeInfo(Android.JNI.AliPay.JHttpManager_2));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpUrlHeader', TypeInfo(Android.JNI.AliPay.JHttpUrlHeader));
  TRegTypes.RegisterType('Android.JNI.AliPay.JRequest', TypeInfo(Android.JNI.AliPay.JRequest));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpUrlRequest', TypeInfo(Android.JNI.AliPay.JHttpUrlRequest));
  TRegTypes.RegisterType('Android.JNI.AliPay.JResponse', TypeInfo(Android.JNI.AliPay.JResponse));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpUrlResponse', TypeInfo(Android.JNI.AliPay.JHttpUrlResponse));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpWorker', TypeInfo(Android.JNI.AliPay.JHttpWorker));
  TRegTypes.RegisterType('Android.JNI.AliPay.JIOUtil', TypeInfo(Android.JNI.AliPay.JIOUtil));
  TRegTypes.RegisterType('Android.JNI.AliPay.JMiscUtils', TypeInfo(Android.JNI.AliPay.JMiscUtils));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jcore_NetworkUtils', TypeInfo(Android.JNI.AliPay.Jcore_NetworkUtils));
  TRegTypes.RegisterType('Android.JNI.AliPay.JRpcException', TypeInfo(Android.JNI.AliPay.JRpcException));
  TRegTypes.RegisterType('Android.JNI.AliPay.JRpcException_ErrorCode', TypeInfo(Android.JNI.AliPay.JRpcException_ErrorCode));
  TRegTypes.RegisterType('Android.JNI.AliPay.JRpcFactory', TypeInfo(Android.JNI.AliPay.JRpcFactory));
  TRegTypes.RegisterType('Android.JNI.AliPay.JInvocationHandler', TypeInfo(Android.JNI.AliPay.JInvocationHandler));
  TRegTypes.RegisterType('Android.JNI.AliPay.JRpcInvocationHandler', TypeInfo(Android.JNI.AliPay.JRpcInvocationHandler));
  TRegTypes.RegisterType('Android.JNI.AliPay.JRpcInvoker', TypeInfo(Android.JNI.AliPay.JRpcInvoker));
  TRegTypes.RegisterType('Android.JNI.AliPay.JRpcParams', TypeInfo(Android.JNI.AliPay.JRpcParams));
  TRegTypes.RegisterType('Android.JNI.AliPay.JThreadUtil', TypeInfo(Android.JNI.AliPay.JThreadUtil));
  TRegTypes.RegisterType('Android.JNI.AliPay.JTransportCallback', TypeInfo(Android.JNI.AliPay.JTransportCallback));
  TRegTypes.RegisterType('Android.JNI.AliPay.JHttpRequestRetryHandler', TypeInfo(Android.JNI.AliPay.JHttpRequestRetryHandler));
  TRegTypes.RegisterType('Android.JNI.AliPay.JZHttpRequestRetryHandler', TypeInfo(Android.JNI.AliPay.JZHttpRequestRetryHandler));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDeserializer', TypeInfo(Android.JNI.AliPay.JDeserializer));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAbstractDeserializer', TypeInfo(Android.JNI.AliPay.JAbstractDeserializer));
  TRegTypes.RegisterType('Android.JNI.AliPay.JSerializer', TypeInfo(Android.JNI.AliPay.JSerializer));
  TRegTypes.RegisterType('Android.JNI.AliPay.JAbstractSerializer', TypeInfo(Android.JNI.AliPay.JAbstractSerializer));
  TRegTypes.RegisterType('Android.JNI.AliPay.JJsonDeserializer', TypeInfo(Android.JNI.AliPay.JJsonDeserializer));
  TRegTypes.RegisterType('Android.JNI.AliPay.JJsonSerializer', TypeInfo(Android.JNI.AliPay.JJsonSerializer));
  TRegTypes.RegisterType('Android.JNI.AliPay.Japmobilesecuritysdk_a_a', TypeInfo(Android.JNI.AliPay.Japmobilesecuritysdk_a_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Japmobilesecuritysdk_b_a', TypeInfo(Android.JNI.AliPay.Japmobilesecuritysdk_b_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_a', TypeInfo(Android.JNI.AliPay.Jc_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_b', TypeInfo(Android.JNI.AliPay.Jc_b));
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
  TRegTypes.RegisterType('Android.JNI.AliPay.Jb_b', TypeInfo(Android.JNI.AliPay.Jb_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jb_c', TypeInfo(Android.JNI.AliPay.Jb_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jb_d', TypeInfo(Android.JNI.AliPay.Jb_d));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_c_a', TypeInfo(Android.JNI.AliPay.Ja_c_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_a_a', TypeInfo(Android.JNI.AliPay.Jc_a_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_a_b', TypeInfo(Android.JNI.AliPay.Jc_a_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_a_c', TypeInfo(Android.JNI.AliPay.Jc_a_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_a_d', TypeInfo(Android.JNI.AliPay.Jc_a_d));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_c_b', TypeInfo(Android.JNI.AliPay.Ja_c_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_b_a', TypeInfo(Android.JNI.AliPay.Jc_b_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_b_b', TypeInfo(Android.JNI.AliPay.Jc_b_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_c', TypeInfo(Android.JNI.AliPay.Jc_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jc_d', TypeInfo(Android.JNI.AliPay.Jc_d));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_d_a', TypeInfo(Android.JNI.AliPay.Ja_d_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_d_b', TypeInfo(Android.JNI.AliPay.Ja_d_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_d_c', TypeInfo(Android.JNI.AliPay.Ja_d_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_d_d', TypeInfo(Android.JNI.AliPay.Ja_d_d));
  TRegTypes.RegisterType('Android.JNI.AliPay.Ja_e_a', TypeInfo(Android.JNI.AliPay.Ja_e_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Je_b', TypeInfo(Android.JNI.AliPay.Je_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Je_c', TypeInfo(Android.JNI.AliPay.Je_c));
  TRegTypes.RegisterType('Android.JNI.AliPay.Je_d', TypeInfo(Android.JNI.AliPay.Je_d));
  TRegTypes.RegisterType('Android.JNI.AliPay.JOperationType', TypeInfo(Android.JNI.AliPay.JOperationType));
  TRegTypes.RegisterType('Android.JNI.AliPay.JResetCookie', TypeInfo(Android.JNI.AliPay.JResetCookie));
  TRegTypes.RegisterType('Android.JNI.AliPay.JUpdateDeviceInfo', TypeInfo(Android.JNI.AliPay.JUpdateDeviceInfo));
  TRegTypes.RegisterType('Android.JNI.AliPay.JSecurityClientMobile', TypeInfo(Android.JNI.AliPay.JSecurityClientMobile));
  TRegTypes.RegisterType('Android.JNI.AliPay.JBugTrackMessageService', TypeInfo(Android.JNI.AliPay.JBugTrackMessageService));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDataReportService', TypeInfo(Android.JNI.AliPay.JDataReportService));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDataReportRequest', TypeInfo(Android.JNI.AliPay.JDataReportRequest));
  TRegTypes.RegisterType('Android.JNI.AliPay.JDataReportResult', TypeInfo(Android.JNI.AliPay.JDataReportResult));
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
  TRegTypes.RegisterType('Android.JNI.AliPay.JByteArrayBuffer', TypeInfo(Android.JNI.AliPay.JByteArrayBuffer));
  TRegTypes.RegisterType('Android.JNI.AliPay.JCharArrayBuffer', TypeInfo(Android.JNI.AliPay.JCharArrayBuffer));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jalipay_JSONException', TypeInfo(Android.JNI.AliPay.Jalipay_JSONException));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jalipay_a', TypeInfo(Android.JNI.AliPay.Jalipay_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jalipay_b', TypeInfo(Android.JNI.AliPay.Jalipay_b));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jalipay_b_a', TypeInfo(Android.JNI.AliPay.Jalipay_b_a));
  TRegTypes.RegisterType('Android.JNI.AliPay.Jalipay_c', TypeInfo(Android.JNI.AliPay.Jalipay_c));
end;

initialization
  RegisterTypes;
end.

