/* Generated by GOB (v2.0.6) on Sun Jan  4 18:29:08 2004
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 6

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "xfce-mixer-pxml.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 2 "mixer-pxml.gob"

#include <gtk/gtk.h>
#include <panel/global.h>  
#include <panel/controls.h>
#include <panel/icons.h>  
#include <panel/plugins.h>
#include <panel/xfce_support.h>
#include <panel/item_dialog.h>

#ifndef MYDATA
extern xmlDocPtr xmlconfig;
#define MYDATA(node) xmlNodeListGetString(xmlconfig, node->children, 1)
#endif


#line 41 "xfce-mixer-pxml.c"
/* self casting macros */
#define SELF(x) XFCE_MIXER_PXML(x)
#define SELF_CONST(x) XFCE_MIXER_PXML_CONST(x)
#define IS_SELF(x) XFCE_IS_MIXER_PXML(x)
#define TYPE_SELF XFCE_TYPE_MIXER_PXML
#define SELF_CLASS(x) XFCE_MIXER_PXML_CLASS(x)

#define SELF_GET_CLASS(x) XFCE_MIXER_PXML_GET_CLASS(x)

/* self typedefs */
typedef XfceMixerPxml Self;
typedef XfceMixerPxmlClass SelfClass;

/* here are local prototypes */
static void xfce_mixer_pxml_class_init (XfceMixerPxmlClass * c) G_GNUC_UNUSED;
static void xfce_mixer_pxml_init (XfceMixerPxml * self) G_GNUC_UNUSED;

/* pointer to the class of our parent */
static GObjectClass *parent_class = NULL;

/* Short form macros */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define self_eat_children(args...) xfce_mixer_pxml_eat_children(args)
#define self_goto_next(args...) xfce_mixer_pxml_goto_next(args)
#define self_check_tag(args...) xfce_mixer_pxml_check_tag(args)
#define self_goto_child_tag(args...) xfce_mixer_pxml_goto_child_tag(args)
#define self_has_parent(args...) xfce_mixer_pxml_has_parent(args)
#define self_goto_parent(args...) xfce_mixer_pxml_goto_parent(args)
#define self_goto_children(args...) xfce_mixer_pxml_goto_children(args)
#define self_goto_node(args...) xfce_mixer_pxml_goto_node(args)
#define self_has_children(args...) xfce_mixer_pxml_has_children(args)
#define self_get_prop(args...) xfce_mixer_pxml_get_prop(args)
#define self_set_prop(args...) xfce_mixer_pxml_set_prop(args)
#define self_create_text_child(args...) xfce_mixer_pxml_create_text_child(args)
#define self_new(args...) xfce_mixer_pxml_new(args)
#endif /* __GNUC__ && !__STRICT_ANSI__ */

/* Short form pointers */
static void (* const self_eat_children) (XfceMixerPxml * self, GList * exceptions) = xfce_mixer_pxml_eat_children;
static gboolean (* const self_goto_next) (XfceMixerPxml * self) = xfce_mixer_pxml_goto_next;
static gboolean (* const self_check_tag) (XfceMixerPxml * self, gchar const * tagname) = xfce_mixer_pxml_check_tag;
static gboolean (* const self_goto_child_tag) (XfceMixerPxml * self, gchar const * tagname) = xfce_mixer_pxml_goto_child_tag;
static gboolean (* const self_has_parent) (XfceMixerPxml * self) = xfce_mixer_pxml_has_parent;
static void (* const self_goto_parent) (XfceMixerPxml * self) = xfce_mixer_pxml_goto_parent;
static void (* const self_goto_children) (XfceMixerPxml * self) = xfce_mixer_pxml_goto_children;
static void (* const self_goto_node) (XfceMixerPxml * self, xmlNodePtr nn) = xfce_mixer_pxml_goto_node;
static gboolean (* const self_has_children) (XfceMixerPxml * self) = xfce_mixer_pxml_has_children;
static gchar * (* const self_get_prop) (XfceMixerPxml * self, gchar const * pname) = xfce_mixer_pxml_get_prop;
static void (* const self_set_prop) (XfceMixerPxml * self, gchar const * pname, gchar const * value) = xfce_mixer_pxml_set_prop;
static xmlNodePtr (* const self_create_text_child) (XfceMixerPxml * self, gchar const * name, gchar const * opt_text) = xfce_mixer_pxml_create_text_child;
static XfceMixerPxml * (* const self_new) (gchar const * root) = xfce_mixer_pxml_new;

