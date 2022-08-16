#include <PI/pi.h>
#include <PI/pi_runtime_reconfig.h>
#include <PI/target/pi_runtime_reconfig_imp.h>

pi_status_t pi_runtime_reconfig_init_p4objects_new(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt, 
                                                   const char* p4objects_new_json) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_init_p4objects_new(session_handle,
                                                   dev_tgt,
                                                   p4objects_new_json);
}

pi_status_t pi_runtime_reconfig_insert_table(pi_session_handle_t session_handle,
                                             pi_dev_tgt_t dev_tgt,
                                             const char* pipeline_name,
                                             const char* table_name) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_insert_table(session_handle,
                                             dev_tgt,
                                             pipeline_name,
                                             table_name);
}

pi_status_t pi_runtime_reconfig_change_table(pi_session_handle_t session_handle,
                                             pi_dev_tgt_t dev_tgt,
                                             const char* pipeline_name,
                                             const char* table_name,
                                             const char* edge_name,
                                             const char* table_name_next) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_change_table(session_handle,
                                             dev_tgt,
                                             pipeline_name,
                                             table_name,
                                             edge_name,
                                             table_name_next);
}

pi_status_t pi_runtime_reconfig_delete_table(pi_session_handle_t session_handle,
                                             pi_dev_tgt_t dev_tgt,
                                             const char* pipeline_name,
                                             const char* table_name) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_delete_table(session_handle,
                                             dev_tgt,
                                             pipeline_name,
                                             table_name);
}

pi_status_t pi_runtime_reconfig_insert_conditional(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt,
                                                   const char* pipeline_name,
                                                   const char* branch_name) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_insert_conditional(session_handle,
                                                   dev_tgt,
                                                   pipeline_name,
                                                   branch_name);
}

pi_status_t pi_runtime_reconfig_change_conditional(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt,
                                                   const char* pipeline_name,
                                                   const char* branch_name,
                                                   bool true_or_false_next,
                                                   const char* node_name) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_change_conditional(session_handle,
                                                   dev_tgt,
                                                   pipeline_name,
                                                   branch_name,
                                                   true_or_false_next,
                                                   node_name);
}

pi_status_t pi_runtime_reconfig_delete_conditional(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt,
                                                   const char* pipeline_name,
                                                   const char* branch_name) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_delete_conditional(session_handle,
                                                   dev_tgt,
                                                   pipeline_name,
                                                   branch_name);
}

pi_status_t pi_runtime_reconfig_insert_flex(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* node_name,
                                            const char* true_next_node,
                                            const char* false_next_node) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_insert_flex(session_handle,
                                            dev_tgt,
                                            pipeline_name,
                                            node_name,
                                            true_next_node,
                                            false_next_node);
}

pi_status_t pi_runtime_reconfig_change_flex(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* flx_name,
                                            bool true_or_false_next,
                                            const char* node_next) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_change_flex(session_handle,
                                            dev_tgt,
                                            pipeline_name,
                                            flx_name,
                                            true_or_false_next,
                                            node_next);
}

pi_status_t pi_runtime_reconfig_delete_flex(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* flx_name) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_delete_flex(session_handle,
                                            dev_tgt,
                                            pipeline_name,
                                            flx_name);
}

pi_status_t pi_runtime_reconfig_insert_register_array(pi_session_handle_t session_handle,
                                                      pi_dev_tgt_t dev_tgt,
                                                      const char* register_array_name,
                                                      const uint32_t register_array_size,
                                                      const uint32_t register_array_bitwidth) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_insert_register_array(session_handle,
                                                      dev_tgt,
                                                      register_array_name,
                                                      register_array_size,
                                                      register_array_bitwidth);
}

pi_status_t pi_runtime_reconfig_change_register_array(pi_session_handle_t session_handle,
                                                      pi_dev_tgt_t dev_tgt,
                                                      const char* register_array_name,
                                                      const uint32_t change_type,
                                                      const uint32_t new_value) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_change_register_array(session_handle,
                                                      dev_tgt,
                                                      register_array_name,
                                                      change_type,
                                                      new_value);
}

pi_status_t pi_runtime_reconfig_delete_register_array(pi_session_handle_t session_handle,
                                                      pi_dev_tgt_t dev_tgt,
                                                      const char* register_array_name) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_delete_register_array(session_handle,
                                                      dev_tgt,
                                                      register_array_name);
}

pi_status_t pi_runtime_reconfig_trigger(pi_session_handle_t session_handle,
                                        pi_dev_tgt_t dev_tgt,
                                        bool on_or_off) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_trigger(session_handle,
                                        dev_tgt,
                                        on_or_off);
}

pi_status_t pi_runtime_reconfig_change_init(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* table_name_next) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_change_init(session_handle,
                                            dev_tgt,
                                            pipeline_name,
                                            table_name_next);
}

pi_status_t pi_runtime_reconfig_read_json(pi_session_handle_t session_hanle,
                                          pi_dev_tgt_t dev_tgt,
                                          char* read_json_entry) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_read_json(session_hanle,
                                          dev_tgt,
                                          read_json_entry);

}