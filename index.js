'use strict';
const folders = require('./build/Release/platform-folders');

export function getHomeFolder() {
    return folders.getHomeFolder();
}

export function getCacheFolder() {
    return folders.getCacheDir();
}

export function getConfigHome() {
    return folders.getConfigHome();
}

export function getDataHome() {
    return folders.getDataHome();
}

export function getDesktopFolder() {
    return folders.getDesktopFolder();
}

export function getDocumentsFolder() {
    return folders.getDocumentsFolder();
}

export function getDownloadsFolder() {
    return folders.getDownloadsFolder();
}

export function getPicturesFolder() {
    return folders.getPicturesFolder();
}

export function getVideosFolder() {
    return folders.getVideosFolder();
}

export function getMusicFolder() {
    return folders.getMusicFolder();
}

export function getSaveGamesFolder() {
    return folders.getSaveGamesFolder();
}

export default function getPath(name) {
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
