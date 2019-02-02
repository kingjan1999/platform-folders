'use strict';
Object.defineProperty(exports, "__esModule", { value: true });
var folders = require('bindings')('platformFolders');
function getHomeFolder() {
    return folders.getHomeFolder();
}
exports.getHomeFolder = getHomeFolder;
function getCacheFolder() {
    return folders.getCacheDir();
}
exports.getCacheFolder = getCacheFolder;
function getConfigHome() {
    return folders.getConfigHome();
}
exports.getConfigHome = getConfigHome;
function getDataHome() {
    return folders.getDataHome();
}
exports.getDataHome = getDataHome;
function getDesktopFolder() {
    return folders.getDesktopFolder();
}
exports.getDesktopFolder = getDesktopFolder;
function getDocumentsFolder() {
    return folders.getDocumentsFolder();
}
exports.getDocumentsFolder = getDocumentsFolder;
function getDownloadsFolder() {
    return folders.getDownloadsFolder();
}
exports.getDownloadsFolder = getDownloadsFolder;
function getPicturesFolder() {
    return folders.getPicturesFolder();
}
exports.getPicturesFolder = getPicturesFolder;
function getVideosFolder() {
    return folders.getVideosFolder();
}
exports.getVideosFolder = getVideosFolder;
function getMusicFolder() {
    return folders.getMusicFolder();
}
exports.getMusicFolder = getMusicFolder;
function getSaveGamesFolder() {
    return folders.getSaveGamesFolder();
}
exports.getSaveGamesFolder = getSaveGamesFolder;
/**
 * Returns path for type or undefined if name is invalid
 * @param name folder type (see README)
 */
function getPath(name) {
    switch (name) {
        case "home":
            return getHomeFolder();
        case "appData":
        case "appdata":
            return getDataHome();
        case "userData":
            return getConfigHome();
        case "desktop":
            return getDesktopFolder();
        case "documents":
            return getDocumentsFolder();
        case "downloads":
            return getDownloadsFolder();
        case "music":
            return getMusicFolder();
        case "pictures":
            return getPicturesFolder();
        case "videos":
            return getVideosFolder();
        case "cache":
            return getCacheFolder();
        case "savegames":
            return getSaveGamesFolder();
        default:
            return undefined;
    }
}
exports.default = getPath;
