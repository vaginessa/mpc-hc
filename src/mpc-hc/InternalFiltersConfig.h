/*
 * (C) 2003-2006 Gabest
 * (C) 2006-2015 see Authors.txt
 *
 * This file is part of MPC-HC.
 *
 * MPC-HC is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * MPC-HC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// For configuring which internal filters are included into the build.

#pragma once

#if defined(MPCHC_LITE)
#define INTERNAL_FILTERS_OTHER 0
#else
#define INTERNAL_FILTERS_OTHER 1
#endif
#define INTERNAL_FILTERS_LAV USE_LAVFILTERS

// Internal source filters
#define INTERNAL_SOURCEFILTER_AC3       INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_ASF       INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_AVI       INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_AVS       INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_DTS       INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_FLAC      INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_FLIC      INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_FLV       INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_GIF       INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_HTTP      INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_MATROSKA  INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_MISC      INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_MMS       INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_MP4       INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_MPEG      INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_MPEGAUDIO INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_OGG       INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_REALMEDIA INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_RTMP      INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_RTP       INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_RTSP      INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_UDP       INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_WTV       INTERNAL_FILTERS_LAV
#define INTERNAL_SOURCEFILTER_CDDA      INTERNAL_FILTERS_OTHER
#define INTERNAL_SOURCEFILTER_CDXA      INTERNAL_FILTERS_OTHER
#define INTERNAL_SOURCEFILTER_DSM       INTERNAL_FILTERS_OTHER
#define INTERNAL_SOURCEFILTER_RFS       INTERNAL_FILTERS_OTHER
#define INTERNAL_SOURCEFILTER_VTS       INTERNAL_FILTERS_OTHER

// Internal audio decoders
#define INTERNAL_DECODER_LPCM           INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_PS2AUDIO       INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_REALAUDIO      INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_PCM            INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_AC3            INTERNAL_FILTERS_LAV /* also E-AC3, TrueHD, MLP */
#define INTERNAL_DECODER_DTS            INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_AAC            INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_ALAC           INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_ALS            INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_MPEGAUDIO      INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_VORBIS         INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_NELLYMOSER     INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_AMR            INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_ADPCM          INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_FLAC           INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_OPUS           INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_WMA            INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_WMAPRO         INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_WMALL          INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_G726           INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_G729           INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_OTHERAUDIO     INTERNAL_FILTERS_LAV

// Internal video decoders
#define INTERNAL_DECODER_MPEG1          INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_MPEG2          INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_REALVIDEO      INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_H264           INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_HEVC           INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_AV1            INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_VC1            INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_FLV            INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_VP356          INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_DIVX           INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_XVID           INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_WMV            INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_MSMPEG4        INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_SVQ            INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_H263           INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_THEORA         INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_AMVV           INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_VP8            INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_VP9            INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_MJPEG          INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_INDEO          INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_SCREEN         INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_FLIC           INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_MSVIDEO        INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_V210_V410      INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_PRORES         INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_DNXHD          INTERNAL_FILTERS_LAV
#define INTERNAL_DECODER_OTHERVIDEO     INTERNAL_FILTERS_LAV


// Groups
#define HAS_SOURCEFILTERS (INTERNAL_FILTERS_LAV || INTERNAL_FILTERS_OTHER)

#define HAS_AUDIO_DECODERS INTERNAL_FILTERS_LAV

#define HAS_VIDEO_DECODERS INTERNAL_FILTERS_LAV
