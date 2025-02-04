// Copyright (C) 2020-2022 Intel Corporation
// SPDX-License-Identifier: MIT
//
// This file originally generated by etw_list
//     version:    main 9c6bf7de6fb2c08c84df4141ffc8a9b175ac5150
//     parameters: --no_event_structs --event=Blit::Info --event=Flip::Info --event=FlipMultiPlaneOverlay::Info --event=IndependentFlip::Info --event=HSyncDPCMultiPlane::Info --event=VSyncDPCMultiPlane::Info --event=MMIOFlip::Info --event=MMIOFlipMultiPlaneOverlay::Info --event=Present::Info --event=PresentHistory::Start --event=PresentHistory::Info --event=PresentHistoryDetailed::Start --event=QueuePacket::Start --event=QueuePacket::Stop --event=VSyncDPC::Info --provider=Microsoft-Windows-DxgKrnl
#pragma once

namespace Microsoft_Windows_DxgKrnl {

struct __declspec(uuid("{802EC45A-1E99-4B83-9920-87C98277BA9D}")) GUID_STRUCT;
static const auto GUID = __uuidof(GUID_STRUCT);

// Win7 GUID added manually:
namespace Win7 {
struct __declspec(uuid("{65cd4c8a-0848-4583-92a0-31c0fbaf00c0}")) GUID_STRUCT;
struct __declspec(uuid("{069f67f2-c380-4a65-8a61-071cd4a87275}")) BLT_GUID_STRUCT;
struct __declspec(uuid("{22412531-670b-4cd3-81d1-e709c154ae3d}")) FLIP_GUID_STRUCT;
struct __declspec(uuid("{c19f763a-c0c1-479d-9f74-22abfc3a5f0a}")) PRESENTHISTORY_GUID_STRUCT;
struct __declspec(uuid("{295e0d8e-51ec-43b8-9cc6-9f79331d27d6}")) QUEUEPACKET_GUID_STRUCT;
struct __declspec(uuid("{5ccf1378-6b2c-4c0f-bd56-8eeb9e4c5c77}")) VSYNCDPC_GUID_STRUCT;
struct __declspec(uuid("{547820fe-5666-4b41-93dc-6cfd5dea28cc}")) MMIOFLIP_GUID_STRUCT;
static const auto GUID                = __uuidof(GUID_STRUCT);
static const auto BLT_GUID            = __uuidof(BLT_GUID_STRUCT);
static const auto FLIP_GUID           = __uuidof(FLIP_GUID_STRUCT);
static const auto PRESENTHISTORY_GUID = __uuidof(PRESENTHISTORY_GUID_STRUCT);
static const auto QUEUEPACKET_GUID    = __uuidof(QUEUEPACKET_GUID_STRUCT);
static const auto VSYNCDPC_GUID       = __uuidof(VSYNCDPC_GUID_STRUCT);
static const auto MMIOFLIP_GUID       = __uuidof(MMIOFLIP_GUID_STRUCT);
}

enum class Keyword : uint64_t {
    Base                                  = 0x1,
    Profiler                              = 0x2,
    References                            = 0x4,
    ForceVsync                            = 0x8,
    Patch                                 = 0x10,
    Cdd                                   = 0x20,
    Resource                              = 0x40,
    Memory                                = 0x80,
    Dxgkrnl_StatusChangeNotify            = 0x100,
    DxgKrnl_Power                         = 0x200,
    DriverEvents                          = 0x400,
    LongHaul                              = 0x800,
    StablePower                           = 0x1000,
    DefaultOverride                       = 0x2000,
    HistoryBuffer                         = 0x4000,
    GPUScheduler                          = 0x8000,
    DxgKrnl                               = 0x10000,
    DxgKrnl_WDI                           = 0x20000,
    Miracast                              = 0x40000,
    IndirectSwapChain                     = 0x80000,
    GPUVA                                 = 0x100000,
    VidMmWorkerThread                     = 0x200000,
    Diagnostics                           = 0x400000,
    VirtualGpu                            = 0x800000,
    AdapterLock                           = 0x1000000,
    MixedReality                          = 0x2000000,
    HardwareSchedulingLog                 = 0x4000000,
    win_ResponseTime                      = 0x1000000000000,
    Microsoft_Windows_DxgKrnl_Diagnostic  = 0x8000000000000000,
    Microsoft_Windows_DxgKrnl_Performance = 0x4000000000000000,
    Microsoft_Windows_DxgKrnl_Power       = 0x2000000000000000,
    Microsoft_Windows_DxgKrnl_Contention  = 0x1000000000000000,
    Microsoft_Windows_DxgKrnl_Admin       = 0x800000000000000,
    Microsoft_Windows_DxgKrnl_Operational = 0x400000000000000,
};

enum class Level : uint8_t {
    win_LogAlways     = 0x0,
    win_Error         = 0x2,
    win_Informational = 0x4,
};

enum class Channel : uint8_t {
    Microsoft_Windows_DxgKrnl_Diagnostic  = 0x10,
    Microsoft_Windows_DxgKrnl_Performance = 0x11,
    Microsoft_Windows_DxgKrnl_Power       = 0x12,
    Microsoft_Windows_DxgKrnl_Contention  = 0x13,
    Microsoft_Windows_DxgKrnl_Admin       = 0x14,
    Microsoft_Windows_DxgKrnl_Operational = 0x15,
};

// Event descriptors:
#define EVENT_DESCRIPTOR_DECL(name_, id_, version_, channel_, level_, opcode_, task_, keyword_) struct name_ { \
    static uint16_t const Id      = id_; \
    static uint8_t  const Version = version_; \
    static uint8_t  const Channel = channel_; \
    static uint8_t  const Level   = level_; \
    static uint8_t  const Opcode  = opcode_; \
    static uint16_t const Task    = task_; \
    static Keyword  const Keyword = (Keyword) keyword_; \
};

