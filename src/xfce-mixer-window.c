/* Generated by GOB (v2.0.6) on Sun Jan 25 17:45:55 2004
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 6

#define selfp (self->_priv)

#include "xfce-mixer-window.h"

#include "xfce-mixer-window-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 1 "mixer-window.gob"

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#line 31 "xfce-mixer-window.c"

#line 7 "mixer-window.gob"

#include <gtk/gtk.h>
#include "xfce-mixer-view.h"
#include "xfce-mixer-profile.h"
#include "main.h"
#include "xfce-mixer-mcs-client.h"

#line 41 "xfce-mixer-window.c"

#line 14 "mixer-window.gob"

#include <gtk/gtk.h>
#include <libxfce4util/i18n.h>
#include "menus.h"
#include "main.h"
#include "stringlist.inc"
#define CHANNEL "sound"

#line 52 "xfce-mixer-window.c"
/* self casting macros */
#define SELF(x) XFCE_MIXER_WINDOW(x)
#define SELF_CONST(x) XFCE_MIXER_WINDOW_CONST(x)
#define IS_SELF(x) XFCE_IS_MIXER_WINDOW(x)
#define TYPE_SELF XFCE_TYPE_MIXER_WINDOW
#define SELF_CLASS(x) XFCE_MIXER_WINDOW_CLASS(x)

#define SELF_GET_CLASS(x) XFCE_MIXER_WINDOW_GET_CLASS(x)

/* self typedefs */
typedef XfceMixerWindow Self;
typedef XfceMixerWindowClass SelfClass;

/* here are local prototypes */
static void xfce_mixer_window_class_init (XfceMixerWindowClass * c) G_GNUC_UNUSED;
static void xfce_mixer_window_init (XfceMixerWindow * self) G_GNUC_UNUSED;

/* pointer to the class of our parent */
static GtkWindowClass *parent_class = NULL;

/* Short form macros */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define self_mcs_changed_cb(args...) xfce_mixer_window_mcs_changed_cb(args)
#define self_profiles_changed_cb(args...) xfce_mixer_window_profiles_changed_cb(args)
#define self_view_profile_activate_cb(args...) xfce_mixer_window_view_profile_activate_cb(args)
#define self_update_profiles_menu(args...) xfce_mixer_window_update_profiles_menu(args)
#define self_new() xfce_mixer_window_new()
#define self_refresh(args...) xfce_mixer_window_refresh(args)
#define self_reset_profile(args...) xfce_mixer_window_reset_profile(args)
#define self_refresh_value(args...) xfce_mixer_window_refresh_value(args)
#endif /* __GNUC__ && !__STRICT_ANSI__ */

/* Short form pointers */
static void (* const self_mcs_changed_cb) (XfceMixerWindow * self, GtkWidget * widget) = xfce_mixer_window_mcs_changed_cb;
static void (* const self_profiles_changed_cb) (XfceMixerWindow * self, GObject * profiles) = xfce_mixer_window_profiles_changed_cb;
static void (* const self_view_profile_activate_cb) (XfceMixerWindow * self, GtkWidget * w) = xfce_mixer_window_view_profile_activate_cb;
static void (* const self_update_profiles_menu) (XfceMixerWindow * self) = xfce_mixer_window_update_profiles_menu;
static GtkWidget * (* const self_new) (void) = xfce_mixer_window_new;
static void (* const self_refresh) (XfceMixerWindow * self) = xfce_mixer_window_refresh;
static void (* const self_reset_profile) (XfceMixerWindow * self) = xfce_mixer_window_reset_profile;
static void (* const self_refresh_value) (XfceMixerWindow * self, gchar const * vcname) = xfce_mixer_window_refresh_value;