GType
xfce_mixer_pxml_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (XfceMixerPxmlClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) xfce_mixer_pxml_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (XfceMixerPxml),
			0 /* n_preallocs */,
			(GInstanceInitFunc) xfce_mixer_pxml_init,
		};

		type = g_type_register_static (G_TYPE_OBJECT, "XfceMixerPxml", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((XfceMixerPxml *)g_object_new(xfce_mixer_pxml_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static XfceMixerPxml * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static XfceMixerPxml *
GET_NEW_VARG (const char *first, ...)
{
	XfceMixerPxml *ret;
	va_list ap;
	va_start (ap, first);
	ret = (XfceMixerPxml *)g_object_new_valist (xfce_mixer_pxml_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::finalize"
	XfceMixerPxml *self = XFCE_MIXER_PXML (obj_self);
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
#line 20 "mixer-pxml.gob"
	if(self->root) { ((*(void (*)(void *))g_free)) (self->root); self->root = NULL; }
#line 145 "xfce-mixer-pxml.c"
	return;
	self = NULL;
}
#undef __GOB_FUNCTION__

static void 
xfce_mixer_pxml_class_init (XfceMixerPxmlClass * c)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::class_init"
	GObjectClass *g_object_class = (GObjectClass*) c;

	parent_class = g_type_class_ref (G_TYPE_OBJECT);

	g_object_class->finalize = ___finalize;
	return;
	c = NULL;
	g_object_class = NULL;
}
#undef __GOB_FUNCTION__
#line 24 "mixer-pxml.gob"
static void 
xfce_mixer_pxml_init (XfceMixerPxml * self)
#line 168 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::init"
#line 2 "mixer-pxml.gob"
	self->root = NULL;
#line 173 "xfce-mixer-pxml.c"
#line 2 "mixer-pxml.gob"
	self->node = NULL;
#line 176 "xfce-mixer-pxml.c"
	return;
	self = NULL;
}
#undef __GOB_FUNCTION__



#line 28 "mixer-pxml.gob"
void 
xfce_mixer_pxml_eat_children (XfceMixerPxml * self, GList * exceptions)
#line 187 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::eat_children"
#line 28 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 28 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 194 "xfce-mixer-pxml.c"
{
#line 29 "mixer-pxml.gob"
	
		xmlNodePtr nodex;
		xmlNodePtr nnodex;
		GList *g;
		gchar *tagname;
		gboolean found;
		/* todo */
		if (!self->node)
			return;

		nodex = self->node->children;
		if (!nodex)
			return;

		while (nodex) {
			nnodex = nodex->next;

			/* if not nodex.tagname in exceptions:
				nodex.del()
			*/
			tagname = (gchar *)nodex->name;
			found = FALSE;
			g = exceptions;
			while (g) {
				if (g_str_equal ((gchar *)g->data, tagname)) {
					found = TRUE;
					break;
				}
				g = g_list_next (g);
			}

			if (!found) {
				/* delete node */
				xmlUnlinkNode (nodex);
				xmlFreeNode (nodex);
			}

			nodex = nnodex;
		}
	}}
#line 237 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 70 "mixer-pxml.gob"
gboolean 
xfce_mixer_pxml_goto_next (XfceMixerPxml * self)
#line 243 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::goto_next"
#line 70 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 70 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (gboolean )0);
#line 250 "xfce-mixer-pxml.c"
{
#line 71 "mixer-pxml.gob"
	
		if (!self->node)
			return FALSE;

		self->node = self->node->next;
		if (self->node)
			return TRUE;

		return FALSE;
	}}
#line 263 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 82 "mixer-pxml.gob"
gboolean 
xfce_mixer_pxml_check_tag (XfceMixerPxml * self, gchar const * tagname)
#line 269 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::check_tag"
#line 82 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 82 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (gboolean )0);
#line 276 "xfce-mixer-pxml.c"
{
#line 83 "mixer-pxml.gob"
	
		if (!self->node)
			return FALSE;

		return (xmlStrEqual(self->node->name, (const xmlChar *)tagname));
	}}
#line 285 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 90 "mixer-pxml.gob"
gboolean 
xfce_mixer_pxml_goto_child_tag (XfceMixerPxml * self, gchar const * tagname)
#line 291 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::goto_child_tag"
#line 90 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 90 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (gboolean )0);
#line 298 "xfce-mixer-pxml.c"
{
#line 91 "mixer-pxml.gob"
	
		xmlNodePtr nodex;
		if (!self->node)
			return FALSE;

		nodex = self->node->children;
		while (nodex) {
			if (xmlStrEqual(self->node->name, (const xmlChar *)tagname)) {
				self->node = nodex;
				return TRUE;
			}
			nodex = nodex->next;
		}

		return FALSE;
	}}
#line 317 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 108 "mixer-pxml.gob"
gboolean 
xfce_mixer_pxml_has_parent (XfceMixerPxml * self)
#line 323 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::has_parent"
#line 108 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 108 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (gboolean )0);
#line 330 "xfce-mixer-pxml.c"
{
#line 109 "mixer-pxml.gob"
	
		if (!self->node)
			return FALSE;

		return (self->node->parent != NULL);
	}}
