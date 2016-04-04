/* libcorlib.h generated by valac 0.26.1, the Vala compiler, do not modify */


#ifndef __LIBCORLIB_H__
#define __LIBCORLIB_H__

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>

G_BEGIN_DECLS


#define SYSTEM_TYPE_STRING_COMPARISON (system_string_comparison_get_type ())

#define SYSTEM_TYPE_CONSOLE_SPECIAL_KEY (system_console_special_key_get_type ())

#define SYSTEM_TYPE_CONTROL_CHARACTERS (system_control_characters_get_type ())
#define SYSTEM_CONTROL_CHARACTERS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYSTEM_TYPE_CONTROL_CHARACTERS, SystemControlCharacters))
#define SYSTEM_CONTROL_CHARACTERS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SYSTEM_TYPE_CONTROL_CHARACTERS, SystemControlCharactersClass))
#define SYSTEM_IS_CONTROL_CHARACTERS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYSTEM_TYPE_CONTROL_CHARACTERS))
#define SYSTEM_IS_CONTROL_CHARACTERS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SYSTEM_TYPE_CONTROL_CHARACTERS))
#define SYSTEM_CONTROL_CHARACTERS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SYSTEM_TYPE_CONTROL_CHARACTERS, SystemControlCharactersClass))

typedef struct _SystemControlCharacters SystemControlCharacters;
typedef struct _SystemControlCharactersClass SystemControlCharactersClass;
typedef struct _SystemControlCharactersPrivate SystemControlCharactersPrivate;

#define SYSTEM_TYPE_MIDPOINT_ROUNDING (system_midpoint_rounding_get_type ())

#define SYSTEM_TYPE_IAPP_DOMAIN_SETUP (system_iapp_domain_setup_get_type ())
#define SYSTEM_IAPP_DOMAIN_SETUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYSTEM_TYPE_IAPP_DOMAIN_SETUP, SystemIAppDomainSetup))
#define SYSTEM_IS_IAPP_DOMAIN_SETUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYSTEM_TYPE_IAPP_DOMAIN_SETUP))
#define SYSTEM_IAPP_DOMAIN_SETUP_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SYSTEM_TYPE_IAPP_DOMAIN_SETUP, SystemIAppDomainSetupIface))

typedef struct _SystemIAppDomainSetup SystemIAppDomainSetup;
typedef struct _SystemIAppDomainSetupIface SystemIAppDomainSetupIface;

#define SYSTEM_TYPE_EMPTY_ARRAY (system_empty_array_get_type ())
typedef struct _SystemEmptyArray SystemEmptyArray;

#define SYSTEM_TYPE_ENVIRONMENT_VARIABLE_TARGET (system_environment_variable_target_get_type ())

#define SYSTEM_TYPE_APP_DOMAIN_MANAGER_INITIALIZATION_OPTIONS (system_app_domain_manager_initialization_options_get_type ())

#define SYSTEM_TYPE_IOBSERVER (system_iobserver_get_type ())
#define SYSTEM_IOBSERVER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYSTEM_TYPE_IOBSERVER, SystemIObserver))
#define SYSTEM_IS_IOBSERVER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYSTEM_TYPE_IOBSERVER))
#define SYSTEM_IOBSERVER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SYSTEM_TYPE_IOBSERVER, SystemIObserverIface))

typedef struct _SystemIObserver SystemIObserver;
typedef struct _SystemIObserverIface SystemIObserverIface;

#define SYSTEM_TYPE_CONSOLE_COLOR (system_console_color_get_type ())

#define SYSTEM_TYPE_DAY_OF_WEEK (system_day_of_week_get_type ())

#define SYSTEM_TYPE_ICLONEABLE (system_icloneable_get_type ())
#define SYSTEM_ICLONEABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYSTEM_TYPE_ICLONEABLE, SystemICloneable))
#define SYSTEM_IS_ICLONEABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYSTEM_TYPE_ICLONEABLE))
#define SYSTEM_ICLONEABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SYSTEM_TYPE_ICLONEABLE, SystemICloneableIface))

