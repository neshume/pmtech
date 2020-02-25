// renderer_definitions.h
// Copyright 2014 - 2019 Alex Dixon.
// License: https://github.com/polymonster/pmtech/blob/master/license.md

#ifndef _renderer_definitions_h
#define _renderer_definitions_h

#define PEN_RENDERER_VULKAN

enum null_values
{
    PEN_NULL_DEPTH_BUFFER = -1,
    PEN_NULL_COLOUR_BUFFER = -1,
    PEN_NULL_PIXEL_SHADER = -1,
};

enum shader_type
{
    PEN_SHADER_TYPE_VS,
    PEN_SHADER_TYPE_PS,
    PEN_SHADER_TYPE_GS,
    PEN_SHADER_TYPE_SO,
    PEN_SHADER_TYPE_CS
};

enum fill_mode : s32
{
    PEN_FILL_SOLID,
    PEN_FILL_WIREFRAME
};

enum cull_mode : s32
{
    PEN_CULL_NONE = 0,
    PEN_CULL_FRONT,
    PEN_CULL_BACK
};

enum default_targets : s32
{
    PEN_BACK_BUFFER_COLOUR = 0,
    PEN_BACK_BUFFER_DEPTH = 0
};

enum clear_bits : s32
{
    PEN_CLEAR_COLOUR_BUFFER = 1 << 0,
    PEN_CLEAR_DEPTH_BUFFER = 1 << 1,
    PEN_CLEAR_STENCIL_BUFFER = 1 << 2
};

enum input_classification : s32
{
    PEN_INPUT_PER_VERTEX = 0,
    PEN_INPUT_PER_INSTANCE = 1
};

enum primitive_topology : s32
{
    PEN_PT_POINTLIST,
    PEN_PT_LINELIST,
    PEN_PT_LINESTRIP,
    PEN_PT_TRIANGLELIST,
    PEN_PT_TRIANGLESTRIP
};

enum texture_format : s32
{
    // integer
    PEN_TEX_FORMAT_BGRA8_UNORM,
    PEN_TEX_FORMAT_RGBA8_UNORM,
    PEN_TEX_FORMAT_D24_UNORM_S8_UINT,

    // floating point
    PEN_TEX_FORMAT_R32G32B32A32_FLOAT,
    PEN_TEX_FORMAT_R32_FLOAT,
    PEN_TEX_FORMAT_R16G16B16A16_FLOAT,
    PEN_TEX_FORMAT_R16_FLOAT,
    PEN_TEX_FORMAT_R32_UINT,
    PEN_TEX_FORMAT_R8_UNORM,
    PEN_TEX_FORMAT_R32G32_FLOAT,

    // bc compressed
    PEN_TEX_FORMAT_BC1_UNORM,
    PEN_TEX_FORMAT_BC2_UNORM,
    PEN_TEX_FORMAT_BC3_UNORM,
    PEN_TEX_FORMAT_BC4_UNORM,
    PEN_TEX_FORMAT_BC5_UNORM
};

enum vertex_format : s32
{
    PEN_VERTEX_FORMAT_FLOAT1,
    PEN_VERTEX_FORMAT_FLOAT2,
    PEN_VERTEX_FORMAT_FLOAT3,
    PEN_VERTEX_FORMAT_FLOAT4,
    PEN_VERTEX_FORMAT_UNORM4,
    PEN_VERTEX_FORMAT_UNORM2,
    PEN_VERTEX_FORMAT_UNORM1
};

enum index_buffer_format : s32
{
    PEN_FORMAT_R16_UINT,
    PEN_FORMAT_R32_UINT
};

enum usage : s32
{
    PEN_USAGE_DEFAULT,   // gpu read and write, d3d can updatesubresource with usage default
    PEN_USAGE_IMMUTABLE, // gpu read only
    PEN_USAGE_DYNAMIC,   // dynamic
    PEN_USAGE_STAGING,   // cpu access
};

enum bind_flags : s32
{
    PEN_BIND_SHADER_RESOURCE = 1 << 0,
    PEN_BIND_VERTEX_BUFFER = 1 << 1,
    PEN_BIND_INDEX_BUFFER = 1 << 2,
    PEN_BIND_CONSTANT_BUFFER = 1 << 3,
    PEN_STREAM_OUT_VERTEX_BUFFER = 1 << 4,
    PEN_BIND_RENDER_TARGET = 1 << 5,
    PEN_BIND_DEPTH_STENCIL = 1 << 6,
    PEN_BIND_SHADER_WRITE = 1 << 7
};

enum cpu_access_flags : s32
{
    PEN_CPU_ACCESS_WRITE = 1,
    PEN_CPU_ACCESS_READ = (1 << 1)
};

enum texture_address_mode : s32
{
    PEN_TEXTURE_ADDRESS_WRAP,
    PEN_TEXTURE_ADDRESS_MIRROR,
    PEN_TEXTURE_ADDRESS_CLAMP,
    PEN_TEXTURE_ADDRESS_BORDER,
    PEN_TEXTURE_ADDRESS_MIRROR_ONCE
};

enum comparison : s32
{
    PEN_COMPARISON_NEVER,
    PEN_COMPARISON_LESS,
    PEN_COMPARISON_EQUAL,
    PEN_COMPARISON_LESS_EQUAL,
    PEN_COMPARISON_GREATER,
    PEN_COMPARISON_NOT_EQUAL,
    PEN_COMPARISON_GREATER_EQUAL,
    PEN_COMPARISON_ALWAYS
};

enum filter_mode : s32
{
    PEN_FILTER_MIN_MAG_MIP_LINEAR = 0,
    PEN_FILTER_MIN_MAG_MIP_POINT,
    PEN_FILTER_LINEAR,
    PEN_FILTER_POINT
};

enum blending_factor : s32
{
    PEN_BLEND_ZERO,
    PEN_BLEND_ONE,
    PEN_BLEND_SRC_COLOR,
    PEN_BLEND_INV_SRC_COLOR,
    PEN_BLEND_SRC_ALPHA,
    PEN_BLEND_INV_SRC_ALPHA,
    PEN_BLEND_DEST_ALPHA,
    PEN_BLEND_INV_DEST_ALPHA,
    PEN_BLEND_DEST_COLOR,
    PEN_BLEND_INV_DEST_COLOR,
    PEN_BLEND_SRC_ALPHA_SAT,
    PEN_BLEND_BLEND_FACTOR,
    PEN_BLEND_INV_BLEND_FACTOR,
    PEN_BLEND_SRC1_COLOR,
    PEN_BLEND_INV_SRC1_COLOR,
    PEN_BLEND_SRC1_ALPHA,
    PEN_BLEND_INV_SRC1_ALPHA
};

enum blend_op : s32
{
    PEN_BLEND_OP_ADD,
    PEN_BLEND_OP_SUBTRACT,
    PEN_BLEND_OP_REV_SUBTRACT,
    PEN_BLEND_OP_MIN,
    PEN_BLEND_OP_MAX
};

enum stencil_op : s32
{
    PEN_STENCIL_OP_KEEP,
    PEN_STENCIL_OP_REPLACE,
    PEN_STENCIL_OP_ZERO,
    PEN_STENCIL_OP_INCR_SAT,
    PEN_STENCIL_OP_DECR_SAT,
    PEN_STENCIL_OP_INVERT,
    PEN_STENCIL_OP_INCR,
    PEN_STENCIL_OP_DECR
};

#endif
