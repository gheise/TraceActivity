#include <pgmspace.h>
#include "config.h"

// Amazon Root CA For All Devices
const char AWS_IOT_ENDPOINT[] = "a1gwewg8bajd3p-ats.iot.us-east-2.amazonaws.com";       //change this

static const char AWS_CERT_CA[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy
rqXRfboQnoZsG4q5WTP468SQvvG5
-----END CERTIFICATE-----
)EOF";

#if DEVICE_NUMBER == 2
 
#define SECRET
#define THINGNAME "ESP32"                         //change this
 
const char WIFI_SSID[] = "WhiteSky-Alight";               //change this
const char WIFI_PASSWORD[] = "cpw2es4n";           //change this
 
// Device Certificate                                               //change this
static const char AWS_CERT_CRT[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----
MIIDWTCCAkGgAwIBAgIUO7jCANvivMXCrk+V6uzxEgBwv7swDQYJKoZIhvcNAQEL
BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g
SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIyMDkyMTE5MjQx
MVoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0
ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALVWH16zT9jjFpbGbL+8
C+tIooaBOP6kCy2JeDQFpzuprTjmEvP58UybBsq4f7KiQeniW4SRUJDfZvv5RNjd
3rbYifoh54rqN+vguq0BHkPnsEBnTgQE0mKhP2G59AEyoT0GSSeqUnHdEYqoe1pc
IGEBQO8OzgXudfxOfJT4zRKxOHPJLqqpneA7wI9qaLwVOBmWshpaYzaDwKxgn/pL
6Akmg1Cplbe9VA/axHwGDGJ4zcFeQ6aRLe/9l3oDkarygsU915sHpn4XXX3kIDF0
kYW57kr5Wmdtg20VnOjX4S9EnlUkJytYVFTBVA+ReAUiPGjcq9QUmgXkTuASoygL
Be8CAwEAAaNgMF4wHwYDVR0jBBgwFoAUZiW5xkU6rUzI93/ncDC0f+fC4pIwHQYD
VR0OBBYEFKGcV48L9ztg3n/tWjJm2heTN7BgMAwGA1UdEwEB/wQCMAAwDgYDVR0P
AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQBIV9xXLeCWzH1wVxUp27JhPcjD
xDe/+U/k1wgHybUjSoRsOyDLbI2smE/XYQg3FqHvyibD8INU2DkqtY3YVjXyKuO1
UooC7XJjhd0o4I9wyx3DfIpTzC9b6kOgH7fjZGpBniYgvCZkFubP0FDV50Myx8Vs
JUjTnRQlVH10QJzy05HGWhqoiJrAOZAHujhSFR5kOmHrUXLA7bjSbQ/GAi0I9+XR
vHLFV4cA5YxIe1nmcx7vSr8WosGFMXf5y3yUblK75V3+IkX5R3Y4y7tcSSIfpIBE
npltfs+sExPc9kqIKT66xWiosiFcFFXItHm1sHLmhSCiKO0KG7lSswSXUREo
-----END CERTIFICATE-----
)KEY";
 
