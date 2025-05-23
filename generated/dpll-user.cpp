// SPDX-License-Identifier: ((GPL-2.0 WITH Linux-syscall-note) OR BSD-3-Clause)
/* Do not edit directly, auto-generated from: */
/*	 */
/* YNL-GEN user source */

#include "dpll-user.hpp"

#include <array>

#include <linux/dpll.h>

#include <linux/genetlink.h>

namespace ynl_cpp {

/* Enums */
static constexpr std::array<std::string_view, DPLL_CMD_PIN_CHANGE_NTF + 1> dpll_op_strmap = []() {
	std::array<std::string_view, DPLL_CMD_PIN_CHANGE_NTF + 1> arr{};
	arr[DPLL_CMD_DEVICE_ID_GET] = "device-id-get";
	arr[DPLL_CMD_DEVICE_GET] = "device-get";
	arr[DPLL_CMD_DEVICE_SET] = "device-set";
	arr[DPLL_CMD_DEVICE_CREATE_NTF] = "device-create-ntf";
	arr[DPLL_CMD_DEVICE_DELETE_NTF] = "device-delete-ntf";
	arr[DPLL_CMD_DEVICE_CHANGE_NTF] = "device-change-ntf";
	arr[DPLL_CMD_PIN_ID_GET] = "pin-id-get";
	arr[DPLL_CMD_PIN_GET] = "pin-get";
	arr[DPLL_CMD_PIN_SET] = "pin-set";
	arr[DPLL_CMD_PIN_CREATE_NTF] = "pin-create-ntf";
	arr[DPLL_CMD_PIN_DELETE_NTF] = "pin-delete-ntf";
	arr[DPLL_CMD_PIN_CHANGE_NTF] = "pin-change-ntf";
	return arr;
} ();

std::string_view dpll_op_str(int op)
{
	if (op < 0 || op >= (int)(dpll_op_strmap.size()))
		return "";
	return dpll_op_strmap[op];
}

static constexpr std::array<std::string_view, 2 + 1> dpll_mode_strmap = []() {
	std::array<std::string_view, 2 + 1> arr{};
	arr[1] = "manual";
	arr[2] = "automatic";
	return arr;
} ();

std::string_view dpll_mode_str(dpll_mode value)
{
	if (value < 0 || value >= (int)(dpll_mode_strmap.size()))
		return "";
	return dpll_mode_strmap[value];
}

static constexpr std::array<std::string_view, 4 + 1> dpll_lock_status_strmap = []() {
	std::array<std::string_view, 4 + 1> arr{};
	arr[1] = "unlocked";
	arr[2] = "locked";
	arr[3] = "locked-ho-acq";
	arr[4] = "holdover";
	return arr;
} ();

std::string_view dpll_lock_status_str(dpll_lock_status value)
{
	if (value < 0 || value >= (int)(dpll_lock_status_strmap.size()))
		return "";
	return dpll_lock_status_strmap[value];
}

static constexpr std::array<std::string_view, 4 + 1> dpll_lock_status_error_strmap = []() {
	std::array<std::string_view, 4 + 1> arr{};
	arr[1] = "none";
	arr[2] = "undefined";
	arr[3] = "media-down";
	arr[4] = "fractional-frequency-offset-too-high";
	return arr;
} ();

std::string_view dpll_lock_status_error_str(dpll_lock_status_error value)
{
	if (value < 0 || value >= (int)(dpll_lock_status_error_strmap.size()))
		return "";
	return dpll_lock_status_error_strmap[value];
}

static constexpr std::array<std::string_view, 8 + 1> dpll_clock_quality_level_strmap = []() {
	std::array<std::string_view, 8 + 1> arr{};
	arr[1] = "itu-opt1-prc";
	arr[2] = "itu-opt1-ssu-a";
	arr[3] = "itu-opt1-ssu-b";
	arr[4] = "itu-opt1-eec1";
	arr[5] = "itu-opt1-prtc";
	arr[6] = "itu-opt1-eprtc";
	arr[7] = "itu-opt1-eeec";
	arr[8] = "itu-opt1-eprc";
	return arr;
} ();

std::string_view dpll_clock_quality_level_str(dpll_clock_quality_level value)
{
	if (value < 0 || value >= (int)(dpll_clock_quality_level_strmap.size()))
		return "";
	return dpll_clock_quality_level_strmap[value];
}

static constexpr std::array<std::string_view, 2 + 1> dpll_type_strmap = []() {
	std::array<std::string_view, 2 + 1> arr{};
	arr[1] = "pps";
	arr[2] = "eec";
	return arr;
} ();

std::string_view dpll_type_str(dpll_type value)
{
	if (value < 0 || value >= (int)(dpll_type_strmap.size()))
		return "";
	return dpll_type_strmap[value];
}

static constexpr std::array<std::string_view, 5 + 1> dpll_pin_type_strmap = []() {
	std::array<std::string_view, 5 + 1> arr{};
	arr[1] = "mux";
	arr[2] = "ext";
	arr[3] = "synce-eth-port";
	arr[4] = "int-oscillator";
	arr[5] = "gnss";
	return arr;
} ();

std::string_view dpll_pin_type_str(dpll_pin_type value)
{
	if (value < 0 || value >= (int)(dpll_pin_type_strmap.size()))
		return "";
	return dpll_pin_type_strmap[value];
}

static constexpr std::array<std::string_view, 2 + 1> dpll_pin_direction_strmap = []() {
	std::array<std::string_view, 2 + 1> arr{};
	arr[1] = "input";
	arr[2] = "output";
	return arr;
} ();

std::string_view dpll_pin_direction_str(dpll_pin_direction value)
{
	if (value < 0 || value >= (int)(dpll_pin_direction_strmap.size()))
		return "";
	return dpll_pin_direction_strmap[value];
}

static constexpr std::array<std::string_view, 3 + 1> dpll_pin_state_strmap = []() {
	std::array<std::string_view, 3 + 1> arr{};
	arr[1] = "connected";
	arr[2] = "disconnected";
	arr[3] = "selectable";
	return arr;
} ();

std::string_view dpll_pin_state_str(dpll_pin_state value)
{
	if (value < 0 || value >= (int)(dpll_pin_state_strmap.size()))
		return "";
	return dpll_pin_state_strmap[value];
}

static constexpr std::array<std::string_view, 2 + 1> dpll_pin_capabilities_strmap = []() {
	std::array<std::string_view, 2 + 1> arr{};
	arr[0] = "direction-can-change";
	arr[1] = "priority-can-change";
	arr[2] = "state-can-change";
	return arr;
} ();

std::string_view dpll_pin_capabilities_str(dpll_pin_capabilities value)
{
	value = (dpll_pin_capabilities)(ffs(value) - 1);
	if (value < 0 || value >= (int)(dpll_pin_capabilities_strmap.size()))
		return "";
	return dpll_pin_capabilities_strmap[value];
}

/* Policies */
static std::array<ynl_policy_attr,DPLL_A_PIN_MAX + 1> dpll_frequency_range_policy = []() {
	std::array<ynl_policy_attr,DPLL_A_PIN_MAX + 1> arr{};
	arr[DPLL_A_PIN_FREQUENCY_MIN] = { .name = "frequency-min", .type = YNL_PT_U64, };
	arr[DPLL_A_PIN_FREQUENCY_MAX] = { .name = "frequency-max", .type = YNL_PT_U64, };
	return arr;
} ();

struct ynl_policy_nest dpll_frequency_range_nest = {
	.max_attr = DPLL_A_PIN_MAX,
	.table = dpll_frequency_range_policy.data(),
};

static std::array<ynl_policy_attr,DPLL_A_PIN_MAX + 1> dpll_pin_parent_device_policy = []() {
	std::array<ynl_policy_attr,DPLL_A_PIN_MAX + 1> arr{};
	arr[DPLL_A_PIN_PARENT_ID] = { .name = "parent-id", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_DIRECTION] = { .name = "direction", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_PRIO] = { .name = "prio", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_STATE] = { .name = "state", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_PHASE_OFFSET] = { .name = "phase-offset", .type = YNL_PT_U64, };
	return arr;
} ();

struct ynl_policy_nest dpll_pin_parent_device_nest = {
	.max_attr = DPLL_A_PIN_MAX,
	.table = dpll_pin_parent_device_policy.data(),
};

static std::array<ynl_policy_attr,DPLL_A_PIN_MAX + 1> dpll_pin_parent_pin_policy = []() {
	std::array<ynl_policy_attr,DPLL_A_PIN_MAX + 1> arr{};
	arr[DPLL_A_PIN_PARENT_ID] = { .name = "parent-id", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_STATE] = { .name = "state", .type = YNL_PT_U32, };
	return arr;
} ();

struct ynl_policy_nest dpll_pin_parent_pin_nest = {
	.max_attr = DPLL_A_PIN_MAX,
	.table = dpll_pin_parent_pin_policy.data(),
};

static std::array<ynl_policy_attr,DPLL_A_MAX + 1> dpll_policy = []() {
	std::array<ynl_policy_attr,DPLL_A_MAX + 1> arr{};
	arr[DPLL_A_ID] = { .name = "id", .type = YNL_PT_U32, };
	arr[DPLL_A_MODULE_NAME] = { .name = "module-name", .type = YNL_PT_NUL_STR, };
	arr[DPLL_A_PAD] = { .name = "pad", .type = YNL_PT_IGNORE, };
	arr[DPLL_A_CLOCK_ID] = { .name = "clock-id", .type = YNL_PT_U64, };
	arr[DPLL_A_MODE] = { .name = "mode", .type = YNL_PT_U32, };
	arr[DPLL_A_MODE_SUPPORTED] = { .name = "mode-supported", .type = YNL_PT_U32, };
	arr[DPLL_A_LOCK_STATUS] = { .name = "lock-status", .type = YNL_PT_U32, };
	arr[DPLL_A_TEMP] = { .name = "temp", .type = YNL_PT_U32, };
	arr[DPLL_A_TYPE] = { .name = "type", .type = YNL_PT_U32, };
	arr[DPLL_A_LOCK_STATUS_ERROR] = { .name = "lock-status-error", .type = YNL_PT_U32, };
	arr[DPLL_A_CLOCK_QUALITY_LEVEL] = { .name = "clock-quality-level", .type = YNL_PT_U32, };
	return arr;
} ();

struct ynl_policy_nest dpll_nest = {
	.max_attr = DPLL_A_MAX,
	.table = dpll_policy.data(),
};

static std::array<ynl_policy_attr,DPLL_A_PIN_MAX + 1> dpll_pin_policy = []() {
	std::array<ynl_policy_attr,DPLL_A_PIN_MAX + 1> arr{};
	arr[DPLL_A_PIN_ID] = { .name = "id", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_PARENT_ID] = { .name = "parent-id", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_MODULE_NAME] = { .name = "module-name", .type = YNL_PT_NUL_STR, };
	arr[DPLL_A_PIN_PAD] = { .name = "pad", .type = YNL_PT_IGNORE, };
	arr[DPLL_A_PIN_CLOCK_ID] = { .name = "clock-id", .type = YNL_PT_U64, };
	arr[DPLL_A_PIN_BOARD_LABEL] = { .name = "board-label", .type = YNL_PT_NUL_STR, };
	arr[DPLL_A_PIN_PANEL_LABEL] = { .name = "panel-label", .type = YNL_PT_NUL_STR, };
	arr[DPLL_A_PIN_PACKAGE_LABEL] = { .name = "package-label", .type = YNL_PT_NUL_STR, };
	arr[DPLL_A_PIN_TYPE] = { .name = "type", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_DIRECTION] = { .name = "direction", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_FREQUENCY] = { .name = "frequency", .type = YNL_PT_U64, };
	arr[DPLL_A_PIN_FREQUENCY_SUPPORTED] = { .name = "frequency-supported", .type = YNL_PT_NEST, .nest = &dpll_frequency_range_nest, };
	arr[DPLL_A_PIN_FREQUENCY_MIN] = { .name = "frequency-min", .type = YNL_PT_U64, };
	arr[DPLL_A_PIN_FREQUENCY_MAX] = { .name = "frequency-max", .type = YNL_PT_U64, };
	arr[DPLL_A_PIN_PRIO] = { .name = "prio", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_STATE] = { .name = "state", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_CAPABILITIES] = { .name = "capabilities", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_PARENT_DEVICE] = { .name = "parent-device", .type = YNL_PT_NEST, .nest = &dpll_pin_parent_device_nest, };
	arr[DPLL_A_PIN_PARENT_PIN] = { .name = "parent-pin", .type = YNL_PT_NEST, .nest = &dpll_pin_parent_pin_nest, };
	arr[DPLL_A_PIN_PHASE_ADJUST_MIN] = { .name = "phase-adjust-min", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_PHASE_ADJUST_MAX] = { .name = "phase-adjust-max", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_PHASE_ADJUST] = { .name = "phase-adjust", .type = YNL_PT_U32, };
	arr[DPLL_A_PIN_PHASE_OFFSET] = { .name = "phase-offset", .type = YNL_PT_U64, };
	arr[DPLL_A_PIN_FRACTIONAL_FREQUENCY_OFFSET] = { .name = "fractional-frequency-offset", .type = YNL_PT_UINT, };
	arr[DPLL_A_PIN_ESYNC_FREQUENCY] = { .name = "esync-frequency", .type = YNL_PT_U64, };
	arr[DPLL_A_PIN_ESYNC_FREQUENCY_SUPPORTED] = { .name = "esync-frequency-supported", .type = YNL_PT_NEST, .nest = &dpll_frequency_range_nest, };
	arr[DPLL_A_PIN_ESYNC_PULSE] = { .name = "esync-pulse", .type = YNL_PT_U32, };
	return arr;
} ();

struct ynl_policy_nest dpll_pin_nest = {
	.max_attr = DPLL_A_PIN_MAX,
	.table = dpll_pin_policy.data(),
};

/* Common nested types */
int dpll_frequency_range_parse(struct ynl_parse_arg *yarg,
			       const struct nlattr *nested)
{
	dpll_frequency_range *dst = (dpll_frequency_range *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == DPLL_A_PIN_FREQUENCY_MIN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->frequency_min = (__u64)ynl_attr_get_u64(attr);
		} else if (type == DPLL_A_PIN_FREQUENCY_MAX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->frequency_max = (__u64)ynl_attr_get_u64(attr);
		}
	}

