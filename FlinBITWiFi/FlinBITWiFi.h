//
// Serial
//

extern String SerialInputString;
extern bool SerialInputComplete;
bool SerialEvent();

//
// WiFi
//

#include <ESP8266WiFi.h>

extern char AP_SSID[];
extern char AP_Password[];
extern int AP_Channel;

extern IPAddress AP_IP;
extern IPAddress AP_Gateway;
extern IPAddress AP_Subnet;

//
// DNS
//

#include <DNSServer.h>

extern const uint16_t DNSPort;
extern DNSServer DNS;

//
// Web Server
//

#include <ESP8266WebServer.h>

extern const uint16_t ServerPort;
extern ESP8266WebServer Server;

void ServerHandleRequest();
void ServerSendFile(const String &path);
void ServerSendDirectory(const String &path);
void ServerStartLogging(String fname, const bool overwrite);
void ServerStopLoggin();

//
// Web Sockets
//

#include <WebSockets.h>
#include <WebSocketsServer.h>
#include <WebSocketsClient.h>

extern const uint16_t SocketPort;
extern WebSocketsServer Socket;

//
// SPIFFS
//

#include <FS.h>

extern File LogFile;
extern const String LogDir;

//
// Tokeniser
//

bool IsWhitespace(const char c);

struct tokeniser_t
{
    String _str = "";
    tokeniser_t(const String &str);
    String next();
    String nextLower();
};
