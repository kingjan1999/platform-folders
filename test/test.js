const os = require('os');

import {assert} from "chai";

import * as folders from "../index.js";

describe("Test existence of folders", function () {
    it('home folder', () => {
        assert.isOk(folders.getHomeFolder());
        assert.equal(folders.getHomeFolder(), os.homedir());
    });

    it('cache folder', () => {
        assert.isOk(folders.getCacheFolder());
    });

    it('config folder', () => {
        assert.isOk(folders.getConfigHome());
    });

    it('data folder', () => {
        assert.isOk(folders.getDataHome());
    });

    it('documents folder', () => {
        assert.isOk(folders.getDocumentsFolder());
    });

    it('downloads folder', () => {
        assert.isOk(folders.getDownloadsFolder());
    });

    it('pictures folder', () => {
        assert.isOk(folders.getPicturesFolder());
    });

    it('videos folder', () => {
        assert.isOk(folders.getVideosFolder());
    });

    it('music folder', () => {
        assert.isOk(folders.getMusicFolder());
    });

    it('save games folders', () => {
        assert.isOk(folders.getSaveGamesFolder());
    });

    it('undefined for undefined folder', () => {
        assert.isNotOk(folders.default("unknown"));
    });
});