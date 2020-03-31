/* Generated code for Python module 'urllib3.connectionpool'
 * created by Nuitka version 0.6.7
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_urllib3$connectionpool" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$connectionpool;
PyDictObject *moduledict_urllib3$connectionpool;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_TimeoutError;
extern PyObject *const_str_plain_headers;
static PyObject *const_str_plain_80;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_69830878ac943aed4542ec57af2bd361;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_f5acfb13ac23993019a45213eee5e308;
extern PyObject *const_str_plain_HTTPConnection;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_exc_tb;
extern PyObject *const_str_plain_err;
static PyObject *const_str_digest_4c69f4e03625ce3d56a911e633943cd5;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_digest_c1505752b742bcc86d58c19fdc1683b9;
static PyObject *const_str_digest_adfb45e557ac35c4a0e1c0c2876406a9;
static PyObject *const_tuple_4ed0995ef67f4af2789b999d673cabd1_tuple;
extern PyObject *const_str_plain_DEFAULT_TIMEOUT;
extern PyObject *const_str_plain_SocketError;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_is_connection_dropped;
static PyObject *const_str_plain__ipv6_host;
extern PyObject *const_str_digest_522bfd5e75e11cb6ec433673b0570303;
static PyObject *const_str_plain_ConnectionPool;
static PyObject *const_str_digest_f5a21a78428dcfcf3566185f268acfbd;
static PyObject *const_str_plain_actual_port;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain__prepare_proxy;
extern PyObject *const_str_plain_errno;
static PyObject *const_str_digest_1dcbca3896fd915bab2f685d807203b2;
extern PyObject *const_str_plain_ssl_version;
extern PyObject *const_str_plain_assert_header_parsing;
extern PyObject *const_str_plain_clone;
extern PyObject *const_str_plain_packages;
extern PyObject *const_str_plain_sock;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_str_plain_RequestMethods_tuple;
extern PyObject *const_str_plain_six;
static PyObject *const_str_plain_pool_timeout;
extern PyObject *const_str_plain__stacktrace;
static PyObject *const_str_digest_81d52c974366d2180a5cc796a4468815;
extern PyObject *const_str_plain_auto_open;
extern PyObject *const_str_plain_settimeout;
static PyObject *const_tuple_str_plain_set_file_position_tuple;
static PyObject *const_str_plain_old_pool;
extern PyObject *const_str_plain_exc_val;
static PyObject *const_str_plain_timeout_value;
extern PyObject *const_str_plain_endswith;
static PyObject *const_str_plain_http_version;
extern PyObject *const_str_plain_proxy;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_tuple_str_plain_error_str_plain_timeout_tuple;
extern PyObject *const_str_plain_False;
static PyObject *const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_DummyConnection;
static PyObject *const_str_plain_getdefaulttimeout;
extern PyObject *const_str_plain_response;
static PyObject *const_str_digest_98b3dd6f4a9169b6d05d2bb6cb7939ae;
static PyObject *const_str_plain__blocking_errnos;
extern PyObject *const_str_digest_9613c3fc04783ef5920752aa27696d66;
extern PyObject *const_str_plain_preload_content;
static PyObject *const_tuple_str_plain_preload_content_true_tuple;
extern PyObject *const_str_plain_setdefault;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_moves;
static PyObject *const_str_digest_d9281b7dcfb24131e3ae4fceb3078498;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_QueueCls;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_socket_options;
static PyObject *const_str_digest_fc56b82c6ed9045af311170020fca29b;
extern PyObject *const_str_plain_kw;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_replace;
extern PyObject *const_int_pos_303;
static PyObject *const_tuple_str_digest_81976bc4c798bb1e8cf8844e6ac708d0_tuple;
static PyObject *const_dict_ef0c581b63de11312ed0743d04af22b7;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_url;
extern PyObject *const_tuple_str_plain_six_tuple;
static PyObject *const_str_plain_timeout_obj;
extern PyObject *const_tuple_str_plain_Timeout_tuple;
extern PyObject *const_str_plain__pool;
extern PyObject *const_str_plain_http;
static PyObject *const_str_digest_cc37027aa1a44907139060af7011fd20;
extern PyObject *const_str_plain_ConnectionCls;
extern PyObject *const_tuple_str_plain_self_str_plain_timeout_tuple;
static PyObject *const_str_plain__absolute_url;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_is_verified;
extern PyObject *const_str_plain_raise_on_redirect;
static PyObject *const_str_digest_4effec0fc506821ed32204e893615ea0;
static PyObject *const_str_digest_60d6d474f3a386c88a168e05ca62b43f;
static PyObject *const_str_digest_14bc662b49a023ba3c0202d6d37a96d4;
extern PyObject *const_str_plain___file__;
extern PyObject *const_int_pos_80;
extern PyObject *const_str_plain_GET;
extern PyObject *const_str_chr_37;
extern PyObject *const_str_plain_HTTPSConnection;
extern PyObject *const_str_plain_strip;
static PyObject *const_str_digest_9d3a414c0482c5f41418a69a56de9fd7;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_is_same_host;
extern PyObject *const_str_plain_connect_timeout;
static PyObject *const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple;
static PyObject *const_str_digest_61ac0b1508921914df7f7224a3eccfd6;
static PyObject *const_tuple_48dd06a5d8ab4d4c394f804f2e70d69d_tuple;
extern PyObject *const_str_plain_assert_hostname;
extern PyObject *const_str_plain_connect;
static PyObject *const_str_plain_num_requests;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_digest_55306dc6d4b249602e9cb0e226abc21d;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_b0e38659a554c584c0942e070d234e9c;
static PyObject *const_tuple_72fe7df3161073d1e7de2eb19a7e53b3_tuple;
static PyObject *const_str_digest_c5564c805ffb5de6012fccf9ea4780d0;
static PyObject *const_tuple_str_plain_CertificateError_tuple;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_put;
extern PyObject *const_str_plain_InsecureRequestWarning;
extern PyObject *const_str_plain_set_cert;
static PyObject *const_tuple_44e79a20b505cc887c3a922e666b934c_tuple;
extern PyObject *const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple;
static PyObject *const_str_digest_ca4b1de09861756a93120b5022455aab;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_c2ed87d2e89f14879b1a53e0d453d7d4;
static PyObject *const_str_digest_2f0bd415726e69260e970d6fed37021c;
extern PyObject *const_str_plain_HeaderParsingError;
extern PyObject *const_str_plain_connection_from_url;
extern PyObject *const_str_plain_conn;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_chr_91;
static PyObject *const_str_digest_66182be0b37ca85b95e225113c54e8b0;
extern PyObject *const_str_plain_exc_type;
extern PyObject *const_str_plain__Default;
extern PyObject *const_str_plain_assert_fingerprint;
static PyObject *const_dict_179288bcb12bd7be5a04d2f1b72dc461;
extern PyObject *const_str_plain_pool;
extern PyObject *const_tuple_str_plain_is_connection_dropped_tuple;
extern PyObject *const_str_plain_retries;
static PyObject *const_str_digest_d2df5c2d53cc11e04bba15a836d74a20;
extern PyObject *const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple;
static PyObject *const_str_plain_httplib_request_kw;
extern PyObject *const_str_plain_getresponse;
extern PyObject *const_str_plain_error;
static PyObject *const_str_digest_f7c7365a5bf7b82017babf23765f0d85;
extern PyObject *const_str_plain_NewConnectionError;
static PyObject *const_str_digest_72e4bc148f34ee877d0ccb44b1fa2560;
extern PyObject *const_str_plain_ProtocolError;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_ReadTimeoutError;
static PyObject *const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_str_chr_37_tuple;
static PyObject *const_str_digest_9e60e8a4a3f600866c5b2083f278d57a;
extern PyObject *const_str_plain_maxsize;
static PyObject *const_str_digest_5aafe6b15b72ff4d50c2dd07c503d5e8;
static PyObject *const_tuple_str_plain_host_str_plain_scheme_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_plain_ca_cert_dir;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_digest_f4bfc452424dc866a47e0b4ba5b97c1a;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_from_httplib;
extern PyObject *const_str_plain_warning;
extern PyObject *const_str_plain_increment;
static PyObject *const_str_plain_443;
extern PyObject *const_str_plain_chunked;
static PyObject *const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple;
extern PyObject *const_str_chr_47;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain__put_conn;
static PyObject *const_tuple_str_plain_response_str_plain_e_tuple;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain___init__;
static PyObject *const_tuple_str_digest_61ac0b1508921914df7f7224a3eccfd6_tuple;
extern PyObject *const_tuple_str_plain_HTTPResponse_tuple;
extern PyObject *const_str_plain_LifoQueue;
extern PyObject *const_str_plain_set_file_position;
static PyObject *const_str_digest_a5652cafe0645a55fe665c3a3e38d0e8;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain_from_float;
extern PyObject *const_str_plain_MaxRetryError;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_Retry;
extern PyObject *const_str_digest_0a2ea16757d4dad15d4c8e0ada40cd0c;
extern PyObject *const_str_plain_queue;
extern PyObject *const_str_plain_port_by_scheme;
static PyObject *const_str_digest_9bbc2b3bcb0e3653cf2ff626f29d33a7;
static PyObject *const_str_digest_01815186f693d6c36c2765b5da31be5e;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_CertificateError;
extern PyObject *const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple;
static PyObject *const_str_plain__make_request;
static PyObject *const_str_digest_9a7a0e57661a036d7bdd6ad9ff0a3de3;
extern PyObject *const_str_plain_from_int;
extern PyObject *const_str_plain__proxy;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_str_plain_assert_same_host;
extern PyObject *const_str_plain_sleep;
static PyObject *const_str_digest_c06078c287e9f57036e253b5390de7f4;
extern PyObject *const_str_digest_eec49d283d20cbc4ed650539d1524272;
extern PyObject *const_str_plain_body;
static PyObject *const_str_digest_01ebf06a56f8ad41a060540a1af4821d;
extern PyObject *const_str_plain_get_host;
static PyObject *const_tuple_d90051f396eaccb5c2195e8723541608_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_block;
extern PyObject *const_str_plain_HostChangedError;
extern PyObject *const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085;
static PyObject *const_str_plain__raise_timeout;
extern PyObject *const_str_plain_CERT_REQUIRED;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_tuple_str_plain_Retry_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_path_tuple;
extern PyObject *const_str_plain_https;
extern PyObject *const_str_plain_raise_from;
static PyObject *const_str_digest_72393f1401ad54b54ec98bd6966ee03d;
static PyObject *const_str_digest_479a50a963c2a68d883c15108e7f5663;
extern PyObject *const_str_plain_VerifiedHTTPSConnection;
extern PyObject *const_str_digest_e68800bfc0da117494aca4ca9d48e152;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_digest_b63d90f3cfd130d49db0ff722bf44a6a;
extern PyObject *const_str_plain_buffering;
static PyObject *const_str_plain__validate_conn;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_16beb27e60f02808b94ac80fbe2859a0;
extern PyObject *const_str_plain_start_connect;
extern PyObject *const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple;
extern PyObject *const_str_plain_getheader;
extern PyObject *const_str_digest_2833c2e99385c7d1c67d0068a26ec387;
extern PyObject *const_str_plain_xrange;
extern PyObject *const_tuple_str_chr_91_tuple;
extern PyObject *const_str_plain_HTTPSConnectionPool;
extern PyObject *const_str_plain_connection;
static PyObject *const_tuple_str_plain_LifoQueue_tuple;
extern PyObject *const_str_plain_DEFAULT;
static PyObject *const_str_digest_dc21555a5356a6a6014dfbb679155424;
extern PyObject *const_str_plain__new_conn;
extern PyObject *const_str_digest_c0b619889998f0c09f1287c52f18c3e9;
extern PyObject *const_str_plain_msg;
static PyObject *const_str_digest_e1f773e4dbf5fdc604f0ef0fb6409e99;
extern PyObject *const_str_plain_urlopen;
extern PyObject *const_str_plain_request_method;
static PyObject *const_str_digest_8a78bc8253427b70798912c62e8fda31;
static PyObject *const_str_digest_77799d2fef7894b65fb30e7df14c6471;
extern PyObject *const_str_plain_cert_reqs;
static PyObject *const_str_digest_0c2cfd5e87a8ed7cf1566521e8239646;
static PyObject *const_str_digest_e49c4abd8cd8a855d785aa9a5398f4cd;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_76e621573f1ec03615219064d6444cc7_tuple;
extern PyObject *const_str_plain__;
extern PyObject *const_str_plain_request_chunked;
extern PyObject *const_str_plain_ClosedPoolError;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___str__;
extern PyObject *const_str_plain_debug;
static PyObject *const_str_plain_num_connections;
extern PyObject *const_str_plain_update;
static PyObject *const_str_digest_b596bee7f4c8cc1960a8eba47c61ba85;
extern PyObject *const_str_plain_SocketTimeout;
static PyObject *const_str_plain_actual_host;
extern PyObject *const_tuple_str_chr_47_tuple;
static PyObject *const_str_plain__http_vsn_str;
static PyObject *const_str_plain_Full;
static PyObject *const_str_plain_hpe;
extern PyObject *const_str_plain__get_conn;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_str_plain_Url;
static PyObject *const_str_digest_13f783975bb6992a6b65cfc4fb38b8f8;
static PyObject *const_str_digest_28e04c9ebed2db995ed772536d0940be;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_body_pos;
static PyObject *const_tuple_str_chr_93_tuple;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_LocationValueError;
static PyObject *const_str_plain_set_tunnel;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_raise_on_status;
static PyObject *const_str_digest_1a5a126298fb29147b8bd2e44b30484d;
extern PyObject *const_str_plain_get_redirect_location;
extern PyObject *const_str_plain_sleep_for_retry;
extern PyObject *const_str_plain___enter__;
static PyObject *const_str_digest_cf54d77232ad2ca3bd0a464156f88154;
extern PyObject *const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
static PyObject *const_str_digest_2321731f803302f80daad08b6956cd60;
static PyObject *const_str_plain_EWOULDBLOCK;
static PyObject *const_str_plain_drain_and_release_conn;
static PyObject *const_str_digest_6a41fc7e3876db1877e8941a221b5ae9;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_is_retry;
extern PyObject *const_str_plain_release_conn;
static PyObject *const_str_digest_0b3188c8adfc30f09ee3b74b5f540ad8;
static PyObject *const_str_digest_d4d95c263c86f9556159c4b2ca5d6780;
extern PyObject *const_str_plain_redirect;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_host;
extern PyObject *const_str_plain_HTTPException;
static PyObject *const_str_plain__get_timeout;
static PyObject *const_str_digest_67163a14a1eefc83d0799301d992d363;
extern PyObject *const_str_plain_proxy_headers;
static PyObject *const_str_digest_4eea8c9082b203b118b31282bad1c4ee;
extern PyObject *const_str_plain_ProxyError;
static PyObject *const_tuple_str_plain_assert_header_parsing_tuple;
extern PyObject *const_str_plain_EmptyPoolError;
extern PyObject *const_tuple_str_plain_self_str_plain_conn_tuple;
static PyObject *const_str_digest_81976bc4c798bb1e8cf8844e6ac708d0;
static PyObject *const_str_plain_EAGAIN;
static PyObject *const_str_digest_51da3aef5130704df904a62040b64827;
extern PyObject *const_tuple_str_plain_queue_tuple;
extern PyObject *const_str_plain_read_timeout;
extern PyObject *const_str_plain__prepare_conn;
static PyObject *const_str_plain__proxy_host;
extern PyObject *const_str_plain_cert_file;
static PyObject *const_tuple_76ce546d292b5e0275b0b85d8f24991a_tuple;
extern PyObject *const_str_plain_strict;
static PyObject *const_str_digest_fb411743bd99f3164fec2d8ab3847fff;
extern PyObject *const_str_plain_HTTPResponse;
static PyObject *const_str_plain_httplib_response;
extern PyObject *const_dict_f965c4886458f8f721a7913cea1cd007;
extern PyObject *const_str_plain_ResponseCls;
extern PyObject *const_str_plain__proxy_headers;
static PyObject *const_str_digest_cb4a33648e9b9699965ebd0c6659f9ef;
extern PyObject *const_str_plain_Timeout;
static PyObject *const_str_plain_Empty;
static PyObject *const_str_plain_exc_info;
static PyObject *const_str_digest_bcdf6c34bab72e853b582d160e30d3e7;
extern PyObject *const_str_plain_NORMALIZABLE_SCHEMES;
extern PyObject *const_str_chr_93;
static PyObject *const_tuple_str_plain_self_str_plain_old_pool_str_plain_conn_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_timeout_str_plain_conn_tuple;
static PyObject *const_str_digest_52af1425a80510e5c4b27876b0697f6f;
static PyObject *const_tuple_str_plain_self_str_plain_conn_str_plain___class___tuple;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_37d86a20c01ce962675a6d1428924a32;
extern PyObject *const_str_plain_ca_certs;
static PyObject *const_str_digest_6b9fb9d727a1559a5afa4c31dc745241;
extern PyObject *const_str_plain_RequestMethods;
extern PyObject *const_str_plain_BaseSSLError;
static PyObject *const_str_digest_08b498a2fbcf598404c03ba5f0f37975;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_key_file;
extern PyObject *const_str_plain_HTTPConnectionPool;
static PyObject *const_str_digest_117e4c96fe42b3805876d95a8951796e;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_84235f7fa9e49ebab2d25c0e79971897_tuple;
static PyObject *const_str_digest_88dfc756b4bfd2f07f0ab2064a84bb3e;
extern PyObject *const_str_digest_53eb1bcf3283c3fcccb95b51de02ce94;
static PyObject *const_str_digest_d5ce309bb23bad4cf56bebbcfee2e1d4;
static PyObject *const_str_plain_conn_kw;
static PyObject *const_tuple_str_plain_self_str_plain_host_str_plain_port_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_80 = UNSTREAM_STRING_ASCII(&constant_bin[ 33903 ], 2, 0);
    const_str_digest_69830878ac943aed4542ec57af2bd361 = UNSTREAM_STRING_ASCII(&constant_bin[ 695906 ], 409, 0);
    const_str_digest_f5acfb13ac23993019a45213eee5e308 = UNSTREAM_STRING_ASCII(&constant_bin[ 696315 ], 31, 0);
    const_str_digest_4c69f4e03625ce3d56a911e633943cd5 = UNSTREAM_STRING_ASCII(&constant_bin[ 696346 ], 717, 0);
    const_str_digest_adfb45e557ac35c4a0e1c0c2876406a9 = UNSTREAM_STRING_ASCII(&constant_bin[ 697063 ], 58, 0);
    const_tuple_4ed0995ef67f4af2789b999d673cabd1_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_4ed0995ef67f4af2789b999d673cabd1_tuple, 0, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_4ed0995ef67f4af2789b999d673cabd1_tuple, 1, const_str_plain_kw); Py_INCREF(const_str_plain_kw);
    PyTuple_SET_ITEM(const_tuple_4ed0995ef67f4af2789b999d673cabd1_tuple, 2, const_str_plain_scheme); Py_INCREF(const_str_plain_scheme);
    PyTuple_SET_ITEM(const_tuple_4ed0995ef67f4af2789b999d673cabd1_tuple, 3, const_str_plain_host); Py_INCREF(const_str_plain_host);
    PyTuple_SET_ITEM(const_tuple_4ed0995ef67f4af2789b999d673cabd1_tuple, 4, const_str_plain_port); Py_INCREF(const_str_plain_port);
    const_str_plain__ipv6_host = UNSTREAM_STRING_ASCII(&constant_bin[ 28422 ], 10, 1);
    const_str_plain_ConnectionPool = UNSTREAM_STRING_ASCII(&constant_bin[ 28454 ], 14, 1);
    const_str_digest_f5a21a78428dcfcf3566185f268acfbd = UNSTREAM_STRING_ASCII(&constant_bin[ 697121 ], 140, 0);
    const_str_plain_actual_port = UNSTREAM_STRING_ASCII(&constant_bin[ 697261 ], 11, 1);
    const_str_plain__prepare_proxy = UNSTREAM_STRING_ASCII(&constant_bin[ 697272 ], 14, 1);
    const_str_digest_1dcbca3896fd915bab2f685d807203b2 = UNSTREAM_STRING_ASCII(&constant_bin[ 697286 ], 533, 0);
    const_str_plain_pool_timeout = UNSTREAM_STRING_ASCII(&constant_bin[ 697819 ], 12, 1);
    const_str_digest_81d52c974366d2180a5cc796a4468815 = UNSTREAM_STRING_ASCII(&constant_bin[ 697831 ], 64, 0);
    const_tuple_str_plain_set_file_position_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_set_file_position_tuple, 0, const_str_plain_set_file_position); Py_INCREF(const_str_plain_set_file_position);
    const_str_plain_old_pool = UNSTREAM_STRING_ASCII(&constant_bin[ 697895 ], 8, 1);
    const_str_plain_timeout_value = UNSTREAM_STRING_ASCII(&constant_bin[ 697903 ], 13, 1);
    const_str_plain_http_version = UNSTREAM_STRING_ASCII(&constant_bin[ 676138 ], 12, 1);
    const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple = PyTuple_New(13);
    PyTuple_SET_ITEM(const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple, 1, const_str_plain_host); Py_INCREF(const_str_plain_host);
    PyTuple_SET_ITEM(const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple, 2, const_str_plain_port); Py_INCREF(const_str_plain_port);
    PyTuple_SET_ITEM(const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple, 3, const_str_plain_strict); Py_INCREF(const_str_plain_strict);
    PyTuple_SET_ITEM(const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple, 4, const_str_plain_timeout); Py_INCREF(const_str_plain_timeout);
    PyTuple_SET_ITEM(const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple, 5, const_str_plain_maxsize); Py_INCREF(const_str_plain_maxsize);
    PyTuple_SET_ITEM(const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple, 6, const_str_plain_block); Py_INCREF(const_str_plain_block);
    PyTuple_SET_ITEM(const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple, 7, const_str_plain_headers); Py_INCREF(const_str_plain_headers);
    PyTuple_SET_ITEM(const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple, 8, const_str_plain_retries); Py_INCREF(const_str_plain_retries);
    PyTuple_SET_ITEM(const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple, 9, const_str_plain__proxy); Py_INCREF(const_str_plain__proxy);
    PyTuple_SET_ITEM(const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple, 10, const_str_plain__proxy_headers); Py_INCREF(const_str_plain__proxy_headers);
    const_str_plain_conn_kw = UNSTREAM_STRING_ASCII(&constant_bin[ 697916 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple, 11, const_str_plain_conn_kw); Py_INCREF(const_str_plain_conn_kw);
    PyTuple_SET_ITEM(const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple, 12, const_str_plain__); Py_INCREF(const_str_plain__);
    const_str_plain_getdefaulttimeout = UNSTREAM_STRING_ASCII(&constant_bin[ 697923 ], 17, 1);
    const_str_digest_98b3dd6f4a9169b6d05d2bb6cb7939ae = UNSTREAM_STRING_ASCII(&constant_bin[ 697940 ], 23, 0);
    const_str_plain__blocking_errnos = UNSTREAM_STRING_ASCII(&constant_bin[ 28635 ], 16, 1);
    const_tuple_str_plain_preload_content_true_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_preload_content_true_tuple, 0, const_str_plain_preload_content); Py_INCREF(const_str_plain_preload_content);
    PyTuple_SET_ITEM(const_tuple_str_plain_preload_content_true_tuple, 1, Py_True); Py_INCREF(Py_True);
    const_str_digest_d9281b7dcfb24131e3ae4fceb3078498 = UNSTREAM_STRING_ASCII(&constant_bin[ 697963 ], 68, 0);
    const_str_plain_QueueCls = UNSTREAM_STRING_ASCII(&constant_bin[ 698031 ], 8, 1);
    const_str_digest_fc56b82c6ed9045af311170020fca29b = UNSTREAM_STRING_ASCII(&constant_bin[ 698039 ], 31, 0);
    const_tuple_str_digest_81976bc4c798bb1e8cf8844e6ac708d0_tuple = PyTuple_New(1);
    const_str_digest_81976bc4c798bb1e8cf8844e6ac708d0 = UNSTREAM_STRING_ASCII(&constant_bin[ 694390 ], 22, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_81976bc4c798bb1e8cf8844e6ac708d0_tuple, 0, const_str_digest_81976bc4c798bb1e8cf8844e6ac708d0); Py_INCREF(const_str_digest_81976bc4c798bb1e8cf8844e6ac708d0);
    const_dict_ef0c581b63de11312ed0743d04af22b7 = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_ef0c581b63de11312ed0743d04af22b7, const_str_plain_block, Py_False);
    assert(PyDict_Size(const_dict_ef0c581b63de11312ed0743d04af22b7) == 1);
    const_str_plain_timeout_obj = UNSTREAM_STRING_ASCII(&constant_bin[ 698070 ], 11, 1);
    const_str_digest_cc37027aa1a44907139060af7011fd20 = UNSTREAM_STRING_ASCII(&constant_bin[ 698081 ], 49, 0);
    const_str_plain__absolute_url = UNSTREAM_STRING_ASCII(&constant_bin[ 698130 ], 13, 1);
    const_str_digest_4effec0fc506821ed32204e893615ea0 = UNSTREAM_STRING_ASCII(&constant_bin[ 698143 ], 122, 0);
    const_str_digest_60d6d474f3a386c88a168e05ca62b43f = UNSTREAM_STRING_ASCII(&constant_bin[ 698265 ], 22, 0);
    const_str_digest_14bc662b49a023ba3c0202d6d37a96d4 = UNSTREAM_STRING_ASCII(&constant_bin[ 698287 ], 85, 0);
    const_str_digest_9d3a414c0482c5f41418a69a56de9fd7 = UNSTREAM_STRING_ASCII(&constant_bin[ 698372 ], 34, 0);
    const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple = PyTuple_New(13);
    PyTuple_SET_ITEM(const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple, 0, const_str_plain_ClosedPoolError); Py_INCREF(const_str_plain_ClosedPoolError);
    PyTuple_SET_ITEM(const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple, 1, const_str_plain_ProtocolError); Py_INCREF(const_str_plain_ProtocolError);
    PyTuple_SET_ITEM(const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple, 2, const_str_plain_EmptyPoolError); Py_INCREF(const_str_plain_EmptyPoolError);
    PyTuple_SET_ITEM(const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple, 3, const_str_plain_HeaderParsingError); Py_INCREF(const_str_plain_HeaderParsingError);
    PyTuple_SET_ITEM(const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple, 4, const_str_plain_HostChangedError); Py_INCREF(const_str_plain_HostChangedError);
    PyTuple_SET_ITEM(const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple, 5, const_str_plain_LocationValueError); Py_INCREF(const_str_plain_LocationValueError);
    PyTuple_SET_ITEM(const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple, 6, const_str_plain_MaxRetryError); Py_INCREF(const_str_plain_MaxRetryError);
    PyTuple_SET_ITEM(const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple, 7, const_str_plain_ProxyError); Py_INCREF(const_str_plain_ProxyError);
    PyTuple_SET_ITEM(const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple, 8, const_str_plain_ReadTimeoutError); Py_INCREF(const_str_plain_ReadTimeoutError);
    PyTuple_SET_ITEM(const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple, 9, const_str_plain_SSLError); Py_INCREF(const_str_plain_SSLError);
    PyTuple_SET_ITEM(const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple, 10, const_str_plain_TimeoutError); Py_INCREF(const_str_plain_TimeoutError);
    PyTuple_SET_ITEM(const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple, 11, const_str_plain_InsecureRequestWarning); Py_INCREF(const_str_plain_InsecureRequestWarning);
    PyTuple_SET_ITEM(const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple, 12, const_str_plain_NewConnectionError); Py_INCREF(const_str_plain_NewConnectionError);
    const_str_digest_61ac0b1508921914df7f7224a3eccfd6 = UNSTREAM_STRING_ASCII(&constant_bin[ 698406 ], 67, 0);
    const_tuple_48dd06a5d8ab4d4c394f804f2e70d69d_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 698473 ], 209);
    const_str_plain_num_requests = UNSTREAM_STRING_ASCII(&constant_bin[ 698682 ], 12, 1);
    const_str_digest_55306dc6d4b249602e9cb0e226abc21d = UNSTREAM_STRING_ASCII(&constant_bin[ 698694 ], 33, 0);
    const_str_digest_b0e38659a554c584c0942e070d234e9c = UNSTREAM_STRING_ASCII(&constant_bin[ 698727 ], 34, 0);
    const_tuple_72fe7df3161073d1e7de2eb19a7e53b3_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_72fe7df3161073d1e7de2eb19a7e53b3_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_actual_host = UNSTREAM_STRING_ASCII(&constant_bin[ 698761 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_72fe7df3161073d1e7de2eb19a7e53b3_tuple, 1, const_str_plain_actual_host); Py_INCREF(const_str_plain_actual_host);
    PyTuple_SET_ITEM(const_tuple_72fe7df3161073d1e7de2eb19a7e53b3_tuple, 2, const_str_plain_actual_port); Py_INCREF(const_str_plain_actual_port);
    PyTuple_SET_ITEM(const_tuple_72fe7df3161073d1e7de2eb19a7e53b3_tuple, 3, const_str_plain_conn); Py_INCREF(const_str_plain_conn);
    const_str_digest_c5564c805ffb5de6012fccf9ea4780d0 = UNSTREAM_STRING_ASCII(&constant_bin[ 698772 ], 50, 0);
    const_tuple_str_plain_CertificateError_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_CertificateError_tuple, 0, const_str_plain_CertificateError); Py_INCREF(const_str_plain_CertificateError);
    const_tuple_44e79a20b505cc887c3a922e666b934c_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_44e79a20b505cc887c3a922e666b934c_tuple, 0, const_str_plain_port_by_scheme); Py_INCREF(const_str_plain_port_by_scheme);
    PyTuple_SET_ITEM(const_tuple_44e79a20b505cc887c3a922e666b934c_tuple, 1, const_str_plain_DummyConnection); Py_INCREF(const_str_plain_DummyConnection);
    PyTuple_SET_ITEM(const_tuple_44e79a20b505cc887c3a922e666b934c_tuple, 2, const_str_plain_HTTPConnection); Py_INCREF(const_str_plain_HTTPConnection);
    PyTuple_SET_ITEM(const_tuple_44e79a20b505cc887c3a922e666b934c_tuple, 3, const_str_plain_HTTPSConnection); Py_INCREF(const_str_plain_HTTPSConnection);
    PyTuple_SET_ITEM(const_tuple_44e79a20b505cc887c3a922e666b934c_tuple, 4, const_str_plain_VerifiedHTTPSConnection); Py_INCREF(const_str_plain_VerifiedHTTPSConnection);
    PyTuple_SET_ITEM(const_tuple_44e79a20b505cc887c3a922e666b934c_tuple, 5, const_str_plain_HTTPException); Py_INCREF(const_str_plain_HTTPException);
    PyTuple_SET_ITEM(const_tuple_44e79a20b505cc887c3a922e666b934c_tuple, 6, const_str_plain_BaseSSLError); Py_INCREF(const_str_plain_BaseSSLError);
    const_str_digest_ca4b1de09861756a93120b5022455aab = UNSTREAM_STRING_ASCII(&constant_bin[ 698822 ], 640, 0);
    const_str_digest_c2ed87d2e89f14879b1a53e0d453d7d4 = UNSTREAM_STRING_ASCII(&constant_bin[ 699462 ], 36, 0);
    const_str_digest_2f0bd415726e69260e970d6fed37021c = UNSTREAM_STRING_ASCII(&constant_bin[ 699498 ], 32, 0);
    const_str_digest_66182be0b37ca85b95e225113c54e8b0 = UNSTREAM_STRING_ASCII(&constant_bin[ 699530 ], 6, 0);
    const_dict_179288bcb12bd7be5a04d2f1b72dc461 = _PyDict_NewPresized( 1 );
    const_str_plain_exc_info = UNSTREAM_STRING_ASCII(&constant_bin[ 699536 ], 8, 1);
    PyDict_SetItem(const_dict_179288bcb12bd7be5a04d2f1b72dc461, const_str_plain_exc_info, Py_True);
    assert(PyDict_Size(const_dict_179288bcb12bd7be5a04d2f1b72dc461) == 1);
    const_str_digest_d2df5c2d53cc11e04bba15a836d74a20 = UNSTREAM_STRING_ASCII(&constant_bin[ 697063 ], 26, 0);
    const_str_plain_httplib_request_kw = UNSTREAM_STRING_ASCII(&constant_bin[ 699544 ], 18, 1);
    const_str_digest_f7c7365a5bf7b82017babf23765f0d85 = UNSTREAM_STRING_ASCII(&constant_bin[ 699562 ], 39, 0);
    const_str_digest_72e4bc148f34ee877d0ccb44b1fa2560 = UNSTREAM_STRING_ASCII(&constant_bin[ 699601 ], 33, 0);
    const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_str_chr_37_tuple = PyTuple_New(2);
    const_str_digest_d4d95c263c86f9556159c4b2ca5d6780 = UNSTREAM_STRING_ASCII(&constant_bin[ 699634 ], 3, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_str_chr_37_tuple, 0, const_str_digest_d4d95c263c86f9556159c4b2ca5d6780); Py_INCREF(const_str_digest_d4d95c263c86f9556159c4b2ca5d6780);
    PyTuple_SET_ITEM(const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_str_chr_37_tuple, 1, const_str_chr_37); Py_INCREF(const_str_chr_37);
    const_str_digest_9e60e8a4a3f600866c5b2083f278d57a = UNSTREAM_STRING_ASCII(&constant_bin[ 699637 ], 34, 0);
    const_str_digest_5aafe6b15b72ff4d50c2dd07c503d5e8 = UNSTREAM_STRING_ASCII(&constant_bin[ 699671 ], 171, 0);
    const_tuple_str_plain_host_str_plain_scheme_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_host_str_plain_scheme_tuple, 0, const_str_plain_host); Py_INCREF(const_str_plain_host);
    PyTuple_SET_ITEM(const_tuple_str_plain_host_str_plain_scheme_tuple, 1, const_str_plain_scheme); Py_INCREF(const_str_plain_scheme);
    const_str_digest_f4bfc452424dc866a47e0b4ba5b97c1a = UNSTREAM_STRING_ASCII(&constant_bin[ 699842 ], 20, 0);
    const_str_plain_443 = UNSTREAM_STRING_ASCII(&constant_bin[ 699862 ], 3, 0);
    const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple = PyTuple_New(13);
    PyTuple_SET_ITEM(const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple, 1, const_str_plain_conn); Py_INCREF(const_str_plain_conn);
    PyTuple_SET_ITEM(const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple, 2, const_str_plain_method); Py_INCREF(const_str_plain_method);
    PyTuple_SET_ITEM(const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple, 3, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple, 4, const_str_plain_timeout); Py_INCREF(const_str_plain_timeout);
    PyTuple_SET_ITEM(const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple, 5, const_str_plain_chunked); Py_INCREF(const_str_plain_chunked);
    PyTuple_SET_ITEM(const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple, 6, const_str_plain_httplib_request_kw); Py_INCREF(const_str_plain_httplib_request_kw);
    PyTuple_SET_ITEM(const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple, 7, const_str_plain_timeout_obj); Py_INCREF(const_str_plain_timeout_obj);
    PyTuple_SET_ITEM(const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple, 8, const_str_plain_e); Py_INCREF(const_str_plain_e);
    PyTuple_SET_ITEM(const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple, 9, const_str_plain_read_timeout); Py_INCREF(const_str_plain_read_timeout);
    const_str_plain_httplib_response = UNSTREAM_STRING_ASCII(&constant_bin[ 699865 ], 16, 1);
    PyTuple_SET_ITEM(const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple, 10, const_str_plain_httplib_response); Py_INCREF(const_str_plain_httplib_response);
    PyTuple_SET_ITEM(const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple, 11, const_str_plain_http_version); Py_INCREF(const_str_plain_http_version);
    const_str_plain_hpe = UNSTREAM_STRING_ASCII(&constant_bin[ 699881 ], 3, 1);
    PyTuple_SET_ITEM(const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple, 12, const_str_plain_hpe); Py_INCREF(const_str_plain_hpe);
    const_tuple_str_plain_response_str_plain_e_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_response_str_plain_e_tuple, 0, const_str_plain_response); Py_INCREF(const_str_plain_response);
    PyTuple_SET_ITEM(const_tuple_str_plain_response_str_plain_e_tuple, 1, const_str_plain_e); Py_INCREF(const_str_plain_e);
    const_tuple_str_digest_61ac0b1508921914df7f7224a3eccfd6_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_61ac0b1508921914df7f7224a3eccfd6_tuple, 0, const_str_digest_61ac0b1508921914df7f7224a3eccfd6); Py_INCREF(const_str_digest_61ac0b1508921914df7f7224a3eccfd6);
    const_str_digest_a5652cafe0645a55fe665c3a3e38d0e8 = UNSTREAM_STRING_ASCII(&constant_bin[ 699884 ], 33, 0);
    const_str_digest_9bbc2b3bcb0e3653cf2ff626f29d33a7 = UNSTREAM_STRING_ASCII(&constant_bin[ 699917 ], 41, 0);
    const_str_digest_01815186f693d6c36c2765b5da31be5e = UNSTREAM_STRING_ASCII(&constant_bin[ 655092 ], 9, 0);
    const_str_plain__make_request = UNSTREAM_STRING_ASCII(&constant_bin[ 699958 ], 13, 1);
    const_str_digest_9a7a0e57661a036d7bdd6ad9ff0a3de3 = UNSTREAM_STRING_ASCII(&constant_bin[ 699971 ], 33, 0);
    const_str_digest_c06078c287e9f57036e253b5390de7f4 = UNSTREAM_STRING_ASCII(&constant_bin[ 700004 ], 24, 0);
    const_str_digest_01ebf06a56f8ad41a060540a1af4821d = UNSTREAM_STRING_ASCII(&constant_bin[ 700028 ], 31, 0);
    const_tuple_d90051f396eaccb5c2195e8723541608_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_d90051f396eaccb5c2195e8723541608_tuple, 0, const_str_plain_get_host); Py_INCREF(const_str_plain_get_host);
    PyTuple_SET_ITEM(const_tuple_d90051f396eaccb5c2195e8723541608_tuple, 1, const_str_plain_Url); Py_INCREF(const_str_plain_Url);
    PyTuple_SET_ITEM(const_tuple_d90051f396eaccb5c2195e8723541608_tuple, 2, const_str_plain_NORMALIZABLE_SCHEMES); Py_INCREF(const_str_plain_NORMALIZABLE_SCHEMES);
    const_str_plain__raise_timeout = UNSTREAM_STRING_ASCII(&constant_bin[ 699903 ], 14, 1);
    const_tuple_str_plain_self_str_plain_path_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_path_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_path_tuple, 1, const_str_plain_path); Py_INCREF(const_str_plain_path);
    const_str_digest_72393f1401ad54b54ec98bd6966ee03d = UNSTREAM_STRING_ASCII(&constant_bin[ 700059 ], 19, 0);
    const_str_digest_479a50a963c2a68d883c15108e7f5663 = UNSTREAM_STRING_ASCII(&constant_bin[ 700078 ], 28, 0);
    const_str_plain__validate_conn = UNSTREAM_STRING_ASCII(&constant_bin[ 698392 ], 14, 1);
    const_str_digest_16beb27e60f02808b94ac80fbe2859a0 = UNSTREAM_STRING_ASCII(&constant_bin[ 700106 ], 2382, 0);
    const_tuple_str_plain_LifoQueue_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_LifoQueue_tuple, 0, const_str_plain_LifoQueue); Py_INCREF(const_str_plain_LifoQueue);
    const_str_digest_dc21555a5356a6a6014dfbb679155424 = UNSTREAM_STRING_ASCII(&constant_bin[ 702488 ], 27, 0);
    const_str_digest_e1f773e4dbf5fdc604f0ef0fb6409e99 = UNSTREAM_STRING_ASCII(&constant_bin[ 702515 ], 23, 0);
    const_str_digest_8a78bc8253427b70798912c62e8fda31 = UNSTREAM_STRING_ASCII(&constant_bin[ 702538 ], 40, 0);
    const_str_digest_77799d2fef7894b65fb30e7df14c6471 = UNSTREAM_STRING_ASCII(&constant_bin[ 702578 ], 15, 0);
    const_str_digest_0c2cfd5e87a8ed7cf1566521e8239646 = UNSTREAM_STRING_ASCII(&constant_bin[ 702593 ], 23, 0);
    const_str_digest_e49c4abd8cd8a855d785aa9a5398f4cd = UNSTREAM_STRING_ASCII(&constant_bin[ 702616 ], 27, 0);
    const_tuple_76e621573f1ec03615219064d6444cc7_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 702643 ], 322);
    const_str_plain_num_connections = UNSTREAM_STRING_ASCII(&constant_bin[ 702965 ], 15, 1);
    const_str_digest_b596bee7f4c8cc1960a8eba47c61ba85 = UNSTREAM_STRING_ASCII(&constant_bin[ 702980 ], 32, 0);
    const_str_plain__http_vsn_str = UNSTREAM_STRING_ASCII(&constant_bin[ 703012 ], 13, 1);
    const_str_plain_Full = UNSTREAM_STRING_ASCII(&constant_bin[ 628427 ], 4, 1);
    const_str_digest_13f783975bb6992a6b65cfc4fb38b8f8 = UNSTREAM_STRING_ASCII(&constant_bin[ 703025 ], 4065, 0);
    const_str_digest_28e04c9ebed2db995ed772536d0940be = UNSTREAM_STRING_ASCII(&constant_bin[ 707090 ], 33, 0);
    const_tuple_str_chr_93_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_chr_93_tuple, 0, const_str_chr_93); Py_INCREF(const_str_chr_93);
    const_str_plain_set_tunnel = UNSTREAM_STRING_ASCII(&constant_bin[ 707123 ], 10, 1);
    const_str_digest_1a5a126298fb29147b8bd2e44b30484d = UNSTREAM_STRING_ASCII(&constant_bin[ 707133 ], 15, 0);
    const_str_digest_cf54d77232ad2ca3bd0a464156f88154 = UNSTREAM_STRING_ASCII(&constant_bin[ 707148 ], 20, 0);
    const_str_digest_2321731f803302f80daad08b6956cd60 = UNSTREAM_STRING_ASCII(&constant_bin[ 707168 ], 106, 0);
    const_str_plain_EWOULDBLOCK = UNSTREAM_STRING_ASCII(&constant_bin[ 707274 ], 11, 1);
    const_str_plain_drain_and_release_conn = UNSTREAM_STRING_ASCII(&constant_bin[ 697099 ], 22, 1);
    const_str_digest_6a41fc7e3876db1877e8941a221b5ae9 = UNSTREAM_STRING_ASCII(&constant_bin[ 707285 ], 484, 0);
    const_str_digest_0b3188c8adfc30f09ee3b74b5f540ad8 = UNSTREAM_STRING_ASCII(&constant_bin[ 707769 ], 62, 0);
    const_str_plain__get_timeout = UNSTREAM_STRING_ASCII(&constant_bin[ 698058 ], 12, 1);
    const_str_digest_67163a14a1eefc83d0799301d992d363 = UNSTREAM_STRING_ASCII(&constant_bin[ 707831 ], 24, 0);
    const_str_digest_4eea8c9082b203b118b31282bad1c4ee = UNSTREAM_STRING_ASCII(&constant_bin[ 707855 ], 29, 0);
    const_tuple_str_plain_assert_header_parsing_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_assert_header_parsing_tuple, 0, const_str_plain_assert_header_parsing); Py_INCREF(const_str_plain_assert_header_parsing);
    const_str_plain_EAGAIN = UNSTREAM_STRING_ASCII(&constant_bin[ 707884 ], 6, 1);
    const_str_digest_51da3aef5130704df904a62040b64827 = UNSTREAM_STRING_ASCII(&constant_bin[ 707890 ], 28, 0);
    const_str_plain__proxy_host = UNSTREAM_STRING_ASCII(&constant_bin[ 707918 ], 11, 1);
    const_tuple_76ce546d292b5e0275b0b85d8f24991a_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_76ce546d292b5e0275b0b85d8f24991a_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_76ce546d292b5e0275b0b85d8f24991a_tuple, 1, const_str_plain_err); Py_INCREF(const_str_plain_err);
    PyTuple_SET_ITEM(const_tuple_76ce546d292b5e0275b0b85d8f24991a_tuple, 2, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_76ce546d292b5e0275b0b85d8f24991a_tuple, 3, const_str_plain_timeout_value); Py_INCREF(const_str_plain_timeout_value);
    const_str_digest_fb411743bd99f3164fec2d8ab3847fff = UNSTREAM_STRING_ASCII(&constant_bin[ 707929 ], 10, 0);
    const_str_digest_cb4a33648e9b9699965ebd0c6659f9ef = UNSTREAM_STRING_ASCII(&constant_bin[ 707939 ], 32, 0);
    const_str_plain_Empty = UNSTREAM_STRING_ASCII(&constant_bin[ 28526 ], 5, 1);
    const_str_digest_bcdf6c34bab72e853b582d160e30d3e7 = UNSTREAM_STRING_ASCII(&constant_bin[ 707971 ], 60, 0);
    const_tuple_str_plain_self_str_plain_old_pool_str_plain_conn_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_old_pool_str_plain_conn_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_old_pool_str_plain_conn_tuple, 1, const_str_plain_old_pool); Py_INCREF(const_str_plain_old_pool);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_old_pool_str_plain_conn_tuple, 2, const_str_plain_conn); Py_INCREF(const_str_plain_conn);
    const_tuple_str_plain_self_str_plain_timeout_str_plain_conn_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_timeout_str_plain_conn_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_timeout_str_plain_conn_tuple, 1, const_str_plain_timeout); Py_INCREF(const_str_plain_timeout);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_timeout_str_plain_conn_tuple, 2, const_str_plain_conn); Py_INCREF(const_str_plain_conn);
    const_str_digest_52af1425a80510e5c4b27876b0697f6f = UNSTREAM_STRING_ASCII(&constant_bin[ 708031 ], 28, 0);
    const_tuple_str_plain_self_str_plain_conn_str_plain___class___tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_conn_str_plain___class___tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_conn_str_plain___class___tuple, 1, const_str_plain_conn); Py_INCREF(const_str_plain_conn);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_conn_str_plain___class___tuple, 2, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_str_digest_37d86a20c01ce962675a6d1428924a32 = UNSTREAM_STRING_ASCII(&constant_bin[ 708059 ], 28, 0);
    const_str_digest_6b9fb9d727a1559a5afa4c31dc745241 = UNSTREAM_STRING_ASCII(&constant_bin[ 708087 ], 65, 0);
    const_str_digest_08b498a2fbcf598404c03ba5f0f37975 = UNSTREAM_STRING_ASCII(&constant_bin[ 708152 ], 57, 0);
    const_str_digest_117e4c96fe42b3805876d95a8951796e = UNSTREAM_STRING_ASCII(&constant_bin[ 708209 ], 66, 0);
    const_tuple_84235f7fa9e49ebab2d25c0e79971897_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_84235f7fa9e49ebab2d25c0e79971897_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_84235f7fa9e49ebab2d25c0e79971897_tuple, 1, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_84235f7fa9e49ebab2d25c0e79971897_tuple, 2, const_str_plain_scheme); Py_INCREF(const_str_plain_scheme);
    PyTuple_SET_ITEM(const_tuple_84235f7fa9e49ebab2d25c0e79971897_tuple, 3, const_str_plain_host); Py_INCREF(const_str_plain_host);
    PyTuple_SET_ITEM(const_tuple_84235f7fa9e49ebab2d25c0e79971897_tuple, 4, const_str_plain_port); Py_INCREF(const_str_plain_port);
    const_str_digest_88dfc756b4bfd2f07f0ab2064a84bb3e = UNSTREAM_STRING_ASCII(&constant_bin[ 708275 ], 136, 0);
    const_str_digest_d5ce309bb23bad4cf56bebbcfee2e1d4 = UNSTREAM_STRING_ASCII(&constant_bin[ 708411 ], 24, 0);
    const_tuple_str_plain_self_str_plain_host_str_plain_port_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_host_str_plain_port_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_host_str_plain_port_tuple, 1, const_str_plain_host); Py_INCREF(const_str_plain_host);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_host_str_plain_port_tuple, 2, const_str_plain_port); Py_INCREF(const_str_plain_port);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$connectionpool(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_29fda2310f99051f1437ad901f9c797d;
static PyCodeObject *codeobj_a2f1f2201b470d1db4b4a92ad446bb24;
static PyCodeObject *codeobj_e2f0475715b26c69ff5035643e3f51b1;
static PyCodeObject *codeobj_100e2a9b240eded72bb4c595b0e38fc3;
static PyCodeObject *codeobj_493050ca137994f4803596a37e49deb6;
static PyCodeObject *codeobj_ad0fa6acfbac38031cb6b65d63291ec2;
static PyCodeObject *codeobj_1b45b0944aac75a5affb5cee849a67b6;
static PyCodeObject *codeobj_17376f914e4a68db3af9e1ff274067b8;
static PyCodeObject *codeobj_9563ee97d8024863b70f8cb63ecb7722;
static PyCodeObject *codeobj_10f6b8f651f63ad86c011a7e5846c8fa;
static PyCodeObject *codeobj_05b57c3a5543c1ddfc8b76e0167a3412;
static PyCodeObject *codeobj_820e11c110e8251a54cf6b88af626d17;
static PyCodeObject *codeobj_a775252f1ee9f16e33e31fc900ddb8a6;
static PyCodeObject *codeobj_9d051d1871d257fb8f44e43d5e0e4b87;
static PyCodeObject *codeobj_4fe5abdee9942a12260ac32fdfceb18d;
static PyCodeObject *codeobj_91f6f833260fd2bfb9d1c4217293983d;
static PyCodeObject *codeobj_1c50d287d28952d3b2b2469e7d0bc21e;
static PyCodeObject *codeobj_2f0ce2c5ba92c6ebbde828cb6d571c09;
static PyCodeObject *codeobj_8168152dcc9a3b2cc722f7421533f175;
static PyCodeObject *codeobj_526c39b3ed2036c63aba18f4ebc185aa;
static PyCodeObject *codeobj_173765dcd8acb4545c6be7ce439ab802;
static PyCodeObject *codeobj_84202084f6b0dac4a33b4001af9b4257;
static PyCodeObject *codeobj_1de7001c6db8d0f267eb6d0b76b0ae54;
static PyCodeObject *codeobj_f0e3cb79a84d8cd9401c354f5ff653b1;
static PyCodeObject *codeobj_c30a8c717cd8f53416bd3277e1fb6166;
static PyCodeObject *codeobj_c9757774cd46caf1ae5e486991d10831;
static PyCodeObject *codeobj_963eacc630dc46cf44df967a9b0cfd30;
static PyCodeObject *codeobj_d85917cf3b4c080b7737f28a3e0201d5;
static PyCodeObject *codeobj_4c8430611604f98c3f9235af1f87d49f;
static PyCodeObject *codeobj_b41a00b264844cbec486aceca4e29341;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_81d52c974366d2180a5cc796a4468815;
    codeobj_29fda2310f99051f1437ad901f9c797d = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_f5acfb13ac23993019a45213eee5e308, const_tuple_empty, 0, 0, 0);
    codeobj_a2f1f2201b470d1db4b4a92ad446bb24 = MAKE_CODEOBJECT(module_filename_obj, 55, CO_NOFREE, const_str_plain_ConnectionPool, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_e2f0475715b26c69ff5035643e3f51b1 = MAKE_CODEOBJECT(module_filename_obj, 95, CO_NOFREE, const_str_plain_HTTPConnectionPool, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_100e2a9b240eded72bb4c595b0e38fc3 = MAKE_CODEOBJECT(module_filename_obj, 736, CO_NOFREE, const_str_plain_HTTPSConnectionPool, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_493050ca137994f4803596a37e49deb6 = MAKE_CODEOBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___enter__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_ad0fa6acfbac38031cb6b65d63291ec2 = MAKE_CODEOBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___exit__, const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple, 4, 0, 0);
    codeobj_1b45b0944aac75a5affb5cee849a67b6 = MAKE_CODEOBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___init__, const_tuple_str_plain_self_str_plain_host_str_plain_port_tuple, 3, 0, 0);
    codeobj_17376f914e4a68db3af9e1ff274067b8 = MAKE_CODEOBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain___init__, const_tuple_366d6b5b00ba5d1d811f6b25d9c65ba8_tuple, 11, 0, 0);
    codeobj_9563ee97d8024863b70f8cb63ecb7722 = MAKE_CODEOBJECT(module_filename_obj, 757, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain___init__, const_tuple_48dd06a5d8ab4d4c394f804f2e70d69d_tuple, 19, 0, 0);
    codeobj_10f6b8f651f63ad86c011a7e5846c8fa = MAKE_CODEOBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___str__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_05b57c3a5543c1ddfc8b76e0167a3412 = MAKE_CODEOBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__absolute_url, const_tuple_str_plain_self_str_plain_path_tuple, 2, 0, 0);
    codeobj_820e11c110e8251a54cf6b88af626d17 = MAKE_CODEOBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__get_conn, const_tuple_str_plain_self_str_plain_timeout_str_plain_conn_tuple, 2, 0, 0);
    codeobj_a775252f1ee9f16e33e31fc900ddb8a6 = MAKE_CODEOBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__get_timeout, const_tuple_str_plain_self_str_plain_timeout_tuple, 2, 0, 0);
    codeobj_9d051d1871d257fb8f44e43d5e0e4b87 = MAKE_CODEOBJECT(module_filename_obj, 878, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__ipv6_host, const_tuple_str_plain_host_str_plain_scheme_tuple, 2, 0, 0);
    codeobj_4fe5abdee9942a12260ac32fdfceb18d = MAKE_CODEOBJECT(module_filename_obj, 319, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain__make_request, const_tuple_d777a7ac85d7ce84279e54a406560e7a_tuple, 6, 0, 0);
    codeobj_91f6f833260fd2bfb9d1c4217293983d = MAKE_CODEOBJECT(module_filename_obj, 807, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__new_conn, const_tuple_72fe7df3161073d1e7de2eb19a7e53b3_tuple, 1, 0, 0);
    codeobj_1c50d287d28952d3b2b2469e7d0bc21e = MAKE_CODEOBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__new_conn, const_tuple_str_plain_self_str_plain_conn_tuple, 1, 0, 0);
    codeobj_2f0ce2c5ba92c6ebbde828cb6d571c09 = MAKE_CODEOBJECT(module_filename_obj, 782, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__prepare_conn, const_tuple_str_plain_self_str_plain_conn_tuple, 2, 0, 0);
    codeobj_8168152dcc9a3b2cc722f7421533f175 = MAKE_CODEOBJECT(module_filename_obj, 286, CO_NOFREE, const_str_plain__prepare_proxy, const_tuple_str_plain_self_str_plain_conn_tuple, 2, 0, 0);
    codeobj_526c39b3ed2036c63aba18f4ebc185aa = MAKE_CODEOBJECT(module_filename_obj, 799, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__prepare_proxy, const_tuple_str_plain_self_str_plain_conn_tuple, 2, 0, 0);
    codeobj_173765dcd8acb4545c6be7ce439ab802 = MAKE_CODEOBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__put_conn, const_tuple_str_plain_self_str_plain_conn_tuple, 2, 0, 0);
    codeobj_84202084f6b0dac4a33b4001af9b4257 = MAKE_CODEOBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__raise_timeout, const_tuple_76ce546d292b5e0275b0b85d8f24991a_tuple, 4, 0, 0);
    codeobj_1de7001c6db8d0f267eb6d0b76b0ae54 = MAKE_CODEOBJECT(module_filename_obj, 280, CO_NOFREE, const_str_plain__validate_conn, const_tuple_str_plain_self_str_plain_conn_tuple, 2, 0, 0);
    codeobj_f0e3cb79a84d8cd9401c354f5ff653b1 = MAKE_CODEOBJECT(module_filename_obj, 831, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain__validate_conn, const_tuple_str_plain_self_str_plain_conn_str_plain___class___tuple, 2, 0, 0);
    codeobj_c30a8c717cd8f53416bd3277e1fb6166 = MAKE_CODEOBJECT(module_filename_obj, 84, CO_NOFREE, const_str_plain_close, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_c9757774cd46caf1ae5e486991d10831 = MAKE_CODEOBJECT(module_filename_obj, 407, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_close, const_tuple_str_plain_self_str_plain_old_pool_str_plain_conn_tuple, 1, 0, 0);
    codeobj_963eacc630dc46cf44df967a9b0cfd30 = MAKE_CODEOBJECT(module_filename_obj, 850, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_connection_from_url, const_tuple_4ed0995ef67f4af2789b999d673cabd1_tuple, 1, 0, 0);
    codeobj_d85917cf3b4c080b7737f28a3e0201d5 = MAKE_CODEOBJECT(module_filename_obj, 669, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_drain_and_release_conn, const_tuple_str_plain_response_str_plain_e_tuple, 1, 0, 0);
    codeobj_4c8430611604f98c3f9235af1f87d49f = MAKE_CODEOBJECT(module_filename_obj, 425, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_is_same_host, const_tuple_84235f7fa9e49ebab2d25c0e79971897_tuple, 2, 0, 0);
    codeobj_b41a00b264844cbec486aceca4e29341 = MAKE_CODEOBJECT(module_filename_obj, 446, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_urlopen, const_tuple_76e621573f1ec03615219064d6444cc7_tuple, 13, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_10__validate_conn();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_11__prepare_proxy();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_12__get_timeout();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_13__raise_timeout();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_14__make_request(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_15__absolute_url();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_16_close();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_17_is_same_host();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_18_urlopen(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_18_urlopen$$$function_1_drain_and_release_conn();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_19___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_20__prepare_conn();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_21__prepare_proxy();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_22__new_conn();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_23__validate_conn();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_24_connection_from_url();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_25__ipv6_host();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_2___str__();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_3___enter__();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_4___exit__();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_5_close();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_6___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_7__new_conn();


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_8__get_conn(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_9__put_conn();


// The module function definitions.
static PyObject *impl_urllib3$connectionpool$$$function_1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    struct Nuitka_FrameObject *frame_1b45b0944aac75a5affb5cee849a67b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1b45b0944aac75a5affb5cee849a67b6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_1b45b0944aac75a5affb5cee849a67b6, codeobj_1b45b0944aac75a5affb5cee849a67b6, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_1b45b0944aac75a5affb5cee849a67b6 = cache_frame_1b45b0944aac75a5affb5cee849a67b6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1b45b0944aac75a5affb5cee849a67b6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1b45b0944aac75a5affb5cee849a67b6) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_host);
        tmp_operand_name_1 = par_host;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_LocationValueError);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LocationValueError);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20325 ], 40, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 66;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_1b45b0944aac75a5affb5cee849a67b6->m_frame.f_lineno = 66;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_1, &PyTuple_GET_ITEM(const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple, 0));

            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 66;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain__ipv6_host);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__ipv6_host);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28416 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_host);
        tmp_args_element_name_1 = par_host;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_scheme);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1b45b0944aac75a5affb5cee849a67b6->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_host, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_host);
        tmp_called_instance_1 = par_host;
        frame_1b45b0944aac75a5affb5cee849a67b6->m_frame.f_lineno = 69;
        tmp_assattr_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_lower);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__proxy_host, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_port);
        tmp_assattr_name_3 = par_port;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_port, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1b45b0944aac75a5affb5cee849a67b6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1b45b0944aac75a5affb5cee849a67b6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1b45b0944aac75a5affb5cee849a67b6, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1b45b0944aac75a5affb5cee849a67b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b45b0944aac75a5affb5cee849a67b6, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1b45b0944aac75a5affb5cee849a67b6,
        type_description_1,
        par_self,
        par_host,
        par_port
    );


    // Release cached frame.
    if (frame_1b45b0944aac75a5affb5cee849a67b6 == cache_frame_1b45b0944aac75a5affb5cee849a67b6) {
        Py_DECREF(frame_1b45b0944aac75a5affb5cee849a67b6);
    }
    cache_frame_1b45b0944aac75a5affb5cee849a67b6 = NULL;

    assertFrameObject(frame_1b45b0944aac75a5affb5cee849a67b6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_1___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_2___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_10f6b8f651f63ad86c011a7e5846c8fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10f6b8f651f63ad86c011a7e5846c8fa = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_10f6b8f651f63ad86c011a7e5846c8fa, codeobj_10f6b8f651f63ad86c011a7e5846c8fa, module_urllib3$connectionpool, sizeof(void *));
    frame_10f6b8f651f63ad86c011a7e5846c8fa = cache_frame_10f6b8f651f63ad86c011a7e5846c8fa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_10f6b8f651f63ad86c011a7e5846c8fa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_10f6b8f651f63ad86c011a7e5846c8fa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        tmp_left_name_1 = const_str_digest_cf54d77232ad2ca3bd0a464156f88154;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_source_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_source_name_1 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain___name__);
        Py_DECREF(tmp_source_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_host);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_1);

            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_port);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_1);

            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 2, tmp_tuple_element_1);
        tmp_return_value = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10f6b8f651f63ad86c011a7e5846c8fa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_10f6b8f651f63ad86c011a7e5846c8fa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10f6b8f651f63ad86c011a7e5846c8fa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_10f6b8f651f63ad86c011a7e5846c8fa, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_10f6b8f651f63ad86c011a7e5846c8fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10f6b8f651f63ad86c011a7e5846c8fa, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10f6b8f651f63ad86c011a7e5846c8fa,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_10f6b8f651f63ad86c011a7e5846c8fa == cache_frame_10f6b8f651f63ad86c011a7e5846c8fa) {
        Py_DECREF(frame_10f6b8f651f63ad86c011a7e5846c8fa);
    }
    cache_frame_10f6b8f651f63ad86c011a7e5846c8fa = NULL;

    assertFrameObject(frame_10f6b8f651f63ad86c011a7e5846c8fa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_2___str__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_3___enter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_3___enter__);
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_4___exit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_type = python_pars[1];
    PyObject *par_exc_val = python_pars[2];
    PyObject *par_exc_tb = python_pars[3];
    struct Nuitka_FrameObject *frame_ad0fa6acfbac38031cb6b65d63291ec2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ad0fa6acfbac38031cb6b65d63291ec2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_ad0fa6acfbac38031cb6b65d63291ec2, codeobj_ad0fa6acfbac38031cb6b65d63291ec2, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_ad0fa6acfbac38031cb6b65d63291ec2 = cache_frame_ad0fa6acfbac38031cb6b65d63291ec2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ad0fa6acfbac38031cb6b65d63291ec2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ad0fa6acfbac38031cb6b65d63291ec2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ad0fa6acfbac38031cb6b65d63291ec2->m_frame.f_lineno = 80;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_close);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ad0fa6acfbac38031cb6b65d63291ec2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ad0fa6acfbac38031cb6b65d63291ec2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad0fa6acfbac38031cb6b65d63291ec2, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ad0fa6acfbac38031cb6b65d63291ec2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad0fa6acfbac38031cb6b65d63291ec2, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ad0fa6acfbac38031cb6b65d63291ec2,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_val,
        par_exc_tb
    );


    // Release cached frame.
    if (frame_ad0fa6acfbac38031cb6b65d63291ec2 == cache_frame_ad0fa6acfbac38031cb6b65d63291ec2) {
        Py_DECREF(frame_ad0fa6acfbac38031cb6b65d63291ec2);
    }
    cache_frame_ad0fa6acfbac38031cb6b65d63291ec2 = NULL;

    assertFrameObject(frame_ad0fa6acfbac38031cb6b65d63291ec2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_4___exit__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_val);
    Py_DECREF(par_exc_val);
    CHECK_OBJECT(par_exc_tb);
    Py_DECREF(par_exc_tb);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_val);
    Py_DECREF(par_exc_val);
    CHECK_OBJECT(par_exc_tb);
    Py_DECREF(par_exc_tb);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_strict = python_pars[3];
    PyObject *par_timeout = python_pars[4];
    PyObject *par_maxsize = python_pars[5];
    PyObject *par_block = python_pars[6];
    PyObject *par_headers = python_pars[7];
    PyObject *par_retries = python_pars[8];
    PyObject *par__proxy = python_pars[9];
    PyObject *par__proxy_headers = python_pars[10];
    PyObject *par_conn_kw = python_pars[11];
    PyObject *var__ = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_17376f914e4a68db3af9e1ff274067b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_17376f914e4a68db3af9e1ff274067b8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_17376f914e4a68db3af9e1ff274067b8, codeobj_17376f914e4a68db3af9e1ff274067b8, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_17376f914e4a68db3af9e1ff274067b8 = cache_frame_17376f914e4a68db3af9e1ff274067b8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_17376f914e4a68db3af9e1ff274067b8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_17376f914e4a68db3af9e1ff274067b8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ConnectionPool);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionPool);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28448 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT(par_host);
        tmp_args_element_name_2 = par_host;
        CHECK_OBJECT(par_port);
        tmp_args_element_name_3 = par_port;
        frame_17376f914e4a68db3af9e1ff274067b8->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, const_str_plain___init__, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_RequestMethods);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestMethods);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28484 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_self);
        tmp_args_element_name_4 = par_self;
        CHECK_OBJECT(par_headers);
        tmp_args_element_name_5 = par_headers;
        frame_17376f914e4a68db3af9e1ff274067b8->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain___init__, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_strict);
        tmp_assattr_name_1 = par_strict;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_strict, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT(par_timeout);
        tmp_isinstance_inst_1 = par_timeout;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_Timeout);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 22019 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_3;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_Timeout);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 22019 ], 29, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 170;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_4;
            CHECK_OBJECT(par_timeout);
            tmp_args_element_name_6 = par_timeout;
            frame_17376f914e4a68db3af9e1ff274067b8->m_frame.f_lineno = 170;
            {
                PyObject *call_args[] = {tmp_args_element_name_6};
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_from_float, call_args);
            }

            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_timeout;
                assert(old != NULL);
                par_timeout = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_retries);
        tmp_compexpr_left_1 = par_retries;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_Retry);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 19588 ], 27, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 173;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_5;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_DEFAULT);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_retries;
                assert(old != NULL);
                par_retries = tmp_assign_source_2;
                Py_DECREF(old);
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_timeout);
        tmp_assattr_name_2 = par_timeout;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_timeout, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_retries);
        tmp_assattr_name_3 = par_retries;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_retries, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(par_maxsize);
        tmp_args_element_name_7 = par_maxsize;
        frame_17376f914e4a68db3af9e1ff274067b8->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_name_7};
            tmp_assattr_name_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_QueueCls, call_args);
        }

        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_pool, tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_block);
        tmp_assattr_name_5 = par_block;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_block, tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par__proxy);
        tmp_assattr_name_6 = par__proxy;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain_proxy, tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par__proxy_headers);
        tmp_or_left_value_1 = par__proxy_headers;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = PyDict_New();
        tmp_assattr_name_7 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assattr_name_7 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain_proxy_headers, tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_xrange);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7309 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_6;
        CHECK_OBJECT(par_maxsize);
        tmp_args_element_name_8 = par_maxsize;
        frame_17376f914e4a68db3af9e1ff274067b8->m_frame.f_lineno = 185;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_8);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooo";
                exception_lineno = 185;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_5;
            Py_INCREF(var__);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_pool);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        frame_17376f914e4a68db3af9e1ff274067b8->m_frame.f_lineno = 186;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_put, &PyTuple_GET_ITEM(const_tuple_none_tuple, 0));

        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 185;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = const_int_0;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain_num_connections, tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_name_9 = const_int_0;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, const_str_plain_num_requests, tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_conn_kw);
        tmp_assattr_name_10 = par_conn_kw;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, const_str_plain_conn_kw, tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_proxy);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 193;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_4;
            PyObject *tmp_call_arg_element_1;
            PyObject *tmp_call_arg_element_2;
            CHECK_OBJECT(par_self);
            tmp_source_name_4 = par_self;
            tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_conn_kw);
            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_call_arg_element_1 = const_str_plain_socket_options;
            tmp_call_arg_element_2 = PyList_New(0);
            frame_17376f914e4a68db3af9e1ff274067b8->m_frame.f_lineno = 197;
            {
                PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
                tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_6, const_str_plain_setdefault, call_args);
            }

            Py_DECREF(tmp_called_instance_6);
            Py_DECREF(tmp_call_arg_element_2);
            if (tmp_call_result_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_4);
        }
        branch_no_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_17376f914e4a68db3af9e1ff274067b8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_17376f914e4a68db3af9e1ff274067b8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_17376f914e4a68db3af9e1ff274067b8, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_17376f914e4a68db3af9e1ff274067b8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_17376f914e4a68db3af9e1ff274067b8, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_17376f914e4a68db3af9e1ff274067b8,
        type_description_1,
        par_self,
        par_host,
        par_port,
        par_strict,
        par_timeout,
        par_maxsize,
        par_block,
        par_headers,
        par_retries,
        par__proxy,
        par__proxy_headers,
        par_conn_kw,
        var__
    );


    // Release cached frame.
    if (frame_17376f914e4a68db3af9e1ff274067b8 == cache_frame_17376f914e4a68db3af9e1ff274067b8) {
        Py_DECREF(frame_17376f914e4a68db3af9e1ff274067b8);
    }
    cache_frame_17376f914e4a68db3af9e1ff274067b8 = NULL;

    assertFrameObject(frame_17376f914e4a68db3af9e1ff274067b8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_6___init__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_timeout);
    Py_DECREF(par_timeout);
    par_timeout = NULL;

    CHECK_OBJECT((PyObject *)par_retries);
    Py_DECREF(par_retries);
    par_retries = NULL;

    Py_XDECREF(var__);
    var__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_timeout);
    par_timeout = NULL;

    Py_XDECREF(par_retries);
    par_retries = NULL;

    Py_XDECREF(var__);
    var__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_6___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_maxsize);
    Py_DECREF(par_maxsize);
    CHECK_OBJECT(par_block);
    Py_DECREF(par_block);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par__proxy);
    Py_DECREF(par__proxy);
    CHECK_OBJECT(par__proxy_headers);
    Py_DECREF(par__proxy_headers);
    CHECK_OBJECT(par_conn_kw);
    Py_DECREF(par_conn_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_maxsize);
    Py_DECREF(par_maxsize);
    CHECK_OBJECT(par_block);
    Py_DECREF(par_block);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par__proxy);
    Py_DECREF(par__proxy);
    CHECK_OBJECT(par__proxy_headers);
    Py_DECREF(par__proxy_headers);
    CHECK_OBJECT(par_conn_kw);
    Py_DECREF(par_conn_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_7__new_conn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_conn = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_1c50d287d28952d3b2b2469e7d0bc21e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1c50d287d28952d3b2b2469e7d0bc21e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_1c50d287d28952d3b2b2469e7d0bc21e, codeobj_1c50d287d28952d3b2b2469e7d0bc21e, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *));
    frame_1c50d287d28952d3b2b2469e7d0bc21e = cache_frame_1c50d287d28952d3b2b2469e7d0bc21e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1c50d287d28952d3b2b2469e7d0bc21e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1c50d287d28952d3b2b2469e7d0bc21e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_num_connections);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_attr_1__start == NULL);
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert(tmp_inplace_assign_attr_1__end == NULL);
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_num_connections, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
    Py_DECREF(tmp_inplace_assign_attr_1__end);
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
    Py_DECREF(tmp_inplace_assign_attr_1__start);
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
    Py_DECREF(tmp_inplace_assign_attr_1__end);
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
    Py_DECREF(tmp_inplace_assign_attr_1__start);
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_4;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_source_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_log);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_log);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28210 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_debug);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_digest_8a78bc8253427b70798912c62e8fda31;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_num_connections);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 205;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_host);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 205;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_port);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 205;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 205;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = const_str_plain_80;
        Py_INCREF(tmp_or_right_value_1);
        tmp_args_element_name_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_name_4 = tmp_or_left_value_1;
        or_end_1:;
        frame_1c50d287d28952d3b2b2469e7d0bc21e->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_8;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_11;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_source_name_12;
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_ConnectionCls);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_host;
        CHECK_OBJECT(par_self);
        tmp_source_name_7 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_host);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_port;
        CHECK_OBJECT(par_self);
        tmp_source_name_8 = par_self;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_port);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_timeout;
        CHECK_OBJECT(par_self);
        tmp_source_name_10 = par_self;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_timeout);
        if (tmp_source_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_connect_timeout);
        Py_DECREF(tmp_source_name_9);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_strict;
        CHECK_OBJECT(par_self);
        tmp_source_name_11 = par_self;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_strict);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_self);
        tmp_source_name_12 = par_self;
        tmp_dircall_arg3_1 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_conn_kw);
        if (tmp_dircall_arg3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_3 = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_conn == NULL);
        var_conn = tmp_assign_source_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c50d287d28952d3b2b2469e7d0bc21e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c50d287d28952d3b2b2469e7d0bc21e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c50d287d28952d3b2b2469e7d0bc21e, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1c50d287d28952d3b2b2469e7d0bc21e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c50d287d28952d3b2b2469e7d0bc21e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c50d287d28952d3b2b2469e7d0bc21e,
        type_description_1,
        par_self,
        var_conn
    );


    // Release cached frame.
    if (frame_1c50d287d28952d3b2b2469e7d0bc21e == cache_frame_1c50d287d28952d3b2b2469e7d0bc21e) {
        Py_DECREF(frame_1c50d287d28952d3b2b2469e7d0bc21e);
    }
    cache_frame_1c50d287d28952d3b2b2469e7d0bc21e = NULL;

    assertFrameObject(frame_1c50d287d28952d3b2b2469e7d0bc21e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_conn);
    tmp_return_value = var_conn;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_7__new_conn);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_conn);
    Py_DECREF(var_conn);
    var_conn = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_7__new_conn);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_8__get_conn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_timeout = python_pars[1];
    PyObject *var_conn = NULL;
    struct Nuitka_FrameObject *frame_820e11c110e8251a54cf6b88af626d17;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_820e11c110e8251a54cf6b88af626d17 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_conn == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_conn = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_820e11c110e8251a54cf6b88af626d17, codeobj_820e11c110e8251a54cf6b88af626d17, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_820e11c110e8251a54cf6b88af626d17 = cache_frame_820e11c110e8251a54cf6b88af626d17;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_820e11c110e8251a54cf6b88af626d17);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_820e11c110e8251a54cf6b88af626d17) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_pool);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_get);
        Py_DECREF(tmp_source_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_1 = const_str_plain_block;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_block);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 226;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_timeout;
        CHECK_OBJECT(par_timeout);
        tmp_dict_value_2 = par_timeout;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_820e11c110e8251a54cf6b88af626d17->m_frame.f_lineno = 226;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_conn;
            assert(old != NULL);
            var_conn = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_820e11c110e8251a54cf6b88af626d17, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_820e11c110e8251a54cf6b88af626d17, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ClosedPoolError);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ClosedPoolError);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20952 ], 37, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 229;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }

            tmp_called_name_2 = tmp_mvar_value_1;
            CHECK_OBJECT(par_self);
            tmp_args_element_name_1 = par_self;
            tmp_args_element_name_2 = const_str_digest_1a5a126298fb29147b8bd2e44b30484d;
            frame_820e11c110e8251a54cf6b88af626d17->m_frame.f_lineno = 229;
            {
                PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
            }

            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 229;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_queue);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_queue);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 254 ], 27, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 231;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_Empty);
            if (tmp_compexpr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
            Py_DECREF(tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_source_name_5;
                PyObject *tmp_attribute_value_1;
                int tmp_truth_name_1;
                CHECK_OBJECT(par_self);
                tmp_source_name_5 = par_self;
                tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_block);
                if (tmp_attribute_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 232;
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }
                tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
                if (tmp_truth_name_1 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_attribute_value_1);

                    exception_lineno = 232;
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }
                tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF(tmp_attribute_value_1);
                if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_3;
                } else {
                    goto branch_no_3;
                }
                branch_yes_3:;
                {
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_called_name_3;
                    PyObject *tmp_mvar_value_3;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_args_element_name_4;
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_EmptyPoolError);

                    if (unlikely(tmp_mvar_value_3 == NULL)) {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EmptyPoolError);
                    }

                    if (tmp_mvar_value_3 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 28520 ], 36, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 233;
                        type_description_1 = "ooo";
                        goto try_except_handler_3;
                    }

                    tmp_called_name_3 = tmp_mvar_value_3;
                    CHECK_OBJECT(par_self);
                    tmp_args_element_name_3 = par_self;
                    tmp_args_element_name_4 = const_str_digest_0b3188c8adfc30f09ee3b74b5f540ad8;
                    frame_820e11c110e8251a54cf6b88af626d17->m_frame.f_lineno = 233;
                    {
                        PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
                    }

                    if (tmp_raise_type_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 233;
                        type_description_1 = "ooo";
                        goto try_except_handler_3;
                    }
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 233;
                    RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }
                branch_no_3:;
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 225;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_820e11c110e8251a54cf6b88af626d17->m_frame) frame_820e11c110e8251a54cf6b88af626d17->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto try_except_handler_3;
            branch_end_2:;
        }
        branch_end_1:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_8__get_conn);
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_conn);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_conn);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_is_connection_dropped);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_connection_dropped);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28556 ], 43, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT(var_conn);
        tmp_args_element_name_5 = var_conn;
        frame_820e11c110e8251a54cf6b88af626d17->m_frame.f_lineno = 239;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 239;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_7;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_log);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_log);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28210 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 240;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_5;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_debug);
            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_6 = const_str_digest_2f0bd415726e69260e970d6fed37021c;
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_host);
            if (tmp_args_element_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_5);

                exception_lineno = 240;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_820e11c110e8251a54cf6b88af626d17->m_frame.f_lineno = 240;
            {
                PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
            }

            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_2);
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT(var_conn);
            tmp_called_instance_1 = var_conn;
            frame_820e11c110e8251a54cf6b88af626d17->m_frame.f_lineno = 241;
            tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_close);
            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_3);
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_getattr_default_1;
            CHECK_OBJECT(var_conn);
            tmp_getattr_target_1 = var_conn;
            tmp_getattr_attr_1 = const_str_plain_auto_open;
            tmp_getattr_default_1 = const_int_pos_1;
            tmp_compexpr_left_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
            if (tmp_compexpr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            Py_DECREF(tmp_compexpr_left_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = Py_None;
                {
                    PyObject *old = var_conn;
                    assert(old != NULL);
                    var_conn = tmp_assign_source_3;
                    Py_INCREF(var_conn);
                    Py_DECREF(old);
                }

            }
            branch_no_5:;
        }
        branch_no_4:;
    }
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_2;
        if (var_conn == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "conn");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 248;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_or_left_value_1 = var_conn;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_820e11c110e8251a54cf6b88af626d17->m_frame.f_lineno = 248;
        tmp_or_right_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain__new_conn);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_820e11c110e8251a54cf6b88af626d17);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_820e11c110e8251a54cf6b88af626d17);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_820e11c110e8251a54cf6b88af626d17);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_820e11c110e8251a54cf6b88af626d17, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_820e11c110e8251a54cf6b88af626d17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_820e11c110e8251a54cf6b88af626d17, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_820e11c110e8251a54cf6b88af626d17,
        type_description_1,
        par_self,
        par_timeout,
        var_conn
    );


    // Release cached frame.
    if (frame_820e11c110e8251a54cf6b88af626d17 == cache_frame_820e11c110e8251a54cf6b88af626d17) {
        Py_DECREF(frame_820e11c110e8251a54cf6b88af626d17);
    }
    cache_frame_820e11c110e8251a54cf6b88af626d17 = NULL;

    assertFrameObject(frame_820e11c110e8251a54cf6b88af626d17);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_8__get_conn);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_conn);
    var_conn = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_conn);
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_8__get_conn);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_9__put_conn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_conn = python_pars[1];
    struct Nuitka_FrameObject *frame_173765dcd8acb4545c6be7ce439ab802;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_173765dcd8acb4545c6be7ce439ab802 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_173765dcd8acb4545c6be7ce439ab802, codeobj_173765dcd8acb4545c6be7ce439ab802, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *));
    frame_173765dcd8acb4545c6be7ce439ab802 = cache_frame_173765dcd8acb4545c6be7ce439ab802;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_173765dcd8acb4545c6be7ce439ab802);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_173765dcd8acb4545c6be7ce439ab802) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_pool);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_put);
        Py_DECREF(tmp_source_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_conn);
        tmp_tuple_element_1 = par_conn;
        tmp_args_name_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_ef0c581b63de11312ed0743d04af22b7);
        frame_173765dcd8acb4545c6be7ce439ab802->m_frame.f_lineno = 265;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_9__put_conn);
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_173765dcd8acb4545c6be7ce439ab802, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_173765dcd8acb4545c6be7ce439ab802, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_1;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_queue);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_queue);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 254 ], 27, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 270;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }

            tmp_source_name_3 = tmp_mvar_value_1;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_Full);
            if (tmp_compexpr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
            Py_DECREF(tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_4;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_source_name_5;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_log);

                if (unlikely(tmp_mvar_value_2 == NULL)) {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_log);
                }

                if (tmp_mvar_value_2 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 28210 ], 25, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 272;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }

                tmp_source_name_4 = tmp_mvar_value_2;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_warning);
                if (tmp_called_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }
                tmp_args_element_name_1 = const_str_digest_c5564c805ffb5de6012fccf9ea4780d0;
                CHECK_OBJECT(par_self);
                tmp_source_name_5 = par_self;
                tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_host);
                if (tmp_args_element_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_2);

                    exception_lineno = 274;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }
                frame_173765dcd8acb4545c6be7ce439ab802->m_frame.f_lineno = 272;
                {
                    PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
                    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
                }

                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_2);
                if (tmp_call_result_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }
                Py_DECREF(tmp_call_result_2);
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 264;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_173765dcd8acb4545c6be7ce439ab802->m_frame) frame_173765dcd8acb4545c6be7ce439ab802->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oo";
            goto try_except_handler_2;
            branch_end_2:;
        }
        branch_no_1:;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_9__put_conn);
    return NULL;
    // End of try:
    try_end_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_conn);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_conn);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT(par_conn);
            tmp_called_instance_1 = par_conn;
            frame_173765dcd8acb4545c6be7ce439ab802->m_frame.f_lineno = 278;
            tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_close);
            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_3);
        }
        branch_no_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_173765dcd8acb4545c6be7ce439ab802);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_173765dcd8acb4545c6be7ce439ab802);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_173765dcd8acb4545c6be7ce439ab802);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_173765dcd8acb4545c6be7ce439ab802, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_173765dcd8acb4545c6be7ce439ab802->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_173765dcd8acb4545c6be7ce439ab802, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_173765dcd8acb4545c6be7ce439ab802,
        type_description_1,
        par_self,
        par_conn
    );


    // Release cached frame.
    if (frame_173765dcd8acb4545c6be7ce439ab802 == cache_frame_173765dcd8acb4545c6be7ce439ab802) {
        Py_DECREF(frame_173765dcd8acb4545c6be7ce439ab802);
    }
    cache_frame_173765dcd8acb4545c6be7ce439ab802 = NULL;

    assertFrameObject(frame_173765dcd8acb4545c6be7ce439ab802);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_9__put_conn);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_12__get_timeout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_timeout = python_pars[1];
    struct Nuitka_FrameObject *frame_a775252f1ee9f16e33e31fc900ddb8a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a775252f1ee9f16e33e31fc900ddb8a6 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_a775252f1ee9f16e33e31fc900ddb8a6, codeobj_a775252f1ee9f16e33e31fc900ddb8a6, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *));
    frame_a775252f1ee9f16e33e31fc900ddb8a6 = cache_frame_a775252f1ee9f16e33e31fc900ddb8a6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a775252f1ee9f16e33e31fc900ddb8a6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a775252f1ee9f16e33e31fc900ddb8a6) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_timeout);
        tmp_compexpr_left_1 = par_timeout;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain__Default);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__Default);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28599 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_1 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_timeout);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_a775252f1ee9f16e33e31fc900ddb8a6->m_frame.f_lineno = 293;
            tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_clone);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(par_timeout);
        tmp_isinstance_inst_1 = par_timeout;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_Timeout);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 22019 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 295;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT(par_timeout);
            tmp_called_instance_2 = par_timeout;
            frame_a775252f1ee9f16e33e31fc900ddb8a6->m_frame.f_lineno = 296;
            tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_clone);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_Timeout);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 22019 ], 29, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 300;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_3;
            CHECK_OBJECT(par_timeout);
            tmp_args_element_name_1 = par_timeout;
            frame_a775252f1ee9f16e33e31fc900ddb8a6->m_frame.f_lineno = 300;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_from_float, call_args);
            }

            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a775252f1ee9f16e33e31fc900ddb8a6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a775252f1ee9f16e33e31fc900ddb8a6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a775252f1ee9f16e33e31fc900ddb8a6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a775252f1ee9f16e33e31fc900ddb8a6, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a775252f1ee9f16e33e31fc900ddb8a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a775252f1ee9f16e33e31fc900ddb8a6, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a775252f1ee9f16e33e31fc900ddb8a6,
        type_description_1,
        par_self,
        par_timeout
    );


    // Release cached frame.
    if (frame_a775252f1ee9f16e33e31fc900ddb8a6 == cache_frame_a775252f1ee9f16e33e31fc900ddb8a6) {
        Py_DECREF(frame_a775252f1ee9f16e33e31fc900ddb8a6);
    }
    cache_frame_a775252f1ee9f16e33e31fc900ddb8a6 = NULL;

    assertFrameObject(frame_a775252f1ee9f16e33e31fc900ddb8a6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_12__get_timeout);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_13__raise_timeout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_err = python_pars[1];
    PyObject *par_url = python_pars[2];
    PyObject *par_timeout_value = python_pars[3];
    struct Nuitka_FrameObject *frame_84202084f6b0dac4a33b4001af9b4257;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_84202084f6b0dac4a33b4001af9b4257 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_84202084f6b0dac4a33b4001af9b4257, codeobj_84202084f6b0dac4a33b4001af9b4257, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_84202084f6b0dac4a33b4001af9b4257 = cache_frame_84202084f6b0dac4a33b4001af9b4257;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_84202084f6b0dac4a33b4001af9b4257);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_84202084f6b0dac4a33b4001af9b4257) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_err);
        tmp_isinstance_inst_1 = par_err;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SocketTimeout);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketTimeout);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27654 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 305;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21021 ], 38, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 306;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT(par_self);
            tmp_args_element_name_1 = par_self;
            CHECK_OBJECT(par_url);
            tmp_args_element_name_2 = par_url;
            tmp_left_name_1 = const_str_digest_28e04c9ebed2db995ed772536d0940be;
            CHECK_OBJECT(par_timeout_value);
            tmp_right_name_1 = par_timeout_value;
            tmp_args_element_name_3 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
            if (tmp_args_element_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_84202084f6b0dac4a33b4001af9b4257->m_frame.f_lineno = 306;
            {
                PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
            }

            Py_DECREF(tmp_args_element_name_3);
            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 306;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT(par_err);
        tmp_source_name_1 = par_err;
        tmp_attribute_name_1 = const_str_plain_errno;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_source_name_1, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_err);
        tmp_source_name_2 = par_err;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_errno);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain__blocking_errnos);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__blocking_errnos);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_compexpr_left_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28629 ], 38, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 310;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_3;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21021 ], 38, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 311;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_4;
            CHECK_OBJECT(par_self);
            tmp_args_element_name_4 = par_self;
            CHECK_OBJECT(par_url);
            tmp_args_element_name_5 = par_url;
            tmp_left_name_2 = const_str_digest_28e04c9ebed2db995ed772536d0940be;
            CHECK_OBJECT(par_timeout_value);
            tmp_right_name_2 = par_timeout_value;
            tmp_args_element_name_6 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
            if (tmp_args_element_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_84202084f6b0dac4a33b4001af9b4257->m_frame.f_lineno = 311;
            {
                PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
            }

            Py_DECREF(tmp_args_element_name_6);
            if (tmp_raise_type_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 311;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_unicode_arg_2;
        tmp_compexpr_left_2 = const_str_digest_01815186f693d6c36c2765b5da31be5e;
        CHECK_OBJECT(par_err);
        tmp_unicode_arg_1 = par_err;
        tmp_compexpr_right_2 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_compexpr_left_3 = const_str_digest_98b3dd6f4a9169b6d05d2bb6cb7939ae;
        CHECK_OBJECT(par_err);
        tmp_unicode_arg_2 = par_err;
        tmp_compexpr_right_3 = PyObject_Unicode(tmp_unicode_arg_2);
        if (tmp_compexpr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        Py_DECREF(tmp_compexpr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21021 ], 38, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 317;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_5;
            CHECK_OBJECT(par_self);
            tmp_args_element_name_7 = par_self;
            CHECK_OBJECT(par_url);
            tmp_args_element_name_8 = par_url;
            tmp_left_name_3 = const_str_digest_28e04c9ebed2db995ed772536d0940be;
            CHECK_OBJECT(par_timeout_value);
            tmp_right_name_3 = par_timeout_value;
            tmp_args_element_name_9 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_3);
            if (tmp_args_element_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_84202084f6b0dac4a33b4001af9b4257->m_frame.f_lineno = 317;
            {
                PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
            }

            Py_DECREF(tmp_args_element_name_9);
            if (tmp_raise_type_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_3;
            exception_lineno = 317;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_84202084f6b0dac4a33b4001af9b4257);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_84202084f6b0dac4a33b4001af9b4257);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_84202084f6b0dac4a33b4001af9b4257, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_84202084f6b0dac4a33b4001af9b4257->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84202084f6b0dac4a33b4001af9b4257, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_84202084f6b0dac4a33b4001af9b4257,
        type_description_1,
        par_self,
        par_err,
        par_url,
        par_timeout_value
    );


    // Release cached frame.
    if (frame_84202084f6b0dac4a33b4001af9b4257 == cache_frame_84202084f6b0dac4a33b4001af9b4257) {
        Py_DECREF(frame_84202084f6b0dac4a33b4001af9b4257);
    }
    cache_frame_84202084f6b0dac4a33b4001af9b4257 = NULL;

    assertFrameObject(frame_84202084f6b0dac4a33b4001af9b4257);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_13__raise_timeout);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_err);
    Py_DECREF(par_err);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_timeout_value);
    Py_DECREF(par_timeout_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_err);
    Py_DECREF(par_err);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_timeout_value);
    Py_DECREF(par_timeout_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_14__make_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_conn = python_pars[1];
    PyObject *par_method = python_pars[2];
    PyObject *par_url = python_pars[3];
    PyObject *par_timeout = python_pars[4];
    PyObject *par_chunked = python_pars[5];
    PyObject *par_httplib_request_kw = python_pars[6];
    PyObject *var_timeout_obj = NULL;
    PyObject *var_e = NULL;
    PyObject *var_read_timeout = NULL;
    PyObject *var_httplib_response = NULL;
    PyObject *var_http_version = NULL;
    PyObject *var_hpe = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_4fe5abdee9942a12260ac32fdfceb18d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_preserved_type_5;
    PyObject *exception_preserved_value_5;
    PyTracebackObject *exception_preserved_tb_5;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4fe5abdee9942a12260ac32fdfceb18d = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_4fe5abdee9942a12260ac32fdfceb18d, codeobj_4fe5abdee9942a12260ac32fdfceb18d, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_4fe5abdee9942a12260ac32fdfceb18d = cache_frame_4fe5abdee9942a12260ac32fdfceb18d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4fe5abdee9942a12260ac32fdfceb18d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4fe5abdee9942a12260ac32fdfceb18d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_num_requests);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_attr_1__start == NULL);
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_inplace_assign_attr_1__end == NULL);
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_num_requests, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
    Py_DECREF(tmp_inplace_assign_attr_1__end);
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
    Py_DECREF(tmp_inplace_assign_attr_1__start);
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
    Py_DECREF(tmp_inplace_assign_attr_1__end);
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
    Py_DECREF(tmp_inplace_assign_attr_1__start);
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_timeout);
        tmp_args_element_name_1 = par_timeout;
        frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__get_timeout, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_timeout_obj == NULL);
        var_timeout_obj = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_timeout_obj);
        tmp_called_instance_2 = var_timeout_obj;
        frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 338;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_start_connect);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_timeout_obj);
        tmp_source_name_2 = var_timeout_obj;
        tmp_assattr_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_connect_timeout);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_conn);
        tmp_assattr_target_2 = par_conn;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_timeout, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_conn);
        tmp_args_element_name_2 = par_conn;
        frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain__validate_conn, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_4fe5abdee9942a12260ac32fdfceb18d, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_4fe5abdee9942a12260ac32fdfceb18d, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    PyException_SetTraceback(exception_keeper_value_3, (PyObject *)exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SocketTimeout);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketTimeout);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27654 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_compexpr_right_1, 0, tmp_tuple_element_1);
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_BaseSSLError);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseSSLError);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_compexpr_right_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28667 ], 34, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_compexpr_right_1, 1, tmp_tuple_element_1);
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
            assert(var_e == NULL);
            Py_INCREF(tmp_assign_source_4);
            var_e = tmp_assign_source_4;
        }
        // Tried code:
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_3;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__raise_timeout);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_dict_key_1 = const_str_plain_err;
            CHECK_OBJECT(var_e);
            tmp_dict_value_1 = var_e;
            tmp_kw_name_1 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = const_str_plain_url;
            CHECK_OBJECT(par_url);
            tmp_dict_value_2 = par_url;
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = const_str_plain_timeout_value;
            CHECK_OBJECT(par_conn);
            tmp_source_name_4 = par_conn;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_timeout);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_kw_name_1);

                exception_lineno = 346;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 346;
            tmp_call_result_3 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            Py_DECREF(tmp_call_result_3);
        }
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 347;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame) frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_14__make_request);
        return NULL;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(var_e);
        var_e = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 342;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame) frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_14__make_request);
    return NULL;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_chunked);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_chunked);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT(par_conn);
            tmp_source_name_5 = par_conn;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_request_chunked);
            if (tmp_dircall_arg1_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_method);
            tmp_tuple_element_2 = par_method;
            tmp_dircall_arg2_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_url);
            tmp_tuple_element_2 = par_url;
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_2);
            CHECK_OBJECT(par_httplib_request_kw);
            tmp_dircall_arg3_1 = par_httplib_request_kw;
            Py_INCREF(tmp_dircall_arg3_1);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_call_result_4 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict(dir_call_args);
            }
            if (tmp_call_result_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_4);
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_dircall_arg1_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_dircall_arg2_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_dircall_arg3_2;
            PyObject *tmp_call_result_5;
            CHECK_OBJECT(par_conn);
            tmp_source_name_6 = par_conn;
            tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_request);
            if (tmp_dircall_arg1_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_method);
            tmp_tuple_element_3 = par_method;
            tmp_dircall_arg2_2 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_dircall_arg2_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_url);
            tmp_tuple_element_3 = par_url;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_dircall_arg2_2, 1, tmp_tuple_element_3);
            CHECK_OBJECT(par_httplib_request_kw);
            tmp_dircall_arg3_2 = par_httplib_request_kw;
            Py_INCREF(tmp_dircall_arg3_2);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
                tmp_call_result_5 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict(dir_call_args);
            }
            if (tmp_call_result_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_5);
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT(var_timeout_obj);
        tmp_source_name_7 = var_timeout_obj;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_read_timeout);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_read_timeout == NULL);
        var_read_timeout = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_conn);
        tmp_getattr_target_1 = par_conn;
        tmp_getattr_attr_1 = const_str_plain_sock;
        tmp_getattr_default_1 = Py_None;
        tmp_capi_result_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_capi_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_capi_result_1);

            exception_lineno = 360;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(var_read_timeout);
            tmp_compexpr_left_2 = var_read_timeout;
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError);

                if (unlikely(tmp_mvar_value_3 == NULL)) {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError);
                }

                if (tmp_mvar_value_3 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 21021 ], 38, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 367;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_3;
                CHECK_OBJECT(par_self);
                tmp_args_element_name_3 = par_self;
                CHECK_OBJECT(par_url);
                tmp_args_element_name_4 = par_url;
                tmp_left_name_2 = const_str_digest_28e04c9ebed2db995ed772536d0940be;
                CHECK_OBJECT(var_read_timeout);
                tmp_right_name_2 = var_read_timeout;
                tmp_args_element_name_5 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
                if (tmp_args_element_name_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 368;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 367;
                {
                    PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
                }

                Py_DECREF(tmp_args_element_name_5);
                if (tmp_raise_type_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 367;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 367;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_4:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT(var_read_timeout);
            tmp_compexpr_left_3 = var_read_timeout;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_Timeout);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 22019 ], 29, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 369;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_4;
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_DEFAULT_TIMEOUT);
            if (tmp_compexpr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_compexpr_right_3);
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_9;
                PyObject *tmp_source_name_10;
                PyObject *tmp_call_result_6;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_mvar_value_5;
                CHECK_OBJECT(par_conn);
                tmp_source_name_10 = par_conn;
                tmp_source_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_sock);
                if (tmp_source_name_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 370;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_settimeout);
                Py_DECREF(tmp_source_name_9);
                if (tmp_called_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 370;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_socket);

                if (unlikely(tmp_mvar_value_5 == NULL)) {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_socket);
                }

                if (tmp_mvar_value_5 == NULL) {
                    Py_DECREF(tmp_called_name_3);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 20542 ], 28, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 370;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_4 = tmp_mvar_value_5;
                frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 370;
                tmp_args_element_name_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_getdefaulttimeout);
                if (tmp_args_element_name_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_3);

                    exception_lineno = 370;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 370;
                tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_6);
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_args_element_name_6);
                if (tmp_call_result_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 370;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_6);
            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_called_instance_5;
                PyObject *tmp_source_name_11;
                PyObject *tmp_call_result_7;
                PyObject *tmp_args_element_name_7;
                CHECK_OBJECT(par_conn);
                tmp_source_name_11 = par_conn;
                tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_sock);
                if (tmp_called_instance_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 372;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(var_read_timeout);
                tmp_args_element_name_7 = var_read_timeout;
                frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 372;
                {
                    PyObject *call_args[] = {tmp_args_element_name_7};
                    tmp_call_result_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_settimeout, call_args);
                }

                Py_DECREF(tmp_called_instance_5);
                if (tmp_call_result_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 372;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_7);
            }
            branch_end_5:;
        }
        branch_no_3:;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_12;
        PyObject *tmp_kw_name_2;
        CHECK_OBJECT(par_conn);
        tmp_source_name_12 = par_conn;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_getresponse);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_kw_name_2 = PyDict_Copy(const_dict_f965c4886458f8f721a7913cea1cd007);
        frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 377;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_4, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
        assert(var_httplib_response == NULL);
        var_httplib_response = tmp_assign_source_6;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_3);
    exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_3);
    exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_3);

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_4fe5abdee9942a12260ac32fdfceb18d, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_4fe5abdee9942a12260ac32fdfceb18d, exception_keeper_lineno_6);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    PyException_SetTraceback(exception_keeper_value_6, (PyObject *)exception_keeper_tb_6);
    PUBLISH_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_instance_6;
            CHECK_OBJECT(par_conn);
            tmp_called_instance_6 = par_conn;
            frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 380;
            tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, const_str_plain_getresponse);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_10;
            }
            assert(var_httplib_response == NULL);
            var_httplib_response = tmp_assign_source_7;
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_type_2);
        exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_value_2);
        exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF(exception_preserved_tb_2);

        if (exception_keeper_tb_7 == NULL) {
            exception_keeper_tb_7 = MAKE_TRACEBACK(frame_4fe5abdee9942a12260ac32fdfceb18d, exception_keeper_lineno_7);
        } else if (exception_keeper_lineno_7 != 0) {
            exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_4fe5abdee9942a12260ac32fdfceb18d, exception_keeper_lineno_7);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
        PyException_SetTraceback(exception_keeper_value_7, (PyObject *)exception_keeper_tb_7);
        PUBLISH_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
        // Tried code:
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_5 = PyExc_Exception;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_11;
            }
            tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_assign_source_8;
                tmp_assign_source_8 = EXC_VALUE(PyThreadState_GET());
                assert(var_e == NULL);
                Py_INCREF(tmp_assign_source_8);
                var_e = tmp_assign_source_8;
            }
            // Tried code:
            {
                PyObject *tmp_called_instance_7;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_call_result_8;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_six);

                if (unlikely(tmp_mvar_value_6 == NULL)) {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
                }

                if (tmp_mvar_value_6 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 27560 ], 25, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 384;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_12;
                }

                tmp_called_instance_7 = tmp_mvar_value_6;
                CHECK_OBJECT(var_e);
                tmp_args_element_name_8 = var_e;
                tmp_args_element_name_9 = Py_None;
                frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 384;
                {
                    PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
                    tmp_call_result_8 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_7, const_str_plain_raise_from, call_args);
                }

                if (tmp_call_result_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 384;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_12;
                }
                Py_DECREF(tmp_call_result_8);
            }
            goto try_end_6;
            // Exception handler code:
            try_except_handler_12:;
            exception_keeper_type_8 = exception_type;
            exception_keeper_value_8 = exception_value;
            exception_keeper_tb_8 = exception_tb;
            exception_keeper_lineno_8 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(var_e);
            var_e = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto try_except_handler_11;
            // End of try:
            try_end_6:;
            Py_XDECREF(var_e);
            var_e = NULL;

            goto branch_end_7;
            branch_no_7:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 379;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame) frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
            branch_end_7:;
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_9;
        // End of try:
        try_end_7:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);
        goto try_end_5;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_14__make_request);
        return NULL;
        // End of try:
        try_end_5:;
        goto branch_end_6;
        branch_no_6:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 376;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame) frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_9;
        branch_end_6:;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_7;
    // End of try:
    try_end_8:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_14__make_request);
    return NULL;
    // End of try:
    try_end_4:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_4 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_4);
    exception_preserved_value_4 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_4);
    exception_preserved_tb_4 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_4);

    if (exception_keeper_tb_11 == NULL) {
        exception_keeper_tb_11 = MAKE_TRACEBACK(frame_4fe5abdee9942a12260ac32fdfceb18d, exception_keeper_lineno_11);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_keeper_tb_11 = ADD_TRACEBACK(exception_keeper_tb_11, frame_4fe5abdee9942a12260ac32fdfceb18d, exception_keeper_lineno_11);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11);
    PyException_SetTraceback(exception_keeper_value_11, (PyObject *)exception_keeper_tb_11);
    PUBLISH_EXCEPTION(&exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_mvar_value_9;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SocketTimeout);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketTimeout);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27654 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 385;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_tuple_element_4 = tmp_mvar_value_7;
        tmp_compexpr_right_6 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_compexpr_right_6, 0, tmp_tuple_element_4);
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_BaseSSLError);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseSSLError);
        }

        if (tmp_mvar_value_8 == NULL) {
            Py_DECREF(tmp_compexpr_right_6);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28667 ], 34, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 385;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_tuple_element_4 = tmp_mvar_value_8;
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_compexpr_right_6, 1, tmp_tuple_element_4);
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SocketError);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError);
        }

        if (tmp_mvar_value_9 == NULL) {
            Py_DECREF(tmp_compexpr_right_6);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27689 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 385;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_tuple_element_4 = tmp_mvar_value_9;
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_compexpr_right_6, 2, tmp_tuple_element_4);
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_6, tmp_compexpr_right_6);
        Py_DECREF(tmp_compexpr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = EXC_VALUE(PyThreadState_GET());
            assert(var_e == NULL);
            Py_INCREF(tmp_assign_source_9);
            var_e = tmp_assign_source_9;
        }
        // Tried code:
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_13;
            PyObject *tmp_call_result_9;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            CHECK_OBJECT(par_self);
            tmp_source_name_13 = par_self;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain__raise_timeout);
            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_14;
            }
            tmp_dict_key_4 = const_str_plain_err;
            CHECK_OBJECT(var_e);
            tmp_dict_value_4 = var_e;
            tmp_kw_name_3 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = const_str_plain_url;
            CHECK_OBJECT(par_url);
            tmp_dict_value_5 = par_url;
            tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = const_str_plain_timeout_value;
            CHECK_OBJECT(var_read_timeout);
            tmp_dict_value_6 = var_read_timeout;
            tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 386;
            tmp_call_result_9 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_5, tmp_kw_name_3);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_kw_name_3);
            if (tmp_call_result_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_14;
            }
            Py_DECREF(tmp_call_result_9);
        }
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 387;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame) frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_14;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_14__make_request);
        return NULL;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(var_e);
        var_e = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        goto branch_end_8;
        branch_no_8:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 375;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame) frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_13;
        branch_end_8:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_14__make_request);
    return NULL;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        CHECK_OBJECT(par_conn);
        tmp_getattr_target_2 = par_conn;
        tmp_getattr_attr_2 = const_str_plain__http_vsn_str;
        tmp_getattr_default_2 = const_str_digest_66182be0b37ca85b95e225113c54e8b0;
        tmp_assign_source_10 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_http_version == NULL);
        var_http_version = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_source_name_15;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_16;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_source_name_17;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_source_name_18;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_source_name_19;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_log);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_log);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28210 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 391;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_10;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_debug);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = const_str_digest_dc21555a5356a6a6014dfbb679155424;
        CHECK_OBJECT(par_self);
        tmp_source_name_15 = par_self;
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_scheme);
        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 391;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_16 = par_self;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_host);
        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_11);

            exception_lineno = 391;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_17 = par_self;
        tmp_args_element_name_13 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_port);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_11);
            Py_DECREF(tmp_args_element_name_12);

            exception_lineno = 391;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_method);
        tmp_args_element_name_14 = par_method;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_15 = par_url;
        CHECK_OBJECT(var_http_version);
        tmp_args_element_name_16 = var_http_version;
        if (var_httplib_response == NULL) {
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_11);
            Py_DECREF(tmp_args_element_name_12);
            Py_DECREF(tmp_args_element_name_13);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "httplib_response");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 392;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_18 = var_httplib_response;
        tmp_args_element_name_17 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_status);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_11);
            Py_DECREF(tmp_args_element_name_12);
            Py_DECREF(tmp_args_element_name_13);

            exception_lineno = 392;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_httplib_response == NULL) {
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_11);
            Py_DECREF(tmp_args_element_name_12);
            Py_DECREF(tmp_args_element_name_13);
            Py_DECREF(tmp_args_element_name_17);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "httplib_response");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_19 = var_httplib_response;
        tmp_args_element_name_18 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_length);
        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_11);
            Py_DECREF(tmp_args_element_name_12);
            Py_DECREF(tmp_args_element_name_13);
            Py_DECREF(tmp_args_element_name_17);

            exception_lineno = 393;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 391;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS9(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_11);
        Py_DECREF(tmp_args_element_name_12);
        Py_DECREF(tmp_args_element_name_13);
        Py_DECREF(tmp_args_element_name_17);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    // Tried code:
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_source_name_20;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_assert_header_parsing);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_assert_header_parsing);
        }

        if (tmp_mvar_value_11 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28701 ], 43, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 396;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_name_7 = tmp_mvar_value_11;
        if (var_httplib_response == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "httplib_response");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 396;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_source_name_20 = var_httplib_response;
        tmp_args_element_name_19 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain_msg);
        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_15;
        }
        frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 396;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_19);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_15;
        }
        Py_DECREF(tmp_call_result_11);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_5 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_5);
    exception_preserved_value_5 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_5);
    exception_preserved_tb_5 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_5);

    if (exception_keeper_tb_14 == NULL) {
        exception_keeper_tb_14 = MAKE_TRACEBACK(frame_4fe5abdee9942a12260ac32fdfceb18d, exception_keeper_lineno_14);
    } else if (exception_keeper_lineno_14 != 0) {
        exception_keeper_tb_14 = ADD_TRACEBACK(exception_keeper_tb_14, frame_4fe5abdee9942a12260ac32fdfceb18d, exception_keeper_lineno_14);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14);
    PyException_SetTraceback(exception_keeper_value_14, (PyObject *)exception_keeper_tb_14);
    PUBLISH_EXCEPTION(&exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_12;
        tmp_compexpr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HeaderParsingError);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HeaderParsingError);
        }

        if (tmp_mvar_value_12 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28744 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 397;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_tuple_element_5 = tmp_mvar_value_12;
        tmp_compexpr_right_7 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_compexpr_right_7, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = PyExc_TypeError;
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_compexpr_right_7, 1, tmp_tuple_element_5);
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_7, tmp_compexpr_right_7);
        Py_DECREF(tmp_compexpr_right_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = EXC_VALUE(PyThreadState_GET());
            assert(var_hpe == NULL);
            Py_INCREF(tmp_assign_source_11);
            var_hpe = tmp_assign_source_11;
        }
        // Tried code:
        {
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_21;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_call_result_12;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_kw_name_4;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_log);

            if (unlikely(tmp_mvar_value_13 == NULL)) {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_log);
            }

            if (tmp_mvar_value_13 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28210 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 398;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_17;
            }

            tmp_source_name_21 = tmp_mvar_value_13;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_warning);
            if (tmp_called_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_17;
            }
            tmp_tuple_element_6 = const_str_digest_c2ed87d2e89f14879b1a53e0d453d7d4;
            tmp_args_name_1 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_6);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_6);
            CHECK_OBJECT(par_self);
            tmp_called_instance_8 = par_self;
            CHECK_OBJECT(par_url);
            tmp_args_element_name_20 = par_url;
            frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 400;
            {
                PyObject *call_args[] = {tmp_args_element_name_20};
                tmp_tuple_element_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain__absolute_url, call_args);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_8);
                Py_DECREF(tmp_args_name_1);

                exception_lineno = 400;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_17;
            }
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_6);
            CHECK_OBJECT(var_hpe);
            tmp_tuple_element_6 = var_hpe;
            Py_INCREF(tmp_tuple_element_6);
            PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_6);
            tmp_kw_name_4 = PyDict_Copy(const_dict_179288bcb12bd7be5a04d2f1b72dc461);
            frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = 398;
            tmp_call_result_12 = CALL_FUNCTION(tmp_called_name_8, tmp_args_name_1, tmp_kw_name_4);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_kw_name_4);
            if (tmp_call_result_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_17;
            }
            Py_DECREF(tmp_call_result_12);
        }
        goto try_end_11;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(var_hpe);
        var_hpe = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        try_end_11:;
        Py_XDECREF(var_hpe);
        var_hpe = NULL;

        goto branch_end_9;
        branch_no_9:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 395;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame) frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_16;
        branch_end_9:;
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5);
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5);
    goto try_end_10;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_14__make_request);
    return NULL;
    // End of try:
    try_end_10:;
    if (var_httplib_response == NULL) {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF(exception_type);
        exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "httplib_response");
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 402;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_httplib_response;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4fe5abdee9942a12260ac32fdfceb18d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4fe5abdee9942a12260ac32fdfceb18d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4fe5abdee9942a12260ac32fdfceb18d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4fe5abdee9942a12260ac32fdfceb18d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_4fe5abdee9942a12260ac32fdfceb18d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4fe5abdee9942a12260ac32fdfceb18d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4fe5abdee9942a12260ac32fdfceb18d,
        type_description_1,
        par_self,
        par_conn,
        par_method,
        par_url,
        par_timeout,
        par_chunked,
        par_httplib_request_kw,
        var_timeout_obj,
        var_e,
        var_read_timeout,
        var_httplib_response,
        var_http_version,
        var_hpe
    );


    // Release cached frame.
    if (frame_4fe5abdee9942a12260ac32fdfceb18d == cache_frame_4fe5abdee9942a12260ac32fdfceb18d) {
        Py_DECREF(frame_4fe5abdee9942a12260ac32fdfceb18d);
    }
    cache_frame_4fe5abdee9942a12260ac32fdfceb18d = NULL;

    assertFrameObject(frame_4fe5abdee9942a12260ac32fdfceb18d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_14__make_request);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_timeout_obj);
    Py_DECREF(var_timeout_obj);
    var_timeout_obj = NULL;

    Py_XDECREF(var_e);
    var_e = NULL;

    CHECK_OBJECT((PyObject *)var_read_timeout);
    Py_DECREF(var_read_timeout);
    var_read_timeout = NULL;

    Py_XDECREF(var_httplib_response);
    var_httplib_response = NULL;

    CHECK_OBJECT((PyObject *)var_http_version);
    Py_DECREF(var_http_version);
    var_http_version = NULL;

    Py_XDECREF(var_hpe);
    var_hpe = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_timeout_obj);
    var_timeout_obj = NULL;

    Py_XDECREF(var_e);
    var_e = NULL;

    Py_XDECREF(var_read_timeout);
    var_read_timeout = NULL;

    Py_XDECREF(var_httplib_response);
    var_httplib_response = NULL;

    Py_XDECREF(var_http_version);
    var_http_version = NULL;

    Py_XDECREF(var_hpe);
    var_hpe = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_14__make_request);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_chunked);
    Py_DECREF(par_chunked);
    CHECK_OBJECT(par_httplib_request_kw);
    Py_DECREF(par_httplib_request_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_chunked);
    Py_DECREF(par_chunked);
    CHECK_OBJECT(par_httplib_request_kw);
    Py_DECREF(par_httplib_request_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_15__absolute_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_05b57c3a5543c1ddfc8b76e0167a3412;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_05b57c3a5543c1ddfc8b76e0167a3412 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_05b57c3a5543c1ddfc8b76e0167a3412, codeobj_05b57c3a5543c1ddfc8b76e0167a3412, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *));
    frame_05b57c3a5543c1ddfc8b76e0167a3412 = cache_frame_05b57c3a5543c1ddfc8b76e0167a3412;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_05b57c3a5543c1ddfc8b76e0167a3412);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_05b57c3a5543c1ddfc8b76e0167a3412) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_Url);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Url);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28784 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_dict_key_1 = const_str_plain_scheme;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_scheme);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_host;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_host);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_port;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_port);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_path;
        CHECK_OBJECT(par_path);
        tmp_dict_value_4 = par_path;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        frame_05b57c3a5543c1ddfc8b76e0167a3412->m_frame.f_lineno = 405;
        tmp_source_name_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_url);
        Py_DECREF(tmp_source_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_05b57c3a5543c1ddfc8b76e0167a3412);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_05b57c3a5543c1ddfc8b76e0167a3412);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_05b57c3a5543c1ddfc8b76e0167a3412);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05b57c3a5543c1ddfc8b76e0167a3412, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_05b57c3a5543c1ddfc8b76e0167a3412->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05b57c3a5543c1ddfc8b76e0167a3412, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_05b57c3a5543c1ddfc8b76e0167a3412,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame.
    if (frame_05b57c3a5543c1ddfc8b76e0167a3412 == cache_frame_05b57c3a5543c1ddfc8b76e0167a3412) {
        Py_DECREF(frame_05b57c3a5543c1ddfc8b76e0167a3412);
    }
    cache_frame_05b57c3a5543c1ddfc8b76e0167a3412 = NULL;

    assertFrameObject(frame_05b57c3a5543c1ddfc8b76e0167a3412);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_15__absolute_url);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_16_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_old_pool = NULL;
    PyObject *var_conn = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c9757774cd46caf1ae5e486991d10831;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_c9757774cd46caf1ae5e486991d10831 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_c9757774cd46caf1ae5e486991d10831, codeobj_c9757774cd46caf1ae5e486991d10831, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_c9757774cd46caf1ae5e486991d10831 = cache_frame_c9757774cd46caf1ae5e486991d10831;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c9757774cd46caf1ae5e486991d10831);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c9757774cd46caf1ae5e486991d10831) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_pool);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_pool);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_None;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooo";
            exception_lineno = 414;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooo";
            exception_lineno = 414;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_old_pool == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_old_pool = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assattr_name_1 = tmp_tuple_unpack_1__element_2;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_pool, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(var_old_pool);
        tmp_source_name_3 = var_old_pool;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_get);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_kw_name_1 = PyDict_Copy(const_dict_ef0c581b63de11312ed0743d04af22b7);
        frame_c9757774cd46caf1ae5e486991d10831->m_frame.f_lineno = 418;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_conn;
            var_conn = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_conn);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_conn);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT(var_conn);
            tmp_called_instance_1 = var_conn;
            frame_c9757774cd46caf1ae5e486991d10831->m_frame.f_lineno = 420;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_close);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_2:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 417;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_16_close);
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_c9757774cd46caf1ae5e486991d10831, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_c9757774cd46caf1ae5e486991d10831, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    PyException_SetTraceback(exception_keeper_value_3, (PyObject *)exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_queue);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_queue);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 254 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_Empty);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 416;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c9757774cd46caf1ae5e486991d10831->m_frame) frame_c9757774cd46caf1ae5e486991d10831->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_5;
        branch_no_3:;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_16_close);
    return NULL;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9757774cd46caf1ae5e486991d10831);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9757774cd46caf1ae5e486991d10831);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9757774cd46caf1ae5e486991d10831);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c9757774cd46caf1ae5e486991d10831, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c9757774cd46caf1ae5e486991d10831->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c9757774cd46caf1ae5e486991d10831, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c9757774cd46caf1ae5e486991d10831,
        type_description_1,
        par_self,
        var_old_pool,
        var_conn
    );


    // Release cached frame.
    if (frame_c9757774cd46caf1ae5e486991d10831 == cache_frame_c9757774cd46caf1ae5e486991d10831) {
        Py_DECREF(frame_c9757774cd46caf1ae5e486991d10831);
    }
    cache_frame_c9757774cd46caf1ae5e486991d10831 = NULL;

    assertFrameObject(frame_c9757774cd46caf1ae5e486991d10831);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_16_close);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_old_pool);
    var_old_pool = NULL;

    Py_XDECREF(var_conn);
    var_conn = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_old_pool);
    var_old_pool = NULL;

    Py_XDECREF(var_conn);
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_16_close);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_17_is_same_host(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_scheme = NULL;
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4c8430611604f98c3f9235af1f87d49f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4c8430611604f98c3f9235af1f87d49f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_4c8430611604f98c3f9235af1f87d49f, codeobj_4c8430611604f98c3f9235af1f87d49f, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_4c8430611604f98c3f9235af1f87d49f = cache_frame_4c8430611604f98c3f9235af1f87d49f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4c8430611604f98c3f9235af1f87d49f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4c8430611604f98c3f9235af1f87d49f) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_url);
        tmp_called_instance_1 = par_url;
        frame_4c8430611604f98c3f9235af1f87d49f->m_frame.f_lineno = 430;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_chr_47_tuple, 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 430;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_True;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_get_host);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_get_host);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28809 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        frame_4c8430611604f98c3f9235af1f87d49f->m_frame.f_lineno = 434;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 434;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 434;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 434;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL)
            {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration))
                {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 434;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format(PyExc_ValueError, "too many values to unpack");
#else
            PyErr_Format(PyExc_ValueError, "too many values to unpack (expected 3)");
#endif
            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            type_description_1 = "ooooo";
            exception_lineno = 434;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_scheme == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_scheme = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_host == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_host = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_port == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_port = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain__ipv6_host);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__ipv6_host);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28416 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(var_host);
        tmp_args_element_name_2 = var_host;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_scheme);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_4c8430611604f98c3f9235af1f87d49f->m_frame.f_lineno = 436;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_host;
            assert(old != NULL);
            var_host = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_port);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 439;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_port);
        tmp_operand_name_1 = var_port;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_port_by_scheme);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_port_by_scheme);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28235 ], 36, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 440;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_3;
            CHECK_OBJECT(var_scheme);
            tmp_args_element_name_4 = var_scheme;
            frame_4c8430611604f98c3f9235af1f87d49f->m_frame.f_lineno = 440;
            {
                PyObject *call_args[] = {tmp_args_element_name_4};
                tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_get, call_args);
            }

            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 440;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_port;
                assert(old != NULL);
                var_port = tmp_assign_source_9;
                Py_DECREF(old);
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_operand_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_port);
            if (tmp_operand_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            Py_DECREF(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_and_left_truth_2 == 1) {
                goto and_right_2;
            } else {
                goto and_left_2;
            }
            and_right_2:;
            CHECK_OBJECT(var_port);
            tmp_compexpr_left_1 = var_port;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_port_by_scheme);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_port_by_scheme);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28235 ], 36, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 441;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_4;
            CHECK_OBJECT(var_scheme);
            tmp_args_element_name_5 = var_scheme;
            frame_4c8430611604f98c3f9235af1f87d49f->m_frame.f_lineno = 441;
            {
                PyObject *call_args[] = {tmp_args_element_name_5};
                tmp_compexpr_right_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_get, call_args);
            }

            if (tmp_compexpr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
            Py_DECREF(tmp_compexpr_right_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_3 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_3 = tmp_and_left_value_2;
            and_end_2:;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_10;
                tmp_assign_source_10 = Py_None;
                {
                    PyObject *old = var_port;
                    assert(old != NULL);
                    var_port = tmp_assign_source_10;
                    Py_INCREF(var_port);
                    Py_DECREF(old);
                }

            }
            branch_no_3:;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT(var_scheme);
        tmp_tuple_element_1 = var_scheme;
        tmp_compexpr_left_2 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_compexpr_left_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_host);
        tmp_tuple_element_1 = var_host;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_compexpr_left_2, 1, tmp_tuple_element_1);
        if (var_port == NULL) {
            Py_DECREF(tmp_compexpr_left_2);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "port");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 444;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_port;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_compexpr_left_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_scheme);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 444;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_compexpr_right_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_host);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);
            Py_DECREF(tmp_compexpr_right_2);

            exception_lineno = 444;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_compexpr_right_2, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_port);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);
            Py_DECREF(tmp_compexpr_right_2);

            exception_lineno = 444;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_compexpr_right_2, 2, tmp_tuple_element_2);
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c8430611604f98c3f9235af1f87d49f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c8430611604f98c3f9235af1f87d49f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c8430611604f98c3f9235af1f87d49f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c8430611604f98c3f9235af1f87d49f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_4c8430611604f98c3f9235af1f87d49f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c8430611604f98c3f9235af1f87d49f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4c8430611604f98c3f9235af1f87d49f,
        type_description_1,
        par_self,
        par_url,
        var_scheme,
        var_host,
        var_port
    );


    // Release cached frame.
    if (frame_4c8430611604f98c3f9235af1f87d49f == cache_frame_4c8430611604f98c3f9235af1f87d49f) {
        Py_DECREF(frame_4c8430611604f98c3f9235af1f87d49f);
    }
    cache_frame_4c8430611604f98c3f9235af1f87d49f = NULL;

    assertFrameObject(frame_4c8430611604f98c3f9235af1f87d49f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_17_is_same_host);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_scheme);
    var_scheme = NULL;

    Py_XDECREF(var_host);
    var_host = NULL;

    Py_XDECREF(var_port);
    var_port = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_scheme);
    var_scheme = NULL;

    Py_XDECREF(var_host);
    var_host = NULL;

    Py_XDECREF(var_port);
    var_port = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_17_is_same_host);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_18_urlopen(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_url = python_pars[2];
    PyObject *par_body = python_pars[3];
    PyObject *par_headers = python_pars[4];
    PyObject *par_retries = python_pars[5];
    PyObject *par_redirect = python_pars[6];
    PyObject *par_assert_same_host = python_pars[7];
    PyObject *par_timeout = python_pars[8];
    PyObject *par_pool_timeout = python_pars[9];
    PyObject *par_release_conn = python_pars[10];
    PyObject *par_chunked = python_pars[11];
    PyObject *par_body_pos = python_pars[12];
    PyObject *par_response_kw = python_pars[13];
    PyObject *var_conn = NULL;
    PyObject *var_release_this_conn = NULL;
    PyObject *var_err = NULL;
    nuitka_bool var_clean_exit = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_timeout_obj = NULL;
    PyObject *var_is_new_proxy_conn = NULL;
    PyObject *var_httplib_response = NULL;
    PyObject *var_response_conn = NULL;
    PyObject *var_response = NULL;
    PyObject *var_e = NULL;
    PyObject *var_drain_and_release_conn = NULL;
    PyObject *var_redirect_location = NULL;
    nuitka_bool var_has_retry_after = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_b41a00b264844cbec486aceca4e29341;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_b41a00b264844cbec486aceca4e29341 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_b41a00b264844cbec486aceca4e29341, codeobj_b41a00b264844cbec486aceca4e29341, module_urllib3$connectionpool, sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_b41a00b264844cbec486aceca4e29341 = cache_frame_b41a00b264844cbec486aceca4e29341;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b41a00b264844cbec486aceca4e29341);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b41a00b264844cbec486aceca4e29341) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_headers);
        tmp_compexpr_left_1 = par_headers;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_1 = par_self;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_headers);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_headers;
                assert(old != NULL);
                par_headers = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_retries);
        tmp_isinstance_inst_1 = par_retries;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_Retry);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19588 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 543;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_source_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_Retry);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 19588 ], 27, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 544;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_from_int);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_retries);
            tmp_tuple_element_1 = par_retries;
            tmp_args_name_1 = PyTuple_New(1);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            tmp_dict_key_1 = const_str_plain_redirect;
            CHECK_OBJECT(par_redirect);
            tmp_dict_value_1 = par_redirect;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = const_str_plain_default;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_retries);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_args_name_1);
                Py_DECREF(tmp_kw_name_1);

                exception_lineno = 544;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 544;
            tmp_assign_source_2 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_retries;
                assert(old != NULL);
                par_retries = tmp_assign_source_2;
                Py_DECREF(old);
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_release_conn);
        tmp_compexpr_left_2 = par_release_conn;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(par_response_kw);
            tmp_called_instance_1 = par_response_kw;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 547;
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_preload_content_true_tuple, 0));

            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_release_conn;
                assert(old != NULL);
                par_release_conn = tmp_assign_source_3;
                Py_DECREF(old);
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_assert_same_host);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_assert_same_host);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 550;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_operand_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_is_same_host, call_args);
        }

        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HostChangedError);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HostChangedError);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28839 ], 38, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 551;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT(par_self);
            tmp_args_element_name_2 = par_self;
            CHECK_OBJECT(par_url);
            tmp_args_element_name_3 = par_url;
            CHECK_OBJECT(par_retries);
            tmp_args_element_name_4 = par_retries;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 551;
            {
                PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
            }

            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 551;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        assert(var_conn == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_conn = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(par_release_conn);
        tmp_assign_source_5 = par_release_conn;
        assert(var_release_this_conn == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_release_this_conn = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_scheme);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_str_plain_http;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT(par_headers);
            tmp_called_instance_3 = par_headers;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 570;
            tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_copy);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 570;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_headers;
                assert(old != NULL);
                par_headers = tmp_assign_source_6;
                Py_DECREF(old);
            }

        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT(par_headers);
            tmp_source_name_5 = par_headers;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_update);
            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_6 = par_self;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_proxy_headers);
            if (tmp_args_element_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_3);

                exception_lineno = 571;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 571;
            tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_5);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        assert(var_err == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_err = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_assign_source_8;
        tmp_assign_source_8 = NUITKA_BOOL_FALSE;
        var_clean_exit = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_set_file_position);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_set_file_position);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28877 ], 39, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 583;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT(par_body);
        tmp_args_element_name_6 = par_body;
        CHECK_OBJECT(par_body_pos);
        tmp_args_element_name_7 = par_body_pos;
        frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 583;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_body_pos;
            assert(old != NULL);
            par_body_pos = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(par_timeout);
        tmp_args_element_name_8 = par_timeout;
        frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 587;
        {
            PyObject *call_args[] = {tmp_args_element_name_8};
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain__get_timeout, call_args);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
        assert(var_timeout_obj == NULL);
        var_timeout_obj = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_7;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_7 = par_self;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__get_conn);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
        tmp_dict_key_3 = const_str_plain_timeout;
        CHECK_OBJECT(par_pool_timeout);
        tmp_dict_value_3 = par_pool_timeout;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 588;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_5, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_conn;
            assert(old != NULL);
            var_conn = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_source_name_8;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_timeout_obj);
        tmp_source_name_8 = var_timeout_obj;
        tmp_assattr_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_connect_timeout);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_conn);
        tmp_assattr_target_1 = var_conn;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_timeout, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
    }
    {
        PyObject *tmp_assign_source_12;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_9 = par_self;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_proxy);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_4 = Py_None;
        tmp_and_left_value_2 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? Py_True : Py_False;
        Py_DECREF(tmp_compexpr_left_4);
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_conn);
        tmp_getattr_target_1 = var_conn;
        tmp_getattr_attr_1 = const_str_plain_sock;
        tmp_getattr_default_1 = Py_None;
        tmp_operand_name_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_assign_source_12 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_assign_source_12 = tmp_and_left_value_2;
        and_end_2:;
        assert(var_is_new_proxy_conn == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_is_new_proxy_conn = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_is_new_proxy_conn);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_is_new_proxy_conn);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT(par_self);
            tmp_called_instance_5 = par_self;
            CHECK_OBJECT(var_conn);
            tmp_args_element_name_9 = var_conn;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 594;
            {
                PyObject *call_args[] = {tmp_args_element_name_9};
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain__prepare_proxy, call_args);
            }

            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_3;
            }
            Py_DECREF(tmp_call_result_2);
        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_10;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        CHECK_OBJECT(par_self);
        tmp_source_name_10 = par_self;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain__make_request);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_conn);
        tmp_tuple_element_2 = var_conn;
        tmp_args_name_2 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_method);
        tmp_tuple_element_2 = par_method;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_url);
        tmp_tuple_element_2 = par_url;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_2);
        tmp_dict_key_4 = const_str_plain_timeout;
        CHECK_OBJECT(var_timeout_obj);
        tmp_dict_value_4 = var_timeout_obj;
        tmp_kw_name_3 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_body;
        CHECK_OBJECT(par_body);
        tmp_dict_value_5 = par_body;
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = const_str_plain_headers;
        if (par_headers == NULL) {
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_name_2);
            Py_DECREF(tmp_kw_name_3);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "headers");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 599;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }

        tmp_dict_value_6 = par_headers;
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_chunked;
        CHECK_OBJECT(par_chunked);
        tmp_dict_value_7 = par_chunked;
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 597;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_2, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
        assert(var_httplib_response == NULL);
        var_httplib_response = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT(par_release_conn);
        tmp_operand_name_4 = par_release_conn;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_conn);
        tmp_assign_source_14 = var_conn;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_14 = Py_None;
        condexpr_end_1:;
        assert(var_response_conn == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_response_conn = tmp_assign_source_14;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_method);
        tmp_ass_subvalue_1 = par_method;
        CHECK_OBJECT(par_response_kw);
        tmp_ass_subscribed_1 = par_response_kw;
        tmp_ass_subscript_1 = const_str_plain_request_method;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dircall_arg4_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_12 = par_self;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_ResponseCls);
        if (tmp_source_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_from_httplib);
        Py_DECREF(tmp_source_name_11);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_httplib_response);
        tmp_tuple_element_3 = var_httplib_response;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_3);
        tmp_dict_key_8 = const_str_plain_pool;
        CHECK_OBJECT(par_self);
        tmp_dict_value_8 = par_self;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = const_str_plain_connection;
        CHECK_OBJECT(var_response_conn);
        tmp_dict_value_9 = var_response_conn;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = const_str_plain_retries;
        CHECK_OBJECT(par_retries);
        tmp_dict_value_10 = par_retries;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_response_kw);
        tmp_dircall_arg4_1 = par_response_kw;
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_15 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_3;
        }
        assert(var_response == NULL);
        var_response = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_assign_source_16;
        tmp_assign_source_16 = NUITKA_BOOL_TRUE;
        var_clean_exit = tmp_assign_source_16;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_b41a00b264844cbec486aceca4e29341, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_b41a00b264844cbec486aceca4e29341, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_5;
        tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_queue);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_queue);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 254 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 621;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_4;
        }

        tmp_source_name_13 = tmp_mvar_value_5;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_Empty);
        if (tmp_compexpr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_4;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_4;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_EmptyPoolError);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EmptyPoolError);
            }

            if (tmp_mvar_value_6 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28520 ], 36, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 623;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_4;
            }

            tmp_called_name_7 = tmp_mvar_value_6;
            CHECK_OBJECT(par_self);
            tmp_args_element_name_10 = par_self;
            tmp_args_element_name_11 = const_str_digest_b0e38659a554c584c0942e070d234e9c;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 623;
            {
                PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11};
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
            }

            if (tmp_raise_type_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_4;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 623;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_4;
        }
        goto branch_end_7;
        branch_no_7:;
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_mvar_value_13;
            tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_TimeoutError);

            if (unlikely(tmp_mvar_value_7 == NULL)) {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutError);
            }

            if (tmp_mvar_value_7 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28916 ], 34, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 625;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_4;
            }

            tmp_tuple_element_4 = tmp_mvar_value_7;
            tmp_compexpr_right_6 = PyTuple_New(7);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_compexpr_right_6, 0, tmp_tuple_element_4);
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPException);

            if (unlikely(tmp_mvar_value_8 == NULL)) {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPException);
            }

            if (tmp_mvar_value_8 == NULL) {
                Py_DECREF(tmp_compexpr_right_6);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28950 ], 35, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 625;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_4;
            }

            tmp_tuple_element_4 = tmp_mvar_value_8;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_compexpr_right_6, 1, tmp_tuple_element_4);
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SocketError);

            if (unlikely(tmp_mvar_value_9 == NULL)) {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError);
            }

            if (tmp_mvar_value_9 == NULL) {
                Py_DECREF(tmp_compexpr_right_6);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 27689 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 625;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_4;
            }

            tmp_tuple_element_4 = tmp_mvar_value_9;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_compexpr_right_6, 2, tmp_tuple_element_4);
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ProtocolError);

            if (unlikely(tmp_mvar_value_10 == NULL)) {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError);
            }

            if (tmp_mvar_value_10 == NULL) {
                Py_DECREF(tmp_compexpr_right_6);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20507 ], 35, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 625;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_4;
            }

            tmp_tuple_element_4 = tmp_mvar_value_10;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_compexpr_right_6, 3, tmp_tuple_element_4);
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_BaseSSLError);

            if (unlikely(tmp_mvar_value_11 == NULL)) {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseSSLError);
            }

            if (tmp_mvar_value_11 == NULL) {
                Py_DECREF(tmp_compexpr_right_6);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28667 ], 34, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 626;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_4;
            }

            tmp_tuple_element_4 = tmp_mvar_value_11;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_compexpr_right_6, 4, tmp_tuple_element_4);
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SSLError);

            if (unlikely(tmp_mvar_value_12 == NULL)) {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError);
            }

            if (tmp_mvar_value_12 == NULL) {
                Py_DECREF(tmp_compexpr_right_6);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20922 ], 30, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 626;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_4;
            }

            tmp_tuple_element_4 = tmp_mvar_value_12;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_compexpr_right_6, 5, tmp_tuple_element_4);
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_CertificateError);

            if (unlikely(tmp_mvar_value_13 == NULL)) {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError);
            }

            if (tmp_mvar_value_13 == NULL) {
                Py_DECREF(tmp_compexpr_right_6);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28172 ], 38, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 626;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_4;
            }

            tmp_tuple_element_4 = tmp_mvar_value_13;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_compexpr_right_6, 6, tmp_tuple_element_4);
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_6, tmp_compexpr_right_6);
            Py_DECREF(tmp_compexpr_right_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 625;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_4;
            }
            tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                PyObject *tmp_assign_source_17;
                tmp_assign_source_17 = EXC_VALUE(PyThreadState_GET());
                assert(var_e == NULL);
                Py_INCREF(tmp_assign_source_17);
                var_e = tmp_assign_source_17;
            }
            {
                nuitka_bool tmp_assign_source_18;
                tmp_assign_source_18 = NUITKA_BOOL_FALSE;
                var_clean_exit = tmp_assign_source_18;
            }
            // Tried code:
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_isinstance_inst_2;
                PyObject *tmp_isinstance_cls_2;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_mvar_value_14;
                PyObject *tmp_mvar_value_15;
                CHECK_OBJECT(var_e);
                tmp_isinstance_inst_2 = var_e;
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_BaseSSLError);

                if (unlikely(tmp_mvar_value_14 == NULL)) {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseSSLError);
                }

                if (tmp_mvar_value_14 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 28667 ], 34, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 630;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_5;
                }

                tmp_tuple_element_5 = tmp_mvar_value_14;
                tmp_isinstance_cls_2 = PyTuple_New(2);
                Py_INCREF(tmp_tuple_element_5);
                PyTuple_SET_ITEM(tmp_isinstance_cls_2, 0, tmp_tuple_element_5);
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_CertificateError);

                if (unlikely(tmp_mvar_value_15 == NULL)) {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError);
                }

                if (tmp_mvar_value_15 == NULL) {
                    Py_DECREF(tmp_isinstance_cls_2);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 28172 ], 38, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 630;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_5;
                }

                tmp_tuple_element_5 = tmp_mvar_value_15;
                Py_INCREF(tmp_tuple_element_5);
                PyTuple_SET_ITEM(tmp_isinstance_cls_2, 1, tmp_tuple_element_5);
                tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
                Py_DECREF(tmp_isinstance_cls_2);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 630;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_5;
                }
                tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_9;
                } else {
                    goto branch_no_9;
                }
                branch_yes_9:;
                {
                    PyObject *tmp_assign_source_19;
                    PyObject *tmp_called_name_8;
                    PyObject *tmp_mvar_value_16;
                    PyObject *tmp_args_element_name_12;
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SSLError);

                    if (unlikely(tmp_mvar_value_16 == NULL)) {
                        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError);
                    }

                    if (tmp_mvar_value_16 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 20922 ], 30, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 631;
                        type_description_1 = "oooooooooooooooooboooooooob";
                        goto try_except_handler_5;
                    }

                    tmp_called_name_8 = tmp_mvar_value_16;
                    CHECK_OBJECT(var_e);
                    tmp_args_element_name_12 = var_e;
                    frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 631;
                    tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_12);
                    if (tmp_assign_source_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 631;
                        type_description_1 = "oooooooooooooooooboooooooob";
                        goto try_except_handler_5;
                    }
                    {
                        PyObject *old = var_e;
                        assert(old != NULL);
                        var_e = tmp_assign_source_19;
                        Py_DECREF(old);
                    }

                }
                goto branch_end_9;
                branch_no_9:;
                {
                    nuitka_bool tmp_condition_result_11;
                    int tmp_and_left_truth_3;
                    nuitka_bool tmp_and_left_value_3;
                    nuitka_bool tmp_and_right_value_3;
                    PyObject *tmp_isinstance_inst_3;
                    PyObject *tmp_isinstance_cls_3;
                    PyObject *tmp_tuple_element_6;
                    PyObject *tmp_mvar_value_17;
                    PyObject *tmp_mvar_value_18;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_attribute_value_1;
                    int tmp_truth_name_3;
                    CHECK_OBJECT(var_e);
                    tmp_isinstance_inst_3 = var_e;
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SocketError);

                    if (unlikely(tmp_mvar_value_17 == NULL)) {
                        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError);
                    }

                    if (tmp_mvar_value_17 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 27689 ], 33, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 632;
                        type_description_1 = "oooooooooooooooooboooooooob";
                        goto try_except_handler_5;
                    }

                    tmp_tuple_element_6 = tmp_mvar_value_17;
                    tmp_isinstance_cls_3 = PyTuple_New(2);
                    Py_INCREF(tmp_tuple_element_6);
                    PyTuple_SET_ITEM(tmp_isinstance_cls_3, 0, tmp_tuple_element_6);
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_NewConnectionError);

                    if (unlikely(tmp_mvar_value_18 == NULL)) {
                        tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError);
                    }

                    if (tmp_mvar_value_18 == NULL) {
                        Py_DECREF(tmp_isinstance_cls_3);
                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 20683 ], 40, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 632;
                        type_description_1 = "oooooooooooooooooboooooooob";
                        goto try_except_handler_5;
                    }

                    tmp_tuple_element_6 = tmp_mvar_value_18;
                    Py_INCREF(tmp_tuple_element_6);
                    PyTuple_SET_ITEM(tmp_isinstance_cls_3, 1, tmp_tuple_element_6);
                    tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
                    Py_DECREF(tmp_isinstance_cls_3);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 632;
                        type_description_1 = "oooooooooooooooooboooooooob";
                        goto try_except_handler_5;
                    }
                    tmp_and_left_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
                    if (tmp_and_left_truth_3 == 1) {
                        goto and_right_3;
                    } else {
                        goto and_left_3;
                    }
                    and_right_3:;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_14 = par_self;
                    tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_proxy);
                    if (tmp_attribute_value_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 632;
                        type_description_1 = "oooooooooooooooooboooooooob";
                        goto try_except_handler_5;
                    }
                    tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
                    if (tmp_truth_name_3 == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_attribute_value_1);

                        exception_lineno = 632;
                        type_description_1 = "oooooooooooooooooboooooooob";
                        goto try_except_handler_5;
                    }
                    tmp_and_right_value_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    Py_DECREF(tmp_attribute_value_1);
                    tmp_condition_result_11 = tmp_and_right_value_3;
                    goto and_end_3;
                    and_left_3:;
                    tmp_condition_result_11 = tmp_and_left_value_3;
                    and_end_3:;
                    if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_10;
                    } else {
                        goto branch_no_10;
                    }
                    branch_yes_10:;
                    {
                        PyObject *tmp_assign_source_20;
                        PyObject *tmp_called_name_9;
                        PyObject *tmp_mvar_value_19;
                        PyObject *tmp_args_element_name_13;
                        PyObject *tmp_args_element_name_14;
                        tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ProxyError);

                        if (unlikely(tmp_mvar_value_19 == NULL)) {
                            tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyError);
                        }

                        if (tmp_mvar_value_19 == NULL) {

                            exception_type = PyExc_NameError;
                            Py_INCREF(exception_type);
                            exception_value = UNSTREAM_STRING(&constant_bin[ 20859 ], 32, 0);
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                            CHAIN_EXCEPTION(exception_value);

                            exception_lineno = 633;
                            type_description_1 = "oooooooooooooooooboooooooob";
                            goto try_except_handler_5;
                        }

                        tmp_called_name_9 = tmp_mvar_value_19;
                        tmp_args_element_name_13 = const_str_digest_67163a14a1eefc83d0799301d992d363;
                        CHECK_OBJECT(var_e);
                        tmp_args_element_name_14 = var_e;
                        frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 633;
                        {
                            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_14};
                            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_9, call_args);
                        }

                        if (tmp_assign_source_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 633;
                            type_description_1 = "oooooooooooooooooboooooooob";
                            goto try_except_handler_5;
                        }
                        {
                            PyObject *old = var_e;
                            assert(old != NULL);
                            var_e = tmp_assign_source_20;
                            Py_DECREF(old);
                        }

                    }
                    goto branch_end_10;
                    branch_no_10:;
                    {
                        nuitka_bool tmp_condition_result_12;
                        PyObject *tmp_isinstance_inst_4;
                        PyObject *tmp_isinstance_cls_4;
                        PyObject *tmp_tuple_element_7;
                        PyObject *tmp_mvar_value_20;
                        PyObject *tmp_mvar_value_21;
                        CHECK_OBJECT(var_e);
                        tmp_isinstance_inst_4 = var_e;
                        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SocketError);

                        if (unlikely(tmp_mvar_value_20 == NULL)) {
                            tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError);
                        }

                        if (tmp_mvar_value_20 == NULL) {

                            exception_type = PyExc_NameError;
                            Py_INCREF(exception_type);
                            exception_value = UNSTREAM_STRING(&constant_bin[ 27689 ], 33, 0);
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                            CHAIN_EXCEPTION(exception_value);

                            exception_lineno = 634;
                            type_description_1 = "oooooooooooooooooboooooooob";
                            goto try_except_handler_5;
                        }

                        tmp_tuple_element_7 = tmp_mvar_value_20;
                        tmp_isinstance_cls_4 = PyTuple_New(2);
                        Py_INCREF(tmp_tuple_element_7);
                        PyTuple_SET_ITEM(tmp_isinstance_cls_4, 0, tmp_tuple_element_7);
                        tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPException);

                        if (unlikely(tmp_mvar_value_21 == NULL)) {
                            tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPException);
                        }

                        if (tmp_mvar_value_21 == NULL) {
                            Py_DECREF(tmp_isinstance_cls_4);
                            exception_type = PyExc_NameError;
                            Py_INCREF(exception_type);
                            exception_value = UNSTREAM_STRING(&constant_bin[ 28950 ], 35, 0);
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                            CHAIN_EXCEPTION(exception_value);

                            exception_lineno = 634;
                            type_description_1 = "oooooooooooooooooboooooooob";
                            goto try_except_handler_5;
                        }

                        tmp_tuple_element_7 = tmp_mvar_value_21;
                        Py_INCREF(tmp_tuple_element_7);
                        PyTuple_SET_ITEM(tmp_isinstance_cls_4, 1, tmp_tuple_element_7);
                        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
                        Py_DECREF(tmp_isinstance_cls_4);
                        if (tmp_res == -1) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 634;
                            type_description_1 = "oooooooooooooooooboooooooob";
                            goto try_except_handler_5;
                        }
                        tmp_condition_result_12 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                            goto branch_yes_11;
                        } else {
                            goto branch_no_11;
                        }
                        branch_yes_11:;
                        {
                            PyObject *tmp_assign_source_21;
                            PyObject *tmp_called_name_10;
                            PyObject *tmp_mvar_value_22;
                            PyObject *tmp_args_element_name_15;
                            PyObject *tmp_args_element_name_16;
                            tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ProtocolError);

                            if (unlikely(tmp_mvar_value_22 == NULL)) {
                                tmp_mvar_value_22 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError);
                            }

                            if (tmp_mvar_value_22 == NULL) {

                                exception_type = PyExc_NameError;
                                Py_INCREF(exception_type);
                                exception_value = UNSTREAM_STRING(&constant_bin[ 20507 ], 35, 0);
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                                CHAIN_EXCEPTION(exception_value);

                                exception_lineno = 635;
                                type_description_1 = "oooooooooooooooooboooooooob";
                                goto try_except_handler_5;
                            }

                            tmp_called_name_10 = tmp_mvar_value_22;
                            tmp_args_element_name_15 = const_str_digest_72393f1401ad54b54ec98bd6966ee03d;
                            CHECK_OBJECT(var_e);
                            tmp_args_element_name_16 = var_e;
                            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 635;
                            {
                                PyObject *call_args[] = {tmp_args_element_name_15, tmp_args_element_name_16};
                                tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_10, call_args);
                            }

                            if (tmp_assign_source_21 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 635;
                                type_description_1 = "oooooooooooooooooboooooooob";
                                goto try_except_handler_5;
                            }
                            {
                                PyObject *old = var_e;
                                assert(old != NULL);
                                var_e = tmp_assign_source_21;
                                Py_DECREF(old);
                            }

                        }
                        branch_no_11:;
                    }
                    branch_end_10:;
                }
                branch_end_9:;
            }
            {
                PyObject *tmp_assign_source_22;
                PyObject *tmp_called_name_11;
                PyObject *tmp_source_name_15;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_kw_name_4;
                PyObject *tmp_dict_key_11;
                PyObject *tmp_dict_value_11;
                PyObject *tmp_dict_key_12;
                PyObject *tmp_dict_value_12;
                PyObject *tmp_dict_key_13;
                PyObject *tmp_dict_value_13;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_called_instance_6;
                PyObject *tmp_mvar_value_23;
                PyObject *tmp_subscript_name_1;
                CHECK_OBJECT(par_retries);
                tmp_source_name_15 = par_retries;
                tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_increment);
                if (tmp_called_name_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 637;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT(par_method);
                tmp_tuple_element_8 = par_method;
                tmp_args_name_3 = PyTuple_New(2);
                Py_INCREF(tmp_tuple_element_8);
                PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_8);
                CHECK_OBJECT(par_url);
                tmp_tuple_element_8 = par_url;
                Py_INCREF(tmp_tuple_element_8);
                PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_8);
                tmp_dict_key_11 = const_str_plain_error;
                if (var_e == NULL) {
                    Py_DECREF(tmp_called_name_11);
                    Py_DECREF(tmp_args_name_3);
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "e");
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 637;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_5;
                }

                tmp_dict_value_11 = var_e;
                tmp_kw_name_4 = _PyDict_NewPresized( 3 );
                tmp_res = PyDict_SetItem(tmp_kw_name_4, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = const_str_plain__pool;
                CHECK_OBJECT(par_self);
                tmp_dict_value_12 = par_self;
                tmp_res = PyDict_SetItem(tmp_kw_name_4, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = const_str_plain__stacktrace;
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_sys);

                if (unlikely(tmp_mvar_value_23 == NULL)) {
                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
                }

                if (tmp_mvar_value_23 == NULL) {
                    Py_DECREF(tmp_called_name_11);
                    Py_DECREF(tmp_args_name_3);
                    Py_DECREF(tmp_kw_name_4);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 676 ], 25, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 638;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_5;
                }

                tmp_called_instance_6 = tmp_mvar_value_23;
                frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 638;
                tmp_subscribed_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, const_str_plain_exc_info);
                if (tmp_subscribed_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_11);
                    Py_DECREF(tmp_args_name_3);
                    Py_DECREF(tmp_kw_name_4);

                    exception_lineno = 638;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_5;
                }
                tmp_subscript_name_1 = const_int_pos_2;
                tmp_dict_value_13 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 2);
                Py_DECREF(tmp_subscribed_name_1);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_11);
                    Py_DECREF(tmp_args_name_3);
                    Py_DECREF(tmp_kw_name_4);

                    exception_lineno = 638;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_5;
                }
                tmp_res = PyDict_SetItem(tmp_kw_name_4, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 637;
                tmp_assign_source_22 = CALL_FUNCTION(tmp_called_name_11, tmp_args_name_3, tmp_kw_name_4);
                Py_DECREF(tmp_called_name_11);
                Py_DECREF(tmp_args_name_3);
                Py_DECREF(tmp_kw_name_4);
                if (tmp_assign_source_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 637;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_5;
                }
                {
                    PyObject *old = par_retries;
                    assert(old != NULL);
                    par_retries = tmp_assign_source_22;
                    Py_DECREF(old);
                }

            }
            {
                PyObject *tmp_called_instance_7;
                PyObject *tmp_call_result_3;
                CHECK_OBJECT(par_retries);
                tmp_called_instance_7 = par_retries;
                frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 639;
                tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, const_str_plain_sleep);
                if (tmp_call_result_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 639;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_5;
                }
                Py_DECREF(tmp_call_result_3);
            }
            {
                PyObject *tmp_assign_source_23;
                if (var_e == NULL) {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "e");
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 642;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_5;
                }

                tmp_assign_source_23 = var_e;
                {
                    PyObject *old = var_err;
                    assert(old != NULL);
                    var_err = tmp_assign_source_23;
                    Py_INCREF(var_err);
                    Py_DECREF(old);
                }

            }
            goto try_end_2;
            // Exception handler code:
            try_except_handler_5:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(var_e);
            var_e = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto try_except_handler_4;
            // End of try:
            try_end_2:;
            Py_XDECREF(var_e);
            var_e = NULL;

            goto branch_end_8;
            branch_no_8:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 585;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_b41a00b264844cbec486aceca4e29341->m_frame) frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_4;
            branch_end_8:;
        }
        branch_end_7:;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_18_urlopen);
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_2);
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_2);
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_2);

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_b41a00b264844cbec486aceca4e29341, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_b41a00b264844cbec486aceca4e29341, exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    PyException_SetTraceback(exception_keeper_value_4, (PyObject *)exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_operand_name_5;
        assert(var_clean_exit != NUITKA_BOOL_UNASSIGNED);
        tmp_operand_name_5 = (var_clean_exit == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
        branch_yes_12:;
        {
            PyObject *tmp_assign_source_24;
            int tmp_and_left_truth_4;
            PyObject *tmp_and_left_value_4;
            PyObject *tmp_and_right_value_4;
            PyObject *tmp_called_instance_8;
            CHECK_OBJECT(var_conn);
            tmp_and_left_value_4 = var_conn;
            tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
            if (tmp_and_left_truth_4 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 650;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_6;
            }
            if (tmp_and_left_truth_4 == 1) {
                goto and_right_4;
            } else {
                goto and_left_4;
            }
            and_right_4:;
            CHECK_OBJECT(var_conn);
            tmp_called_instance_8 = var_conn;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 650;
            tmp_and_right_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, const_str_plain_close);
            if (tmp_and_right_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 650;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_6;
            }
            tmp_assign_source_24 = tmp_and_right_value_4;
            goto and_end_4;
            and_left_4:;
            Py_INCREF(tmp_and_left_value_4);
            tmp_assign_source_24 = tmp_and_left_value_4;
            and_end_4:;
            {
                PyObject *old = var_conn;
                assert(old != NULL);
                var_conn = tmp_assign_source_24;
                Py_DECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = Py_True;
            {
                PyObject *old = var_release_this_conn;
                assert(old != NULL);
                var_release_this_conn = tmp_assign_source_25;
                Py_INCREF(var_release_this_conn);
                Py_DECREF(old);
            }

        }
        branch_no_12:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_release_this_conn);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_release_this_conn);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 653;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_6;
        }
        tmp_condition_result_14 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        branch_yes_13:;
        {
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_16;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_17;
            CHECK_OBJECT(par_self);
            tmp_source_name_16 = par_self;
            tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain__put_conn);
            if (tmp_called_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 657;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_6;
            }
            if (var_conn == NULL) {
                Py_DECREF(tmp_called_name_12);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "conn");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 657;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_6;
            }

            tmp_args_element_name_17 = var_conn;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 657;
            tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_17);
            Py_DECREF(tmp_called_name_12);
            if (tmp_call_result_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 657;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_6;
            }
            Py_DECREF(tmp_call_result_4);
        }
        branch_no_13:;
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 585;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b41a00b264844cbec486aceca4e29341->m_frame) frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooboooooooob";
    goto try_except_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_18_urlopen);
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_4:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_operand_name_6;
        if (var_clean_exit == NUITKA_BOOL_UNASSIGNED) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "clean_exit");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 645;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_6 = (var_clean_exit == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 645;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_assign_source_26;
            int tmp_and_left_truth_5;
            PyObject *tmp_and_left_value_5;
            PyObject *tmp_and_right_value_5;
            PyObject *tmp_called_instance_9;
            if (var_conn == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "conn");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 650;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_and_left_value_5 = var_conn;
            tmp_and_left_truth_5 = CHECK_IF_TRUE(tmp_and_left_value_5);
            if (tmp_and_left_truth_5 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 650;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            if (tmp_and_left_truth_5 == 1) {
                goto and_right_5;
            } else {
                goto and_left_5;
            }
            and_right_5:;
            if (var_conn == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "conn");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 650;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_9 = var_conn;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 650;
            tmp_and_right_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, const_str_plain_close);
            if (tmp_and_right_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 650;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_26 = tmp_and_right_value_5;
            goto and_end_5;
            and_left_5:;
            Py_INCREF(tmp_and_left_value_5);
            tmp_assign_source_26 = tmp_and_left_value_5;
            and_end_5:;
            {
                PyObject *old = var_conn;
                var_conn = tmp_assign_source_26;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = Py_True;
            {
                PyObject *old = var_release_this_conn;
                assert(old != NULL);
                var_release_this_conn = tmp_assign_source_27;
                Py_INCREF(var_release_this_conn);
                Py_DECREF(old);
            }

        }
        branch_no_14:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_release_this_conn);
        tmp_truth_name_5 = CHECK_IF_TRUE(var_release_this_conn);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 653;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
        branch_yes_15:;
        {
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_17;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_18;
            CHECK_OBJECT(par_self);
            tmp_source_name_17 = par_self;
            tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain__put_conn);
            if (tmp_called_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 657;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            if (var_conn == NULL) {
                Py_DECREF(tmp_called_name_13);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "conn");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 657;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_18 = var_conn;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 657;
            tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_18);
            Py_DECREF(tmp_called_name_13);
            if (tmp_call_result_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 657;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_5);
        }
        branch_no_15:;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_operand_name_7;
        if (var_conn == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "conn");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 659;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_7 = var_conn;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
        branch_yes_16:;
        {
            PyObject *tmp_called_name_14;
            PyObject *tmp_source_name_18;
            PyObject *tmp_mvar_value_24;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_args_element_name_22;
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_log);

            if (unlikely(tmp_mvar_value_24 == NULL)) {
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_log);
            }

            if (tmp_mvar_value_24 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28210 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 661;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_source_name_18 = tmp_mvar_value_24;
            tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_warning);
            if (tmp_called_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 661;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_19 = const_str_digest_cc37027aa1a44907139060af7011fd20;
            if (par_retries == NULL) {
                Py_DECREF(tmp_called_name_14);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "retries");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 662;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_20 = par_retries;
            if (var_err == NULL) {
                Py_DECREF(tmp_called_name_14);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "err");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 662;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_21 = var_err;
            CHECK_OBJECT(par_url);
            tmp_args_element_name_22 = par_url;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 661;
            {
                PyObject *call_args[] = {tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22};
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_14, call_args);
            }

            Py_DECREF(tmp_called_name_14);
            if (tmp_call_result_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 661;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_6);
        }
        {
            PyObject *tmp_dircall_arg1_2;
            PyObject *tmp_source_name_19;
            PyObject *tmp_dircall_arg2_2;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_dircall_arg3_2;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_dircall_arg4_2;
            CHECK_OBJECT(par_self);
            tmp_source_name_19 = par_self;
            tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_urlopen);
            if (tmp_dircall_arg1_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 663;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_method);
            tmp_tuple_element_9 = par_method;
            tmp_dircall_arg2_2 = PyTuple_New(7);
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_dircall_arg2_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(par_url);
            tmp_tuple_element_9 = par_url;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_dircall_arg2_2, 1, tmp_tuple_element_9);
            CHECK_OBJECT(par_body);
            tmp_tuple_element_9 = par_body;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_dircall_arg2_2, 2, tmp_tuple_element_9);
            if (par_headers == NULL) {
                Py_DECREF(tmp_dircall_arg1_2);
                Py_DECREF(tmp_dircall_arg2_2);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "headers");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 663;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_9 = par_headers;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_dircall_arg2_2, 3, tmp_tuple_element_9);
            if (par_retries == NULL) {
                Py_DECREF(tmp_dircall_arg1_2);
                Py_DECREF(tmp_dircall_arg2_2);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "retries");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 663;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_9 = par_retries;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_dircall_arg2_2, 4, tmp_tuple_element_9);
            CHECK_OBJECT(par_redirect);
            tmp_tuple_element_9 = par_redirect;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_dircall_arg2_2, 5, tmp_tuple_element_9);
            CHECK_OBJECT(par_assert_same_host);
            tmp_tuple_element_9 = par_assert_same_host;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_dircall_arg2_2, 6, tmp_tuple_element_9);
            tmp_dict_key_14 = const_str_plain_timeout;
            CHECK_OBJECT(par_timeout);
            tmp_dict_value_14 = par_timeout;
            tmp_dircall_arg3_2 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = const_str_plain_pool_timeout;
            CHECK_OBJECT(par_pool_timeout);
            tmp_dict_value_15 = par_pool_timeout;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = const_str_plain_release_conn;
            CHECK_OBJECT(par_release_conn);
            tmp_dict_value_16 = par_release_conn;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = const_str_plain_body_pos;
            CHECK_OBJECT(par_body_pos);
            tmp_dict_value_17 = par_body_pos;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(par_response_kw);
            tmp_dircall_arg4_2 = par_response_kw;
            Py_INCREF(tmp_dircall_arg4_2);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
                tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict(dir_call_args);
            }
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 663;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_16:;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_urllib3$connectionpool$$$function_18_urlopen$$$function_1_drain_and_release_conn();



        assert(var_drain_and_release_conn == NULL);
        var_drain_and_release_conn = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        int tmp_and_left_truth_6;
        PyObject *tmp_and_left_value_6;
        PyObject *tmp_and_right_value_6;
        PyObject *tmp_called_instance_10;
        CHECK_OBJECT(par_redirect);
        tmp_and_left_value_6 = par_redirect;
        tmp_and_left_truth_6 = CHECK_IF_TRUE(tmp_and_left_value_6);
        if (tmp_and_left_truth_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_6 == 1) {
            goto and_right_6;
        } else {
            goto and_left_6;
        }
        and_right_6:;
        if (var_response == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 679;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = var_response;
        frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 679;
        tmp_and_right_value_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, const_str_plain_get_redirect_location);
        if (tmp_and_right_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = tmp_and_right_value_6;
        goto and_end_6;
        and_left_6:;
        Py_INCREF(tmp_and_left_value_6);
        tmp_assign_source_29 = tmp_and_left_value_6;
        and_end_6:;
        assert(var_redirect_location == NULL);
        var_redirect_location = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_6;
        CHECK_OBJECT(var_redirect_location);
        tmp_truth_name_6 = CHECK_IF_TRUE(var_redirect_location);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
        branch_yes_17:;
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_source_name_20;
            if (var_response == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 681;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_source_name_20 = var_response;
            tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain_status);
            if (tmp_compexpr_left_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 681;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_7 = const_int_pos_303;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
            Py_DECREF(tmp_compexpr_left_7);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 681;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_19 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
            branch_yes_18:;
            {
                PyObject *tmp_assign_source_30;
                tmp_assign_source_30 = const_str_plain_GET;
                {
                    PyObject *old = par_method;
                    assert(old != NULL);
                    par_method = tmp_assign_source_30;
                    Py_INCREF(par_method);
                    Py_DECREF(old);
                }

            }
            branch_no_18:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_15;
            PyObject *tmp_source_name_21;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_5;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            if (par_retries == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "retries");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 685;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_7;
            }

            tmp_source_name_21 = par_retries;
            tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_increment);
            if (tmp_called_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 685;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_7;
            }
            CHECK_OBJECT(par_method);
            tmp_tuple_element_10 = par_method;
            tmp_args_name_4 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_10);
            PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_10);
            CHECK_OBJECT(par_url);
            tmp_tuple_element_10 = par_url;
            Py_INCREF(tmp_tuple_element_10);
            PyTuple_SET_ITEM(tmp_args_name_4, 1, tmp_tuple_element_10);
            tmp_dict_key_18 = const_str_plain_response;
            if (var_response == NULL) {
                Py_DECREF(tmp_called_name_15);
                Py_DECREF(tmp_args_name_4);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 685;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_7;
            }

            tmp_dict_value_18 = var_response;
            tmp_kw_name_5 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = const_str_plain__pool;
            CHECK_OBJECT(par_self);
            tmp_dict_value_19 = par_self;
            tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 685;
            tmp_assign_source_31 = CALL_FUNCTION(tmp_called_name_15, tmp_args_name_4, tmp_kw_name_5);
            Py_DECREF(tmp_called_name_15);
            Py_DECREF(tmp_args_name_4);
            Py_DECREF(tmp_kw_name_5);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 685;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_7;
            }
            {
                PyObject *old = par_retries;
                par_retries = tmp_assign_source_31;
                Py_XDECREF(old);
            }

        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_type_3);
        exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_value_3);
        exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF(exception_preserved_tb_3);

        if (exception_keeper_tb_6 == NULL) {
            exception_keeper_tb_6 = MAKE_TRACEBACK(frame_b41a00b264844cbec486aceca4e29341, exception_keeper_lineno_6);
        } else if (exception_keeper_lineno_6 != 0) {
            exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_b41a00b264844cbec486aceca4e29341, exception_keeper_lineno_6);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
        PyException_SetTraceback(exception_keeper_value_6, (PyObject *)exception_keeper_tb_6);
        PUBLISH_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
        // Tried code:
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_mvar_value_25;
            tmp_compexpr_left_8 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_MaxRetryError);

            if (unlikely(tmp_mvar_value_25 == NULL)) {
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MaxRetryError);
            }

            if (tmp_mvar_value_25 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20607 ], 35, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 686;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_8;
            }

            tmp_compexpr_right_8 = tmp_mvar_value_25;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_8, tmp_compexpr_right_8);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 686;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_8;
            }
            tmp_condition_result_20 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_19;
            } else {
                goto branch_no_19;
            }
            branch_yes_19:;
            {
                nuitka_bool tmp_condition_result_21;
                PyObject *tmp_source_name_22;
                PyObject *tmp_attribute_value_2;
                int tmp_truth_name_7;
                if (par_retries == NULL) {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "retries");
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 687;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_8;
                }

                tmp_source_name_22 = par_retries;
                tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain_raise_on_redirect);
                if (tmp_attribute_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 687;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_8;
                }
                tmp_truth_name_7 = CHECK_IF_TRUE(tmp_attribute_value_2);
                if (tmp_truth_name_7 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_attribute_value_2);

                    exception_lineno = 687;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_8;
                }
                tmp_condition_result_21 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF(tmp_attribute_value_2);
                if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_20;
                } else {
                    goto branch_no_20;
                }
                branch_yes_20:;
                {
                    PyObject *tmp_called_name_16;
                    PyObject *tmp_call_result_7;
                    PyObject *tmp_args_element_name_23;
                    CHECK_OBJECT(var_drain_and_release_conn);
                    tmp_called_name_16 = var_drain_and_release_conn;
                    if (var_response == NULL) {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF(exception_type);
                        exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 690;
                        type_description_1 = "oooooooooooooooooboooooooob";
                        goto try_except_handler_8;
                    }

                    tmp_args_element_name_23 = var_response;
                    frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 690;
                    tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_23);
                    if (tmp_call_result_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 690;
                        type_description_1 = "oooooooooooooooooboooooooob";
                        goto try_except_handler_8;
                    }
                    Py_DECREF(tmp_call_result_7);
                }
                tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                if (unlikely(tmp_result == false)) {
                    exception_lineno = 691;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_b41a00b264844cbec486aceca4e29341->m_frame) frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_8;
                branch_no_20:;
            }
            if (var_response == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 692;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_8;
            }

            tmp_return_value = var_response;
            Py_INCREF(tmp_return_value);
            goto try_return_handler_8;
            goto branch_end_19;
            branch_no_19:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 684;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_b41a00b264844cbec486aceca4e29341->m_frame) frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_8;
            branch_end_19:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_18_urlopen);
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_1;
        // End of try:
        // End of try:
        try_end_5:;
        {
            PyObject *tmp_called_name_17;
            PyObject *tmp_call_result_8;
            PyObject *tmp_args_element_name_24;
            CHECK_OBJECT(var_drain_and_release_conn);
            tmp_called_name_17 = var_drain_and_release_conn;
            if (var_response == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 695;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_24 = var_response;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 695;
            tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_24);
            if (tmp_call_result_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 695;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_8);
        }
        {
            PyObject *tmp_called_name_18;
            PyObject *tmp_source_name_23;
            PyObject *tmp_call_result_9;
            PyObject *tmp_args_element_name_25;
            CHECK_OBJECT(par_retries);
            tmp_source_name_23 = par_retries;
            tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain_sleep_for_retry);
            if (tmp_called_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 697;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            if (var_response == NULL) {
                Py_DECREF(tmp_called_name_18);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 697;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_25 = var_response;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 697;
            tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_25);
            Py_DECREF(tmp_called_name_18);
            if (tmp_call_result_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 697;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_9);
        }
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_mvar_value_26;
            PyObject *tmp_call_result_10;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_args_element_name_28;
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_log);

            if (unlikely(tmp_mvar_value_26 == NULL)) {
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_log);
            }

            if (tmp_mvar_value_26 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28210 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 698;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_11 = tmp_mvar_value_26;
            tmp_args_element_name_26 = const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085;
            CHECK_OBJECT(par_url);
            tmp_args_element_name_27 = par_url;
            CHECK_OBJECT(var_redirect_location);
            tmp_args_element_name_28 = var_redirect_location;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 698;
            {
                PyObject *call_args[] = {tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28};
                tmp_call_result_10 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_11, const_str_plain_debug, call_args);
            }

            if (tmp_call_result_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 698;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_10);
        }
        {
            PyObject *tmp_dircall_arg1_3;
            PyObject *tmp_source_name_24;
            PyObject *tmp_dircall_arg2_3;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_dircall_arg3_3;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            PyObject *tmp_dircall_arg4_3;
            CHECK_OBJECT(par_self);
            tmp_source_name_24 = par_self;
            tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain_urlopen);
            if (tmp_dircall_arg1_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 699;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_method);
            tmp_tuple_element_11 = par_method;
            tmp_dircall_arg2_3 = PyTuple_New(4);
            Py_INCREF(tmp_tuple_element_11);
            PyTuple_SET_ITEM(tmp_dircall_arg2_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(var_redirect_location);
            tmp_tuple_element_11 = var_redirect_location;
            Py_INCREF(tmp_tuple_element_11);
            PyTuple_SET_ITEM(tmp_dircall_arg2_3, 1, tmp_tuple_element_11);
            CHECK_OBJECT(par_body);
            tmp_tuple_element_11 = par_body;
            Py_INCREF(tmp_tuple_element_11);
            PyTuple_SET_ITEM(tmp_dircall_arg2_3, 2, tmp_tuple_element_11);
            if (par_headers == NULL) {
                Py_DECREF(tmp_dircall_arg1_3);
                Py_DECREF(tmp_dircall_arg2_3);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "headers");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 700;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_11 = par_headers;
            Py_INCREF(tmp_tuple_element_11);
            PyTuple_SET_ITEM(tmp_dircall_arg2_3, 3, tmp_tuple_element_11);
            tmp_dict_key_20 = const_str_plain_retries;
            CHECK_OBJECT(par_retries);
            tmp_dict_value_20 = par_retries;
            tmp_dircall_arg3_3 = _PyDict_NewPresized( 7 );
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_20, tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = const_str_plain_redirect;
            CHECK_OBJECT(par_redirect);
            tmp_dict_value_21 = par_redirect;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_21, tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_22 = const_str_plain_assert_same_host;
            CHECK_OBJECT(par_assert_same_host);
            tmp_dict_value_22 = par_assert_same_host;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_22, tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = const_str_plain_timeout;
            CHECK_OBJECT(par_timeout);
            tmp_dict_value_23 = par_timeout;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_23, tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = const_str_plain_pool_timeout;
            CHECK_OBJECT(par_pool_timeout);
            tmp_dict_value_24 = par_pool_timeout;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_24, tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_25 = const_str_plain_release_conn;
            CHECK_OBJECT(par_release_conn);
            tmp_dict_value_25 = par_release_conn;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_25, tmp_dict_value_25);
            assert(!(tmp_res != 0));
            tmp_dict_key_26 = const_str_plain_body_pos;
            CHECK_OBJECT(par_body_pos);
            tmp_dict_value_26 = par_body_pos;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_26, tmp_dict_value_26);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(par_response_kw);
            tmp_dircall_arg4_3 = par_response_kw;
            Py_INCREF(tmp_dircall_arg4_3);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3, tmp_dircall_arg4_3};
                tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict(dir_call_args);
            }
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 699;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_17:;
    }
    {
        nuitka_bool tmp_assign_source_32;
        PyObject *tmp_value_name_1;
        PyObject *tmp_called_instance_12;
        if (var_response == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 708;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_12 = var_response;
        frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 708;
        tmp_value_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, const_str_plain_getheader, &PyTuple_GET_ITEM(const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple, 0));

        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_has_retry_after = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_called_name_19;
        PyObject *tmp_source_name_25;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_source_name_26;
        PyObject *tmp_args_element_name_31;
        int tmp_truth_name_8;
        if (par_retries == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "retries");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 709;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }

        tmp_source_name_25 = par_retries;
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain_is_retry);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_method);
        tmp_args_element_name_29 = par_method;
        if (var_response == NULL) {
            Py_DECREF(tmp_called_name_19);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 709;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }

        tmp_source_name_26 = var_response;
        tmp_args_element_name_30 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain_status);
        if (tmp_args_element_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 709;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        assert(var_has_retry_after != NUITKA_BOOL_UNASSIGNED);
        tmp_args_element_name_31 = (var_has_retry_after == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 709;
        {
            PyObject *call_args[] = {tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_19, call_args);
        }

        Py_DECREF(tmp_called_name_19);
        Py_DECREF(tmp_args_element_name_30);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_call_result_11);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_11);

            exception_lineno = 709;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_11);
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
        branch_yes_21:;
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_name_20;
            PyObject *tmp_source_name_27;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kw_name_6;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            if (par_retries == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "retries");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 711;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_9;
            }

            tmp_source_name_27 = par_retries;
            tmp_called_name_20 = LOOKUP_ATTRIBUTE(tmp_source_name_27, const_str_plain_increment);
            if (tmp_called_name_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 711;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_9;
            }
            CHECK_OBJECT(par_method);
            tmp_tuple_element_12 = par_method;
            tmp_args_name_5 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_12);
            PyTuple_SET_ITEM(tmp_args_name_5, 0, tmp_tuple_element_12);
            CHECK_OBJECT(par_url);
            tmp_tuple_element_12 = par_url;
            Py_INCREF(tmp_tuple_element_12);
            PyTuple_SET_ITEM(tmp_args_name_5, 1, tmp_tuple_element_12);
            tmp_dict_key_27 = const_str_plain_response;
            if (var_response == NULL) {
                Py_DECREF(tmp_called_name_20);
                Py_DECREF(tmp_args_name_5);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 711;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_9;
            }

            tmp_dict_value_27 = var_response;
            tmp_kw_name_6 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_kw_name_6, tmp_dict_key_27, tmp_dict_value_27);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = const_str_plain__pool;
            CHECK_OBJECT(par_self);
            tmp_dict_value_28 = par_self;
            tmp_res = PyDict_SetItem(tmp_kw_name_6, tmp_dict_key_28, tmp_dict_value_28);
            assert(!(tmp_res != 0));
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 711;
            tmp_assign_source_33 = CALL_FUNCTION(tmp_called_name_20, tmp_args_name_5, tmp_kw_name_6);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_name_5);
            Py_DECREF(tmp_kw_name_6);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 711;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_9;
            }
            {
                PyObject *old = par_retries;
                par_retries = tmp_assign_source_33;
                Py_XDECREF(old);
            }

        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        exception_preserved_type_4 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_type_4);
        exception_preserved_value_4 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_value_4);
        exception_preserved_tb_4 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF(exception_preserved_tb_4);

        if (exception_keeper_tb_8 == NULL) {
            exception_keeper_tb_8 = MAKE_TRACEBACK(frame_b41a00b264844cbec486aceca4e29341, exception_keeper_lineno_8);
        } else if (exception_keeper_lineno_8 != 0) {
            exception_keeper_tb_8 = ADD_TRACEBACK(exception_keeper_tb_8, frame_b41a00b264844cbec486aceca4e29341, exception_keeper_lineno_8);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8);
        PyException_SetTraceback(exception_keeper_value_8, (PyObject *)exception_keeper_tb_8);
        PUBLISH_EXCEPTION(&exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8);
        // Tried code:
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_mvar_value_27;
            tmp_compexpr_left_9 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_MaxRetryError);

            if (unlikely(tmp_mvar_value_27 == NULL)) {
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MaxRetryError);
            }

            if (tmp_mvar_value_27 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20607 ], 35, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 712;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_10;
            }

            tmp_compexpr_right_9 = tmp_mvar_value_27;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_9, tmp_compexpr_right_9);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_10;
            }
            tmp_condition_result_23 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto branch_yes_22;
            } else {
                goto branch_no_22;
            }
            branch_yes_22:;
            {
                nuitka_bool tmp_condition_result_24;
                PyObject *tmp_source_name_28;
                PyObject *tmp_attribute_value_3;
                int tmp_truth_name_9;
                if (par_retries == NULL) {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "retries");
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 713;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_10;
                }

                tmp_source_name_28 = par_retries;
                tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_source_name_28, const_str_plain_raise_on_status);
                if (tmp_attribute_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 713;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_10;
                }
                tmp_truth_name_9 = CHECK_IF_TRUE(tmp_attribute_value_3);
                if (tmp_truth_name_9 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_attribute_value_3);

                    exception_lineno = 713;
                    type_description_1 = "oooooooooooooooooboooooooob";
                    goto try_except_handler_10;
                }
                tmp_condition_result_24 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF(tmp_attribute_value_3);
                if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_23;
                } else {
                    goto branch_no_23;
                }
                branch_yes_23:;
                {
                    PyObject *tmp_called_name_21;
                    PyObject *tmp_call_result_12;
                    PyObject *tmp_args_element_name_32;
                    CHECK_OBJECT(var_drain_and_release_conn);
                    tmp_called_name_21 = var_drain_and_release_conn;
                    if (var_response == NULL) {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF(exception_type);
                        exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 716;
                        type_description_1 = "oooooooooooooooooboooooooob";
                        goto try_except_handler_10;
                    }

                    tmp_args_element_name_32 = var_response;
                    frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 716;
                    tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_32);
                    if (tmp_call_result_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 716;
                        type_description_1 = "oooooooooooooooooboooooooob";
                        goto try_except_handler_10;
                    }
                    Py_DECREF(tmp_call_result_12);
                }
                tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                if (unlikely(tmp_result == false)) {
                    exception_lineno = 717;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_b41a00b264844cbec486aceca4e29341->m_frame) frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_10;
                branch_no_23:;
            }
            if (var_response == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 718;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto try_except_handler_10;
            }

            tmp_return_value = var_response;
            Py_INCREF(tmp_return_value);
            goto try_return_handler_10;
            goto branch_end_22;
            branch_no_22:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 710;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_b41a00b264844cbec486aceca4e29341->m_frame) frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooooooooooooboooooooob";
            goto try_except_handler_10;
            branch_end_22:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_18_urlopen);
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_1;
        // End of try:
        // End of try:
        try_end_6:;
        {
            PyObject *tmp_called_name_22;
            PyObject *tmp_call_result_13;
            PyObject *tmp_args_element_name_33;
            CHECK_OBJECT(var_drain_and_release_conn);
            tmp_called_name_22 = var_drain_and_release_conn;
            if (var_response == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 721;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_33 = var_response;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 721;
            tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_33);
            if (tmp_call_result_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 721;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_13);
        }
        {
            PyObject *tmp_called_name_23;
            PyObject *tmp_source_name_29;
            PyObject *tmp_call_result_14;
            PyObject *tmp_args_element_name_34;
            CHECK_OBJECT(par_retries);
            tmp_source_name_29 = par_retries;
            tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_source_name_29, const_str_plain_sleep);
            if (tmp_called_name_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 723;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            if (var_response == NULL) {
                Py_DECREF(tmp_called_name_23);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 723;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_34 = var_response;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 723;
            tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_34);
            Py_DECREF(tmp_called_name_23);
            if (tmp_call_result_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 723;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_14);
        }
        {
            PyObject *tmp_called_instance_13;
            PyObject *tmp_mvar_value_28;
            PyObject *tmp_call_result_15;
            PyObject *tmp_args_element_name_35;
            PyObject *tmp_args_element_name_36;
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_log);

            if (unlikely(tmp_mvar_value_28 == NULL)) {
                tmp_mvar_value_28 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_log);
            }

            if (tmp_mvar_value_28 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28210 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 724;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_13 = tmp_mvar_value_28;
            tmp_args_element_name_35 = const_str_digest_c0b619889998f0c09f1287c52f18c3e9;
            CHECK_OBJECT(par_url);
            tmp_args_element_name_36 = par_url;
            frame_b41a00b264844cbec486aceca4e29341->m_frame.f_lineno = 724;
            {
                PyObject *call_args[] = {tmp_args_element_name_35, tmp_args_element_name_36};
                tmp_call_result_15 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_13, const_str_plain_debug, call_args);
            }

            if (tmp_call_result_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 724;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_15);
        }
        {
            PyObject *tmp_dircall_arg1_4;
            PyObject *tmp_source_name_30;
            PyObject *tmp_dircall_arg2_4;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_dircall_arg3_4;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            PyObject *tmp_dict_key_32;
            PyObject *tmp_dict_value_32;
            PyObject *tmp_dict_key_33;
            PyObject *tmp_dict_value_33;
            PyObject *tmp_dict_key_34;
            PyObject *tmp_dict_value_34;
            PyObject *tmp_dict_key_35;
            PyObject *tmp_dict_value_35;
            PyObject *tmp_dircall_arg4_4;
            CHECK_OBJECT(par_self);
            tmp_source_name_30 = par_self;
            tmp_dircall_arg1_4 = LOOKUP_ATTRIBUTE(tmp_source_name_30, const_str_plain_urlopen);
            if (tmp_dircall_arg1_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 725;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_method);
            tmp_tuple_element_13 = par_method;
            tmp_dircall_arg2_4 = PyTuple_New(4);
            Py_INCREF(tmp_tuple_element_13);
            PyTuple_SET_ITEM(tmp_dircall_arg2_4, 0, tmp_tuple_element_13);
            CHECK_OBJECT(par_url);
            tmp_tuple_element_13 = par_url;
            Py_INCREF(tmp_tuple_element_13);
            PyTuple_SET_ITEM(tmp_dircall_arg2_4, 1, tmp_tuple_element_13);
            CHECK_OBJECT(par_body);
            tmp_tuple_element_13 = par_body;
            Py_INCREF(tmp_tuple_element_13);
            PyTuple_SET_ITEM(tmp_dircall_arg2_4, 2, tmp_tuple_element_13);
            if (par_headers == NULL) {
                Py_DECREF(tmp_dircall_arg1_4);
                Py_DECREF(tmp_dircall_arg2_4);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "headers");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 726;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_13 = par_headers;
            Py_INCREF(tmp_tuple_element_13);
            PyTuple_SET_ITEM(tmp_dircall_arg2_4, 3, tmp_tuple_element_13);
            tmp_dict_key_29 = const_str_plain_retries;
            CHECK_OBJECT(par_retries);
            tmp_dict_value_29 = par_retries;
            tmp_dircall_arg3_4 = _PyDict_NewPresized( 7 );
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_4, tmp_dict_key_29, tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = const_str_plain_redirect;
            CHECK_OBJECT(par_redirect);
            tmp_dict_value_30 = par_redirect;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_4, tmp_dict_key_30, tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = const_str_plain_assert_same_host;
            CHECK_OBJECT(par_assert_same_host);
            tmp_dict_value_31 = par_assert_same_host;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_4, tmp_dict_key_31, tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_32 = const_str_plain_timeout;
            CHECK_OBJECT(par_timeout);
            tmp_dict_value_32 = par_timeout;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_4, tmp_dict_key_32, tmp_dict_value_32);
            assert(!(tmp_res != 0));
            tmp_dict_key_33 = const_str_plain_pool_timeout;
            CHECK_OBJECT(par_pool_timeout);
            tmp_dict_value_33 = par_pool_timeout;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_4, tmp_dict_key_33, tmp_dict_value_33);
            assert(!(tmp_res != 0));
            tmp_dict_key_34 = const_str_plain_release_conn;
            CHECK_OBJECT(par_release_conn);
            tmp_dict_value_34 = par_release_conn;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_4, tmp_dict_key_34, tmp_dict_value_34);
            assert(!(tmp_res != 0));
            tmp_dict_key_35 = const_str_plain_body_pos;
            CHECK_OBJECT(par_body_pos);
            tmp_dict_value_35 = par_body_pos;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_4, tmp_dict_key_35, tmp_dict_value_35);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(par_response_kw);
            tmp_dircall_arg4_4 = par_response_kw;
            Py_INCREF(tmp_dircall_arg4_4);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4, tmp_dircall_arg3_4, tmp_dircall_arg4_4};
                tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict(dir_call_args);
            }
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 725;
                type_description_1 = "oooooooooooooooooboooooooob";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_21:;
    }
    if (var_response == NULL) {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF(exception_type);
        exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "response");
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 733;
        type_description_1 = "oooooooooooooooooboooooooob";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_response;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b41a00b264844cbec486aceca4e29341);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b41a00b264844cbec486aceca4e29341);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b41a00b264844cbec486aceca4e29341);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b41a00b264844cbec486aceca4e29341, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b41a00b264844cbec486aceca4e29341->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b41a00b264844cbec486aceca4e29341, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b41a00b264844cbec486aceca4e29341,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_body,
        par_headers,
        par_retries,
        par_redirect,
        par_assert_same_host,
        par_timeout,
        par_pool_timeout,
        par_release_conn,
        par_chunked,
        par_body_pos,
        par_response_kw,
        var_conn,
        var_release_this_conn,
        var_err,
        (int)var_clean_exit,
        var_timeout_obj,
        var_is_new_proxy_conn,
        var_httplib_response,
        var_response_conn,
        var_response,
        var_e,
        var_drain_and_release_conn,
        var_redirect_location,
        (int)var_has_retry_after
    );


    // Release cached frame.
    if (frame_b41a00b264844cbec486aceca4e29341 == cache_frame_b41a00b264844cbec486aceca4e29341) {
        Py_DECREF(frame_b41a00b264844cbec486aceca4e29341);
    }
    cache_frame_b41a00b264844cbec486aceca4e29341 = NULL;

    assertFrameObject(frame_b41a00b264844cbec486aceca4e29341);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_18_urlopen);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_method);
    par_method = NULL;

    Py_XDECREF(par_headers);
    par_headers = NULL;

    Py_XDECREF(par_retries);
    par_retries = NULL;

    CHECK_OBJECT((PyObject *)par_release_conn);
    Py_DECREF(par_release_conn);
    par_release_conn = NULL;

    CHECK_OBJECT((PyObject *)par_body_pos);
    Py_DECREF(par_body_pos);
    par_body_pos = NULL;

    Py_XDECREF(var_conn);
    var_conn = NULL;

    CHECK_OBJECT((PyObject *)var_release_this_conn);
    Py_DECREF(var_release_this_conn);
    var_release_this_conn = NULL;

    Py_XDECREF(var_err);
    var_err = NULL;

    Py_XDECREF(var_timeout_obj);
    var_timeout_obj = NULL;

    Py_XDECREF(var_is_new_proxy_conn);
    var_is_new_proxy_conn = NULL;

    Py_XDECREF(var_httplib_response);
    var_httplib_response = NULL;

    Py_XDECREF(var_response_conn);
    var_response_conn = NULL;

    Py_XDECREF(var_response);
    var_response = NULL;

    Py_XDECREF(var_e);
    var_e = NULL;

    Py_XDECREF(var_drain_and_release_conn);
    var_drain_and_release_conn = NULL;

    Py_XDECREF(var_redirect_location);
    var_redirect_location = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_method);
    par_method = NULL;

    Py_XDECREF(par_headers);
    par_headers = NULL;

    Py_XDECREF(par_retries);
    par_retries = NULL;

    Py_XDECREF(par_release_conn);
    par_release_conn = NULL;

    CHECK_OBJECT((PyObject *)par_body_pos);
    Py_DECREF(par_body_pos);
    par_body_pos = NULL;

    Py_XDECREF(var_conn);
    var_conn = NULL;

    Py_XDECREF(var_release_this_conn);
    var_release_this_conn = NULL;

    Py_XDECREF(var_err);
    var_err = NULL;

    Py_XDECREF(var_timeout_obj);
    var_timeout_obj = NULL;

    Py_XDECREF(var_is_new_proxy_conn);
    var_is_new_proxy_conn = NULL;

    Py_XDECREF(var_httplib_response);
    var_httplib_response = NULL;

    Py_XDECREF(var_response_conn);
    var_response_conn = NULL;

    Py_XDECREF(var_response);
    var_response = NULL;

    Py_XDECREF(var_e);
    var_e = NULL;

    Py_XDECREF(var_drain_and_release_conn);
    var_drain_and_release_conn = NULL;

    Py_XDECREF(var_redirect_location);
    var_redirect_location = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_18_urlopen);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    CHECK_OBJECT(par_redirect);
    Py_DECREF(par_redirect);
    CHECK_OBJECT(par_assert_same_host);
    Py_DECREF(par_assert_same_host);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_pool_timeout);
    Py_DECREF(par_pool_timeout);
    CHECK_OBJECT(par_chunked);
    Py_DECREF(par_chunked);
    CHECK_OBJECT(par_response_kw);
    Py_DECREF(par_response_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    CHECK_OBJECT(par_redirect);
    Py_DECREF(par_redirect);
    CHECK_OBJECT(par_assert_same_host);
    Py_DECREF(par_assert_same_host);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_pool_timeout);
    Py_DECREF(par_pool_timeout);
    CHECK_OBJECT(par_chunked);
    Py_DECREF(par_chunked);
    CHECK_OBJECT(par_response_kw);
    Py_DECREF(par_response_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_18_urlopen$$$function_1_drain_and_release_conn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_response = python_pars[0];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_d85917cf3b4c080b7737f28a3e0201d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_d85917cf3b4c080b7737f28a3e0201d5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_d85917cf3b4c080b7737f28a3e0201d5, codeobj_d85917cf3b4c080b7737f28a3e0201d5, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *));
    frame_d85917cf3b4c080b7737f28a3e0201d5 = cache_frame_d85917cf3b4c080b7737f28a3e0201d5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d85917cf3b4c080b7737f28a3e0201d5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d85917cf3b4c080b7737f28a3e0201d5) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_response);
        tmp_called_instance_1 = par_response;
        frame_d85917cf3b4c080b7737f28a3e0201d5->m_frame.f_lineno = 673;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_read);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d85917cf3b4c080b7737f28a3e0201d5, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d85917cf3b4c080b7737f28a3e0201d5, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_mvar_value_6;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_TimeoutError);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutError);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28916 ], 34, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 674;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = PyTuple_New(6);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_compexpr_right_1, 0, tmp_tuple_element_1);
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPException);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPException);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_compexpr_right_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28950 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 674;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_compexpr_right_1, 1, tmp_tuple_element_1);
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SocketError);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_compexpr_right_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27689 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 674;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_compexpr_right_1, 2, tmp_tuple_element_1);
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ProtocolError);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError);
        }

        if (tmp_mvar_value_4 == NULL) {
            Py_DECREF(tmp_compexpr_right_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20507 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 674;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_4;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_compexpr_right_1, 3, tmp_tuple_element_1);
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_BaseSSLError);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseSSLError);
        }

        if (tmp_mvar_value_5 == NULL) {
            Py_DECREF(tmp_compexpr_right_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28667 ], 34, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 675;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_5;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_compexpr_right_1, 4, tmp_tuple_element_1);
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SSLError);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_compexpr_right_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20922 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 675;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_6;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_compexpr_right_1, 5, tmp_tuple_element_1);
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
            assert(var_e == NULL);
            Py_INCREF(tmp_assign_source_1);
            var_e = tmp_assign_source_1;
        }
        Py_XDECREF(var_e);
        var_e = NULL;

        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 670;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_d85917cf3b4c080b7737f28a3e0201d5->m_frame) frame_d85917cf3b4c080b7737f28a3e0201d5->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_18_urlopen$$$function_1_drain_and_release_conn);
    return NULL;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d85917cf3b4c080b7737f28a3e0201d5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d85917cf3b4c080b7737f28a3e0201d5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d85917cf3b4c080b7737f28a3e0201d5, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_d85917cf3b4c080b7737f28a3e0201d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d85917cf3b4c080b7737f28a3e0201d5, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d85917cf3b4c080b7737f28a3e0201d5,
        type_description_1,
        par_response,
        var_e
    );


    // Release cached frame.
    if (frame_d85917cf3b4c080b7737f28a3e0201d5 == cache_frame_d85917cf3b4c080b7737f28a3e0201d5) {
        Py_DECREF(frame_d85917cf3b4c080b7737f28a3e0201d5);
    }
    cache_frame_d85917cf3b4c080b7737f28a3e0201d5 = NULL;

    assertFrameObject(frame_d85917cf3b4c080b7737f28a3e0201d5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_18_urlopen$$$function_1_drain_and_release_conn);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_18_urlopen$$$function_1_drain_and_release_conn);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_19___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_strict = python_pars[3];
    PyObject *par_timeout = python_pars[4];
    PyObject *par_maxsize = python_pars[5];
    PyObject *par_block = python_pars[6];
    PyObject *par_headers = python_pars[7];
    PyObject *par_retries = python_pars[8];
    PyObject *par__proxy = python_pars[9];
    PyObject *par__proxy_headers = python_pars[10];
    PyObject *par_key_file = python_pars[11];
    PyObject *par_cert_file = python_pars[12];
    PyObject *par_cert_reqs = python_pars[13];
    PyObject *par_ca_certs = python_pars[14];
    PyObject *par_ssl_version = python_pars[15];
    PyObject *par_assert_hostname = python_pars[16];
    PyObject *par_assert_fingerprint = python_pars[17];
    PyObject *par_ca_cert_dir = python_pars[18];
    PyObject *par_conn_kw = python_pars[19];
    struct Nuitka_FrameObject *frame_9563ee97d8024863b70f8cb63ecb7722;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9563ee97d8024863b70f8cb63ecb7722 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_9563ee97d8024863b70f8cb63ecb7722, codeobj_9563ee97d8024863b70f8cb63ecb7722, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_9563ee97d8024863b70f8cb63ecb7722 = cache_frame_9563ee97d8024863b70f8cb63ecb7722;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9563ee97d8024863b70f8cb63ecb7722);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9563ee97d8024863b70f8cb63ecb7722) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28985 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 766;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain___init__);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = PyTuple_New(11);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_host);
        tmp_tuple_element_1 = par_host;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_port);
        tmp_tuple_element_1 = par_port;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_strict);
        tmp_tuple_element_1 = par_strict;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_timeout);
        tmp_tuple_element_1 = par_timeout;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 4, tmp_tuple_element_1);
        CHECK_OBJECT(par_maxsize);
        tmp_tuple_element_1 = par_maxsize;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 5, tmp_tuple_element_1);
        CHECK_OBJECT(par_block);
        tmp_tuple_element_1 = par_block;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 6, tmp_tuple_element_1);
        CHECK_OBJECT(par_headers);
        tmp_tuple_element_1 = par_headers;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 7, tmp_tuple_element_1);
        CHECK_OBJECT(par_retries);
        tmp_tuple_element_1 = par_retries;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 8, tmp_tuple_element_1);
        CHECK_OBJECT(par__proxy);
        tmp_tuple_element_1 = par__proxy;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 9, tmp_tuple_element_1);
        CHECK_OBJECT(par__proxy_headers);
        tmp_tuple_element_1 = par__proxy_headers;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 10, tmp_tuple_element_1);
        CHECK_OBJECT(par_conn_kw);
        tmp_dircall_arg3_1 = par_conn_kw;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ca_certs);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_ca_certs);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 770;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_cert_reqs);
        tmp_compexpr_left_1 = par_cert_reqs;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_right_value_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = const_str_plain_CERT_REQUIRED;
            {
                PyObject *old = par_cert_reqs;
                assert(old != NULL);
                par_cert_reqs = tmp_assign_source_1;
                Py_INCREF(par_cert_reqs);
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_key_file);
        tmp_assattr_name_1 = par_key_file;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_key_file, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 773;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_cert_file);
        tmp_assattr_name_2 = par_cert_file;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_cert_file, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_cert_reqs);
        tmp_assattr_name_3 = par_cert_reqs;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_cert_reqs, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 775;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_ca_certs);
        tmp_assattr_name_4 = par_ca_certs;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_ca_certs, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 776;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_ca_cert_dir);
        tmp_assattr_name_5 = par_ca_cert_dir;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_ca_cert_dir, tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 777;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_ssl_version);
        tmp_assattr_name_6 = par_ssl_version;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain_ssl_version, tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 778;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_assert_hostname);
        tmp_assattr_name_7 = par_assert_hostname;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain_assert_hostname, tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 779;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_assert_fingerprint);
        tmp_assattr_name_8 = par_assert_fingerprint;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain_assert_fingerprint, tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9563ee97d8024863b70f8cb63ecb7722);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9563ee97d8024863b70f8cb63ecb7722);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9563ee97d8024863b70f8cb63ecb7722, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_9563ee97d8024863b70f8cb63ecb7722->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9563ee97d8024863b70f8cb63ecb7722, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9563ee97d8024863b70f8cb63ecb7722,
        type_description_1,
        par_self,
        par_host,
        par_port,
        par_strict,
        par_timeout,
        par_maxsize,
        par_block,
        par_headers,
        par_retries,
        par__proxy,
        par__proxy_headers,
        par_key_file,
        par_cert_file,
        par_cert_reqs,
        par_ca_certs,
        par_ssl_version,
        par_assert_hostname,
        par_assert_fingerprint,
        par_ca_cert_dir,
        par_conn_kw
    );


    // Release cached frame.
    if (frame_9563ee97d8024863b70f8cb63ecb7722 == cache_frame_9563ee97d8024863b70f8cb63ecb7722) {
        Py_DECREF(frame_9563ee97d8024863b70f8cb63ecb7722);
    }
    cache_frame_9563ee97d8024863b70f8cb63ecb7722 = NULL;

    assertFrameObject(frame_9563ee97d8024863b70f8cb63ecb7722);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_19___init__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_cert_reqs);
    Py_DECREF(par_cert_reqs);
    par_cert_reqs = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_cert_reqs);
    par_cert_reqs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_19___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_maxsize);
    Py_DECREF(par_maxsize);
    CHECK_OBJECT(par_block);
    Py_DECREF(par_block);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_retries);
    Py_DECREF(par_retries);
    CHECK_OBJECT(par__proxy);
    Py_DECREF(par__proxy);
    CHECK_OBJECT(par__proxy_headers);
    Py_DECREF(par__proxy_headers);
    CHECK_OBJECT(par_key_file);
    Py_DECREF(par_key_file);
    CHECK_OBJECT(par_cert_file);
    Py_DECREF(par_cert_file);
    CHECK_OBJECT(par_ca_certs);
    Py_DECREF(par_ca_certs);
    CHECK_OBJECT(par_ssl_version);
    Py_DECREF(par_ssl_version);
    CHECK_OBJECT(par_assert_hostname);
    Py_DECREF(par_assert_hostname);
    CHECK_OBJECT(par_assert_fingerprint);
    Py_DECREF(par_assert_fingerprint);
    CHECK_OBJECT(par_ca_cert_dir);
    Py_DECREF(par_ca_cert_dir);
    CHECK_OBJECT(par_conn_kw);
    Py_DECREF(par_conn_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_maxsize);
    Py_DECREF(par_maxsize);
    CHECK_OBJECT(par_block);
    Py_DECREF(par_block);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_retries);
    Py_DECREF(par_retries);
    CHECK_OBJECT(par__proxy);
    Py_DECREF(par__proxy);
    CHECK_OBJECT(par__proxy_headers);
    Py_DECREF(par__proxy_headers);
    CHECK_OBJECT(par_key_file);
    Py_DECREF(par_key_file);
    CHECK_OBJECT(par_cert_file);
    Py_DECREF(par_cert_file);
    CHECK_OBJECT(par_ca_certs);
    Py_DECREF(par_ca_certs);
    CHECK_OBJECT(par_ssl_version);
    Py_DECREF(par_ssl_version);
    CHECK_OBJECT(par_assert_hostname);
    Py_DECREF(par_assert_hostname);
    CHECK_OBJECT(par_assert_fingerprint);
    Py_DECREF(par_assert_fingerprint);
    CHECK_OBJECT(par_ca_cert_dir);
    Py_DECREF(par_ca_cert_dir);
    CHECK_OBJECT(par_conn_kw);
    Py_DECREF(par_conn_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_20__prepare_conn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_conn = python_pars[1];
    struct Nuitka_FrameObject *frame_2f0ce2c5ba92c6ebbde828cb6d571c09;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2f0ce2c5ba92c6ebbde828cb6d571c09 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_2f0ce2c5ba92c6ebbde828cb6d571c09, codeobj_2f0ce2c5ba92c6ebbde828cb6d571c09, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *));
    frame_2f0ce2c5ba92c6ebbde828cb6d571c09 = cache_frame_2f0ce2c5ba92c6ebbde828cb6d571c09;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2f0ce2c5ba92c6ebbde828cb6d571c09);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2f0ce2c5ba92c6ebbde828cb6d571c09) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_conn);
        tmp_isinstance_inst_1 = par_conn;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_VerifiedHTTPSConnection);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_VerifiedHTTPSConnection);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28334 ], 45, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 788;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_source_name_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT(par_conn);
            tmp_source_name_1 = par_conn;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_set_cert);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 789;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_key_file;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_key_file);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 789;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 7 );
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = const_str_plain_cert_file;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_cert_file);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_kw_name_1);

                exception_lineno = 790;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = const_str_plain_cert_reqs;
            CHECK_OBJECT(par_self);
            tmp_source_name_4 = par_self;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_cert_reqs);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_kw_name_1);

                exception_lineno = 791;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = const_str_plain_ca_certs;
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_ca_certs);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_kw_name_1);

                exception_lineno = 792;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = const_str_plain_ca_cert_dir;
            CHECK_OBJECT(par_self);
            tmp_source_name_6 = par_self;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_ca_cert_dir);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_kw_name_1);

                exception_lineno = 793;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = const_str_plain_assert_hostname;
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_assert_hostname);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_kw_name_1);

                exception_lineno = 794;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = const_str_plain_assert_fingerprint;
            CHECK_OBJECT(par_self);
            tmp_source_name_8 = par_self;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_assert_fingerprint);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_kw_name_1);

                exception_lineno = 795;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            frame_2f0ce2c5ba92c6ebbde828cb6d571c09->m_frame.f_lineno = 789;
            tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 789;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_source_name_9;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_9 = par_self;
            tmp_assattr_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_ssl_version);
            if (tmp_assattr_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 796;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_conn);
            tmp_assattr_target_1 = par_conn;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_ssl_version, tmp_assattr_name_1);
            Py_DECREF(tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 796;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f0ce2c5ba92c6ebbde828cb6d571c09);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f0ce2c5ba92c6ebbde828cb6d571c09);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f0ce2c5ba92c6ebbde828cb6d571c09, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_2f0ce2c5ba92c6ebbde828cb6d571c09->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f0ce2c5ba92c6ebbde828cb6d571c09, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2f0ce2c5ba92c6ebbde828cb6d571c09,
        type_description_1,
        par_self,
        par_conn
    );


    // Release cached frame.
    if (frame_2f0ce2c5ba92c6ebbde828cb6d571c09 == cache_frame_2f0ce2c5ba92c6ebbde828cb6d571c09) {
        Py_DECREF(frame_2f0ce2c5ba92c6ebbde828cb6d571c09);
    }
    cache_frame_2f0ce2c5ba92c6ebbde828cb6d571c09 = NULL;

    assertFrameObject(frame_2f0ce2c5ba92c6ebbde828cb6d571c09);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(par_conn);
    tmp_return_value = par_conn;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_20__prepare_conn);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_21__prepare_proxy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_conn = python_pars[1];
    struct Nuitka_FrameObject *frame_526c39b3ed2036c63aba18f4ebc185aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_526c39b3ed2036c63aba18f4ebc185aa = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_526c39b3ed2036c63aba18f4ebc185aa, codeobj_526c39b3ed2036c63aba18f4ebc185aa, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *));
    frame_526c39b3ed2036c63aba18f4ebc185aa = cache_frame_526c39b3ed2036c63aba18f4ebc185aa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_526c39b3ed2036c63aba18f4ebc185aa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_526c39b3ed2036c63aba18f4ebc185aa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT(par_conn);
        tmp_source_name_1 = par_conn;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_set_tunnel);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 804;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__proxy_host);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 804;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_port);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 804;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_proxy_headers);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 804;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_526c39b3ed2036c63aba18f4ebc185aa->m_frame.f_lineno = 804;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 804;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_conn);
        tmp_called_instance_1 = par_conn;
        frame_526c39b3ed2036c63aba18f4ebc185aa->m_frame.f_lineno = 805;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_connect);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_526c39b3ed2036c63aba18f4ebc185aa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_526c39b3ed2036c63aba18f4ebc185aa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_526c39b3ed2036c63aba18f4ebc185aa, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_526c39b3ed2036c63aba18f4ebc185aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_526c39b3ed2036c63aba18f4ebc185aa, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_526c39b3ed2036c63aba18f4ebc185aa,
        type_description_1,
        par_self,
        par_conn
    );


    // Release cached frame.
    if (frame_526c39b3ed2036c63aba18f4ebc185aa == cache_frame_526c39b3ed2036c63aba18f4ebc185aa) {
        Py_DECREF(frame_526c39b3ed2036c63aba18f4ebc185aa);
    }
    cache_frame_526c39b3ed2036c63aba18f4ebc185aa = NULL;

    assertFrameObject(frame_526c39b3ed2036c63aba18f4ebc185aa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_21__prepare_proxy);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_22__new_conn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_actual_host = NULL;
    PyObject *var_actual_port = NULL;
    PyObject *var_conn = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_91f6f833260fd2bfb9d1c4217293983d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_91f6f833260fd2bfb9d1c4217293983d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_91f6f833260fd2bfb9d1c4217293983d, codeobj_91f6f833260fd2bfb9d1c4217293983d, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_91f6f833260fd2bfb9d1c4217293983d = cache_frame_91f6f833260fd2bfb9d1c4217293983d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_91f6f833260fd2bfb9d1c4217293983d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_91f6f833260fd2bfb9d1c4217293983d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_num_connections);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_attr_1__start == NULL);
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(tmp_inplace_assign_attr_1__end == NULL);
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_num_connections, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
    Py_DECREF(tmp_inplace_assign_attr_1__end);
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
    Py_DECREF(tmp_inplace_assign_attr_1__start);
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
    Py_DECREF(tmp_inplace_assign_attr_1__end);
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
    Py_DECREF(tmp_inplace_assign_attr_1__start);
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_4;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_source_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_log);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_log);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28210 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 812;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_debug);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 812;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_digest_9bbc2b3bcb0e3653cf2ff626f29d33a7;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_num_connections);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 813;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_host);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 813;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_port);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 813;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 813;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = const_str_plain_443;
        Py_INCREF(tmp_or_right_value_1);
        tmp_args_element_name_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_name_4 = tmp_or_left_value_1;
        or_end_1:;
        frame_91f6f833260fd2bfb9d1c4217293983d->m_frame.f_lineno = 812;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 812;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_ConnectionCls);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 815;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 815;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_self);
        tmp_source_name_7 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_ConnectionCls);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 815;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_DummyConnection);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DummyConnection);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_compexpr_left_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28379 ], 37, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 815;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_or_right_value_2 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        tmp_condition_result_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_1 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SSLError);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20922 ], 30, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 816;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            frame_91f6f833260fd2bfb9d1c4217293983d->m_frame.f_lineno = 816;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_2, &PyTuple_GET_ITEM(const_tuple_str_digest_61ac0b1508921914df7f7224a3eccfd6_tuple, 0));

            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 816;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 816;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT(par_self);
        tmp_source_name_8 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_host);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_actual_host == NULL);
        var_actual_host = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT(par_self);
        tmp_source_name_9 = par_self;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_port);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 820;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_actual_port == NULL);
        var_actual_port = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT(par_self);
        tmp_source_name_10 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_proxy);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 821;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_source_name_11;
            PyObject *tmp_source_name_12;
            CHECK_OBJECT(par_self);
            tmp_source_name_12 = par_self;
            tmp_source_name_11 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_proxy);
            if (tmp_source_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 822;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_host);
            Py_DECREF(tmp_source_name_11);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 822;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_actual_host;
                assert(old != NULL);
                var_actual_host = tmp_assign_source_5;
                Py_DECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_source_name_13;
            PyObject *tmp_source_name_14;
            CHECK_OBJECT(par_self);
            tmp_source_name_14 = par_self;
            tmp_source_name_13 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_proxy);
            if (tmp_source_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 823;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_port);
            Py_DECREF(tmp_source_name_13);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 823;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_actual_port;
                assert(old != NULL);
                var_actual_port = tmp_assign_source_6;
                Py_DECREF(old);
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_15;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_16;
        PyObject *tmp_source_name_17;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_18;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_source_name_19;
        CHECK_OBJECT(par_self);
        tmp_source_name_15 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_ConnectionCls);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 825;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_host;
        CHECK_OBJECT(var_actual_host);
        tmp_dict_value_1 = var_actual_host;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_port;
        CHECK_OBJECT(var_actual_port);
        tmp_dict_value_2 = var_actual_port;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_timeout;
        CHECK_OBJECT(par_self);
        tmp_source_name_17 = par_self;
        tmp_source_name_16 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_timeout);
        if (tmp_source_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 826;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_connect_timeout);
        Py_DECREF(tmp_source_name_16);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 826;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_strict;
        CHECK_OBJECT(par_self);
        tmp_source_name_18 = par_self;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_strict);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 827;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_self);
        tmp_source_name_19 = par_self;
        tmp_dircall_arg3_1 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_conn_kw);
        if (tmp_dircall_arg3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 827;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_7 = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 825;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_conn == NULL);
        var_conn = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_conn);
        tmp_args_element_name_5 = var_conn;
        frame_91f6f833260fd2bfb9d1c4217293983d->m_frame.f_lineno = 829;
        {
            PyObject *call_args[] = {tmp_args_element_name_5};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__prepare_conn, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 829;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_91f6f833260fd2bfb9d1c4217293983d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_91f6f833260fd2bfb9d1c4217293983d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_91f6f833260fd2bfb9d1c4217293983d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_91f6f833260fd2bfb9d1c4217293983d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_91f6f833260fd2bfb9d1c4217293983d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91f6f833260fd2bfb9d1c4217293983d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_91f6f833260fd2bfb9d1c4217293983d,
        type_description_1,
        par_self,
        var_actual_host,
        var_actual_port,
        var_conn
    );


    // Release cached frame.
    if (frame_91f6f833260fd2bfb9d1c4217293983d == cache_frame_91f6f833260fd2bfb9d1c4217293983d) {
        Py_DECREF(frame_91f6f833260fd2bfb9d1c4217293983d);
    }
    cache_frame_91f6f833260fd2bfb9d1c4217293983d = NULL;

    assertFrameObject(frame_91f6f833260fd2bfb9d1c4217293983d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_22__new_conn);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_actual_host);
    Py_DECREF(var_actual_host);
    var_actual_host = NULL;

    CHECK_OBJECT((PyObject *)var_actual_port);
    Py_DECREF(var_actual_port);
    var_actual_port = NULL;

    CHECK_OBJECT((PyObject *)var_conn);
    Py_DECREF(var_conn);
    var_conn = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_actual_host);
    var_actual_host = NULL;

    Py_XDECREF(var_actual_port);
    var_actual_port = NULL;

    Py_XDECREF(var_conn);
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_22__new_conn);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_23__validate_conn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_conn = python_pars[1];
    struct Nuitka_FrameObject *frame_f0e3cb79a84d8cd9401c354f5ff653b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f0e3cb79a84d8cd9401c354f5ff653b1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_f0e3cb79a84d8cd9401c354f5ff653b1, codeobj_f0e3cb79a84d8cd9401c354f5ff653b1, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_f0e3cb79a84d8cd9401c354f5ff653b1 = cache_frame_f0e3cb79a84d8cd9401c354f5ff653b1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f0e3cb79a84d8cd9401c354f5ff653b1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f0e3cb79a84d8cd9401c354f5ff653b1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 29025 ], 41, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 835;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_conn);
        tmp_args_element_name_1 = par_conn;
        frame_f0e3cb79a84d8cd9401c354f5ff653b1->m_frame.f_lineno = 835;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__validate_conn, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_conn);
        tmp_getattr_target_1 = par_conn;
        tmp_getattr_attr_1 = const_str_plain_sock;
        tmp_getattr_default_1 = Py_None;
        tmp_operand_name_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 838;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 838;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT(par_conn);
            tmp_called_instance_2 = par_conn;
            frame_f0e3cb79a84d8cd9401c354f5ff653b1->m_frame.f_lineno = 839;
            tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_connect);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 839;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_2);
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_conn);
        tmp_source_name_1 = par_conn;
        tmp_operand_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_is_verified);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 841;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 841;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_warnings);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 19137 ], 30, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 842;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_warn);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 842;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = const_str_digest_5aafe6b15b72ff4d50c2dd07c503d5e8;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_InsecureRequestWarning);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InsecureRequestWarning);
            }

            if (tmp_mvar_value_3 == NULL) {
                Py_DECREF(tmp_called_name_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 29066 ], 44, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 847;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_3 = tmp_mvar_value_3;
            frame_f0e3cb79a84d8cd9401c354f5ff653b1->m_frame.f_lineno = 842;
            {
                PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
            }

            Py_DECREF(tmp_called_name_1);
            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 842;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_3);
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f0e3cb79a84d8cd9401c354f5ff653b1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f0e3cb79a84d8cd9401c354f5ff653b1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0e3cb79a84d8cd9401c354f5ff653b1, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_f0e3cb79a84d8cd9401c354f5ff653b1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0e3cb79a84d8cd9401c354f5ff653b1, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f0e3cb79a84d8cd9401c354f5ff653b1,
        type_description_1,
        par_self,
        par_conn,
        NULL
    );


    // Release cached frame.
    if (frame_f0e3cb79a84d8cd9401c354f5ff653b1 == cache_frame_f0e3cb79a84d8cd9401c354f5ff653b1) {
        Py_DECREF(frame_f0e3cb79a84d8cd9401c354f5ff653b1);
    }
    cache_frame_f0e3cb79a84d8cd9401c354f5ff653b1 = NULL;

    assertFrameObject(frame_f0e3cb79a84d8cd9401c354f5ff653b1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_23__validate_conn);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_24_connection_from_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    PyObject *par_kw = python_pars[1];
    PyObject *var_scheme = NULL;
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_963eacc630dc46cf44df967a9b0cfd30;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_963eacc630dc46cf44df967a9b0cfd30 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_963eacc630dc46cf44df967a9b0cfd30, codeobj_963eacc630dc46cf44df967a9b0cfd30, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_963eacc630dc46cf44df967a9b0cfd30 = cache_frame_963eacc630dc46cf44df967a9b0cfd30;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_963eacc630dc46cf44df967a9b0cfd30);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_963eacc630dc46cf44df967a9b0cfd30) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_get_host);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_get_host);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28809 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 870;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        frame_963eacc630dc46cf44df967a9b0cfd30->m_frame.f_lineno = 870;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 870;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 870;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 870;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 870;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 870;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL)
            {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration))
                {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 870;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format(PyExc_ValueError, "too many values to unpack");
#else
            PyErr_Format(PyExc_ValueError, "too many values to unpack (expected 3)");
#endif
            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            type_description_1 = "ooooo";
            exception_lineno = 870;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_scheme == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_scheme = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_host == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_host = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_port == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_port = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_8;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(var_port);
        tmp_or_left_value_1 = var_port;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 871;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_port_by_scheme);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_port_by_scheme);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28235 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 871;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT(var_scheme);
        tmp_args_element_name_2 = var_scheme;
        tmp_args_element_name_3 = const_int_pos_80;
        frame_963eacc630dc46cf44df967a9b0cfd30->m_frame.f_lineno = 871;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_or_right_value_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_get, call_args);
        }

        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 871;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assign_source_8 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = var_port;
            assert(old != NULL);
            var_port = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_scheme);
        tmp_compexpr_left_1 = var_scheme;
        tmp_compexpr_right_1 = const_str_plain_https;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 872;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dircall_arg4_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 29025 ], 41, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 873;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_1 = tmp_mvar_value_3;
            CHECK_OBJECT(var_host);
            tmp_tuple_element_1 = var_host;
            tmp_dircall_arg2_1 = PyTuple_New(1);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
            tmp_dict_key_1 = const_str_plain_port;
            CHECK_OBJECT(var_port);
            tmp_dict_value_1 = var_port;
            tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(par_kw);
            tmp_dircall_arg4_1 = par_kw;
            Py_INCREF(tmp_dircall_arg1_1);
            Py_INCREF(tmp_dircall_arg4_1);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict(dir_call_args);
            }
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 873;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_dircall_arg1_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_dircall_arg2_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dircall_arg4_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28985 ], 40, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 875;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_2 = tmp_mvar_value_4;
            CHECK_OBJECT(var_host);
            tmp_tuple_element_2 = var_host;
            tmp_dircall_arg2_2 = PyTuple_New(1);
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_dircall_arg2_2, 0, tmp_tuple_element_2);
            tmp_dict_key_2 = const_str_plain_port;
            CHECK_OBJECT(var_port);
            tmp_dict_value_2 = var_port;
            tmp_dircall_arg3_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(par_kw);
            tmp_dircall_arg4_2 = par_kw;
            Py_INCREF(tmp_dircall_arg1_2);
            Py_INCREF(tmp_dircall_arg4_2);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
                tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict(dir_call_args);
            }
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 875;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_963eacc630dc46cf44df967a9b0cfd30);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_963eacc630dc46cf44df967a9b0cfd30);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_963eacc630dc46cf44df967a9b0cfd30);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_963eacc630dc46cf44df967a9b0cfd30, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_963eacc630dc46cf44df967a9b0cfd30->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_963eacc630dc46cf44df967a9b0cfd30, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_963eacc630dc46cf44df967a9b0cfd30,
        type_description_1,
        par_url,
        par_kw,
        var_scheme,
        var_host,
        var_port
    );


    // Release cached frame.
    if (frame_963eacc630dc46cf44df967a9b0cfd30 == cache_frame_963eacc630dc46cf44df967a9b0cfd30) {
        Py_DECREF(frame_963eacc630dc46cf44df967a9b0cfd30);
    }
    cache_frame_963eacc630dc46cf44df967a9b0cfd30 = NULL;

    assertFrameObject(frame_963eacc630dc46cf44df967a9b0cfd30);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_24_connection_from_url);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_scheme);
    Py_DECREF(var_scheme);
    var_scheme = NULL;

    CHECK_OBJECT((PyObject *)var_host);
    Py_DECREF(var_host);
    var_host = NULL;

    CHECK_OBJECT((PyObject *)var_port);
    Py_DECREF(var_port);
    var_port = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_scheme);
    var_scheme = NULL;

    Py_XDECREF(var_host);
    var_host = NULL;

    Py_XDECREF(var_port);
    var_port = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_24_connection_from_url);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$connectionpool$$$function_25__ipv6_host(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_host = python_pars[0];
    PyObject *par_scheme = python_pars[1];
    struct Nuitka_FrameObject *frame_9d051d1871d257fb8f44e43d5e0e4b87;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9d051d1871d257fb8f44e43d5e0e4b87 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_9d051d1871d257fb8f44e43d5e0e4b87, codeobj_9d051d1871d257fb8f44e43d5e0e4b87, module_urllib3$connectionpool, sizeof(void *)+sizeof(void *));
    frame_9d051d1871d257fb8f44e43d5e0e4b87 = cache_frame_9d051d1871d257fb8f44e43d5e0e4b87;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9d051d1871d257fb8f44e43d5e0e4b87);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9d051d1871d257fb8f44e43d5e0e4b87) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_host);
        tmp_called_instance_1 = par_host;
        frame_9d051d1871d257fb8f44e43d5e0e4b87->m_frame.f_lineno = 892;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_chr_91_tuple, 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 892;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 892;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_host);
        tmp_called_instance_2 = par_host;
        frame_9d051d1871d257fb8f44e43d5e0e4b87->m_frame.f_lineno = 892;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_endswith, &PyTuple_GET_ITEM(const_tuple_str_chr_93_tuple, 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 892;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 892;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_2);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT(par_host);
            tmp_called_instance_4 = par_host;
            frame_9d051d1871d257fb8f44e43d5e0e4b87->m_frame.f_lineno = 893;
            tmp_called_instance_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, const_str_plain_replace, &PyTuple_GET_ITEM(const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_str_chr_37_tuple, 0));

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 893;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_9d051d1871d257fb8f44e43d5e0e4b87->m_frame.f_lineno = 893;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_strip, &PyTuple_GET_ITEM(const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple, 0));

            Py_DECREF(tmp_called_instance_3);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 893;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_host;
                assert(old != NULL);
                par_host = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_scheme);
        tmp_compexpr_left_1 = par_scheme;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_NORMALIZABLE_SCHEMES);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NORMALIZABLE_SCHEMES);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 29110 ], 42, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 894;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_5;
            CHECK_OBJECT(par_host);
            tmp_called_instance_5 = par_host;
            frame_9d051d1871d257fb8f44e43d5e0e4b87->m_frame.f_lineno = 895;
            tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, const_str_plain_lower);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 895;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_host;
                assert(old != NULL);
                par_host = tmp_assign_source_2;
                Py_DECREF(old);
            }

        }
        branch_no_2:;
    }
    if (par_host == NULL) {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF(exception_type);
        exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "host");
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 896;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_host;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d051d1871d257fb8f44e43d5e0e4b87);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d051d1871d257fb8f44e43d5e0e4b87);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d051d1871d257fb8f44e43d5e0e4b87);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9d051d1871d257fb8f44e43d5e0e4b87, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_9d051d1871d257fb8f44e43d5e0e4b87->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d051d1871d257fb8f44e43d5e0e4b87, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d051d1871d257fb8f44e43d5e0e4b87,
        type_description_1,
        par_host,
        par_scheme
    );


    // Release cached frame.
    if (frame_9d051d1871d257fb8f44e43d5e0e4b87 == cache_frame_9d051d1871d257fb8f44e43d5e0e4b87) {
        Py_DECREF(frame_9d051d1871d257fb8f44e43d5e0e4b87);
    }
    cache_frame_9d051d1871d257fb8f44e43d5e0e4b87 = NULL;

    assertFrameObject(frame_9d051d1871d257fb8f44e43d5e0e4b87);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_25__ipv6_host);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_host);
    par_host = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_host);
    par_host = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$connectionpool$$$function_25__ipv6_host);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_10__validate_conn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain__validate_conn,
#if PYTHON_VERSION >= 300
        const_str_digest_9a7a0e57661a036d7bdd6ad9ff0a3de3,
#endif
        codeobj_1de7001c6db8d0f267eb6d0b76b0ae54,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_14bc662b49a023ba3c0202d6d37a96d4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_11__prepare_proxy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain__prepare_proxy,
#if PYTHON_VERSION >= 300
        const_str_digest_55306dc6d4b249602e9cb0e226abc21d,
#endif
        codeobj_8168152dcc9a3b2cc722f7421533f175,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_12__get_timeout() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_12__get_timeout,
        const_str_plain__get_timeout,
#if PYTHON_VERSION >= 300
        const_str_digest_fc56b82c6ed9045af311170020fca29b,
#endif
        codeobj_a775252f1ee9f16e33e31fc900ddb8a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_bcdf6c34bab72e853b582d160e30d3e7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_13__raise_timeout() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_13__raise_timeout,
        const_str_plain__raise_timeout,
#if PYTHON_VERSION >= 300
        const_str_digest_a5652cafe0645a55fe665c3a3e38d0e8,
#endif
        codeobj_84202084f6b0dac4a33b4001af9b4257,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_6b9fb9d727a1559a5afa4c31dc745241,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_14__make_request(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_14__make_request,
        const_str_plain__make_request,
#if PYTHON_VERSION >= 300
        const_str_digest_b596bee7f4c8cc1960a8eba47c61ba85,
#endif
        codeobj_4fe5abdee9942a12260ac32fdfceb18d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_1dcbca3896fd915bab2f685d807203b2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_15__absolute_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_15__absolute_url,
        const_str_plain__absolute_url,
#if PYTHON_VERSION >= 300
        const_str_digest_cb4a33648e9b9699965ebd0c6659f9ef,
#endif
        codeobj_05b57c3a5543c1ddfc8b76e0167a3412,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_16_close() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_16_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_c06078c287e9f57036e253b5390de7f4,
#endif
        codeobj_c9757774cd46caf1ae5e486991d10831,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_d9281b7dcfb24131e3ae4fceb3078498,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_17_is_same_host() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_17_is_same_host,
        const_str_plain_is_same_host,
#if PYTHON_VERSION >= 300
        const_str_digest_01ebf06a56f8ad41a060540a1af4821d,
#endif
        codeobj_4c8430611604f98c3f9235af1f87d49f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_2321731f803302f80daad08b6956cd60,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_18_urlopen(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_18_urlopen,
        const_str_plain_urlopen,
#if PYTHON_VERSION >= 300
        const_str_digest_d2df5c2d53cc11e04bba15a836d74a20,
#endif
        codeobj_b41a00b264844cbec486aceca4e29341,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_13f783975bb6992a6b65cfc4fb38b8f8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_18_urlopen$$$function_1_drain_and_release_conn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_18_urlopen$$$function_1_drain_and_release_conn,
        const_str_plain_drain_and_release_conn,
#if PYTHON_VERSION >= 300
        const_str_digest_adfb45e557ac35c4a0e1c0c2876406a9,
#endif
        codeobj_d85917cf3b4c080b7737f28a3e0201d5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_19___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_37d86a20c01ce962675a6d1428924a32,
#endif
        codeobj_9563ee97d8024863b70f8cb63ecb7722,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_e1f773e4dbf5fdc604f0ef0fb6409e99,
#endif
        codeobj_1b45b0944aac75a5affb5cee849a67b6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_20__prepare_conn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_20__prepare_conn,
        const_str_plain__prepare_conn,
#if PYTHON_VERSION >= 300
        const_str_digest_72e4bc148f34ee877d0ccb44b1fa2560,
#endif
        codeobj_2f0ce2c5ba92c6ebbde828cb6d571c09,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_88dfc756b4bfd2f07f0ab2064a84bb3e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_21__prepare_proxy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_21__prepare_proxy,
        const_str_plain__prepare_proxy,
#if PYTHON_VERSION >= 300
        const_str_digest_9e60e8a4a3f600866c5b2083f278d57a,
#endif
        codeobj_526c39b3ed2036c63aba18f4ebc185aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_f5a21a78428dcfcf3566185f268acfbd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_22__new_conn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_22__new_conn,
        const_str_plain__new_conn,
#if PYTHON_VERSION >= 300
        const_str_digest_4eea8c9082b203b118b31282bad1c4ee,
#endif
        codeobj_91f6f833260fd2bfb9d1c4217293983d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_117e4c96fe42b3805876d95a8951796e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_23__validate_conn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_23__validate_conn,
        const_str_plain__validate_conn,
#if PYTHON_VERSION >= 300
        const_str_digest_9d3a414c0482c5f41418a69a56de9fd7,
#endif
        codeobj_f0e3cb79a84d8cd9401c354f5ff653b1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_14bc662b49a023ba3c0202d6d37a96d4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_24_connection_from_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_24_connection_from_url,
        const_str_plain_connection_from_url,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_963eacc630dc46cf44df967a9b0cfd30,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_ca4b1de09861756a93120b5022455aab,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_25__ipv6_host() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_25__ipv6_host,
        const_str_plain__ipv6_host,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9d051d1871d257fb8f44e43d5e0e4b87,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_f7c7365a5bf7b82017babf23765f0d85,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_2___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_2___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 300
        const_str_digest_60d6d474f3a386c88a168e05ca62b43f,
#endif
        codeobj_10f6b8f651f63ad86c011a7e5846c8fa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_3___enter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_3___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 300
        const_str_digest_d5ce309bb23bad4cf56bebbcfee2e1d4,
#endif
        codeobj_493050ca137994f4803596a37e49deb6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_4___exit__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_4___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 300
        const_str_digest_0c2cfd5e87a8ed7cf1566521e8239646,
#endif
        codeobj_ad0fa6acfbac38031cb6b65d63291ec2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_5_close() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_f4bfc452424dc866a47e0b4ba5b97c1a,
#endif
        codeobj_c30a8c717cd8f53416bd3277e1fb6166,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_d9281b7dcfb24131e3ae4fceb3078498,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_6___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_e49c4abd8cd8a855d785aa9a5398f4cd,
#endif
        codeobj_17376f914e4a68db3af9e1ff274067b8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_7__new_conn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_7__new_conn,
        const_str_plain__new_conn,
#if PYTHON_VERSION >= 300
        const_str_digest_52af1425a80510e5c4b27876b0697f6f,
#endif
        codeobj_1c50d287d28952d3b2b2469e7d0bc21e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_08b498a2fbcf598404c03ba5f0f37975,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_8__get_conn(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_8__get_conn,
        const_str_plain__get_conn,
#if PYTHON_VERSION >= 300
        const_str_digest_51da3aef5130704df904a62040b64827,
#endif
        codeobj_820e11c110e8251a54cf6b88af626d17,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_69830878ac943aed4542ec57af2bd361,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connectionpool$$$function_9__put_conn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connectionpool$$$function_9__put_conn,
        const_str_plain__put_conn,
#if PYTHON_VERSION >= 300
        const_str_digest_479a50a963c2a68d883c15108e7f5663,
#endif
        codeobj_173765dcd8acb4545c6be7ce439ab802,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connectionpool,
        const_str_digest_6a41fc7e3876db1877e8941a221b5ae9,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$connectionpool =
{
    PyModuleDef_HEAD_INIT,
    NULL,                /* m_name, filled later */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;