EVENT_DESCRIPTOR_DECL(Blit_Info                     , 0x00a6, 0x00, 0x11, 0x04, 0x00, 0x0067, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(FlipMultiPlaneOverlay_Info    , 0x00fc, 0x00, 0x11, 0x00, 0x00, 0x008f, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(Flip_Info                     , 0x00a8, 0x00, 0x11, 0x00, 0x00, 0x0003, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(HSyncDPCMultiPlane_Info       , 0x017e, 0x00, 0x11, 0x00, 0x00, 0x00e6, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(IndependentFlip_Info          , 0x010a, 0x01, 0x11, 0x00, 0x00, 0x0097, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(MMIOFlipMultiPlaneOverlay_Info, 0x0103, 0x03, 0x11, 0x00, 0x00, 0x0090, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(MMIOFlip_Info                 , 0x0074, 0x00, 0x11, 0x00, 0x00, 0x0011, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(PresentHistoryDetailed_Start  , 0x00d7, 0x00, 0x11, 0x00, 0x01, 0x007e, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(PresentHistory_Info           , 0x00ac, 0x00, 0x11, 0x00, 0x00, 0x0006, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(PresentHistory_Start          , 0x00ab, 0x00, 0x11, 0x00, 0x01, 0x0006, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(Present_Info                  , 0x00b8, 0x01, 0x11, 0x00, 0x00, 0x006b, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(QueuePacket_Start             , 0x00b2, 0x01, 0x11, 0x00, 0x01, 0x0009, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(QueuePacket_Stop              , 0x00b4, 0x01, 0x11, 0x00, 0x02, 0x0009, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(VSyncDPCMultiPlane_Info       , 0x0111, 0x02, 0x11, 0x00, 0x00, 0x009f, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(VSyncDPC_Info                 , 0x0011, 0x00, 0x11, 0x00, 0x00, 0x000b, 0x4000000000000001)

// These events added manually:
EVENT_DESCRIPTOR_DECL(Blit_Cancel                   , 0x01f5, 0x00, 0x11, 0x04, 0x00, 0x0135, 0x4000000000000001)

#undef EVENT_DESCRIPTOR_DECL

enum class ColorSpaceType : uint32_t {
    D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 = 0,
    D3DDDI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 = 1,
    D3DDDI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P709 = 2,
    D3DDDI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020 = 3,
    D3DDDI_COLOR_SPACE_RESERVED = 4,
    D3DDDI_COLOR_SPACE_YCBCR_FULL_G22_NONE_P709_X601 = 5,
    D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P601 = 6,
    D3DDDI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P601 = 7,
    D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709 = 8,
    D3DDDI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P709 = 9,
    D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P2020 = 10,
    D3DDDI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P2020 = 11,
    D3DDDI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 = 12,
    D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G2084_LEFT_P2020 = 13,
};

enum class D3DKMT_PRESENTFLAGS : uint32_t {
    Blt = 1,
    ColorFill = 2,
    Flip = 4,
    FlipDoNotFlip = 8,
    FlipWithNoWait = 16,
    SrcColorKey = 512,
    DstColorKey = 1024,
    LinearToSrgb = 2048,
    Rotate = 8192,
    PresentToBitmap = 16384,
    RedirectedFlip = 32768,
    RedirectedBlt = 65536,
    FlipStereo = 131072,
    PresentHistoryTokenOnly = 2097152,
    CrossAdapter = 67108864,
};

enum class DisplayRotation : uint32_t {
    D3DDDI_ROTATION_IDENTITY = 1,
    D3DDDI_ROTATION_90 = 2,
    D3DDDI_ROTATION_180 = 3,
    D3DDDI_ROTATION_270 = 4,
};

enum class FlipEntryStatus : uint32_t {
    FlipWaitVSync = 5,
    FlipWaitComplete = 11,
    FlipWaitPassive = 13,
    FlipWaitPost = 14,
    FlipWaitHSync = 15,
};

enum class FlipmodeType : uint32_t {
    DXGKETW_FLIPMODE_NO_DEVICE = 0,
    DXGKETW_FLIPMODE_IMMEDIATE = 1,
    DXGKETW_FLIPMODE_VSYNC_HW_FLIP_QUEUE = 2,
    DXGKETW_FLIPMODE_VSYNC_SW_FLIP_QUEUE = 3,
    DXGKETW_FLIPMODE_VSYNC_BUILT_IN_WAIT = 4,
    DXGKETW_FLIPMODE_IMMEDIATE_SW_FLIP_QUEUE = 5,
};

enum class HDRMetaDataTypeEnum : uint32_t {
    None = 0,
    HDR10 = 1,
    HDR10Plus = 2,
};

enum class MultiPlaneOverlayAttributesFlags : uint32_t {
    VerticalFlip = 1,
    HorizontalFlip = 2,
};

enum class MultiPlaneOverlayBlend : uint32_t {
    Opaque = 0,
    AlphaBlend = 1,
};

enum class PresentFlags : uint32_t {
    Blt = 1,
    ColorFill = 2,
    Flip = 4,
    FlipWithNoWait = 8,
    SrcColorKey = 16,
    DstColorKey = 32,
    LinearToSrgb = 64,
    Rotate = 128,
};

enum class PresentModel : uint32_t {
    D3DKMT_PM_UNINITIALIZED = 0,
    D3DKMT_PM_REDIRECTED_GDI = 1,
    D3DKMT_PM_REDIRECTED_FLIP = 2,
    D3DKMT_PM_REDIRECTED_BLT = 3,
    D3DKMT_PM_REDIRECTED_VISTABLT = 4,
    D3DKMT_PM_SCREENCAPTUREFENCE = 5,
    D3DKMT_PM_REDIRECTED_GDI_SYSMEM = 6,
    D3DKMT_PM_REDIRECTED_COMPOSITION = 7,
    D3DKMT_PM_SURFACECOMPLETE = 8,
};

enum class QueuePacketType : uint32_t {
    DXGKETW_RENDER_COMMAND_BUFFER = 0,
    DXGKETW_DEFERRED_COMMAND_BUFFER = 1,
    DXGKETW_SYSTEM_COMMAND_BUFFER = 2,
    DXGKETW_MMIOFLIP_COMMAND_BUFFER = 3,
    DXGKETW_WAIT_COMMAND_BUFFER = 4,
    DXGKETW_SIGNAL_COMMAND_BUFFER = 5,
    DXGKETW_DEVICE_COMMAND_BUFFER = 6,
    DXGKETW_SOFTWARE_COMMAND_BUFFER = 7,
    DXGKETW_PAGING_COMMAND_BUFFER = 8,
};

enum class SetVidPnSourceAddressFlags : uint32_t {
    ModeChange = 1,
    FlipImmediate = 2,
    FlipOnNextVSync = 4,
};

}