	return 0;
}

int dpll_pin_parent_device_put(struct nlmsghdr *nlh, unsigned int attr_type,
			       const dpll_pin_parent_device&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.parent_id.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_PIN_PARENT_ID, obj.parent_id.value());
	if (obj.direction.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_PIN_DIRECTION, obj.direction.value());
	if (obj.prio.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_PIN_PRIO, obj.prio.value());
	if (obj.state.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_PIN_STATE, obj.state.value());
	if (obj.phase_offset.has_value())
		ynl_attr_put_s64(nlh, DPLL_A_PIN_PHASE_OFFSET, obj.phase_offset.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int dpll_pin_parent_device_parse(struct ynl_parse_arg *yarg,
				 const struct nlattr *nested)
{
	dpll_pin_parent_device *dst = (dpll_pin_parent_device *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == DPLL_A_PIN_PARENT_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->parent_id = (__u32)ynl_attr_get_u32(attr);
		} else if (type == DPLL_A_PIN_DIRECTION) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->direction = (dpll_pin_direction)ynl_attr_get_u32(attr);
		} else if (type == DPLL_A_PIN_PRIO) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->prio = (__u32)ynl_attr_get_u32(attr);
		} else if (type == DPLL_A_PIN_STATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->state = (dpll_pin_state)ynl_attr_get_u32(attr);
		} else if (type == DPLL_A_PIN_PHASE_OFFSET) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->phase_offset = (__s64)ynl_attr_get_s64(attr);
		}
	}

	return 0;
}

