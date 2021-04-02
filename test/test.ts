// eslint-disable-next-line @typescript-eslint/no-var-requires
const os = require("os");

import {assert} from "chai";

import * as folders from "../src/index";

describe("Test existence of folders", () => {
    it("home folder", () => {
        assert.isOk(folders.getHomeFolder());
        assert.equal(folders.getHomeFolder(), os.homedir());
    });

    it("cache folder", () => {
        assert.isOk(folders.getCacheFolder());
    });

    it("config folder", () => {
        assert.isOk(folders.getConfigHome());
    });

    it("data home folder", () => {
        assert.isOk(folders.getDataHome());
    });

    it("data folders", () => {
        assert.isOk(folders.getDataFolders());
    });

    it("config folders", () => {
        assert.isOk(folders.getConfigFolders());
    });

    it("documents folder", () => {
        assert.isOk(folders.getDocumentsFolder());
    });

    it("downloads folder", () => {
        assert.isOk(folders.getDownloadsFolder());
    });

    it("pictures folder", () => {
        assert.isOk(folders.getPicturesFolder());
    });

    it("videos folder", () => {
        assert.isOk(folders.getVideosFolder());
    });

    it("music folder", () => {
        assert.isOk(folders.getMusicFolder());
    });

    it("save games folders", () => {
        assert.isOk(folders.getSaveGamesFolder());
    });

    it("undefined for undefined folder", () => {
        // eslint-disable-next-line @typescript-eslint/ban-ts-comment
        // @ts-ignore
        assert.isNotOk(folders.default("unknown"));
    });
});
