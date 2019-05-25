"use strict";
// tslint:disable-next-line
const folders = require("bindings")("platformFolders");

export function getHomeFolder(): string {
    return folders.getHomeFolder();
}

export function getCacheFolder(): string {
    return folders.getCacheDir();
}

export function getConfigHome(): string {
    return folders.getConfigHome();
}

export function getDataHome(): string {
    return folders.getDataHome();
}

export function getDataFolders(): string[] {
    return folders.getDataFolders();
}

export function getConfigFolders(): string[] {
    return folders.getConfigFolders();
}

export function getDesktopFolder(): string {
    return folders.getDesktopFolder();
}

export function getDocumentsFolder(): string {
    return folders.getDocumentsFolder();
}

export function getDownloadsFolder(): string {
    return folders.getDownloadsFolder();
}

export function getPicturesFolder(): string {
    return folders.getPicturesFolder();
}

export function getVideosFolder(): string {
    return folders.getVideosFolder();
}

export function getMusicFolder(): string {
    return folders.getMusicFolder();
}

export function getSaveGamesFolder(): string {
    return folders.getSaveGamesFolder();
}

/**
 * Returns path for type or undefined if name is invalid
 * @param name folder type (see README)
 */
type Folder = "home" | "appData" | "appdata" | "userData" | "desktop" | "documents" |
              "downloads" | "music" | "pictures" | "videos" | "cache" | "savegames";

export default function getPath(name: Folder): string|undefined {
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