GType
xfce_mixer_window_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (XfceMixerWindowClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) xfce_mixer_window_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (XfceMixerWindow),
			0 /* n_preallocs */,
			(GInstanceInitFunc) xfce_mixer_window_init,
		};

		type = g_type_register_static (GTK_TYPE_WINDOW, "XfceMixerWindow", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((XfceMixerWindow *)g_object_new(xfce_mixer_window_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static XfceMixerWindow * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static XfceMixerWindow *
GET_NEW_VARG (const char *first, ...)
{
	XfceMixerWindow *ret;
	va_list ap;
	va_start (ap, first);
	ret = (XfceMixerWindow *)g_object_new_valist (xfce_mixer_window_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___dispose (GObject *obj_self)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Window::dispose"
	XfceMixerWindow *self = XFCE_MIXER_WINDOW (obj_self);
	if (G_OBJECT_CLASS (parent_class)->dispose) \
		(* G_OBJECT_CLASS (parent_class)->dispose) (obj_self);
#line 30 "mixer-window.gob"
	if(self->mcsc) { ((*(void (*)(void *))g_object_unref)) (self->mcsc); self->mcsc = NULL; }
#line 146 "xfce-mixer-window.c"
	return;
	self = NULL;
}
#undef __GOB_FUNCTION__

static void 
xfce_mixer_window_class_init (XfceMixerWindowClass * c)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Window::class_init"
	GObjectClass *g_object_class = (GObjectClass*) c;

	parent_class = g_type_class_ref (GTK_TYPE_WINDOW);

	g_object_class->dispose = ___dispose;
	return;
	c = NULL;
	g_object_class = NULL;
}
#undef __GOB_FUNCTION__
#line 32 "mixer-window.gob"
static void 
xfce_mixer_window_init (XfceMixerWindow * self)
#line 169 "xfce-mixer-window.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Window::init"
#line 14 "mixer-window.gob"
	self->view = NULL;
#line 174 "xfce-mixer-window.c"
#line 14 "mixer-window.gob"
	self->box = NULL;
#line 177 "xfce-mixer-window.c"
#line 14 "mixer-window.gob"
	self->menubar = NULL;
#line 180 "xfce-mixer-window.c"
#line 14 "mixer-window.gob"
	self->profile = NULL;
#line 183 "xfce-mixer-window.c"
#line 14 "mixer-window.gob"
	self->accelgroup = NULL;
#line 186 "xfce-mixer-window.c"
#line 14 "mixer-window.gob"
	self->mcsc = NULL;
#line 189 "xfce-mixer-window.c"
 {
#line 33 "mixer-window.gob"

		self->box = GTK_BOX (gtk_vbox_new (FALSE, 0));
		gtk_widget_show (GTK_WIDGET (self->box));

		self->accelgroup = GTK_ACCEL_GROUP (gtk_accel_group_new ());
		self->menubar = xfce_mixer_create_main_menu (
			GTK_WINDOW (self), self->accelgroup
		);

		gtk_window_add_accel_group (GTK_WINDOW (self), self->accelgroup);

		g_object_unref (G_OBJECT (self->accelgroup));

		/*self->menubar = GTK_MENU_BAR (gtk_menu_bar_new ());*/
		gtk_widget_show (GTK_WIDGET (self->menubar));

		gtk_box_pack_start (self->box, GTK_WIDGET (self->menubar), FALSE, FALSE, 0);


		self->profile = XFCE_MIXER_PROFILE (xfce_mixer_profile_new ("noname"));

		self->view = xfce_mixer_view_new ();

		gtk_widget_set_size_request (GTK_WIDGET (self->view), 600, -1);

		xfce_mixer_view_set_profile (self->view, self->profile);

		g_object_unref (G_OBJECT (self->profile));

		g_signal_connect_swapped (G_OBJECT (profiles),
			"profiles-changed", 
			G_CALLBACK (self_profiles_changed_cb),
			self);


		gtk_widget_show (GTK_WIDGET (self->view));

		gtk_box_pack_start (self->box, GTK_WIDGET (self->view), TRUE, TRUE, 0);

		gtk_container_add (GTK_CONTAINER (self), GTK_WIDGET (self->box));

		gtk_window_set_title (GTK_WINDOW (self), _("Volume Control"));

		self->mcsc = xfce_mixer_mcs_client_new ();
		g_object_set (self->mcsc, "channel", CHANNEL, NULL);
		g_signal_connect_swapped (G_OBJECT (self->mcsc), "changed", 
			G_CALLBACK(self_mcs_changed_cb), self);

		self_update_profiles_menu (self);
	
#line 242 "xfce-mixer-window.c"
 }
	return;
	self = NULL;
}
#undef __GOB_FUNCTION__



#line 84 "mixer-window.gob"
void 
xfce_mixer_window_mcs_changed_cb (XfceMixerWindow * self, GtkWidget * widget)
#line 254 "xfce-mixer-window.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Window::mcs_changed_cb"
#line 84 "mixer-window.gob"
	g_return_if_fail (self != NULL);
#line 84 "mixer-window.gob"
	g_return_if_fail (XFCE_IS_MIXER_WINDOW (self));
#line 261 "xfce-mixer-window.c"
{
#line 85 "mixer-window.gob"
	
		g_warning ("mcs changed");
		self_reset_profile (self);
	}}
#line 268 "xfce-mixer-window.c"
#undef __GOB_FUNCTION__

#line 90 "mixer-window.gob"
void 
xfce_mixer_window_profiles_changed_cb (XfceMixerWindow * self, GObject * profiles)
#line 274 "xfce-mixer-window.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Window::profiles_changed_cb"
#line 90 "mixer-window.gob"
	g_return_if_fail (self != NULL);
#line 90 "mixer-window.gob"
	g_return_if_fail (XFCE_IS_MIXER_WINDOW (self));
#line 281 "xfce-mixer-window.c"
{
#line 91 "mixer-window.gob"
	
		/* TODO avoid loop? */
		if (!self->view || !self->menubar)
			return;

		self_update_profiles_menu (self);
	}}