int dpll_pin_parent_pin_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const dpll_pin_parent_pin&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.parent_id.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_PIN_PARENT_ID, obj.parent_id.value());
	if (obj.state.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_PIN_STATE, obj.state.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int dpll_pin_parent_pin_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested)
{
	dpll_pin_parent_pin *dst = (dpll_pin_parent_pin *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == DPLL_A_PIN_PARENT_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->parent_id = (__u32)ynl_attr_get_u32(attr);
		} else if (type == DPLL_A_PIN_STATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->state = (dpll_pin_state)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

/* ============== DPLL_CMD_DEVICE_ID_GET ============== */
/* DPLL_CMD_DEVICE_ID_GET - do */
int dpll_device_id_get_rsp_parse(const struct nlmsghdr *nlh,
				 struct ynl_parse_arg *yarg)
{
	dpll_device_id_get_rsp *dst;
	const struct nlattr *attr;

	dst = (dpll_device_id_get_rsp*)yarg->data;

	ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
		unsigned int type = ynl_attr_type(attr);

		if (type == DPLL_A_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->id = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return YNL_PARSE_CB_OK;
}

std::unique_ptr<dpll_device_id_get_rsp>
dpll_device_id_get(ynl_cpp::ynl_socket&  ys, dpll_device_id_get_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	std::unique_ptr<dpll_device_id_get_rsp> rsp;
	struct nlmsghdr *nlh;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, DPLL_CMD_DEVICE_ID_GET, 1);
	((struct ynl_sock*)ys)->req_policy = &dpll_nest;
	yrs.yarg.rsp_policy = &dpll_nest;

	if (req.module_name.size() > 0)
		ynl_attr_put_str(nlh, DPLL_A_MODULE_NAME, req.module_name.data());
	if (req.clock_id.has_value())
		ynl_attr_put_u64(nlh, DPLL_A_CLOCK_ID, req.clock_id.value());
	if (req.type.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_TYPE, req.type.value());

	rsp.reset(new dpll_device_id_get_rsp());
	yrs.yarg.data = rsp.get();
	yrs.cb = dpll_device_id_get_rsp_parse;
	yrs.rsp_cmd = DPLL_CMD_DEVICE_ID_GET;

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return nullptr;

	return rsp;
}

/* ============== DPLL_CMD_DEVICE_GET ============== */
/* DPLL_CMD_DEVICE_GET - do */
int dpll_device_get_rsp_parse(const struct nlmsghdr *nlh,
			      struct ynl_parse_arg *yarg)
{
	unsigned int n_mode_supported = 0;
	const struct nlattr *attr;
	dpll_device_get_rsp *dst;
	int i;

	dst = (dpll_device_get_rsp*)yarg->data;

	if (dst->mode_supported.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (dpll.mode-supported)");

	ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
		unsigned int type = ynl_attr_type(attr);

		if (type == DPLL_A_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->id = (__u32)ynl_attr_get_u32(attr);
		} else if (type == DPLL_A_MODULE_NAME) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->module_name.assign(ynl_attr_get_str(attr), ynl_attr_data_len(attr));
		} else if (type == DPLL_A_MODE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->mode = (dpll_mode)ynl_attr_get_u32(attr);
		} else if (type == DPLL_A_MODE_SUPPORTED) {
			n_mode_supported++;
		} else if (type == DPLL_A_LOCK_STATUS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->lock_status = (dpll_lock_status)ynl_attr_get_u32(attr);
		} else if (type == DPLL_A_LOCK_STATUS_ERROR) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->lock_status_error = (dpll_lock_status_error)ynl_attr_get_u32(attr);
		} else if (type == DPLL_A_TEMP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->temp = (__s32)ynl_attr_get_s32(attr);
		} else if (type == DPLL_A_CLOCK_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->clock_id = (__u64)ynl_attr_get_u64(attr);
		} else if (type == DPLL_A_TYPE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->type = (dpll_type)ynl_attr_get_u32(attr);
		}
	}

	if (n_mode_supported) {
		dst->mode_supported.resize(n_mode_supported);
		i = 0;
		ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
			if (ynl_attr_type(attr) == DPLL_A_MODE_SUPPORTED) {
				dst->mode_supported[i] = ynl_attr_get_u32(attr);
				i++;
			}
		}
	}

	return YNL_PARSE_CB_OK;
}