typedef struct _SystemICloneable SystemICloneable;
typedef struct _SystemICloneableIface SystemICloneableIface;

#define SYSTEM_TYPE_BASE64_FORMATTING_OPTIONS (system_base64_formatting_options_get_type ())

#define SYSTEM_TYPE_IEQUATABLE (system_iequatable_get_type ())
#define SYSTEM_IEQUATABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYSTEM_TYPE_IEQUATABLE, SystemIEquatable))
#define SYSTEM_IS_IEQUATABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYSTEM_TYPE_IEQUATABLE))
#define SYSTEM_IEQUATABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SYSTEM_TYPE_IEQUATABLE, SystemIEquatableIface))

typedef struct _SystemIEquatable SystemIEquatable;
typedef struct _SystemIEquatableIface SystemIEquatableIface;

#define SYSTEM_TYPE_ATTRIBUTE_TARGETS (system_attribute_targets_get_type ())

#define SYSTEM_TYPE_TYPE_CODE (system_type_code_get_type ())

#define SYSTEM_TYPE_IDISPOSABLE (system_idisposable_get_type ())
#define SYSTEM_IDISPOSABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYSTEM_TYPE_IDISPOSABLE, SystemIDisposable))
#define SYSTEM_IS_IDISPOSABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYSTEM_TYPE_IDISPOSABLE))
#define SYSTEM_IDISPOSABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SYSTEM_TYPE_IDISPOSABLE, SystemIDisposableIface))

typedef struct _SystemIDisposable SystemIDisposable;
typedef struct _SystemIDisposableIface SystemIDisposableIface;

#define SYSTEM_TYPE_CONSOLE_MODIFIERS (system_console_modifiers_get_type ())

#define SYSTEM_TYPE_DATE_TIME_KIND (system_date_time_kind_get_type ())

#define SYSTEM_TYPE_PLATFORM_ID (system_platform_id_get_type ())

#define SYSTEM_TYPE_STRING_SPLIT_OPTIONS (system_string_split_options_get_type ())

typedef enum  {
	SYSTEM_STRING_COMPARISON_CurrentCulture,
	SYSTEM_STRING_COMPARISON_CurrentCultureIgnoreCase,
	SYSTEM_STRING_COMPARISON_InvariantCulture,
	SYSTEM_STRING_COMPARISON_InvariantCultureIgnoreCase,
	SYSTEM_STRING_COMPARISON_Ordinal,
	SYSTEM_STRING_COMPARISON_OrdinalIgnoreCase
} SystemStringComparison;

typedef enum  {
	SYSTEM_CONSOLE_SPECIAL_KEY_ControlC,
	SYSTEM_CONSOLE_SPECIAL_KEY_ControlBreak
} SystemConsoleSpecialKey;

struct _SystemControlCharacters {
	GTypeInstance parent_instance;
	volatile int ref_count;
	SystemControlCharactersPrivate * priv;
};

struct _SystemControlCharactersClass {
	GTypeClass parent_class;
	void (*finalize) (SystemControlCharacters *self);
};

typedef enum  {
	SYSTEM_MIDPOINT_ROUNDING_ToEven = 0,
	SYSTEM_MIDPOINT_ROUNDING_AwayFromZero = 1
} SystemMidpointRounding;

