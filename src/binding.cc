#define NAPI_VERSION 4

#include <node_api.h>
#include "platform_folders.h"

static const char *const UnknownFailure = "Unknown failure occurred.";

napi_value toNapiValue(napi_env env, const std::string &result) {
    napi_value configHomeNapi;
    napi_status status;
    status = napi_create_string_utf8(env, result.c_str(), result.length(), &configHomeNapi);
    if (status != napi_ok) {
        napi_throw_error(env, nullptr, "Unable to create return value");
    }

    return configHomeNapi;
}

napi_value toNapiValue(napi_env env, const std::vector<std::string> &result) {
    napi_status status;
    napi_value value;
    status = napi_create_array(env, &value);
    for (uint32_t i = 0; i < result.size(); i++) {
        napi_value folderName;
        napi_create_string_utf8(env, result[i].c_str(), result[i].length(), &folderName);
        status = napi_set_element(env, value, i, folderName);
    }

    if (status != napi_ok) {
        napi_throw_error(env, nullptr, "Unable to create return value");
    }
    return value;
}


void HandleException(napi_env env) {
    try {
        throw;
    } catch (const std::exception &re) {
        napi_throw_error(env, nullptr, re.what());
    }
    catch (...) {
        napi_throw_error(env, nullptr, UnknownFailure);
    }
}

napi_value getCache(napi_env env, napi_callback_info info) {
    try {
        return toNapiValue(env, sago::getCacheDir());
    }
    catch (...) {
        HandleException(env);
    }
    return nullptr;
}


napi_value getConfig(napi_env env, napi_callback_info info) {
    try {
        return toNapiValue(env, sago::getConfigHome());
    }
    catch (...) {
        HandleException(env);
    }
    return nullptr;
}


napi_value getData(napi_env env, napi_callback_info info) {
    try {
        return toNapiValue(env, sago::getDataHome());
    }
    catch (...) {
        HandleException(env);
    }
    return nullptr;
}

napi_value getAdditionalDataDirectories(napi_env env, napi_callback_info info) {
    try {
        std::vector<std::string> folders;
        sago::appendAdditionalDataDirectories(folders);

        return toNapiValue(env, folders);
    } catch (...) {
        HandleException(env);
    }
    return nullptr;
}

napi_value getAdditionalConfigDirectories(napi_env env, napi_callback_info info) {
    try {
        std::vector<std::string> folders;
        sago::appendAdditionalConfigDirectories(folders);

        return toNapiValue(env, folders);
    } catch (...) {
        HandleException(env);
    }
    return nullptr;
}


napi_value getDesktop(napi_env env, napi_callback_info info) {
    try {
        sago::PlatformFolders p;
        return toNapiValue(env, p.getDesktopFolder());
    }
    catch (...) {
        HandleException(env);
    }
    return nullptr;
}

napi_value getDocuments(napi_env env, napi_callback_info info) {
    try {
        sago::PlatformFolders p;
        return toNapiValue(env, p.getDocumentsFolder());
    }
    catch (...) {
        HandleException(env);
    }
    return nullptr;
}

napi_value getDownloads(napi_env env, napi_callback_info info) {
    try {
        sago::PlatformFolders p;
        return toNapiValue(env, p.getDownloadFolder1());
    }
    catch (...) {
        HandleException(env);
    }
    return nullptr;
}

napi_value getMusic(napi_env env, napi_callback_info info) {
    try {
        sago::PlatformFolders p;
        return toNapiValue(env, p.getMusicFolder());
    }
    catch (...) {
        HandleException(env);
    }
    return nullptr;
}


napi_value getPictures(napi_env env, napi_callback_info info) {
    try {
        sago::PlatformFolders p;
        return toNapiValue(env, p.getPicturesFolder());
    }
    catch (...) {
        HandleException(env);
    }
    return nullptr;
}

napi_value getSaveGames(napi_env env, napi_callback_info info) {
    try {
        sago::PlatformFolders p;
        return toNapiValue(env, p.getSaveGamesFolder1());
    }
    catch (...) {
        HandleException(env);
    }
    return nullptr;
}

napi_value getVideos(napi_env env, napi_callback_info info) {
    try {
        sago::PlatformFolders p;
        return toNapiValue(env, p.getVideoFolder());
    }
    catch (...) {
        HandleException(env);
    }
    return nullptr;
}

napi_value getHome(napi_env env, napi_callback_info info) {
    try {
        sago::PlatformFolders p;
        return toNapiValue(env, p.getHomeFolder());
    }
    catch (...) {
        HandleException(env);
    }
    return nullptr;
}


#define EXPORT_NAPI(name_here, name_there) {\
    status = napi_create_function(env, nullptr, 0, name_here, nullptr, &fn); \
    if (status != napi_ok) return nullptr; \
    status = napi_set_named_property(env, exports, name_there, fn); \
    if (status != napi_ok) return nullptr; \
  }


napi_value Init(napi_env env, napi_value exports) {
    napi_status status;
    napi_value fn;

    EXPORT_NAPI(getCache, "getCacheDir");
    EXPORT_NAPI(getConfig, "getConfigHome");
    EXPORT_NAPI(getData, "getDataHome");
    EXPORT_NAPI(getAdditionalDataDirectories, "getDataFolders");
    EXPORT_NAPI(getAdditionalConfigDirectories, "getConfigFolders");
    EXPORT_NAPI(getDesktop, "getDesktopFolder");
    EXPORT_NAPI(getDocuments, "getDocumentsFolder");
    EXPORT_NAPI(getDownloads, "getDownloadsFolder");
    EXPORT_NAPI(getMusic, "getMusicFolder");
    EXPORT_NAPI(getPictures, "getPicturesFolder");
    EXPORT_NAPI(getSaveGames, "getSaveGamesFolder");
    EXPORT_NAPI(getVideos, "getVideosFolder");
    EXPORT_NAPI(getHome, "getHomeFolder");


    return exports;
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, Init
)