std::unique_ptr<dpll_device_get_rsp>
dpll_device_get(ynl_cpp::ynl_socket&  ys, dpll_device_get_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	std::unique_ptr<dpll_device_get_rsp> rsp;
	struct nlmsghdr *nlh;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, DPLL_CMD_DEVICE_GET, 1);
	((struct ynl_sock*)ys)->req_policy = &dpll_nest;
	yrs.yarg.rsp_policy = &dpll_nest;

	if (req.id.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_ID, req.id.value());

	rsp.reset(new dpll_device_get_rsp());
	yrs.yarg.data = rsp.get();
	yrs.cb = dpll_device_get_rsp_parse;
	yrs.rsp_cmd = DPLL_CMD_DEVICE_GET;

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return nullptr;

	return rsp;
}

/* DPLL_CMD_DEVICE_GET - dump */
std::unique_ptr<dpll_device_get_list>
dpll_device_get_dump(ynl_cpp::ynl_socket&  ys)
{
	struct ynl_dump_no_alloc_state yds = {};
	struct nlmsghdr *nlh;
	int err;

	auto ret = std::make_unique<dpll_device_get_list>();
	yds.yarg.ys = ys;
	yds.yarg.rsp_policy = &dpll_nest;
	yds.yarg.data = ret.get();
	yds.alloc_cb = [](void* arg)->void*{return &(static_cast<dpll_device_get_list*>(arg)->objs.emplace_back());};
	yds.cb = dpll_device_get_rsp_parse;
	yds.rsp_cmd = DPLL_CMD_DEVICE_GET;

	nlh = ynl_gemsg_start_dump(ys, ((struct ynl_sock*)ys)->family_id, DPLL_CMD_DEVICE_GET, 1);

	err = ynl_exec_dump_no_alloc(ys, nlh, &yds);
	if (err < 0)
		return nullptr;

	return ret;
}