struct _SystemIAppDomainSetupIface {
	GTypeInterface parent_iface;
	const gchar* (*get_ApplicationBase) (SystemIAppDomainSetup* self);
	void (*set_ApplicationBase) (SystemIAppDomainSetup* self, const gchar* value);
	const gchar* (*get_ApplicationName) (SystemIAppDomainSetup* self);
	void (*set_ApplicationName) (SystemIAppDomainSetup* self, const gchar* value);
	const gchar* (*get_CachePath) (SystemIAppDomainSetup* self);
	void (*set_CachePath) (SystemIAppDomainSetup* self, const gchar* value);
	const gchar* (*get_ConfigurationFile) (SystemIAppDomainSetup* self);
	void (*set_ConfigurationFile) (SystemIAppDomainSetup* self, const gchar* value);
	const gchar* (*get_DynamicBase) (SystemIAppDomainSetup* self);
	void (*set_DynamicBase) (SystemIAppDomainSetup* self, const gchar* value);
	const gchar* (*get_LicenseFile) (SystemIAppDomainSetup* self);
	void (*set_LicenseFile) (SystemIAppDomainSetup* self, const gchar* value);
	const gchar* (*get_PrivateBinPath) (SystemIAppDomainSetup* self);
	void (*set_PrivateBinPath) (SystemIAppDomainSetup* self, const gchar* value);
	const gchar* (*get_PrivateBinPathProbe) (SystemIAppDomainSetup* self);
	void (*set_PrivateBinPathProbe) (SystemIAppDomainSetup* self, const gchar* value);
	const gchar* (*get_ShadowCopyDirectories) (SystemIAppDomainSetup* self);
	void (*set_ShadowCopyDirectories) (SystemIAppDomainSetup* self, const gchar* value);
	const gchar* (*get_ShadowCopyFiles) (SystemIAppDomainSetup* self);
	void (*set_ShadowCopyFiles) (SystemIAppDomainSetup* self, const gchar* value);
};

struct _SystemEmptyArray {
	gpointer* Value;
	gint Value_length1;
};

typedef enum  {
	SYSTEM_ENVIRONMENT_VARIABLE_TARGET_Process,
	SYSTEM_ENVIRONMENT_VARIABLE_TARGET_User,
	SYSTEM_ENVIRONMENT_VARIABLE_TARGET_Machine
} SystemEnvironmentVariableTarget;

typedef enum  {
	SYSTEM_APP_DOMAIN_MANAGER_INITIALIZATION_OPTIONS_None = 0,
	SYSTEM_APP_DOMAIN_MANAGER_INITIALIZATION_OPTIONS_RegisterWithHost = 1
} SystemAppDomainManagerInitializationOptions;

struct _SystemIObserverIface {
	GTypeInterface parent_iface;
	void (*OnCompleted) (SystemIObserver* self);
	void (*OnNext) (SystemIObserver* self, gconstpointer value);
};

typedef enum  {
	SYSTEM_CONSOLE_COLOR_Black,
	SYSTEM_CONSOLE_COLOR_DarkBlue,
	SYSTEM_CONSOLE_COLOR_DarkGreen,
	SYSTEM_CONSOLE_COLOR_DarkCyan,
	SYSTEM_CONSOLE_COLOR_DarkRed,
	SYSTEM_CONSOLE_COLOR_DarkMagenta,
	SYSTEM_CONSOLE_COLOR_DarkYellow,
	SYSTEM_CONSOLE_COLOR_Gray,
	SYSTEM_CONSOLE_COLOR_DarkGray,
	SYSTEM_CONSOLE_COLOR_Blue,
	SYSTEM_CONSOLE_COLOR_Green,
	SYSTEM_CONSOLE_COLOR_Cyan,
	SYSTEM_CONSOLE_COLOR_Red,
	SYSTEM_CONSOLE_COLOR_Magenta,
	SYSTEM_CONSOLE_COLOR_Yellow,
	SYSTEM_CONSOLE_COLOR_White
} SystemConsoleColor;

typedef enum  {
	SYSTEM_DAY_OF_WEEK_Sunday,
	SYSTEM_DAY_OF_WEEK_Monday,
	SYSTEM_DAY_OF_WEEK_Tuesday,
	SYSTEM_DAY_OF_WEEK_Wednesday,
	SYSTEM_DAY_OF_WEEK_Thursday,
	SYSTEM_DAY_OF_WEEK_Friday,
	SYSTEM_DAY_OF_WEEK_Saturday
} SystemDayOfWeek;

