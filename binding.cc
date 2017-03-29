#include <node.h>
#include <v8.h>
#include "platform_folders.h"

void getCache(const v8::FunctionCallbackInfo<v8::Value>& args) {
	v8::Isolate* isolate = args.GetIsolate();
	v8::HandleScope scope(isolate);
	std::string cacheDir = sago::getCacheDir();
	args.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, cacheDir.c_str()));
}

void getConfig(const v8::FunctionCallbackInfo<v8::Value>& args) {
	v8::Isolate* isolate = args.GetIsolate();
	v8::HandleScope scope(isolate);
	std::string dir = sago::getConfigHome();
	args.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, dir.c_str()));
}

void getData(const v8::FunctionCallbackInfo<v8::Value>& args) {
	v8::Isolate* isolate = args.GetIsolate();
	v8::HandleScope scope(isolate);
	std::string dir = sago::getDataHome();
	args.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, dir.c_str()));
}

void getDesktop(const v8::FunctionCallbackInfo<v8::Value>& args) {
	v8::Isolate* isolate = args.GetIsolate();
	v8::HandleScope scope(isolate);
	sago::PlatformFolders p;
	std::string dir = p.getDesktopFolder();
	args.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, dir.c_str()));
}

void getDocuments(const v8::FunctionCallbackInfo<v8::Value>& args) {
	v8::Isolate* isolate = args.GetIsolate();
	v8::HandleScope scope(isolate);
	sago::PlatformFolders p;
	std::string dir = p.getDocumentsFolder();
	args.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, dir.c_str()));
}

void getDownloads(const v8::FunctionCallbackInfo<v8::Value>& args) {
	v8::Isolate* isolate = args.GetIsolate();
	v8::HandleScope scope(isolate);
	sago::PlatformFolders p;
	std::string dir = p.getDownloadFolder1();
	args.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, dir.c_str()));
}

void getMusic(const v8::FunctionCallbackInfo<v8::Value>& args) {
	v8::Isolate* isolate = args.GetIsolate();
	v8::HandleScope scope(isolate);
	sago::PlatformFolders p;
	std::string dir = p.getMusicFolder();
	args.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, dir.c_str()));
}


void getPictures(const v8::FunctionCallbackInfo<v8::Value>& args) {
	v8::Isolate* isolate = args.GetIsolate();
	v8::HandleScope scope(isolate);
	sago::PlatformFolders p;
	std::string dir = p.getPicturesFolder();
	args.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, dir.c_str()));
}

void getSaveGames(const v8::FunctionCallbackInfo<v8::Value>& args) {
	v8::Isolate* isolate = args.GetIsolate();
	v8::HandleScope scope(isolate);
	sago::PlatformFolders p;
	std::string dir = p.getSaveGamesFolder1();
	args.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, dir.c_str()));
}

void getVideos(const v8::FunctionCallbackInfo<v8::Value>& args) {
	v8::Isolate* isolate = args.GetIsolate();
	v8::HandleScope scope(isolate);
	sago::PlatformFolders p;
	std::string dir = p.getVideoFolder();
	args.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, dir.c_str()));
}

void getHome(const v8::FunctionCallbackInfo<v8::Value>& args) {
	v8::Isolate* isolate = args.GetIsolate();
	v8::HandleScope scope(isolate);
	sago::PlatformFolders p;
	std::string dir = p.getHomeFolder();
	args.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, dir.c_str()));
}


void init(v8::Local<v8::Object> exports) {
	NODE_SET_METHOD(exports, "getCacheDir", getCache);
	NODE_SET_METHOD(exports, "getConfigHome", getConfig);
	NODE_SET_METHOD(exports, "getDataHome", getData);
	NODE_SET_METHOD(exports, "getDesktopFolder", getDesktop);
	NODE_SET_METHOD(exports, "getDocumentsFolder", getDocuments);
	NODE_SET_METHOD(exports, "getDownloadsFolder", getDownloads);
	NODE_SET_METHOD(exports, "getMusicFolder", getMusic);
	NODE_SET_METHOD(exports, "getPicturesFolder", getPictures);
	NODE_SET_METHOD(exports, "getSaveGamesFolder", getSaveGames);
	NODE_SET_METHOD(exports, "getVideosFolder", getVideos);
	NODE_SET_METHOD(exports, "getHomeFolder", getHome);
}

NODE_MODULE(binding, init);