#line 339 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 116 "mixer-pxml.gob"
void 
xfce_mixer_pxml_goto_parent (XfceMixerPxml * self)
#line 345 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::goto_parent"
#line 116 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 116 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 352 "xfce-mixer-pxml.c"
{
#line 117 "mixer-pxml.gob"
	
		if (!self->node)
			return;

		self->node = self->node->parent;
	}}
#line 361 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 124 "mixer-pxml.gob"
void 
xfce_mixer_pxml_goto_children (XfceMixerPxml * self)
#line 367 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::goto_children"
#line 124 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 124 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 374 "xfce-mixer-pxml.c"
{
#line 125 "mixer-pxml.gob"
	
		if (!self->node)
			return;

		self->node = self->node->children;
	}}
#line 383 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 132 "mixer-pxml.gob"
void 
xfce_mixer_pxml_goto_node (XfceMixerPxml * self, xmlNodePtr nn)
#line 389 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::goto_node"
#line 132 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 132 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 396 "xfce-mixer-pxml.c"
{
#line 133 "mixer-pxml.gob"
	
		self->node = nn;
	}}
#line 402 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 137 "mixer-pxml.gob"
gboolean 
xfce_mixer_pxml_has_children (XfceMixerPxml * self)
#line 408 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::has_children"
#line 137 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 137 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (gboolean )0);
#line 415 "xfce-mixer-pxml.c"
{
#line 138 "mixer-pxml.gob"
	
		if (!self->node)
			return FALSE;

		return (self->node->children != NULL);
	}}
#line 424 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 145 "mixer-pxml.gob"
gchar * 
xfce_mixer_pxml_get_prop (XfceMixerPxml * self, gchar const * pname)
#line 430 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::get_prop"
#line 145 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (gchar * )0);
#line 145 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (gchar * )0);
#line 437 "xfce-mixer-pxml.c"
{
#line 146 "mixer-pxml.gob"
	
		return xmlGetProp (self->node, pname);
	}}
#line 443 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 150 "mixer-pxml.gob"
void 
xfce_mixer_pxml_set_prop (XfceMixerPxml * self, gchar const * pname, gchar const * value)
#line 449 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::set_prop"
#line 150 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 150 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 456 "xfce-mixer-pxml.c"
{
#line 151 "mixer-pxml.gob"
	
		xmlSetProp (self->node, pname, (const xmlChar *) value);
	}}
#line 462 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 155 "mixer-pxml.gob"
xmlNodePtr 
xfce_mixer_pxml_create_text_child (XfceMixerPxml * self, gchar const * name, gchar const * opt_text)
#line 468 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::create_text_child"
#line 155 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (xmlNodePtr )0);
#line 155 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (xmlNodePtr )0);
#line 475 "xfce-mixer-pxml.c"
{
#line 156 "mixer-pxml.gob"
	
		return xmlNewTextChild (self->node, NULL, (const xmlChar *)name, (const xmlChar *) opt_text);
	}}
#line 481 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 161 "mixer-pxml.gob"
XfceMixerPxml * 
xfce_mixer_pxml_new (gchar const * root)
#line 487 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::new"
{
#line 162 "mixer-pxml.gob"
	
		XfceMixerPxml *p;
		p = XFCE_MIXER_PXML (GET_NEW);
		p->root = g_strdup (root);
		return p;
	}}
#line 498 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__


#if (!defined __GNUC__) || (defined __GNUC__ && defined __STRICT_ANSI__)
/*REALLY BAD HACK
  This is to avoid unused warnings if you don't call
  some method.  I need to find a better way to do
  this, not needed in GCC since we use some gcc
  extentions to make saner, faster code */
static void
___xfce_mixer_pxml_really_bad_hack_to_avoid_warnings(void)
{
	((void (*)(void))GET_NEW_VARG)();
	((void (*)(void))self_eat_children)();
	((void (*)(void))self_goto_next)();
	((void (*)(void))self_check_tag)();
	((void (*)(void))self_goto_child_tag)();
	((void (*)(void))self_has_parent)();
	((void (*)(void))self_goto_parent)();
	((void (*)(void))self_goto_children)();
	((void (*)(void))self_goto_node)();
	((void (*)(void))self_has_children)();
	((void (*)(void))self_get_prop)();
	((void (*)(void))self_set_prop)();
	((void (*)(void))self_create_text_child)();
	((void (*)(void))self_new)();
	___xfce_mixer_pxml_really_bad_hack_to_avoid_warnings();
}
#endif /* !__GNUC__ || (__GNUC__ && __STRICT_ANSI__) */