struct _SystemICloneableIface {
	GTypeInterface parent_iface;
	GObject* (*Clone) (SystemICloneable* self);
};

typedef enum  {
	SYSTEM_BASE64_FORMATTING_OPTIONS_InsertLineBreaks = 0x1,
	SYSTEM_BASE64_FORMATTING_OPTIONS_None = 0x0
} SystemBase64FormattingOptions;

struct _SystemIEquatableIface {
	GTypeInterface parent_iface;
	gboolean (*Equals) (SystemIEquatable* self, gconstpointer other);
};

typedef enum  {
	SYSTEM_ATTRIBUTE_TARGETS_Assembly = 0x00000001,
	SYSTEM_ATTRIBUTE_TARGETS_Module = 0x00000002,
	SYSTEM_ATTRIBUTE_TARGETS_Class = 0x00000004,
	SYSTEM_ATTRIBUTE_TARGETS_Struct = 0x00000008,
	SYSTEM_ATTRIBUTE_TARGETS_Enum = 0x00000010,
	SYSTEM_ATTRIBUTE_TARGETS_Constructor = 0x00000020,
	SYSTEM_ATTRIBUTE_TARGETS_Method = 0x00000040,
	SYSTEM_ATTRIBUTE_TARGETS_Property = 0x00000080,
	SYSTEM_ATTRIBUTE_TARGETS_Field = 0x00000100,
	SYSTEM_ATTRIBUTE_TARGETS_Event = 0x00000200,
	SYSTEM_ATTRIBUTE_TARGETS_Interface = 0x00000400,
	SYSTEM_ATTRIBUTE_TARGETS_Parameter = 0x00000800,
	SYSTEM_ATTRIBUTE_TARGETS_Delegate = 0x00001000,
	SYSTEM_ATTRIBUTE_TARGETS_ReturnValue = 0x00002000,
	SYSTEM_ATTRIBUTE_TARGETS_GenericParameter = 0x00004000,
	SYSTEM_ATTRIBUTE_TARGETS_All = (((((((((((((SYSTEM_ATTRIBUTE_TARGETS_Assembly | SYSTEM_ATTRIBUTE_TARGETS_Module) | SYSTEM_ATTRIBUTE_TARGETS_Class) | SYSTEM_ATTRIBUTE_TARGETS_Struct) | SYSTEM_ATTRIBUTE_TARGETS_Enum) | SYSTEM_ATTRIBUTE_TARGETS_Constructor) | SYSTEM_ATTRIBUTE_TARGETS_Method) | SYSTEM_ATTRIBUTE_TARGETS_Property) | SYSTEM_ATTRIBUTE_TARGETS_Field) | SYSTEM_ATTRIBUTE_TARGETS_Event) | SYSTEM_ATTRIBUTE_TARGETS_Interface) | SYSTEM_ATTRIBUTE_TARGETS_Parameter) | SYSTEM_ATTRIBUTE_TARGETS_Delegate) | SYSTEM_ATTRIBUTE_TARGETS_ReturnValue) | SYSTEM_ATTRIBUTE_TARGETS_GenericParameter
} SystemAttributeTargets;

typedef enum  {
	SYSTEM_TYPE_CODE_Empty = 0,
	SYSTEM_TYPE_CODE_Object = 1,
	SYSTEM_TYPE_CODE_DBNull = 2,
	SYSTEM_TYPE_CODE_Boolean = 3,
	SYSTEM_TYPE_CODE_Char = 4,
	SYSTEM_TYPE_CODE_SByte = 5,
	SYSTEM_TYPE_CODE_Byte = 6,
	SYSTEM_TYPE_CODE_Int16 = 7,
	SYSTEM_TYPE_CODE_UInt16 = 8,
	SYSTEM_TYPE_CODE_Int32 = 9,
	SYSTEM_TYPE_CODE_UInt32 = 10,
	SYSTEM_TYPE_CODE_Int64 = 11,
	SYSTEM_TYPE_CODE_UInt64 = 12,
	SYSTEM_TYPE_CODE_Single = 13,
	SYSTEM_TYPE_CODE_Double = 14,
	SYSTEM_TYPE_CODE_Decimal = 15,
	SYSTEM_TYPE_CODE_DateTime = 16,
	SYSTEM_TYPE_CODE_String = 18
} SystemTypeCode;

