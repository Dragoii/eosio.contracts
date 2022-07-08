echo '{
  "expiration": "2022-07-08T05:53:51.000",
  "ref_block_num": 58717,
  "ref_block_prefix": 2001706081,
  "max_net_usage_words": 0,
  "max_cpu_usage_ms": 0,
  "delay_sec": 0,
  "context_free_actions": [],
  "actions": [
    {
      "account": "eosio.token",
      "name": "transfer",
      "authorization": [
        {
          "actor": "eosio",
          "permission": "active"
        }
      ],
      "data": "0000000000EA3055A0B0390A9B331D45302D89000000000004454F530000000009393037373035343933"
    }
  ],
  "transaction_extensions": []
}' > eosc-tx.json;
eosc -u https://eos.greymass.com tx sign eosc-tx.json;
