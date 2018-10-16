#ifndef GUARD_TITLESCREEN_H
#define GUARD_TITLESCREEN_H

struct TitlescreenStruct
{
    /*0x00*/ s8 menuCursorIndex;
    /*0x02*/ s16 unk2;
    /*0x04*/ s16 unk4;
    /*0x06*/ s8 unk6;
    /*0x07*/ u8 unk7;
    /*0x08*/ s8 unk8;
    /*0x09*/ u8 unk9;
    /*0x0A*/ u8 unkA;
    /*0x0B*/ u8 unkB;
    /*0x0C*/ u8 unkC;
    /*0x0D*/ u8 unkD;
    /*0x0E*/ u8 unkE;
    /*0x0F*/ u8 unkF;
    /*0x10*/ u8 unk10;
    /*0x11*/ u8 unk11;
    /*0x12*/ s16 idleFadeoutCounter;
    /*0x14*/ s16 idleFramesCounter;
};

extern struct TitlescreenStruct gTitlescreen;
extern s8 gAutoDisplayTitlescreenMenu;
extern u8 gUnknown_202BE24;
extern u16 gUnknown_0202C588;
extern s8 gUnknown_020028A0;
extern s8 gUnknown_020028A1;
extern u8 gUnknown_020028A2;
extern u8 gUnknown_020028A3;
extern s8 gUnknown_020028A4;
extern s8 gUnknown_020028A5;
extern const u8 *gUnknown_0201C190[];
extern const u8 *gUnknown_0202BE00[];

#endif // GUARD_TITLESCREEN_H
