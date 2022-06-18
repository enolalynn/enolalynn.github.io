<template>
  <div class="home">
    <img alt="Vue logo" src="../assets/logo.png" />
    <HelloWorld msg="Welcome to Your Vue.js Ecommmerce App" />

    <div class="container" v-if="products.length > 0">
      <div class="row row-cols-sm-2 row-cols-1 row-cols-md-5">
        <div
          class="col-lg-3 col-md-4 col-sm-6 col-12"
          v-for="(product, index) in products"
          :key="index"
        >
          <div class="card my-3">
            <img
              :src="product.image"
              class="card-img-top w-25 mx-auto p-3"
              alt=""
            />
            <div class="card-body">
              <h5 class="card-title">$ {{ product.price }}</h5>
              <p class="card-text">{{ product.title }}</p>
              <div class="d-flex justify-content-between">
                <router-link
                  :to="{ name: 'shopdetail', params: { id: product.id } }"
                >
                  <button class="btn btn-primary">View</button>
                </router-link>
                <button class="btn btn-warning">Add To Cart</button>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
</template>

<script>
// @ is an alias to /src
import HelloWorld from "@/components/HelloWorld.vue";
const axios = require("axios").default;

export default {
  name: "HomeView",
  components: {
    HelloWorld,
  },
  data() {
    return {
      products: [],
    };
  },
  mounted() {
    this.getLimitProducts();
  },
  methods: {
    getLimitProducts() {
      // let id = this.$route.params.id;
      axios.get("https://fakestoreapi.com/products").then((response) => {
        // console.log(response.data)

        this.products = response.data;
      });
    },
  },
};
</script>

<style>
.home {
  text-align: center;
}
</style>