struct _SystemIDisposableIface {
	GTypeInterface parent_iface;
};

typedef enum  {
	SYSTEM_CONSOLE_MODIFIERS_Alt = 1,
	SYSTEM_CONSOLE_MODIFIERS_Shift = 2,
	SYSTEM_CONSOLE_MODIFIERS_Control = 4
} SystemConsoleModifiers;

typedef enum  {
	SYSTEM_DATE_TIME_KIND_Unspecified,
	SYSTEM_DATE_TIME_KIND_Utc,
	SYSTEM_DATE_TIME_KIND_Local
} SystemDateTimeKind;

typedef enum  {
	SYSTEM_PLATFORM_ID_Win32S = 0,
	SYSTEM_PLATFORM_ID_Win32Windows = 1,
	SYSTEM_PLATFORM_ID_Win32NT = 2,
	SYSTEM_PLATFORM_ID_WinCE = 3,
	SYSTEM_PLATFORM_ID_Unix = 4,
	SYSTEM_PLATFORM_ID_Xbox = 5,
	SYSTEM_PLATFORM_ID_MacOSX = 6
} SystemPlatformID;

typedef enum  {
	SYSTEM_STRING_SPLIT_OPTIONS_None = 0,
	SYSTEM_STRING_SPLIT_OPTIONS_RemoveEmptyEntries = 1
} SystemStringSplitOptions;