// Device Private Key                                               //change this
static const char AWS_CERT_PRIVATE[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
MIIEowIBAAKCAQEAtVYfXrNP2OMWlsZsv7wL60iihoE4/qQLLYl4NAWnO6mtOOYS
8/nxTJsGyrh/sqJB6eJbhJFQkN9m+/lE2N3ettiJ+iHniuo36+C6rQEeQ+ewQGdO
BATSYqE/Ybn0ATKhPQZJJ6pScd0Riqh7WlwgYQFA7w7OBe51/E58lPjNErE4c8ku
qqmd4DvAj2povBU4GZayGlpjNoPArGCf+kvoCSaDUKmVt71UD9rEfAYMYnjNwV5D
ppEt7/2XegORqvKCxT3XmwemfhddfeQgMXSRhbnuSvlaZ22DbRWc6NfhL0SeVSQn
K1hUVMFUD5F4BSI8aNyr1BSaBeRO4BKjKAsF7wIDAQABAoIBAQCca5HbyqlR2XGe
1cLxEXDmoF0x0T4syayqty5tEYNUP+Ugc7ZdpnizL/cH32an3Lcm3Q88p2zrywm2
ySrON3TqHJfIoH5uoeNjIRNmMNS+lpi+tV3isZYZZiaaUiFc9yOG1Gk+QfmkJqH/
DZ56L4Xup3ovvIGTNEOqRLnKd2POfoT5uDXh4vfg3L12BNmpFLdI8ZTrT5cFTSim
0PEGzcPS6JBEdu8Fovgorx1dZIEYoBCZSz4o5b0C2LYNAZkLfn7vFZDlWCX63JVh
6szN0qHyFmxo8uPyE4jXOPi3qNopNpROTsaIihC9qGZBMgWl+gBClI573gecvKah
ood1vhuBAoGBANxRRHlMMON9bwR+WyLEW+FsDAwsCETZ9YmfSPYoqIIQKDyiQkXD
+X3oMuJKq9dr2kJd+2Y4R8T8Ktx+fA8zDgr+g9GFOf3U8X37YP2iKrm4lUzrbYGm
JhdXzstbJ8bobnhoAhJzqFIFDiA/iyOTd4fL64xY7Uyyn/4eLh5dBfZRAoGBANK0
or4gZG7MauRykrBuTZ16AR769jeyz9T3RsJvvVM9dgdxIPYWf3exoXGmhWDm5DQ4
Ia0s6kS9mewGx4zXre9RsTPYW2/zkLTJWpWYumuWVF3ZM1uH86IobsJoWT1RNlfA
vaMTYERa2lQHj1QZkE3HgVbDD/S4DMgrlJiuOug/AoGAe1QKrpPV8iJvGObagVXF
0SQ4gj/LyS7xYb6GizUrTtNYksiJrKANc0ud4ErIcuhu3yPY7NmoYz59h7xOGfwM
al8azxhy5AJlxI4JNzGmFRychthrDl5BiGOg4PkABTprTH98WXPgzzkBNVAcxSdx
i9S84G2POJXtNcUTL/AGvGECgYAcYR4GU6CTV88R4+ikAMdNbZBXFuAw0lGx0nhi
WeB7JK0QBYm1+4PBoFgpUY9nZNHZwrGufH01MwBXTPZ1ntsbf7pJTFvMcVbNMs2T
lpWNRhso5MdJDb+f2KhKYPmcC6MxIJGqNELkEgSUCsygPC02fKeMAwvUHzIBh/Uk
t1rRywKBgDi+Iw9mdGp2B5/AzUgoQMxSAdH1FtGl7jL0ARZT9CJyV4DRyDiUayNZ
z16+OHCQvu4xPCFq+XJ1Yz+MCpqWspSQXP581AR/bF53PCdRztZGG4eFeoIqfGv3
S/RBFrJVQONDklM7sfguROul4F1zV2/1eB5XVAg8q2d+Heux7qyF
-----END RSA PRIVATE KEY-----
)KEY";

#elif DEVICE_NUMBER == 4
 
#define SECRET
#define THINGNAME "Trace1"                         //change this
 
const char WIFI_SSID[] = "2207";               //change this
const char WIFI_PASSWORD[] = "welovesteve";           //change this
 
// Device Certificate                                               //change this
static const char AWS_CERT_CRT[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----
MIIDWTCCAkGgAwIBAgIUMkI2ToHVmaiX1TQju3yV92rToEowDQYJKoZIhvcNAQEL
BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g
SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIyMTAyNzE2MTQx
NFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0
ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAL95pGHEe73v9eTmKk7Z
hf3MhG63dPCas4l/gTL2yeOzz9lSZznVQuzNkW6EhVUaw1/9SRNW6ilrFIhZhP7g
aVkcK1I/MkfQM/27hpcbdOU0Atsmb3c40V3/W9hINtQeJASMrJIHjZ8QcLmNz1tg
OImyZaeUSSsglfpHZXbvX2Ql6/231TgoOJ6N3EQFGVJ+O/cpDqQpRmAPt/MT9zYY
tV8n8mQsyUhXTLFk8CuHO4YpJhED8Z2iOxXg2SNXyUF61ci8ICbtSLXeSZ4CtSm9
pwRZhz7fZyMMZTXrH0jIrTuJ8ZIWvKVTLHHrntb2hq4OEpBGrOe9jv4Wwg8vII9H
UD8CAwEAAaNgMF4wHwYDVR0jBBgwFoAU6tONV0uwu3cNCl9B8M/x12q06iUwHQYD
VR0OBBYEFJLMZBb5JwHqcst/46jTNmasLjiaMAwGA1UdEwEB/wQCMAAwDgYDVR0P
AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQBC919XzHcf419zz/sDd3sTlnej
kb53iJ0iX/7WhmhVHwNG3+M8s4jQ/Lr9aeCrZPCdNLSoOb6NWJzcpvmDo+GMIxCp
Qg6pSiPy3CDOUUyxtFTMSfxCqhmgeZLi2fzXvVYzVncmxBJFSUUhYIewA1w/Klss
XR2wmaEg30kqOiT/0ssoiagChXOM4HGojl5k/XBbnvrRuBrCfmTHyx/Q3Y1KY+w7
NP2WMjHYb4OXKiLSOhjIfYzWARkuWPSj7ubgCcHD3dc1gLhhvj1n9o2QenfG5P8M
YMEyttySBKhMiL3ygPL141Vmc0H8US3KgZEFULPY9fZtW9ZVfR2WgiqhDYpY
-----END CERTIFICATE-----
)KEY";
 