/* DPLL_CMD_DEVICE_GET - notify */
/* ============== DPLL_CMD_DEVICE_SET ============== */
/* DPLL_CMD_DEVICE_SET - do */
int dpll_device_set(ynl_cpp::ynl_socket&  ys, dpll_device_set_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	struct nlmsghdr *nlh;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, DPLL_CMD_DEVICE_SET, 1);
	((struct ynl_sock*)ys)->req_policy = &dpll_nest;

	if (req.id.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_ID, req.id.value());

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return -1;

	return 0;
}

/* ============== DPLL_CMD_PIN_ID_GET ============== */
/* DPLL_CMD_PIN_ID_GET - do */
int dpll_pin_id_get_rsp_parse(const struct nlmsghdr *nlh,
			      struct ynl_parse_arg *yarg)
{
	const struct nlattr *attr;
	dpll_pin_id_get_rsp *dst;

	dst = (dpll_pin_id_get_rsp*)yarg->data;

	ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
		unsigned int type = ynl_attr_type(attr);

		if (type == DPLL_A_PIN_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->id = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return YNL_PARSE_CB_OK;
}

std::unique_ptr<dpll_pin_id_get_rsp>
dpll_pin_id_get(ynl_cpp::ynl_socket&  ys, dpll_pin_id_get_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	std::unique_ptr<dpll_pin_id_get_rsp> rsp;
	struct nlmsghdr *nlh;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, DPLL_CMD_PIN_ID_GET, 1);
	((struct ynl_sock*)ys)->req_policy = &dpll_pin_nest;
	yrs.yarg.rsp_policy = &dpll_pin_nest;