GType system_string_comparison_get_type (void) G_GNUC_CONST;
GType system_console_special_key_get_type (void) G_GNUC_CONST;
gpointer system_control_characters_ref (gpointer instance);
void system_control_characters_unref (gpointer instance);
GParamSpec* system_param_spec_control_characters (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void system_value_set_control_characters (GValue* value, gpointer v_object);
void system_value_take_control_characters (GValue* value, gpointer v_object);
gpointer system_value_get_control_characters (const GValue* value);
GType system_control_characters_get_type (void) G_GNUC_CONST;
#define SYSTEM_CONTROL_CHARACTERS_Intr 0
#define SYSTEM_CONTROL_CHARACTERS_Quit 1
#define SYSTEM_CONTROL_CHARACTERS_Erase 2
#define SYSTEM_CONTROL_CHARACTERS_Kill 3
#define SYSTEM_CONTROL_CHARACTERS_EOF 4
#define SYSTEM_CONTROL_CHARACTERS_Time 5
#define SYSTEM_CONTROL_CHARACTERS_Min 6
#define SYSTEM_CONTROL_CHARACTERS_SWTC 7
#define SYSTEM_CONTROL_CHARACTERS_Start 8
#define SYSTEM_CONTROL_CHARACTERS_Stop 9
#define SYSTEM_CONTROL_CHARACTERS_Susp 10
#define SYSTEM_CONTROL_CHARACTERS_EOL 11
#define SYSTEM_CONTROL_CHARACTERS_Reprint 12
#define SYSTEM_CONTROL_CHARACTERS_Discard 13
#define SYSTEM_CONTROL_CHARACTERS_WErase 14
#define SYSTEM_CONTROL_CHARACTERS_LNext 15
#define SYSTEM_CONTROL_CHARACTERS_EOL2 16
SystemControlCharacters* system_control_characters_new (void);
SystemControlCharacters* system_control_characters_construct (GType object_type);
GType system_midpoint_rounding_get_type (void) G_GNUC_CONST;
GType system_iapp_domain_setup_get_type (void) G_GNUC_CONST;
const gchar* system_iapp_domain_setup_get_ApplicationBase (SystemIAppDomainSetup* self);
void system_iapp_domain_setup_set_ApplicationBase (SystemIAppDomainSetup* self, const gchar* value);
const gchar* system_iapp_domain_setup_get_ApplicationName (SystemIAppDomainSetup* self);
void system_iapp_domain_setup_set_ApplicationName (SystemIAppDomainSetup* self, const gchar* value);
const gchar* system_iapp_domain_setup_get_CachePath (SystemIAppDomainSetup* self);
void system_iapp_domain_setup_set_CachePath (SystemIAppDomainSetup* self, const gchar* value);
const gchar* system_iapp_domain_setup_get_ConfigurationFile (SystemIAppDomainSetup* self);
void system_iapp_domain_setup_set_ConfigurationFile (SystemIAppDomainSetup* self, const gchar* value);
const gchar* system_iapp_domain_setup_get_DynamicBase (SystemIAppDomainSetup* self);
void system_iapp_domain_setup_set_DynamicBase (SystemIAppDomainSetup* self, const gchar* value);
const gchar* system_iapp_domain_setup_get_LicenseFile (SystemIAppDomainSetup* self);
void system_iapp_domain_setup_set_LicenseFile (SystemIAppDomainSetup* self, const gchar* value);
const gchar* system_iapp_domain_setup_get_PrivateBinPath (SystemIAppDomainSetup* self);
void system_iapp_domain_setup_set_PrivateBinPath (SystemIAppDomainSetup* self, const gchar* value);
const gchar* system_iapp_domain_setup_get_PrivateBinPathProbe (SystemIAppDomainSetup* self);
void system_iapp_domain_setup_set_PrivateBinPathProbe (SystemIAppDomainSetup* self, const gchar* value);
const gchar* system_iapp_domain_setup_get_ShadowCopyDirectories (SystemIAppDomainSetup* self);
void system_iapp_domain_setup_set_ShadowCopyDirectories (SystemIAppDomainSetup* self, const gchar* value);
const gchar* system_iapp_domain_setup_get_ShadowCopyFiles (SystemIAppDomainSetup* self);
void system_iapp_domain_setup_set_ShadowCopyFiles (SystemIAppDomainSetup* self, const gchar* value);
GType system_empty_array_get_type (void) G_GNUC_CONST;
SystemEmptyArray* system_empty_array_dup (const SystemEmptyArray* self);
void system_empty_array_free (SystemEmptyArray* self);
void system_empty_array_copy (const SystemEmptyArray* self, SystemEmptyArray* dest);
void system_empty_array_destroy (SystemEmptyArray* self);
void system_empty_array_init (SystemEmptyArray *self);
GType system_environment_variable_target_get_type (void) G_GNUC_CONST;
GType system_app_domain_manager_initialization_options_get_type (void) G_GNUC_CONST;
GType system_iobserver_get_type (void) G_GNUC_CONST;
void system_iobserver_OnCompleted (SystemIObserver* self);
void system_iobserver_OnNext (SystemIObserver* self, gconstpointer value);
GType system_console_color_get_type (void) G_GNUC_CONST;
GType system_day_of_week_get_type (void) G_GNUC_CONST;
GType system_icloneable_get_type (void) G_GNUC_CONST;
GObject* system_icloneable_Clone (SystemICloneable* self);
GType system_base64_formatting_options_get_type (void) G_GNUC_CONST;
GType system_iequatable_get_type (void) G_GNUC_CONST;
gboolean system_iequatable_Equals (SystemIEquatable* self, gconstpointer other);
GType system_attribute_targets_get_type (void) G_GNUC_CONST;
GType system_type_code_get_type (void) G_GNUC_CONST;
GType system_idisposable_get_type (void) G_GNUC_CONST;
GType system_console_modifiers_get_type (void) G_GNUC_CONST;
GType system_date_time_kind_get_type (void) G_GNUC_CONST;
GType system_platform_id_get_type (void) G_GNUC_CONST;
GType system_string_split_options_get_type (void) G_GNUC_CONST;


G_END_DECLS

#endif