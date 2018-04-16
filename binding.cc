#include <node.h>
#include <v8.h>
#include "platform_folders.h"

using namespace v8;

static const char *const UnknownFailure = "Unknown failure occurred.";

void getCache(const FunctionCallbackInfo <Value> &args) {
    Isolate *isolate = args.GetIsolate();
    HandleScope scope(isolate);
    try {
        std::string cacheDir = sago::getCacheDir();
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, cacheDir.c_str()));
    }
    catch (const std::exception &re) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, re.what()));
    }
    catch (...) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, UnknownFailure));
    }
}

void getConfig(const FunctionCallbackInfo <Value> &args) {
    Isolate *isolate = args.GetIsolate();
    HandleScope scope(isolate);
    try {
        std::string dir = sago::getConfigHome();
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, dir.c_str()));
    }
    catch (const std::exception &re) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, re.what()));
    }
    catch (...) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, UnknownFailure));
    }
}

void getData(const FunctionCallbackInfo <Value> &args) {
    Isolate *isolate = args.GetIsolate();
    HandleScope scope(isolate);
    try {
        std::string dir = sago::getDataHome();
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, dir.c_str()));
    }
    catch (const std::exception &re) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, re.what()));
    }
    catch (...) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, UnknownFailure));
    }
}

void getDesktop(const FunctionCallbackInfo <Value> &args) {
    Isolate *isolate = args.GetIsolate();
    HandleScope scope(isolate);
    sago::PlatformFolders p;
    try {
        std::string dir = p.getDesktopFolder();
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, dir.c_str()));
    }
    catch (const std::exception &re) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, re.what()));
    }
    catch (...) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, UnknownFailure));
    }
}

void getDocuments(const FunctionCallbackInfo <Value> &args) {
    Isolate *isolate = args.GetIsolate();
    HandleScope scope(isolate);
    try {
        sago::PlatformFolders p;
        std::string dir = p.getDocumentsFolder();
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, dir.c_str()));
    }
    catch (const std::exception &re) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, re.what()));
    }
    catch (...) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, UnknownFailure));
    }

}

void getDownloads(const FunctionCallbackInfo <Value> &args) {
    Isolate *isolate = args.GetIsolate();
    HandleScope scope(isolate);
    try {
        sago::PlatformFolders p;
        std::string dir = p.getDownloadFolder1();
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, dir.c_str()));
    }
    catch (const std::exception &re) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, re.what()));
    }
    catch (...) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, UnknownFailure));
    }

}

void getMusic(const FunctionCallbackInfo <Value> &args) {
    Isolate *isolate = args.GetIsolate();
    HandleScope scope(isolate);
    try {
        sago::PlatformFolders p;
        std::string dir = p.getMusicFolder();
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, dir.c_str()));
    }
    catch (const std::exception &re) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, re.what()));
    }
    catch (...) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, UnknownFailure));
    }
}


void getPictures(const FunctionCallbackInfo <Value> &args) {
    Isolate *isolate = args.GetIsolate();
    HandleScope scope(isolate);
    try {
        sago::PlatformFolders p;
        std::string dir = p.getPicturesFolder();
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, dir.c_str()));
    }
    catch (const std::exception &re) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, re.what()));
    }
    catch (...) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, UnknownFailure));
    }
}

void getSaveGames(const FunctionCallbackInfo <Value> &args) {
    Isolate *isolate = args.GetIsolate();
    HandleScope scope(isolate);
    try {
        sago::PlatformFolders p;
        std::string dir = p.getSaveGamesFolder1();
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, dir.c_str()));
    }
    catch (const std::exception &re) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, re.what()));
    }
    catch (...) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, UnknownFailure));
    }
}

void getVideos(const FunctionCallbackInfo <Value> &args) {
    Isolate *isolate = args.GetIsolate();
    HandleScope scope(isolate);
    try {
        sago::PlatformFolders p;
        std::string dir = p.getVideoFolder();
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, dir.c_str()));
    }
    catch (const std::exception &re) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, re.what()));
    }
    catch (...) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, UnknownFailure));
    }
}

void getHome(const FunctionCallbackInfo <Value> &args) {
    Isolate *isolate = args.GetIsolate();
    HandleScope scope(isolate);
    try {
        sago::PlatformFolders p;
        std::string dir = p.getHomeFolder();
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, dir.c_str()));
    }
    catch (const std::exception &re) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, re.what()));
    }
    catch (...) {
        *isolate->ThrowException(String::NewFromUtf8(isolate, UnknownFailure));
    }
}


void init(Local <Object> exports) {
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
