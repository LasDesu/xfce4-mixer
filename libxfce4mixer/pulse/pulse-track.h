/*
 * Copyright (C) 2020  Ali Abdallah <ali.abdallah@suse.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GST_MIXER_PULSE_TRACK_H
#define GST_MIXER_PULSE_TRACK_H

#include <gst/gst.h>
#include <pulse/pulseaudio.h>

#include "gst-mixer-track.h"

#define GST_MIXER_TYPE_PULSE_TRACK            gst_mixer_pulse_track_get_type ()
#define GST_MIXER_PULSE_TRACK(o)             (G_TYPE_CHECK_INSTANCE_CAST ((o), GST_MIXER_TYPE_PULSE_TRACK, GstMixerPulseTrack))
#define GST_MIXER_IS_PULSE_TRACK(o)          (G_TYPE_CHECK_INSTANCE_TYPE ((o), GST_MIXER_TYPE_PULSE_TRACK))

typedef struct _GstMixerPulseTrack GstMixerPulseTrack;
typedef struct _GstMixerPulseTrackClass GstMixerPulseTrackClass;

struct _GstMixerPulseTrack
{
  GstMixerTrack parent;
};

struct _GstMixerPulseTrackClass
{
  GstMixerTrackClass parent;
};

GType                gst_mixer_pulse_track_get_type          (void);
GstMixerPulseTrack  *gst_mixer_pulse_track_new               (gpointer info,
                                                              GstMixerTrackFlags flags);
#endif /* GST_MIXER_PULSE_TRACK_H */
