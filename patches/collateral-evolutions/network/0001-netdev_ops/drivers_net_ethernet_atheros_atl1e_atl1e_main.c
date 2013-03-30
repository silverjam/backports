--- a/drivers/net/ethernet/atheros/atl1e/atl1e_main.c
+++ b/drivers/net/ethernet/atheros/atl1e/atl1e_main.c
@@ -2207,7 +2207,7 @@
 	SET_NETDEV_DEV(netdev, &pdev->dev);
 	pci_set_drvdata(pdev, netdev);
 
-	netdev->netdev_ops = &atl1e_netdev_ops;
+	netdev_attach_ops(netdev, &atl1e_netdev_ops);
 
 	netdev->watchdog_timeo = AT_TX_WATCHDOG;
 	atl1e_set_ethtool_ops(netdev);