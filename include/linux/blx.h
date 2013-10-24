#ifdef CONFIG_BLX
        // check Battery Life Extender charging limit
        if (msm_batt_blx_charging_limit_reached())
        {
                // Battery Life Extender charging limit reached !
                pr_info("[BATT] %s: Battery Life eXtender - Charging limit reached, no need to start recharging! (capacity=%d, voltage=%d)\n",
                        __func__, msm_batt_info.batt_capacity, msm_batt_info.battery_voltage);
                return 0;
        }
#endif