extern PyObject *const_str_empty;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_urllib3$connectionpool[] = {
    impl_urllib3$connectionpool$$$function_18_urlopen$$$function_1_drain_and_release_conn,
    impl_urllib3$connectionpool$$$function_1___init__,
    impl_urllib3$connectionpool$$$function_2___str__,
    impl_urllib3$connectionpool$$$function_3___enter__,
    impl_urllib3$connectionpool$$$function_4___exit__,
    NULL,
    impl_urllib3$connectionpool$$$function_6___init__,
    impl_urllib3$connectionpool$$$function_7__new_conn,
    impl_urllib3$connectionpool$$$function_8__get_conn,
    impl_urllib3$connectionpool$$$function_9__put_conn,
    NULL,
    NULL,
    impl_urllib3$connectionpool$$$function_12__get_timeout,
    impl_urllib3$connectionpool$$$function_13__raise_timeout,
    impl_urllib3$connectionpool$$$function_14__make_request,
    impl_urllib3$connectionpool$$$function_15__absolute_url,
    impl_urllib3$connectionpool$$$function_16_close,
    impl_urllib3$connectionpool$$$function_17_is_same_host,
    impl_urllib3$connectionpool$$$function_18_urlopen,
    impl_urllib3$connectionpool$$$function_19___init__,
    impl_urllib3$connectionpool$$$function_20__prepare_conn,
    impl_urllib3$connectionpool$$$function_21__prepare_proxy,
    impl_urllib3$connectionpool$$$function_22__new_conn,
    impl_urllib3$connectionpool$$$function_23__validate_conn,
    impl_urllib3$connectionpool$$$function_24_connection_from_url,
    impl_urllib3$connectionpool$$$function_25__ipv6_host,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyErr_Format(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_urllib3$connectionpool;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyErr_Format(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_urllib3$connectionpool) || offset < 0) {
        PyErr_Format(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    // TODO: More stuff needed for Python3, best to re-order arguments of MAKE_CODEOBJECT.
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_urllib3$connectionpool[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_urllib3$connectionpool,
        doc,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_urllib3$connectionpool(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_urllib3$connectionpool;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.connectionpool: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.connectionpool: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.connectionpool: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initurllib3$connectionpool\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$connectionpool = Py_InitModule4(
        module_full_name,        // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    mdef_urllib3$connectionpool.m_name = module_full_name;
    module_urllib3$connectionpool = PyModule_Create(&mdef_urllib3$connectionpool);
#endif

    moduledict_urllib3$connectionpool = MODULE_DICT(module_urllib3$connectionpool);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL)
        {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SetItem(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SetItem(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_urllib3$connectionpool,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$connectionpool,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$connectionpool,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$connectionpool,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$connectionpool,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$connectionpool);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_urllib3$connectionpool);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain___name__),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF(module_spec_class);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE(spec_value, const_str_plain_submodule_search_locations, PyList_New(0));
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    struct Nuitka_FrameObject *frame_29fda2310f99051f1437ad901f9c797d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_urllib3$connectionpool_55 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_a2f1f2201b470d1db4b4a92ad446bb24_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a2f1f2201b470d1db4b4a92ad446bb24_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_urllib3$connectionpool_95 = NULL;
    struct Nuitka_FrameObject *frame_e2f0475715b26c69ff5035643e3f51b1_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e2f0475715b26c69ff5035643e3f51b1_3 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_urllib3$connectionpool_736 = NULL;
    struct Nuitka_FrameObject *frame_100e2a9b240eded72bb4c595b0e38fc3_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_100e2a9b240eded72bb4c595b0e38fc3_4 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_81d52c974366d2180a5cc796a4468815;
        UPDATE_STRING_DICT0(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_29fda2310f99051f1437ad901f9c797d = MAKE_MODULE_FRAME(codeobj_29fda2310f99051f1437ad901f9c797d, module_urllib3$connectionpool);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_29fda2310f99051f1437ad901f9c797d);
    assert(Py_REFCNT(frame_29fda2310f99051f1437ad901f9c797d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_81d52c974366d2180a5cc796a4468815;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_absolute_import);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_errno;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_errno, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_logging;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_sys;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_warnings;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_socket;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_error_str_plain_timeout_tuple;
        tmp_level_name_5 = const_int_0;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 7;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_error);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SocketError, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_timeout);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SocketTimeout, tmp_assign_source_11);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_socket;
        tmp_globals_name_6 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 8;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_exceptions;
        tmp_globals_name_7 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_420ad8b9b6f04b7d4ca88d6a9d60a31c_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 11;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_ClosedPoolError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_ClosedPoolError);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ClosedPoolError, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_ProtocolError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_ProtocolError);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ProtocolError, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_EmptyPoolError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_EmptyPoolError);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_EmptyPoolError, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_HeaderParsingError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_HeaderParsingError);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HeaderParsingError, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_HostChangedError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_HostChangedError);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HostChangedError, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_LocationValueError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_LocationValueError);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_LocationValueError, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_MaxRetryError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_MaxRetryError);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_ProxyError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_ProxyError);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ProxyError, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
           tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_ReadTimeoutError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_ReadTimeoutError);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
           tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_SSLError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_SSLError);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
           tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_TimeoutError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_14, const_str_plain_TimeoutError);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_TimeoutError, tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
           tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_InsecureRequestWarning,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_15, const_str_plain_InsecureRequestWarning);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_InsecureRequestWarning, tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
           tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_NewConnectionError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_16, const_str_plain_NewConnectionError);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_NewConnectionError, tmp_assign_source_26);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_digest_0a2ea16757d4dad15d4c8e0ada40cd0c;
        tmp_globals_name_8 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_CertificateError_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 26;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
           tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_CertificateError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_17, const_str_plain_CertificateError);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_CertificateError, tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain_packages;
        tmp_globals_name_9 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_six_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 27;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
           tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_six,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_18, const_str_plain_six);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_digest_2833c2e99385c7d1c67d0068a26ec387;
        tmp_globals_name_10 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_queue_tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 28;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
           tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_queue,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_19, const_str_plain_queue);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_queue, tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_connection;
        tmp_globals_name_11 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_44e79a20b505cc887c3a922e666b934c_tuple;
        tmp_level_name_11 = const_int_pos_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 29;
        tmp_assign_source_30 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_20 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
           tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_port_by_scheme,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_20, const_str_plain_port_by_scheme);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_port_by_scheme, tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_21 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
           tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_DummyConnection,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_21, const_str_plain_DummyConnection);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_DummyConnection, tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_22 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
           tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_HTTPConnection,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_22, const_str_plain_HTTPConnection);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPConnection, tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_23 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
           tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_HTTPSConnection,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_23, const_str_plain_HTTPSConnection);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPSConnection, tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_24 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
           tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_VerifiedHTTPSConnection,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_24, const_str_plain_VerifiedHTTPSConnection);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_VerifiedHTTPSConnection, tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_25 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
           tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_HTTPException,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_25, const_str_plain_HTTPException);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPException, tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_26 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
           tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_BaseSSLError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_26, const_str_plain_BaseSSLError);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_BaseSSLError, tmp_assign_source_37);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT((PyObject *)tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_plain_request;
        tmp_globals_name_12 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_str_plain_RequestMethods_tuple;
        tmp_level_name_12 = const_int_pos_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 35;
        tmp_import_name_from_27 = IMPORT_MODULE5(tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12);
        if (tmp_import_name_from_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_27)) {
           tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_RequestMethods,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_27, const_str_plain_RequestMethods);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_RequestMethods, tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = const_str_plain_response;
        tmp_globals_name_13 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_13 = Py_None;
        tmp_fromlist_name_13 = const_tuple_str_plain_HTTPResponse_tuple;
        tmp_level_name_13 = const_int_pos_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 36;
        tmp_import_name_from_28 = IMPORT_MODULE5(tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13);
        if (tmp_import_name_from_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
           tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_HTTPResponse,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_28, const_str_plain_HTTPResponse);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPResponse, tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_name_14;
        PyObject *tmp_locals_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = const_str_digest_77799d2fef7894b65fb30e7df14c6471;
        tmp_globals_name_14 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_14 = Py_None;
        tmp_fromlist_name_14 = const_tuple_str_plain_is_connection_dropped_tuple;
        tmp_level_name_14 = const_int_pos_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 38;
        tmp_import_name_from_29 = IMPORT_MODULE5(tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14);
        if (tmp_import_name_from_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_29)) {
           tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_is_connection_dropped,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_29, const_str_plain_is_connection_dropped);
        }

        Py_DECREF(tmp_import_name_from_29);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_is_connection_dropped, tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_30;
        PyObject *tmp_name_name_15;
        PyObject *tmp_globals_name_15;
        PyObject *tmp_locals_name_15;
        PyObject *tmp_fromlist_name_15;
        PyObject *tmp_level_name_15;
        tmp_name_name_15 = const_str_digest_eec49d283d20cbc4ed650539d1524272;
        tmp_globals_name_15 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_15 = Py_None;
        tmp_fromlist_name_15 = const_tuple_str_plain_set_file_position_tuple;
        tmp_level_name_15 = const_int_pos_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 39;
        tmp_import_name_from_30 = IMPORT_MODULE5(tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15);
        if (tmp_import_name_from_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_30)) {
           tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_set_file_position,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_30, const_str_plain_set_file_position);
        }

        Py_DECREF(tmp_import_name_from_30);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_set_file_position, tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_31;
        PyObject *tmp_name_name_16;
        PyObject *tmp_globals_name_16;
        PyObject *tmp_locals_name_16;
        PyObject *tmp_fromlist_name_16;
        PyObject *tmp_level_name_16;
        tmp_name_name_16 = const_str_digest_c1505752b742bcc86d58c19fdc1683b9;
        tmp_globals_name_16 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_16 = Py_None;
        tmp_fromlist_name_16 = const_tuple_str_plain_assert_header_parsing_tuple;
        tmp_level_name_16 = const_int_pos_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 40;
        tmp_import_name_from_31 = IMPORT_MODULE5(tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16);
        if (tmp_import_name_from_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_31)) {
           tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_assert_header_parsing,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_31, const_str_plain_assert_header_parsing);
        }

        Py_DECREF(tmp_import_name_from_31);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_assert_header_parsing, tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_name_17;
        PyObject *tmp_globals_name_17;
        PyObject *tmp_locals_name_17;
        PyObject *tmp_fromlist_name_17;
        PyObject *tmp_level_name_17;
        tmp_name_name_17 = const_str_digest_e68800bfc0da117494aca4ca9d48e152;
        tmp_globals_name_17 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_17 = Py_None;
        tmp_fromlist_name_17 = const_tuple_str_plain_Retry_tuple;
        tmp_level_name_17 = const_int_pos_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 41;
        tmp_import_name_from_32 = IMPORT_MODULE5(tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17);
        if (tmp_import_name_from_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_32)) {
           tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_Retry,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_32, const_str_plain_Retry);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_33;
        PyObject *tmp_name_name_18;
        PyObject *tmp_globals_name_18;
        PyObject *tmp_locals_name_18;
        PyObject *tmp_fromlist_name_18;
        PyObject *tmp_level_name_18;
        tmp_name_name_18 = const_str_digest_522bfd5e75e11cb6ec433673b0570303;
        tmp_globals_name_18 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_18 = Py_None;
        tmp_fromlist_name_18 = const_tuple_str_plain_Timeout_tuple;
        tmp_level_name_18 = const_int_pos_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 42;
        tmp_import_name_from_33 = IMPORT_MODULE5(tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18);
        if (tmp_import_name_from_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_33)) {
           tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_Timeout,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_33, const_str_plain_Timeout);
        }

        Py_DECREF(tmp_import_name_from_33);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_name_name_19;
        PyObject *tmp_globals_name_19;
        PyObject *tmp_locals_name_19;
        PyObject *tmp_fromlist_name_19;
        PyObject *tmp_level_name_19;
        tmp_name_name_19 = const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
        tmp_globals_name_19 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_19 = Py_None;
        tmp_fromlist_name_19 = const_tuple_d90051f396eaccb5c2195e8723541608_tuple;
        tmp_level_name_19 = const_int_pos_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 43;
        tmp_assign_source_45 = IMPORT_MODULE5(tmp_name_name_19, tmp_globals_name_19, tmp_locals_name_19, tmp_fromlist_name_19, tmp_level_name_19);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_45;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_34 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
           tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_get_host,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_46 = IMPORT_NAME(tmp_import_name_from_34, const_str_plain_get_host);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_get_host, tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_35 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
           tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_Url,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_35, const_str_plain_Url);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_Url, tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_36 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_36)) {
           tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_NORMALIZABLE_SCHEMES,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_36, const_str_plain_NORMALIZABLE_SCHEMES);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_NORMALIZABLE_SCHEMES, tmp_assign_source_48);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT((PyObject *)tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_37;
        PyObject *tmp_name_name_20;
        PyObject *tmp_globals_name_20;
        PyObject *tmp_locals_name_20;
        PyObject *tmp_fromlist_name_20;
        PyObject *tmp_level_name_20;
        tmp_name_name_20 = const_str_digest_fb411743bd99f3164fec2d8ab3847fff;
        tmp_globals_name_20 = (PyObject *)moduledict_urllib3$connectionpool;
        tmp_locals_name_20 = Py_None;
        tmp_fromlist_name_20 = const_tuple_str_plain_LifoQueue_tuple;
        tmp_level_name_20 = const_int_pos_1;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 44;
        tmp_import_name_from_37 = IMPORT_MODULE5(tmp_name_name_20, tmp_globals_name_20, tmp_locals_name_20, tmp_fromlist_name_20, tmp_level_name_20);
        if (tmp_import_name_from_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_37)) {
           tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_urllib3$connectionpool,
                const_str_plain_LifoQueue,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_49 = IMPORT_NAME(tmp_import_name_from_37, const_str_plain_LifoQueue);
        }

        Py_DECREF(tmp_import_name_from_37);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_LifoQueue, tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27560 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_moves);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_50 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_xrange);
        Py_DECREF(tmp_source_name_1);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 78 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 49;
        tmp_assign_source_51 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM(const_tuple_str_digest_81976bc4c798bb1e8cf8844e6ac708d0_tuple, 0));

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = (PyObject *)&PyBaseObject_Type;
        frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 51;
        tmp_assign_source_52 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain__Default, tmp_assign_source_52);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_53 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_1, tmp_key_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_5;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = const_str_plain_metaclass;
        tmp_metaclass_name_1 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_5;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_subscribed_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_55 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_55;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_3, tmp_key_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_5;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_source_name_3 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_3, const_str_plain___prepare__);
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_source_name_4 = tmp_class_creation_1__metaclass;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain___prepare__);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_5;
            }
            tmp_tuple_element_1 = const_str_plain_ConnectionPool;
            tmp_args_name_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 55;
            tmp_assign_source_56 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_1);
            if (tmp_assign_source_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_5;
            }
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_56;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_source_name_5 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr(tmp_source_name_5, const_str_plain___getitem__);
            tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_5;
            }
            tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_6;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT(tmp_class_creation_1__metaclass);
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 55;

                    goto try_except_handler_5;
                }
                tmp_right_name_1 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_2);
                CHECK_OBJECT(tmp_class_creation_1__prepared);
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_6 = BUILTIN_TYPE1(tmp_type_arg_2);
                assert(!(tmp_source_name_6 == NULL));
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain___name__);
                Py_DECREF(tmp_source_name_6);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_1);

                    exception_lineno = 55;

                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
                tmp_raise_value_1 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
                Py_DECREF(tmp_right_name_1);
                if (tmp_raise_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 55;

                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF(tmp_raise_type_1);
                exception_value = tmp_raise_value_1;
                exception_lineno = 55;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_5;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_57;
            tmp_assign_source_57 = PyDict_New();
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_57;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_urllib3$connectionpool_55 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_81976bc4c798bb1e8cf8844e6ac708d0;
        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_55, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_digest_4effec0fc506821ed32204e893615ea0;
        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_55, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain_ConnectionPool;
        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_55, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_a2f1f2201b470d1db4b4a92ad446bb24_2, codeobj_a2f1f2201b470d1db4b4a92ad446bb24, module_urllib3$connectionpool, sizeof(void *));
        frame_a2f1f2201b470d1db4b4a92ad446bb24_2 = cache_frame_a2f1f2201b470d1db4b4a92ad446bb24_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_a2f1f2201b470d1db4b4a92ad446bb24_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a2f1f2201b470d1db4b4a92ad446bb24_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_55, const_str_plain_scheme, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_mvar_value_5;
            tmp_dictset_value = PyObject_GetItem(locals_urllib3$connectionpool_55, const_str_plain_LifoQueue);

            if (tmp_dictset_value == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_LifoQueue);

                    if (unlikely(tmp_mvar_value_5 == NULL)) {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LifoQueue);
                    }

                    if (tmp_mvar_value_5 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 29152 ], 31, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 62;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }

                    tmp_dictset_value = tmp_mvar_value_5;
                    Py_INCREF(tmp_dictset_value);
                }
            }

            tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_55, const_str_plain_QueueCls, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_1);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_1___init__(tmp_defaults_1);



            tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_55, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_2___str__();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_55, const_str_plain___str__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_3___enter__();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_55, const_str_plain___enter__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_4___exit__();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_55, const_str_plain___exit__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_5_close();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_55, const_str_plain_close, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a2f1f2201b470d1db4b4a92ad446bb24_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a2f1f2201b470d1db4b4a92ad446bb24_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a2f1f2201b470d1db4b4a92ad446bb24_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_a2f1f2201b470d1db4b4a92ad446bb24_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a2f1f2201b470d1db4b4a92ad446bb24_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_a2f1f2201b470d1db4b4a92ad446bb24_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_a2f1f2201b470d1db4b4a92ad446bb24_2 == cache_frame_a2f1f2201b470d1db4b4a92ad446bb24_2) {
            Py_DECREF(frame_a2f1f2201b470d1db4b4a92ad446bb24_2);
        }
        cache_frame_a2f1f2201b470d1db4b4a92ad446bb24_2 = NULL;

        assertFrameObject(frame_a2f1f2201b470d1db4b4a92ad446bb24_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_7;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_7;
            }
            tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_55, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_7;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_ConnectionPool;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_urllib3$connectionpool_55;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 55;
            tmp_assign_source_59 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_7;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_59;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_58 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_58);
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$connectionpool);
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_urllib3$connectionpool_55);
        locals_urllib3$connectionpool_55 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_urllib3$connectionpool_55);
        locals_urllib3$connectionpool_55 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$connectionpool);
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT((PyObject *)outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(urllib3$connectionpool);
        return NULL;
        outline_exception_1:;
        exception_lineno = 55;
        goto try_except_handler_5;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ConnectionPool, tmp_assign_source_58);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT((PyObject *)tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_set_element_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_errno);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_errno);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10610 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_6;
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_EAGAIN);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_60 = PySet_New(NULL);
        assert(tmp_assign_source_60);
        tmp_res = PySet_Add(tmp_assign_source_60, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_1);
            Py_DECREF(tmp_assign_source_60);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_errno);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_errno);
        }

        if (tmp_mvar_value_7 == NULL) {
            Py_DECREF(tmp_assign_source_60);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10610 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_7;
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_EWOULDBLOCK);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_60);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_60, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_60);
            Py_DECREF(tmp_set_element_1);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain__blocking_errnos, tmp_assign_source_60);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_ConnectionPool);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionPool);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28448 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;

            goto try_except_handler_8;
        }

        tmp_tuple_element_4 = tmp_mvar_value_8;
        tmp_assign_source_61 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_assign_source_61, 0, tmp_tuple_element_4);
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_RequestMethods);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestMethods);
        }

        if (tmp_mvar_value_9 == NULL) {
            Py_DECREF(tmp_assign_source_61);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28484 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;

            goto try_except_handler_8;
        }

        tmp_tuple_element_4 = tmp_mvar_value_9;
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_assign_source_61, 1, tmp_tuple_element_4);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_62 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_8;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM(tmp_dict_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_8;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_subscribed_name_2 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_8;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_8;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_64 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_64;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_6, tmp_key_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_8;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        branch_yes_5:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_8;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_source_name_9 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_9, const_str_plain___prepare__);
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_source_name_10 = tmp_class_creation_2__metaclass;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain___prepare__);
            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto try_except_handler_8;
            }
            tmp_tuple_element_5 = const_str_plain_HTTPConnectionPool;
            tmp_args_name_3 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_5 = tmp_class_creation_2__bases;
            Py_INCREF(tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 95;
            tmp_assign_source_65 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_name_3);
            if (tmp_assign_source_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto try_except_handler_8;
            }
            assert(tmp_class_creation_2__prepared == NULL);
            tmp_class_creation_2__prepared = tmp_assign_source_65;
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_source_name_11 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr(tmp_source_name_11, const_str_plain___getitem__);
            tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto try_except_handler_8;
            }
            tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_12;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT(tmp_class_creation_2__metaclass);
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;

                    goto try_except_handler_8;
                }
                tmp_right_name_2 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_6);
                CHECK_OBJECT(tmp_class_creation_2__prepared);
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_12 = BUILTIN_TYPE1(tmp_type_arg_4);
                assert(!(tmp_source_name_12 == NULL));
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain___name__);
                Py_DECREF(tmp_source_name_12);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_2);

                    exception_lineno = 95;

                    goto try_except_handler_8;
                }
                PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_6);
                tmp_raise_value_2 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
                Py_DECREF(tmp_right_name_2);
                if (tmp_raise_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;

                    goto try_except_handler_8;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF(tmp_raise_type_2);
                exception_value = tmp_raise_value_2;
                exception_lineno = 95;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_8;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_66;
            tmp_assign_source_66 = PyDict_New();
            assert(tmp_class_creation_2__prepared == NULL);
            tmp_class_creation_2__prepared = tmp_assign_source_66;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_67;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_urllib3$connectionpool_95 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_81976bc4c798bb1e8cf8844e6ac708d0;
        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_digest_16beb27e60f02808b94ac80fbe2859a0;
        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_plain_HTTPConnectionPool;
        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_10;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_e2f0475715b26c69ff5035643e3f51b1_3, codeobj_e2f0475715b26c69ff5035643e3f51b1, module_urllib3$connectionpool, sizeof(void *));
        frame_e2f0475715b26c69ff5035643e3f51b1_3 = cache_frame_e2f0475715b26c69ff5035643e3f51b1_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_e2f0475715b26c69ff5035643e3f51b1_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_e2f0475715b26c69ff5035643e3f51b1_3) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_plain_http;
        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain_scheme, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_mvar_value_10;
            tmp_dictset_value = PyObject_GetItem(locals_urllib3$connectionpool_95, const_str_plain_HTTPConnection);

            if (tmp_dictset_value == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPConnection);

                    if (unlikely(tmp_mvar_value_10 == NULL)) {
                        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnection);
                    }

                    if (tmp_mvar_value_10 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 27722 ], 36, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 156;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_dictset_value = tmp_mvar_value_10;
                    Py_INCREF(tmp_dictset_value);
                }
            }

            tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain_ConnectionCls, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_mvar_value_11;
            tmp_dictset_value = PyObject_GetItem(locals_urllib3$connectionpool_95, const_str_plain_HTTPResponse);

            if (tmp_dictset_value == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPResponse);

                    if (unlikely(tmp_mvar_value_11 == NULL)) {
                        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPResponse);
                    }

                    if (tmp_mvar_value_11 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 20473 ], 34, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 157;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_dictset_value = tmp_mvar_value_11;
                    Py_INCREF(tmp_dictset_value);
                }
            }

            tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain_ResponseCls, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_source_name_13;
            PyObject *tmp_mvar_value_12;
            tmp_tuple_element_7 = Py_None;
            tmp_defaults_2 = PyTuple_New(9);
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = Py_False;
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_defaults_2, 1, tmp_tuple_element_7);
            tmp_source_name_13 = PyObject_GetItem(locals_urllib3$connectionpool_95, const_str_plain_Timeout);

            if (tmp_source_name_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_Timeout);

                    if (unlikely(tmp_mvar_value_12 == NULL)) {
                        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout);
                    }

                    if (tmp_mvar_value_12 == NULL) {
                        Py_DECREF(tmp_defaults_2);
                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 22019 ], 29, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 160;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_source_name_13 = tmp_mvar_value_12;
                    Py_INCREF(tmp_source_name_13);
                }
            }

            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_DEFAULT_TIMEOUT);
            Py_DECREF(tmp_source_name_13);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_2);

                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            PyTuple_SET_ITEM(tmp_defaults_2, 2, tmp_tuple_element_7);
            tmp_tuple_element_7 = const_int_pos_1;
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_defaults_2, 3, tmp_tuple_element_7);
            tmp_tuple_element_7 = Py_False;
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_defaults_2, 4, tmp_tuple_element_7);
            tmp_tuple_element_7 = Py_None;
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_defaults_2, 5, tmp_tuple_element_7);
            tmp_tuple_element_7 = Py_None;
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_defaults_2, 6, tmp_tuple_element_7);
            tmp_tuple_element_7 = Py_None;
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_defaults_2, 7, tmp_tuple_element_7);
            tmp_tuple_element_7 = Py_None;
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_defaults_2, 8, tmp_tuple_element_7);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_6___init__(tmp_defaults_2);



            tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_7__new_conn();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain__new_conn, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_3);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_8__get_conn(tmp_defaults_3);



            tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain__get_conn, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_9__put_conn();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain__put_conn, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_10__validate_conn();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain__validate_conn, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_11__prepare_proxy();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain__prepare_proxy, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_12__get_timeout();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain__get_timeout, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_13__raise_timeout();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain__raise_timeout, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_mvar_value_13;
            tmp_tuple_element_8 = PyObject_GetItem(locals_urllib3$connectionpool_95, const_str_plain__Default);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain__Default);

                    if (unlikely(tmp_mvar_value_13 == NULL)) {
                        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__Default);
                    }

                    if (tmp_mvar_value_13 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 28599 ], 30, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 319;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_tuple_element_8 = tmp_mvar_value_13;
                    Py_INCREF(tmp_tuple_element_8);
                }
            }

            tmp_defaults_4 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_defaults_4, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = Py_False;
            Py_INCREF(tmp_tuple_element_8);
            PyTuple_SET_ITEM(tmp_defaults_4, 1, tmp_tuple_element_8);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_14__make_request(tmp_defaults_4);



            tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain__make_request, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_15__absolute_url();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain__absolute_url, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_16_close();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain_close, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_17_is_same_host();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain_is_same_host, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_mvar_value_14;
            tmp_tuple_element_9 = Py_None;
            tmp_defaults_5 = PyTuple_New(10);
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_defaults_5, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = Py_None;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_defaults_5, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = Py_None;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_defaults_5, 2, tmp_tuple_element_9);
            tmp_tuple_element_9 = Py_True;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_defaults_5, 3, tmp_tuple_element_9);
            tmp_tuple_element_9 = Py_True;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_defaults_5, 4, tmp_tuple_element_9);
            tmp_tuple_element_9 = PyObject_GetItem(locals_urllib3$connectionpool_95, const_str_plain__Default);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain__Default);

                    if (unlikely(tmp_mvar_value_14 == NULL)) {
                        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__Default);
                    }

                    if (tmp_mvar_value_14 == NULL) {
                        Py_DECREF(tmp_defaults_5);
                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 28599 ], 30, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 447;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_tuple_element_9 = tmp_mvar_value_14;
                    Py_INCREF(tmp_tuple_element_9);
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_5, 5, tmp_tuple_element_9);
            tmp_tuple_element_9 = Py_None;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_defaults_5, 6, tmp_tuple_element_9);
            tmp_tuple_element_9 = Py_None;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_defaults_5, 7, tmp_tuple_element_9);
            tmp_tuple_element_9 = Py_False;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_defaults_5, 8, tmp_tuple_element_9);
            tmp_tuple_element_9 = Py_None;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_defaults_5, 9, tmp_tuple_element_9);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_18_urlopen(tmp_defaults_5);



            tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain_urlopen, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e2f0475715b26c69ff5035643e3f51b1_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e2f0475715b26c69ff5035643e3f51b1_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e2f0475715b26c69ff5035643e3f51b1_3, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_e2f0475715b26c69ff5035643e3f51b1_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e2f0475715b26c69ff5035643e3f51b1_3, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_e2f0475715b26c69ff5035643e3f51b1_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if (frame_e2f0475715b26c69ff5035643e3f51b1_3 == cache_frame_e2f0475715b26c69ff5035643e3f51b1_3) {
            Py_DECREF(frame_e2f0475715b26c69ff5035643e3f51b1_3);
        }
        cache_frame_e2f0475715b26c69ff5035643e3f51b1_3 = NULL;

        assertFrameObject(frame_e2f0475715b26c69ff5035643e3f51b1_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_10;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_compexpr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto try_except_handler_10;
            }
            tmp_condition_result_12 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            branch_yes_8:;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_dictset_value = tmp_class_creation_2__bases_orig;
            tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_95, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto try_except_handler_10;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_10 = const_str_plain_HTTPConnectionPool;
            tmp_args_name_4 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_10);
            PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_10 = tmp_class_creation_2__bases;
            Py_INCREF(tmp_tuple_element_10);
            PyTuple_SET_ITEM(tmp_args_name_4, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_urllib3$connectionpool_95;
            Py_INCREF(tmp_tuple_element_10);
            PyTuple_SET_ITEM(tmp_args_name_4, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 95;
            tmp_assign_source_68 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto try_except_handler_10;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_68;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_67 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_67);
        goto try_return_handler_10;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$connectionpool);
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_urllib3$connectionpool_95);
        locals_urllib3$connectionpool_95 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_urllib3$connectionpool_95);
        locals_urllib3$connectionpool_95 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$connectionpool);
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT((PyObject *)outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(urllib3$connectionpool);
        return NULL;
        outline_exception_2:;
        exception_lineno = 95;
        goto try_except_handler_8;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool, tmp_assign_source_67);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT((PyObject *)tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_mvar_value_15;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool);
        }

        if (tmp_mvar_value_15 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28985 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 736;

            goto try_except_handler_11;
        }

        tmp_tuple_element_11 = tmp_mvar_value_15;
        tmp_assign_source_69 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_11);
        PyTuple_SET_ITEM(tmp_assign_source_69, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_70 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_7, tmp_key_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_11;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM(tmp_dict_name_8, tmp_key_name_8);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_11;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_11;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_subscribed_name_3 = tmp_class_creation_3__bases;
        tmp_subscript_name_3 = const_int_0;
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_3, tmp_subscript_name_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_11;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_11;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_3);
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_72 = SELECT_METACLASS(tmp_metaclass_name_3, tmp_bases_name_3);
        Py_DECREF(tmp_metaclass_name_3);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_72;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        tmp_key_name_9 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_9, tmp_key_name_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_11;
        }
        tmp_condition_result_15 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_11;
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_source_name_14;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_source_name_14 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_14, const_str_plain___prepare__);
        tmp_condition_result_16 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_73;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_15;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_source_name_15 = tmp_class_creation_3__metaclass;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain___prepare__);
            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 736;

                goto try_except_handler_11;
            }
            tmp_tuple_element_12 = const_str_plain_HTTPSConnectionPool;
            tmp_args_name_5 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_12);
            PyTuple_SET_ITEM(tmp_args_name_5, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            Py_INCREF(tmp_tuple_element_12);
            PyTuple_SET_ITEM(tmp_args_name_5, 1, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 736;
            tmp_assign_source_73 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_5, tmp_kw_name_5);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_name_5);
            if (tmp_assign_source_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 736;

                goto try_except_handler_11;
            }
            assert(tmp_class_creation_3__prepared == NULL);
            tmp_class_creation_3__prepared = tmp_assign_source_73;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_16;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_source_name_16 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr(tmp_source_name_16, const_str_plain___getitem__);
            tmp_operand_name_3 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 736;

                goto try_except_handler_11;
            }
            tmp_condition_result_17 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_17;
                PyObject *tmp_type_arg_6;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT(tmp_class_creation_3__metaclass);
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 736;

                    goto try_except_handler_11;
                }
                tmp_right_name_3 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_13);
                CHECK_OBJECT(tmp_class_creation_3__prepared);
                tmp_type_arg_6 = tmp_class_creation_3__prepared;
                tmp_source_name_17 = BUILTIN_TYPE1(tmp_type_arg_6);
                assert(!(tmp_source_name_17 == NULL));
                tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain___name__);
                Py_DECREF(tmp_source_name_17);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_3);

                    exception_lineno = 736;

                    goto try_except_handler_11;
                }
                PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_13);
                tmp_raise_value_3 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
                Py_DECREF(tmp_right_name_3);
                if (tmp_raise_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 736;

                    goto try_except_handler_11;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF(tmp_raise_type_3);
                exception_value = tmp_raise_value_3;
                exception_lineno = 736;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_11;
            }
            branch_no_11:;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            PyObject *tmp_assign_source_74;
            tmp_assign_source_74 = PyDict_New();
            assert(tmp_class_creation_3__prepared == NULL);
            tmp_class_creation_3__prepared = tmp_assign_source_74;
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assign_source_75;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_urllib3$connectionpool_736 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_81976bc4c798bb1e8cf8844e6ac708d0;
        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_736, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_13;
        }
        tmp_dictset_value = const_str_digest_4c69f4e03625ce3d56a911e633943cd5;
        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_736, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_13;
        }
        tmp_dictset_value = const_str_plain_HTTPSConnectionPool;
        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_736, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_13;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_100e2a9b240eded72bb4c595b0e38fc3_4, codeobj_100e2a9b240eded72bb4c595b0e38fc3, module_urllib3$connectionpool, sizeof(void *));
        frame_100e2a9b240eded72bb4c595b0e38fc3_4 = cache_frame_100e2a9b240eded72bb4c595b0e38fc3_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_100e2a9b240eded72bb4c595b0e38fc3_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_100e2a9b240eded72bb4c595b0e38fc3_4) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_plain_https;
        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_736, const_str_plain_scheme, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 754;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_mvar_value_16;
            tmp_dictset_value = PyObject_GetItem(locals_urllib3$connectionpool_736, const_str_plain_HTTPSConnection);

            if (tmp_dictset_value == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPSConnection);

                    if (unlikely(tmp_mvar_value_16 == NULL)) {
                        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnection);
                    }

                    if (tmp_mvar_value_16 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 28297 ], 37, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 755;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }

                    tmp_dictset_value = tmp_mvar_value_16;
                    Py_INCREF(tmp_dictset_value);
                }
            }

            tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_736, const_str_plain_ConnectionCls, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 755;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_source_name_18;
            PyObject *tmp_mvar_value_17;
            tmp_tuple_element_14 = Py_None;
            tmp_defaults_6 = PyTuple_New(17);
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_False;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 1, tmp_tuple_element_14);
            tmp_source_name_18 = PyObject_GetItem(locals_urllib3$connectionpool_736, const_str_plain_Timeout);

            if (tmp_source_name_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_Timeout);

                    if (unlikely(tmp_mvar_value_17 == NULL)) {
                        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout);
                    }

                    if (tmp_mvar_value_17 == NULL) {
                        Py_DECREF(tmp_defaults_6);
                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 22019 ], 29, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 758;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }

                    tmp_source_name_18 = tmp_mvar_value_17;
                    Py_INCREF(tmp_source_name_18);
                }
            }

            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_DEFAULT_TIMEOUT);
            Py_DECREF(tmp_source_name_18);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_6);

                exception_lineno = 758;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            PyTuple_SET_ITEM(tmp_defaults_6, 2, tmp_tuple_element_14);
            tmp_tuple_element_14 = const_int_pos_1;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 3, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_False;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 4, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_None;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 5, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_None;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 6, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_None;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 7, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_None;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 8, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_None;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 9, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_None;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 10, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_None;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 11, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_None;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 12, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_None;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 13, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_None;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 14, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_None;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 15, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_None;
            Py_INCREF(tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_defaults_6, 16, tmp_tuple_element_14);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_19___init__(tmp_defaults_6);



            tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_736, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 757;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_20__prepare_conn();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_736, const_str_plain__prepare_conn, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 782;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_21__prepare_proxy();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_736, const_str_plain__prepare_proxy, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 799;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_22__new_conn();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_736, const_str_plain__new_conn, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 807;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connectionpool$$$function_23__validate_conn();



        tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_736, const_str_plain__validate_conn, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 831;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_100e2a9b240eded72bb4c595b0e38fc3_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_100e2a9b240eded72bb4c595b0e38fc3_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_100e2a9b240eded72bb4c595b0e38fc3_4, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_100e2a9b240eded72bb4c595b0e38fc3_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_100e2a9b240eded72bb4c595b0e38fc3_4, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_100e2a9b240eded72bb4c595b0e38fc3_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if (frame_100e2a9b240eded72bb4c595b0e38fc3_4 == cache_frame_100e2a9b240eded72bb4c595b0e38fc3_4) {
            Py_DECREF(frame_100e2a9b240eded72bb4c595b0e38fc3_4);
        }
        cache_frame_100e2a9b240eded72bb4c595b0e38fc3_4 = NULL;

        assertFrameObject(frame_100e2a9b240eded72bb4c595b0e38fc3_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_13;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_compexpr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_compexpr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 736;

                goto try_except_handler_13;
            }
            tmp_condition_result_18 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
            branch_yes_12:;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_dictset_value = tmp_class_creation_3__bases_orig;
            tmp_res = PyObject_SetItem(locals_urllib3$connectionpool_736, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 736;

                goto try_except_handler_13;
            }
            branch_no_12:;
        }
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_name_7 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_15 = const_str_plain_HTTPSConnectionPool;
            tmp_args_name_6 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_15);
            PyTuple_SET_ITEM(tmp_args_name_6, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_15 = tmp_class_creation_3__bases;
            Py_INCREF(tmp_tuple_element_15);
            PyTuple_SET_ITEM(tmp_args_name_6, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_urllib3$connectionpool_736;
            Py_INCREF(tmp_tuple_element_15);
            PyTuple_SET_ITEM(tmp_args_name_6, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_29fda2310f99051f1437ad901f9c797d->m_frame.f_lineno = 736;
            tmp_assign_source_76 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_6, tmp_kw_name_6);
            Py_DECREF(tmp_args_name_6);
            if (tmp_assign_source_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 736;

                goto try_except_handler_13;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_76;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_75 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_75);
        goto try_return_handler_13;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$connectionpool);
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_urllib3$connectionpool_736);
        locals_urllib3$connectionpool_736 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_urllib3$connectionpool_736);
        locals_urllib3$connectionpool_736 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$connectionpool);
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT((PyObject *)outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(urllib3$connectionpool);
        return NULL;
        outline_exception_3:;
        exception_lineno = 736;
        goto try_except_handler_11;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool, tmp_assign_source_75);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_29fda2310f99051f1437ad901f9c797d);
#endif
    popFrameStack();

    assertFrameObject(frame_29fda2310f99051f1437ad901f9c797d);

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_29fda2310f99051f1437ad901f9c797d);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_29fda2310f99051f1437ad901f9c797d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_29fda2310f99051f1437ad901f9c797d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29fda2310f99051f1437ad901f9c797d, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;
    CHECK_OBJECT((PyObject *)tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;

    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = MAKE_FUNCTION_urllib3$connectionpool$$$function_24_connection_from_url();



        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain_connection_from_url, tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = MAKE_FUNCTION_urllib3$connectionpool$$$function_25__ipv6_host();



        UPDATE_STRING_DICT1(moduledict_urllib3$connectionpool, (Nuitka_StringObject *)const_str_plain__ipv6_host, tmp_assign_source_78);
    }

    return module_urllib3$connectionpool;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