#line 291 "xfce-mixer-window.c"
#undef __GOB_FUNCTION__

#line 99 "mixer-window.gob"
void 
xfce_mixer_window_view_profile_activate_cb (XfceMixerWindow * self, GtkWidget * w)
#line 297 "xfce-mixer-window.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Window::view_profile_activate_cb"
#line 99 "mixer-window.gob"
	g_return_if_fail (self != NULL);
#line 99 "mixer-window.gob"
	g_return_if_fail (XFCE_IS_MIXER_WINDOW (self));
#line 304 "xfce-mixer-window.c"
{
#line 100 "mixer-window.gob"
	
		GList *g, *gp;
		gchar const *n;
		XfceMixerProfile *p;

		if (!gtk_check_menu_item_get_active (
			GTK_CHECK_MENU_ITEM (w)
		))
			return;

		g = gtk_container_get_children (GTK_CONTAINER (w));
		gp = g;
		n = NULL;
		if (gp)
			n = gtk_label_get_text (GTK_LABEL (gp->data));

		if (!n)
			return;


		p = xfce_mixer_profiles_get_profile (profiles, n);
		if (p) {
			xfce_mixer_view_set_profile (self->view, p);
			g_object_unref (G_OBJECT (p));
		}

		if (g)
			g_list_free (g);
	}}
#line 336 "xfce-mixer-window.c"
#undef __GOB_FUNCTION__

#line 130 "mixer-window.gob"
void 
xfce_mixer_window_update_profiles_menu (XfceMixerWindow * self)
#line 342 "xfce-mixer-window.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Window::update_profiles_menu"
#line 130 "mixer-window.gob"
	g_return_if_fail (self != NULL);
#line 130 "mixer-window.gob"
	g_return_if_fail (XFCE_IS_MIXER_WINDOW (self));
#line 349 "xfce-mixer-window.c"
{
#line 131 "mixer-window.gob"
	
		XfceMixerProfile const *currentp;
		GtkContainer *container;
		GList *g, *gp;
		GtkWidget *mi;
		gchar const *currentpn;
		gchar const *n;
		GSList *group;
		currentpn = NULL;
		currentp = xfce_mixer_view_get_profile (self->view);
		if (currentp)
			currentpn = xfce_mixer_profile_get_title ((XfceMixerProfile *)currentp);

		/* self->menubar, View menu: */
		/* for each v.child(): */
		/*   if child == seperator: break */
		/*   child.destroy() */

		container = GTK_CONTAINER (self->menubar);
		if (!container)
			return;

		g = gtk_container_get_children (container);
		if (!g)
			return;

		mi = GTK_WIDGET (g_list_nth_data (g, 1));
		if (!mi) {
			g_list_free (g);
			return;
		}

		container = GTK_CONTAINER (gtk_menu_item_get_submenu (GTK_MENU_ITEM (mi)));

		g_list_free (g);

		if (!container)
			return;

		g = gtk_container_get_children (container);
		if (!g)
			return;
		gp = g;
		while (gp) {
			if (!GTK_IS_RADIO_MENU_ITEM (gp->data))
				break;

			gtk_widget_destroy (GTK_WIDGET (gp->data));
			gp = g_list_next (gp);
		}

		if (g)
			g_list_free (g);


		/* profiles.load() */
		/* for n in profiles.get_profile_names() */
		/*   v.insert(0, gtk.MenuItem(n).show()) */

		g = xfce_mixer_profiles_get_profile_names (profiles);

		/*g = g_list_append (g, g_strdup ("dummy"));*/
		/*g = g_list_append (g, g_strdup ("dummy2"));*/

		gp = g;
		group = NULL;
		while (gp) {
			n = (gchar const *)gp->data;
			mi = gtk_radio_menu_item_new_with_label (group, n);

			group = gtk_radio_menu_item_get_group (GTK_RADIO_MENU_ITEM (mi));

			g_signal_connect_swapped (G_OBJECT (mi),
				"activate", G_CALLBACK (self_view_profile_activate_cb),
				self);

			if (currentpn && g_str_equal (currentpn, n)) {
				gtk_check_menu_item_set_active (GTK_CHECK_MENU_ITEM (mi), TRUE);
			}

			/* make mi checkmenuitems */
			gtk_widget_show (GTK_WIDGET (mi));
			gtk_menu_shell_prepend (GTK_MENU_SHELL (container), mi);

			gp = g_list_next (gp);
		}
		if (g)
			stringlist_free (g);

	}}