// Device Private Key                                               //change this
static const char AWS_CERT_PRIVATE[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
MIIEpAIBAAKCAQEAv3mkYcR7ve/15OYqTtmF/cyEbrd08JqziX+BMvbJ47PP2VJn
OdVC7M2RboSFVRrDX/1JE1bqKWsUiFmE/uBpWRwrUj8yR9Az/buGlxt05TQC2yZv
dzjRXf9b2Eg21B4kBIyskgeNnxBwuY3PW2A4ibJlp5RJKyCV+kdldu9fZCXr/bfV
OCg4no3cRAUZUn479ykOpClGYA+38xP3Nhi1XyfyZCzJSFdMsWTwK4c7hikmEQPx
naI7FeDZI1fJQXrVyLwgJu1Itd5JngK1Kb2nBFmHPt9nIwxlNesfSMitO4nxkha8
pVMsceue1vaGrg4SkEas572O/hbCDy8gj0dQPwIDAQABAoIBAD6SmQaeODYM+hWQ
phjYezJCqLCp4VxTogJ4GZe3EKkJ9Q23ISbEK7fJQhKU2iHCukBfPIdGawWYCcC5
SH4mhibpzrp1DpBrWOI9azFsdpoEkj5d5CVY+wq1zaTzjH9rTifydN7P+xcVP1FU
J4RcAH33P8Mw8WxXnMuKk3z3ovvN28roypF2R4hy6t6XA7AybmmAIKZ20zIMJcCL
d/7YkFdGrTIprc4RtfAlUYzYCyYJcgYudIVBWd3k7x7ODhKjsXdWGwOq6tcdUtYn
hDNqDDQtdMChOgzO3a+SbqQdUJyp27qGtT28AlV1fV4x8IP/sd8PDycm/e78wNEX
S0VTNkECgYEA6qjKpeWcXM3/ekFozTGjBY6lXs+voHBfxI4qN58S4zV+Ej3ykkht
AFZl/FvrrNITessE4hwjECuCrSbJsuik02awgYRNmw+viIH36FwrlRKbBJPruccd
giIGYbyEhuQjXI8Fy+rIfIbJx9nGad4WKDc/+UetgTBe8gWOoy1qXB8CgYEA0ON1
4xIJgopBJmHIXX5jVt+uOefGF6v4Aa6NuhBXGZWl2ouUVG5nWgsiUDf2l63l1Phq
MzB64w/2enMwCqYIMv74mRqJzEvsMy819V9raxN3zvzIfo/uI9iwNDM0O0J3Fau4
MPKQIxG7HeMBxhTNzl5Sfm5rbzvVe44HwqrIh+ECgYEA3xkDMZ6PfpxLXIx7ezrJ
5yqrhuyl6T9tjY4sDR2r82CUL/u9d95r43pBFCDAfFpuMrx6NA7UNzdm0gCimvoc
WvCytzB2KApNtNb8P2oB9YTu5PdNkh8Aqwx2TM3Sofycsg84T5s0aVAs31jpDxYa
srl0lSfUiZLXcfpelj1DdbkCgYAbYrbB3kuA4b9I2Oj72OYNLaYZ0VkXIWSSU+Ag
1KOWpxfnXwVDTHYgR/Vnru6VVCcdlLPXojN6MU2PICrcOog4p1TQPbpzHkEJNNdO
JARhNVwvttRSQ2xlJrNzJINkgYI7RRgQ0rwy3NA7StegsHmK5LLMAI31N1L1r9k0
nE9OAQKBgQCERcIboHipStenrkZzPJtLPHEULxDyhFUE8lbeIhc3lzG2HT8vfuHi
1Gdp0kWd5yJqNs0aHo13QpP4nIcrhnJbxdgZ0Mo9ZDMIf/oF7U+R2XbLIFRxsTUd
JZjPoS/ENXptJuc3r4QGP9OyC1II8lmlph2by9/8GslYPIfYkqLu8g==
-----END RSA PRIVATE KEY-----
)KEY";