	if (req.module_name.size() > 0)
		ynl_attr_put_str(nlh, DPLL_A_PIN_MODULE_NAME, req.module_name.data());
	if (req.clock_id.has_value())
		ynl_attr_put_u64(nlh, DPLL_A_PIN_CLOCK_ID, req.clock_id.value());
	if (req.board_label.size() > 0)
		ynl_attr_put_str(nlh, DPLL_A_PIN_BOARD_LABEL, req.board_label.data());
	if (req.panel_label.size() > 0)
		ynl_attr_put_str(nlh, DPLL_A_PIN_PANEL_LABEL, req.panel_label.data());
	if (req.package_label.size() > 0)
		ynl_attr_put_str(nlh, DPLL_A_PIN_PACKAGE_LABEL, req.package_label.data());
	if (req.type.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_PIN_TYPE, req.type.value());

	rsp.reset(new dpll_pin_id_get_rsp());
	yrs.yarg.data = rsp.get();
	yrs.cb = dpll_pin_id_get_rsp_parse;
	yrs.rsp_cmd = DPLL_CMD_PIN_ID_GET;

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return nullptr;

	return rsp;
}

/* ============== DPLL_CMD_PIN_GET ============== */
/* DPLL_CMD_PIN_GET - do */
int dpll_pin_get_rsp_parse(const struct nlmsghdr *nlh,
			   struct ynl_parse_arg *yarg)
{
	unsigned int n_esync_frequency_supported = 0;
	unsigned int n_frequency_supported = 0;
	unsigned int n_parent_device = 0;
	unsigned int n_parent_pin = 0;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	dpll_pin_get_rsp *dst;
	int i;

	dst = (dpll_pin_get_rsp*)yarg->data;
	parg.ys = yarg->ys;