#line 442 "xfce-mixer-window.c"
#undef __GOB_FUNCTION__

#line 222 "mixer-window.gob"
GtkWidget * 
xfce_mixer_window_new (void)
#line 448 "xfce-mixer-window.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Window::new"
{
#line 223 "mixer-window.gob"
	
		return GTK_WIDGET (GET_NEW);
	}}
#line 456 "xfce-mixer-window.c"
#undef __GOB_FUNCTION__

#line 227 "mixer-window.gob"
void 
xfce_mixer_window_refresh (XfceMixerWindow * self)
#line 462 "xfce-mixer-window.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Window::refresh"
#line 227 "mixer-window.gob"
	g_return_if_fail (self != NULL);
#line 227 "mixer-window.gob"
	g_return_if_fail (XFCE_IS_MIXER_WINDOW (self));
#line 469 "xfce-mixer-window.c"
{
#line 228 "mixer-window.gob"
	
		if (self->profile)
			xfce_mixer_profile_refresh_views (self->profile);
	}}
#line 476 "xfce-mixer-window.c"
#undef __GOB_FUNCTION__

#line 233 "mixer-window.gob"
void 
xfce_mixer_window_reset_profile (XfceMixerWindow * self)
#line 482 "xfce-mixer-window.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Window::reset_profile"
#line 233 "mixer-window.gob"
	g_return_if_fail (self != NULL);
#line 233 "mixer-window.gob"
	g_return_if_fail (XFCE_IS_MIXER_WINDOW (self));
#line 489 "xfce-mixer-window.c"
{
#line 234 "mixer-window.gob"
	
		if (self->view)
			xfce_mixer_view_set_profile (self->view, self->profile);

		/*if (self->profile)
			xfce_mixer_profile_refresh_views (self->profile);*/
	}}
#line 499 "xfce-mixer-window.c"
#undef __GOB_FUNCTION__

#line 242 "mixer-window.gob"
void 
xfce_mixer_window_refresh_value (XfceMixerWindow * self, gchar const * vcname)
#line 505 "xfce-mixer-window.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Window::refresh_value"
#line 242 "mixer-window.gob"
	g_return_if_fail (self != NULL);
#line 242 "mixer-window.gob"
	g_return_if_fail (XFCE_IS_MIXER_WINDOW (self));
#line 512 "xfce-mixer-window.c"
{
#line 243 "mixer-window.gob"
	
		if (self->view)
			xfce_mixer_view_refresh_value (self->view, vcname);
	}}
#line 519 "xfce-mixer-window.c"
#undef __GOB_FUNCTION__


#if (!defined __GNUC__) || (defined __GNUC__ && defined __STRICT_ANSI__)
/*REALLY BAD HACK
  This is to avoid unused warnings if you don't call
  some method.  I need to find a better way to do
  this, not needed in GCC since we use some gcc
  extentions to make saner, faster code */
static void
___xfce_mixer_window_really_bad_hack_to_avoid_warnings(void)
{
	((void (*)(void))GET_NEW_VARG)();
	((void (*)(void))self_mcs_changed_cb)();
	((void (*)(void))self_profiles_changed_cb)();
	((void (*)(void))self_view_profile_activate_cb)();
	((void (*)(void))self_update_profiles_menu)();
	((void (*)(void))self_new)();
	((void (*)(void))self_refresh)();
	((void (*)(void))self_reset_profile)();
	((void (*)(void))self_refresh_value)();
	___xfce_mixer_window_really_bad_hack_to_avoid_warnings();
}
#endif /* !__GNUC__ || (__GNUC__ && __STRICT_ANSI__) */