#elif DEVICE_NUMBER == 6
 
#define SECRET
#define THINGNAME "Trace2"                         //change this
 
const char WIFI_SSID[] = "2207";               //change this
const char WIFI_PASSWORD[] = "welovesteve";           //change this
 
// Device Certificate                                               //change this
static const char AWS_CERT_CRT[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy
rqXRfboQnoZsG4q5WTP468SQvvG5
-----END CERTIFICATE-----
)KEY";
 
// Device Private Key                                               //change this
static const char AWS_CERT_PRIVATE[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
MIIEpAIBAAKCAQEA3aZkpapraFCpCYOBnRwwptj/1GNZMkzRXFgu3KJxHLjt250w
ASOeX5jAGsfUeBg1rH+Aj2sSDOMP6brysT+ebTHrik8qUezcxhtj0wm+/LPd5G76
8KsEFCES3qv1FuF4RXAPs+RcXhrPXspQHOnv6nU9OpePR3k24jngR2xjTgLs2xTU
dyldjtQ0WAbJK0pLF8dM5R8NcRrfViilswR5mqsEqk2dEVcfWFtDzRcxa6AlFvGJ
XJNYG2kp9pvAjTkH6wtJoEwYvMKQlMYcVN/3xxY4HDthXgkMoW5ywptG8shMRxSl
k9J1GELDbse5k8BnHUAJTQbikJL9GxACZfXPPwIDAQABAoIBAQDBRkW/O+KavLMZ
i6WrFRjLdK9oSRVPSjLJfk+mrrNJY2xtsxxX8fI40963u4ZnDl1HRIsbBDdiK2EF
47Gao6oG95+3JB73/z3oNZwPOxFiE4mqlqeU0tsknk5xAqsdv4/7pKLcr4VnvaMT
ugCvpcJBxOeWPvB+V5FnJSaPwVC6hSyxtWplbJskPQbe0B3736Dzw/3w5Qos0Ep4
Ao40U3vZUvzDLx8wOau9ZYtnD8E2Eyrt8IcuVoH8SSKjOSRv5iANLaMMKvo1uXt4
DI4FMgZNyhehAJDUZbbHrTXHY+4gesW25V2+W/XRTxlejle9wErqTPToh7KfcE5t
efREWhWxAoGBAPg+bSFXXI5dJBh7VTfmBkR4GO6wCj4oADHVvuwOf1d/Ayj9MOd3
xCVhv+fGysV1I82av8cv56/V4A3uKG7NyXMw/uj3YY9IbeXng/i12PUSf2ag5qRj
f10PNmM2Mo9zmgVlcekcPkqYO3gb8pofZuqAq0IE8PThXvVAjTvFHMoZAoGBAOST
QZgQLxKuXGtHSsKEA6daTNehI92W/qWrd4/aMB3/Hc2XYuCZR3MCIJhJdiqmYghX
nH2ePsFE5iA2ADPAb9GQWTP3jDvM8vSFmF9hlX5M7XwUr/VlVv4278rmNJfsFiu+
uIJQLUfQW8BA62mTJIeP0bN6r3NiWISq0GRTL78XAoGASr7ZMyHP35nR5YE1PpiH
KJSUxUHCQ8bdkCPQ0djnpNu8gtoBoKBiMfNFyi8EHQJRXnYK6pnVBA+839Tm3b4e
uw10o4bhHDhtxry38uomQlxoeelWqQbAca/D64mFHcZsCNXrv4neg61kspyPprJv
1Yoahs1gFAvMAMKIBAgsy/kCgYEAqEMOolYnkOTx+7b7fb2YwvViY8mnkVO6GVLk
LO09Rpeq5NFwZE3xnuQOAozxg+v/doyoEoEPSU7i6QtXksEyj15njC3K+aqhnwdJ
Z816MwOGPzUrYsY7B+CBHSfhx4RvvbwkLym+a4MiR6CCq7E5zuE8SZci2Rmod+EW
jwP9vfkCgYAQVHCEi9qSW9D83pwwxUBe00wrzqVt4b9N0TKllLFo1skotXruOzsM
q/FdZ5ZTW1or4d/jRslmGEGNAmIA5K6JfKQJDDMoqg78OV/sRIca04jCptev8sLp
Ah5nxesinp/aMXu+7FALFsqvSn/ZzRrkgb6fkzeZm3G6ecjJLQbrEg==
-----END RSA PRIVATE KEY-----
)KEY";

#endif