	if (dst->esync_frequency_supported.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (pin.esync-frequency-supported)");
	if (dst->frequency_supported.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (pin.frequency-supported)");
	if (dst->parent_device.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (pin.parent-device)");
	if (dst->parent_pin.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (pin.parent-pin)");

	ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
		unsigned int type = ynl_attr_type(attr);

		if (type == DPLL_A_PIN_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->id = (__u32)ynl_attr_get_u32(attr);
		} else if (type == DPLL_A_PIN_BOARD_LABEL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->board_label.assign(ynl_attr_get_str(attr), ynl_attr_data_len(attr));
		} else if (type == DPLL_A_PIN_PANEL_LABEL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->panel_label.assign(ynl_attr_get_str(attr), ynl_attr_data_len(attr));
		} else if (type == DPLL_A_PIN_PACKAGE_LABEL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->package_label.assign(ynl_attr_get_str(attr), ynl_attr_data_len(attr));
		} else if (type == DPLL_A_PIN_TYPE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->type = (dpll_pin_type)ynl_attr_get_u32(attr);
		} else if (type == DPLL_A_PIN_FREQUENCY) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->frequency = (__u64)ynl_attr_get_u64(attr);
		} else if (type == DPLL_A_PIN_FREQUENCY_SUPPORTED) {
			n_frequency_supported++;
		} else if (type == DPLL_A_PIN_CAPABILITIES) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->capabilities = (__u32)ynl_attr_get_u32(attr);
		} else if (type == DPLL_A_PIN_PARENT_DEVICE) {
			n_parent_device++;
		} else if (type == DPLL_A_PIN_PARENT_PIN) {
			n_parent_pin++;
		} else if (type == DPLL_A_PIN_PHASE_ADJUST_MIN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->phase_adjust_min = (__s32)ynl_attr_get_s32(attr);
		} else if (type == DPLL_A_PIN_PHASE_ADJUST_MAX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->phase_adjust_max = (__s32)ynl_attr_get_s32(attr);
		} else if (type == DPLL_A_PIN_PHASE_ADJUST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->phase_adjust = (__s32)ynl_attr_get_s32(attr);
		} else if (type == DPLL_A_PIN_FRACTIONAL_FREQUENCY_OFFSET) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->fractional_frequency_offset = (__s64)ynl_attr_get_sint(attr);
		} else if (type == DPLL_A_PIN_ESYNC_FREQUENCY) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->esync_frequency = (__u64)ynl_attr_get_u64(attr);
		} else if (type == DPLL_A_PIN_ESYNC_FREQUENCY_SUPPORTED) {
			n_esync_frequency_supported++;
		} else if (type == DPLL_A_PIN_ESYNC_PULSE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->esync_pulse = (__u32)ynl_attr_get_u32(attr);
		}
	}

	if (n_esync_frequency_supported) {
		dst->esync_frequency_supported.resize(n_esync_frequency_supported);
		i = 0;
		parg.rsp_policy = &dpll_frequency_range_nest;
		ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
			if (ynl_attr_type(attr) == DPLL_A_PIN_ESYNC_FREQUENCY_SUPPORTED) {
				parg.data = &dst->esync_frequency_supported[i];
				if (dpll_frequency_range_parse(&parg, attr))
					return YNL_PARSE_CB_ERROR;
				i++;
			}
		}
	}
	if (n_frequency_supported) {
		dst->frequency_supported.resize(n_frequency_supported);
		i = 0;
		parg.rsp_policy = &dpll_frequency_range_nest;
		ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
			if (ynl_attr_type(attr) == DPLL_A_PIN_FREQUENCY_SUPPORTED) {
				parg.data = &dst->frequency_supported[i];
				if (dpll_frequency_range_parse(&parg, attr))
					return YNL_PARSE_CB_ERROR;
				i++;
			}
		}
	}
	if (n_parent_device) {
		dst->parent_device.resize(n_parent_device);
		i = 0;
		parg.rsp_policy = &dpll_pin_parent_device_nest;
		ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
			if (ynl_attr_type(attr) == DPLL_A_PIN_PARENT_DEVICE) {
				parg.data = &dst->parent_device[i];
				if (dpll_pin_parent_device_parse(&parg, attr))
					return YNL_PARSE_CB_ERROR;
				i++;
			}
		}
	}
	if (n_parent_pin) {
		dst->parent_pin.resize(n_parent_pin);
		i = 0;
		parg.rsp_policy = &dpll_pin_parent_pin_nest;
		ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
			if (ynl_attr_type(attr) == DPLL_A_PIN_PARENT_PIN) {
				parg.data = &dst->parent_pin[i];
				if (dpll_pin_parent_pin_parse(&parg, attr))
					return YNL_PARSE_CB_ERROR;
				i++;
			}
		}
	}

	return YNL_PARSE_CB_OK;
}

std::unique_ptr<dpll_pin_get_rsp>
dpll_pin_get(ynl_cpp::ynl_socket&  ys, dpll_pin_get_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	std::unique_ptr<dpll_pin_get_rsp> rsp;
	struct nlmsghdr *nlh;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, DPLL_CMD_PIN_GET, 1);
	((struct ynl_sock*)ys)->req_policy = &dpll_pin_nest;
	yrs.yarg.rsp_policy = &dpll_pin_nest;

	if (req.id.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_PIN_ID, req.id.value());

	rsp.reset(new dpll_pin_get_rsp());
	yrs.yarg.data = rsp.get();
	yrs.cb = dpll_pin_get_rsp_parse;
	yrs.rsp_cmd = DPLL_CMD_PIN_GET;

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return nullptr;

	return rsp;
}

