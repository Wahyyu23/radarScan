#pragma once

class VolumeService
{
public:
    static int getVolumePercent();
    static bool setVolumePercent(int percent);
};