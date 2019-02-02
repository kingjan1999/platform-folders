export declare function getHomeFolder(): string;
export declare function getCacheFolder(): string;
export declare function getConfigHome(): string;
export declare function getDataHome(): string;
export declare function getDesktopFolder(): string;
export declare function getDocumentsFolder(): string;
export declare function getDownloadsFolder(): string;
export declare function getPicturesFolder(): string;
export declare function getVideosFolder(): string;
export declare function getMusicFolder(): string;
export declare function getSaveGamesFolder(): string;
/**
 * Returns path for type or undefined if name is invalid
 * @param name folder type (see README)
 */
export default function getPath(name: string): string | undefined;