/* DPLL_CMD_PIN_GET - dump */
std::unique_ptr<dpll_pin_get_list>
dpll_pin_get_dump(ynl_cpp::ynl_socket&  ys, dpll_pin_get_req_dump& req)
{
	struct ynl_dump_no_alloc_state yds = {};
	struct nlmsghdr *nlh;
	int err;

	auto ret = std::make_unique<dpll_pin_get_list>();
	yds.yarg.ys = ys;
	yds.yarg.rsp_policy = &dpll_pin_nest;
	yds.yarg.data = ret.get();
	yds.alloc_cb = [](void* arg)->void*{return &(static_cast<dpll_pin_get_list*>(arg)->objs.emplace_back());};
	yds.cb = dpll_pin_get_rsp_parse;
	yds.rsp_cmd = DPLL_CMD_PIN_GET;

	nlh = ynl_gemsg_start_dump(ys, ((struct ynl_sock*)ys)->family_id, DPLL_CMD_PIN_GET, 1);
	((struct ynl_sock*)ys)->req_policy = &dpll_pin_nest;

	if (req.id.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_PIN_ID, req.id.value());

	err = ynl_exec_dump_no_alloc(ys, nlh, &yds);
	if (err < 0)
		return nullptr;

	return ret;
}

/* DPLL_CMD_PIN_GET - notify */
/* ============== DPLL_CMD_PIN_SET ============== */
/* DPLL_CMD_PIN_SET - do */
int dpll_pin_set(ynl_cpp::ynl_socket&  ys, dpll_pin_set_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	struct nlmsghdr *nlh;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, DPLL_CMD_PIN_SET, 1);
	((struct ynl_sock*)ys)->req_policy = &dpll_pin_nest;

	if (req.id.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_PIN_ID, req.id.value());
	if (req.frequency.has_value())
		ynl_attr_put_u64(nlh, DPLL_A_PIN_FREQUENCY, req.frequency.value());
	if (req.direction.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_PIN_DIRECTION, req.direction.value());
	if (req.prio.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_PIN_PRIO, req.prio.value());
	if (req.state.has_value())
		ynl_attr_put_u32(nlh, DPLL_A_PIN_STATE, req.state.value());
	for (unsigned int i = 0; i < req.parent_device.size(); i++)
		dpll_pin_parent_device_put(nlh, DPLL_A_PIN_PARENT_DEVICE, req.parent_device[i]);
	for (unsigned int i = 0; i < req.parent_pin.size(); i++)
		dpll_pin_parent_pin_put(nlh, DPLL_A_PIN_PARENT_PIN, req.parent_pin[i]);
	if (req.phase_adjust.has_value())
		ynl_attr_put_s32(nlh, DPLL_A_PIN_PHASE_ADJUST, req.phase_adjust.value());
	if (req.esync_frequency.has_value())
		ynl_attr_put_u64(nlh, DPLL_A_PIN_ESYNC_FREQUENCY, req.esync_frequency.value());

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return -1;

	return 0;
}

static constexpr std::array<ynl_ntf_info, DPLL_CMD_PIN_CHANGE_NTF + 1> dpll_ntf_info = []() {
	std::array<ynl_ntf_info, DPLL_CMD_PIN_CHANGE_NTF + 1> arr{};
	arr[DPLL_CMD_DEVICE_CREATE_NTF] =  {
		.cb		= dpll_device_get_rsp_parse,
		.policy		= &dpll_nest,
	};
	arr[DPLL_CMD_DEVICE_DELETE_NTF] =  {
		.cb		= dpll_device_get_rsp_parse,
		.policy		= &dpll_nest,
	};
	arr[DPLL_CMD_DEVICE_CHANGE_NTF] =  {
		.cb		= dpll_device_get_rsp_parse,
		.policy		= &dpll_nest,
	};
	arr[DPLL_CMD_PIN_CREATE_NTF] =  {
		.cb		= dpll_pin_get_rsp_parse,
		.policy		= &dpll_pin_nest,
	};
	arr[DPLL_CMD_PIN_DELETE_NTF] =  {
		.cb		= dpll_pin_get_rsp_parse,
		.policy		= &dpll_pin_nest,
	};
	arr[DPLL_CMD_PIN_CHANGE_NTF] =  {
		.cb		= dpll_pin_get_rsp_parse,
		.policy		= &dpll_pin_nest,
	};
	return arr;
} ();

const struct ynl_family ynl_dpll_family =  {
	.name		= "dpll",
	.hdr_len	= sizeof(struct genlmsghdr),
	.ntf_info	= dpll_ntf_info.data(),
	.ntf_info_size	= dpll_ntf_info.size(),
};
const struct ynl_family& get_ynl_dpll_family() {
	return ynl_dpll_family;
};
} //namespace ynl_cpp
