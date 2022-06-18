import { createApp } from 'vue'
import App from './App.vue'
import router from './router'

import {Bootstrap,IconsPlugin} from 'bootstrap'
import 'bootstrap/dist/css/bootstrap.css'

createApp(App).use(router,Bootstrap,IconsPlugin).mount('#app')
